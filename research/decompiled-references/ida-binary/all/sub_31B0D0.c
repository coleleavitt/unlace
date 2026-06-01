__int64 __fastcall sub_31B0D0(__m128 a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  __m128 v8; // xmm4
  __m128 v9; // xmm5
  __int64 (__fastcall *v10)(int, __int64); // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  __int16 v31; // bx
  __int64 v32; // r8
  __int64 v33; // r9
  __m128 v34; // xmm4
  __m128 v35; // xmm5
  __m128i v36; // xmm0
  const char *v37; // rsi
  __m128 v38; // xmm2
  __m128 v39; // xmm1
  __m128 v40; // xmm0
  char v41; // [rsp+0h] [rbp-2098h]
  char v42; // [rsp+0h] [rbp-2098h]
  int v43; // [rsp+8h] [rbp-2090h]
  __int64 v44; // [rsp+8h] [rbp-2090h]
  __int16 v45; // [rsp+1Eh] [rbp-207Ah] BYREF
  __int64 v46; // [rsp+20h] [rbp-2078h] BYREF
  __int64 v47; // [rsp+28h] [rbp-2070h] BYREF
  __int64 v48; // [rsp+30h] [rbp-2068h] BYREF
  bool v49; // [rsp+38h] [rbp-2060h]
  __m128i v50; // [rsp+40h] [rbp-2058h] BYREF
  _BYTE v51[4096]; // [rsp+50h] [rbp-2048h] BYREF
  _BYTE v52[4104]; // [rsp+1050h] [rbp-1048h] BYREF
  unsigned __int64 v53; // [rsp+2058h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_1F09E0(0, &v46, &v47) )
  {
    v46 = 0;
    v47 = getinf(20);
  }
  v45 = 0;
  getinf_buf(97, v51, 4096);
  qstrncpy(v52, v51, 4096);
  qstrncat(v52, ".bak", 4096);
  do
  {
    while ( 1 )
    {
      v10 = sub_318240;
      if ( !(unsigned int)sub_1697D0(
                            (int)"@0:1618[]\n"
                                 "Apply patches to input file\n"
                                 "%/\n"
                                 "<#~S~tart EA   :$1:0:40::>\n"
                                 "<#~E~nd EA     :$2:0:40::>\n"
                                 "<#~I~nput file :f3:0:50::>\n"
                                 "<#Back~u~p file:f4:1:50::>\n"
                                 "<#Create ba~c~kup:C5>\n"
                                 "<#Patch using the original bytes#~R~estore original bytes:C6>>\n",
                            (__int64)sub_318240,
                            (__int64)&v46,
                            (__int64)&v47,
                            (__int64)v51,
                            (__int64)v52,
                            a1,
                            a2,
                            a3,
                            a4,
                            v8,
                            v9,
                            a7,
                            a8,
                            (char)&v45) )
        return 1;
      if ( (v45 & 1) != 0 )
        break;
LABEL_9:
      v23 = fopenM(v51);
      if ( v23 )
      {
        v48 = v23;
        v44 = v23;
        v31 = v45 & 2;
        v50 = 0;
        v49 = (v45 & 2) != 0;
        visit_patched_bytes(v46, v47, sub_319780, &v48);
        qfclose(v44);
        v36 = _mm_load_si128(&v50);
        v37 = "Applied";
        v38 = _mm_movehl_ps(a3, (__m128)v36);
        if ( v31 )
          v37 = "Reverted";
        v39 = (__m128)_mm_srli_si128(v36, 8);
        v40 = (__m128)_mm_add_epi64(v36, (__m128i)v39);
        sub_169700(
          (int)"%s %zu/%zu patch(es)\n",
          (__int64)v37,
          v38.m128_i64[0],
          v40.m128_i64[0],
          v32,
          v33,
          v40,
          v39,
          v38,
          a4,
          v34,
          v35,
          a7,
          a8,
          v41);
        return 1;
      }
      v24 = qerrstr(0xFFFFFFFFLL);
      sub_169630((int)"AUTOHIDE NONE\n%s: %s", (__int64)v51, v24, v25, v26, v27, a1, a2, a3, a4, v28, v29, a7, a8, v41);
    }
    if ( !(unsigned __int8)qfileexist(v52) )
      break;
    v10 = (__int64 (__fastcall *)(int, __int64))"HIDECANCEL\n"
                                                "Backup file '%s' already exists. Do you want to overwrite it?";
  }
  while ( (unsigned int)sub_1698A0(
                          0,
                          (int)"HIDECANCEL\nBackup file '%s' already exists. Do you want to overwrite it?",
                          v52) != 1 );
  sub_1C76F0((int)"Creating backup...");
  sub_169700((int)"Creating backup...", (__int64)v10, v11, v12, v13, v14, a1, a2, a3, a4, v15, v16, a7, a8, v41);
  v43 = qcopyfile(v51, v52, 1, 0, 0, 0);
  sub_1C78D0();
  if ( !v43 )
  {
    sub_169700((int)"done!\n", (__int64)v52, v17, v18, v19, v20, a1, a2, a3, a4, v21, v22, a7, a8, v42);
    goto LABEL_9;
  }
  sub_169700((int)"failed.\n", (__int64)v52, v17, v18, v19, v20, a1, a2, a3, a4, v21, v22, a7, a8, v42);
  return 0;
}
