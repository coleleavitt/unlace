__int64 __fastcall sub_11A610(__m128 a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __m128 v12; // xmm4
  __m128 v13; // xmm5
  __int64 (__fastcall *v14)(int, __int64); // rsi
  __int64 v15; // rax
  const char *v16; // rax
  __int16 v18; // bx
  __m128i v19; // xmm0
  const char *v20; // rsi
  unsigned __int64 v21; // xmm2_8
  char v22; // [rsp+0h] [rbp-2098h]
  int v23; // [rsp+8h] [rbp-2090h]
  __int16 v24; // [rsp+1Eh] [rbp-207Ah] BYREF
  __int64 v25; // [rsp+20h] [rbp-2078h] BYREF
  _QWORD v26[2]; // [rsp+28h] [rbp-2070h] BYREF
  bool v27; // [rsp+38h] [rbp-2060h]
  __m128i v28; // [rsp+40h] [rbp-2058h] BYREF
  char v29[4096]; // [rsp+50h] [rbp-2048h] BYREF
  char v30[4104]; // [rsp+1050h] [rbp-1048h] BYREF
  unsigned __int64 v31; // [rsp+2058h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_161C80(0, &v25, v26) )
  {
    v25 = 0;
    v26[0] = getinf();
  }
  v24 = 0;
  getinf_buf();
  qstrncpy();
  qstrncat();
  do
  {
    while ( 1 )
    {
      v14 = sub_117610;
      if ( !(unsigned int)sub_8F810(
                            (__int64)"@0:1618[]\n"
                                     "Apply patches to input file\n"
                                     "%/\n"
                                     "<#~S~tart EA   :$1:0:40::>\n"
                                     "<#~E~nd EA     :$2:0:40::>\n"
                                     "<#~I~nput file :f3:0:50::>\n"
                                     "<#Back~u~p file:f4:1:50::>\n"
                                     "<#Create ba~c~kup:C5>\n"
                                     "<#Patch using the original bytes#~R~estore original bytes:C6>>\n",
                            sub_117610,
                            &v25,
                            v26,
                            v29,
                            v30,
                            &v24) )
        return 1;
      if ( (v24 & 1) != 0 )
        break;
LABEL_9:
      v15 = fopenM();
      if ( v15 )
      {
        v26[1] = v15;
        v18 = v24 & 2;
        v28 = 0;
        v27 = (v24 & 2) != 0;
        visit_patched_bytes();
        qfclose();
        v19 = _mm_load_si128(&v28);
        v20 = "Applied";
        v21 = _mm_movehl_ps(a3, (__m128)v19).m128_u64[0];
        if ( v18 )
          v20 = "Reverted";
        sub_8F740((__int64)"%s %zu/%zu patch(es)\n", v20, v21, _mm_add_epi64(v19, _mm_srli_si128(v19, 8)).m128i_u64[0]);
        return 1;
      }
      v16 = (const char *)qerrstr();
      sub_92200((__int64)"AUTOHIDE NONE\n%s: %s", v29, v16);
    }
    if ( !(unsigned __int8)qfileexist() )
      break;
    v14 = (__int64 (__fastcall *)(int, __int64))"HIDECANCEL\n"
                                                "Backup file '%s' already exists. Do you want to overwrite it?";
  }
  while ( (unsigned int)sub_92580(
                          0,
                          (__int64)"HIDECANCEL\nBackup file '%s' already exists. Do you want to overwrite it?",
                          v30) != 1 );
  sub_10E0D0((__int64)"Creating backup...", (__int64)v14, v8, v9, v10, v11, a1, a2, a3, a4, v12, v13, a7, a8, v22);
  sub_8F740((__int64)"Creating backup...");
  v23 = qcopyfile();
  sub_10DB30();
  if ( !v23 )
  {
    sub_8F740((__int64)"done!\n", v30);
    goto LABEL_9;
  }
  sub_8F740((__int64)"failed.\n", v30);
  return 0;
}

