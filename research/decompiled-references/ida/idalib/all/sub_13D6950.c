__int64 __fastcall sub_13D6950(__int64 a1, unsigned __int8 **a2, __int64 a3, __int64 a4)
{
  char v6; // r12
  unsigned __int8 *v7; // rsi
  unsigned __int8 v8; // dl
  __int64 v9; // rax
  unsigned __int8 *v10; // rbx
  unsigned __int8 v11; // al
  unsigned __int64 v12; // rdx
  __int64 result; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int8 *v16; // r14
  __int64 v17; // r15
  unsigned __int8 *v18; // rax
  unsigned __int8 v19; // r13
  unsigned __int64 v20; // rax
  unsigned __int8 *v21; // r9
  __int64 v22; // rax
  unsigned __int8 **v23; // r13
  int v24; // r15d
  __int64 v25; // r14
  int v26; // ecx
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int8 *v29; // r9
  char v30; // bl
  unsigned __int8 *v31; // rdx
  __int64 v32; // rax
  unsigned __int8 *v33; // r12
  char v34; // al
  int v35; // edx
  char v36; // dl
  unsigned __int8 *v37; // r9
  char v38; // al
  __int64 v39; // rax
  __int64 v40; // r15
  _BYTE *v41; // r12
  int v42; // eax
  __int64 v44; // [rsp+0h] [rbp-218h]
  __int64 v45; // [rsp+0h] [rbp-218h]
  unsigned __int8 *v46; // [rsp+10h] [rbp-208h]
  unsigned int v47; // [rsp+10h] [rbp-208h]
  unsigned __int8 **v48; // [rsp+18h] [rbp-200h]
  __int64 v49; // [rsp+18h] [rbp-200h]
  unsigned __int8 *v50; // [rsp+18h] [rbp-200h]
  __int64 v51; // [rsp+18h] [rbp-200h]
  unsigned __int8 *v52; // [rsp+18h] [rbp-200h]
  unsigned __int8 *v53; // [rsp+18h] [rbp-200h]
  unsigned __int8 *v54; // [rsp+18h] [rbp-200h]
  unsigned __int8 *v55; // [rsp+18h] [rbp-200h]
  __int64 v56; // [rsp+20h] [rbp-1F8h]
  void *v57; // [rsp+28h] [rbp-1F0h]
  _BYTE *v58; // [rsp+28h] [rbp-1F0h]
  unsigned __int8 *v59; // [rsp+30h] [rbp-1E8h]
  unsigned __int8 *v60; // [rsp+30h] [rbp-1E8h]
  void *v61[2]; // [rsp+60h] [rbp-1B8h] BYREF
  _BYTE v62[16]; // [rsp+70h] [rbp-1A8h] BYREF
  void *ptr; // [rsp+80h] [rbp-198h] BYREF
  __m128i si128; // [rsp+88h] [rbp-190h]
  _BYTE v65[40]; // [rsp+98h] [rbp-180h] BYREF
  unsigned __int64 v66; // [rsp+C0h] [rbp-158h] BYREF
  int v67; // [rsp+C8h] [rbp-150h]
  __int64 v68; // [rsp+CCh] [rbp-14Ch]
  char v69; // [rsp+D4h] [rbp-144h]
  void *v70[2]; // [rsp+D8h] [rbp-140h] BYREF
  _DWORD v71[34]; // [rsp+E8h] [rbp-130h] BYREF
  unsigned __int8 *v72; // [rsp+170h] [rbp-A8h] BYREF
  void *v73[3]; // [rsp+178h] [rbp-A0h] BYREF
  __int64 v74; // [rsp+190h] [rbp-88h] BYREF
  char v75; // [rsp+1D0h] [rbp-48h]

  v6 = 0;
  if ( a4 )
    v6 = *(_BYTE *)(a1 + 26) ^ 1;
  v7 = *a2;
  v8 = **a2;
  if ( v8 == 92 || (v9 = 1, v8 == 63) )
  {
    v27 = sub_13D1690(a1, v7, 0);
    v7 = *a2;
    v9 = HIDWORD(v27);
  }
  v10 = &v7[v9];
  v11 = v7[v9];
  if ( v11 == 92 || (LODWORD(v12) = 1, v11 == 63) )
  {
    v14 = sub_13D1690(a1, v10, 0);
    v12 = HIDWORD(v14);
    if ( (_BYTE)v14 != 123 )
      goto LABEL_8;
  }
  else if ( v11 != 123 )
  {
LABEL_8:
    if ( v6 )
    {
      sub_13D1530((__int64)&v72, a1, a3, 1416);
      sub_AEA040((__int64)&v72);
    }
    return 0;
  }
  v48 = a2;
  ptr = v65;
  v15 = a4;
  v16 = &v10[(unsigned int)v12];
  v56 = (__int64)v16;
  v17 = v15;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA540);
  while ( 1 )
  {
    v19 = *v16;
    if ( *v16 == 63 || v19 == 92 )
      break;
    v18 = v16 + 1;
    if ( v19 == 125 )
      goto LABEL_22;
LABEL_16:
    if ( (byte_2411740[2 * v19] & 2) != 0 )
      goto LABEL_29;
    if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
    {
      v46 = v18;
      sub_2236E10(&ptr, v65, si128.m128i_i64[0] + 1, 1);
      v18 = v46;
      *((_BYTE *)ptr + si128.m128i_i64[0]++) = v19;
      if ( !v19 )
      {
LABEL_29:
        if ( v6 )
        {
          v26 = 1352;
LABEL_31:
          sub_13D1530((__int64)&v72, a1, a3, v26);
          sub_AEC220(&v72, v10 - 1, 1);
          sub_AEA040((__int64)&v72);
        }
LABEL_24:
        result = 0;
        goto LABEL_25;
      }
    }
    else
    {
      *((_BYTE *)ptr + si128.m128i_i64[0]++) = v19;
      if ( !v19 )
        goto LABEL_29;
    }
    v16 = v18;
  }
  v20 = sub_13D1690(a1, v16, 0);
  v19 = v20;
  v18 = &v16[HIDWORD(v20)];
  if ( v19 != 125 )
    goto LABEL_16;
LABEL_22:
  v21 = v18;
  v22 = v17;
  v23 = v48;
  v24 = (int)v16;
  v25 = v22;
  if ( !si128.m128i_i64[0] )
  {
    v26 = 1351;
    if ( v6 )
      goto LABEL_31;
    goto LABEL_24;
  }
  v59 = v21;
  v49 = si128.m128i_i64[0];
  v57 = ptr;
  v28 = sub_2255D80(ptr, si128.m128i_i64[0]);
  v29 = v59;
  v47 = v28;
  memset(&v71[6], 0, 0x68u);
  v30 = BYTE4(v28);
  if ( BYTE4(v28) )
  {
    if ( !v6 )
      goto LABEL_34;
    v39 = *(_QWORD *)(a1 + 8);
    v40 = *(_QWORD *)(v39 + 48);
    v41 = *(_BYTE **)(v39 + 56);
    v42 = sub_13D1500(a1, a3, 1);
    sub_13D2A10(v42, 1u, v41, v40);
    v38 = v71[30];
    v29 = v59;
LABEL_60:
    if ( v38 )
    {
      v47 = v71[6];
      v30 = v38;
    }
    goto LABEL_34;
  }
  sub_2255DD0(&v72, v57, v49);
  v29 = v59;
  if ( !LOBYTE(v71[30]) )
  {
    if ( !v75 )
      goto LABEL_49;
    v71[6] = (_DWORD)v72;
    *(__m128i *)&v71[10] = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
    *(_QWORD *)&v71[8] = &v71[14];
    if ( !v73[1] )
    {
      LOBYTE(v71[30]) = 1;
LABEL_67:
      if ( v73[0] != &v74 )
      {
        v55 = v29;
        free(v73[0]);
        v29 = v55;
      }
      goto LABEL_49;
    }
    sub_9C3C90((char **)&v71[8], (char **)v73);
    v34 = v75;
    v29 = v59;
    LOBYTE(v71[30]) = 1;
LABEL_48:
    if ( !v34 )
      goto LABEL_49;
    goto LABEL_67;
  }
  if ( v75 )
  {
    v71[6] = (_DWORD)v72;
    sub_9C3C90((char **)&v71[8], (char **)v73);
    v34 = v75;
    v29 = v59;
    goto LABEL_48;
  }
  LOBYTE(v71[30]) = 0;
  if ( *(_DWORD **)&v71[8] != &v71[14] )
  {
    free(*(void **)&v71[8]);
    v34 = v75;
    v29 = v59;
    goto LABEL_48;
  }
LABEL_49:
  if ( v6 )
  {
    v50 = v29;
    sub_13D1530((__int64)&v72, a1, v56, 1052);
    sub_AEC220(&v72, ptr, si128.m128i_i64[0]);
    v66 = sub_13D08D0(a1, v56, v24);
    v67 = v35;
    sub_AEC610((__int64 *)&v72, (__int64 *)&v66);
    sub_AEA040((__int64)&v72);
    v29 = v50;
    if ( LOBYTE(v71[30]) )
    {
      v60 = v50;
      sub_13D1530((__int64)&v72, a1, v56, 1265);
      v51 = *(_QWORD *)&v71[10];
      v58 = *(_BYTE **)&v71[8];
      v66 = sub_13D08D0(a1, v56, v24);
      v70[0] = v71;
      LOBYTE(v67) = v36;
      v68 = 0;
      v69 = 0;
      v70[1] = nullptr;
      LOBYTE(v71[0]) = 0;
      LOBYTE(v71[4]) = 0;
      v61[0] = v62;
      sub_13D0630(v61, v58, (__int64)&v58[v51]);
      sub_A0AAD0((__int64)v70, v61);
      v37 = v60;
      if ( v61[0] != v62 )
      {
        operator delete(v61[0]);
        v37 = v60;
      }
      if ( (_DWORD)v66 && HIDWORD(v66) )
      {
        v52 = v37;
        sub_13D5200((__int64 *)&v72, (unsigned __int64)&v66);
        v37 = v52;
      }
      if ( v70[0] != v71 )
      {
        v53 = v37;
        operator delete(v70[0]);
        v37 = v53;
      }
      v54 = v37;
      sub_AEA040((__int64)&v72);
      v38 = v71[30];
      v29 = v54;
      goto LABEL_60;
    }
  }
  v30 = 0;
LABEL_34:
  if ( !v25 || (v31 = *v23, v32 = si128.m128i_i64[0], *(_WORD *)(v25 + 18) |= 0x40u, v29 - v31 == v32 + 3) )
  {
    *v23 = v29;
  }
  else if ( v31 != v29 )
  {
    v33 = v29;
    do
      sub_13D18B0(a1, v23, v25);
    while ( *v23 != v33 );
  }
  result = v47 | 0x100000000LL;
  if ( !v30 )
    result = 0;
  if ( LOBYTE(v71[30]) && *(_DWORD **)&v71[8] != &v71[14] )
  {
    v45 = result;
    free(*(void **)&v71[8]);
    result = v45;
  }
LABEL_25:
  if ( ptr != v65 )
  {
    v44 = result;
    free(ptr);
    return v44;
  }
  return result;
}
