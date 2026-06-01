__int64 __fastcall sub_12D8AA0(
        __int64 *a1,
        const char *a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v8; // r15
  __int64 v10; // r8
  int v14; // ebx
  char v15; // r10
  __int64 v16; // rax
  unsigned int v17; // r11d
  unsigned int v18; // edx
  __int64 v19; // rax
  char v21; // dl
  int v22; // eax
  __int64 (__fastcall *v23)(__int64, __int64, __int64); // rcx
  __int64 (__fastcall *v24)(__int64 *, unsigned __int64, _QWORD, const char *, __int64); // rax
  unsigned __int64 v25; // r11
  __int64 v26; // rax
  const char *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  char v30; // bl
  __int64 v31; // rdi
  unsigned __int8 v32; // r15
  char v33; // al
  char v34; // al
  __int64 *v35; // rdi
  __int64 v36; // rcx
  _DWORD *v37; // rax
  _DWORD *v38; // rdx
  unsigned int v39; // r11d
  unsigned int v40; // ebp
  char v41; // r12
  char v42; // al
  char v43; // al
  char v44; // al
  char v45; // al
  __int64 *v46; // [rsp+8h] [rbp-70h]
  unsigned int v47; // [rsp+8h] [rbp-70h]
  _QWORD *v48; // [rsp+8h] [rbp-70h]
  unsigned int v49; // [rsp+8h] [rbp-70h]
  __int64 *v50; // [rsp+10h] [rbp-68h]
  char v51; // [rsp+10h] [rbp-68h]
  __int64 *v53; // [rsp+20h] [rbp-58h]
  unsigned __int64 v54; // [rsp+34h] [rbp-44h] BYREF
  unsigned int v55; // [rsp+3Ch] [rbp-3Ch]

  v8 = HIDWORD(a4);
  v10 = a3;
  v14 = a4;
  v15 = a8;
  LOBYTE(v54) = 0;
  if ( (unsigned int)(a4 + 1) <= 1 )
  {
LABEL_12:
    v17 = v8;
    if ( a3 )
      goto LABEL_7;
    goto LABEL_13;
  }
  if ( (a4 & 0x80000000) != 0LL )
  {
    v25 = (unsigned int)(-2 - a4);
    v26 = *(_QWORD *)(a6[40] + 8LL * ((unsigned int)(-2 - a4) >> 6));
    if ( _bittest64(&v26, v25) )
    {
      v48 = (_QWORD *)(a6[34] + 8 * ((unsigned __int64)(int)v25 >> 5));
      if ( *v48 )
      {
        v16 = *v48 + 24LL * ((-2 - (_BYTE)a4) & 0x1F);
        goto LABEL_4;
      }
      v35 = (__int64 *)(a6[36] & 0xFFFFFFFFFFFFFFF8LL);
      v36 = *v35;
      v35[10] += 768;
      v37 = (_DWORD *)((v36 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v35[1] >= (unsigned __int64)(v37 + 192) && v36 )
      {
        *v35 = (__int64)(v37 + 192);
      }
      else
      {
        v53 = a6;
        v51 = v25;
        v37 = (_DWORD *)sub_986170((__int64)v35, 768, 768, 3, a3, (__int64)a6);
        v15 = a8;
        a6 = v53;
        v10 = a3;
        LOBYTE(v25) = v51;
      }
      v38 = v37 + 192;
      *v48 = v37;
      do
      {
        *v37 = 0;
        v37 += 6;
        *((_OWORD *)v37 - 1) = 0;
        *((_QWORD *)v37 - 1) = 0;
      }
      while ( v37 != v38 );
      v39 = v25 & 0x1F;
      v21 = v54;
      a4 = 3LL * v39;
      v16 = *v48 + 24LL * v39;
    }
    else
    {
      v46 = a6;
      v16 = sub_101F930((__int64)a6, v25, &v54);
      v21 = v54;
      a6 = v46;
      v10 = a3;
      v15 = a8;
    }
    if ( v21 )
      goto LABEL_12;
  }
  else
  {
    v16 = a6[23] + 24LL * (unsigned int)a4;
  }
LABEL_4:
  if ( !v16 || *(char *)(v16 + 3) < 0 )
    goto LABEL_12;
  v17 = v8 + (*(_DWORD *)v16 & 0x7FFFFFFF);
  if ( a3 )
    goto LABEL_7;
LABEL_13:
  if ( v15 )
  {
    v50 = a6;
    v47 = v17;
    v22 = sub_13DBDD0(v17, a6, a7, a4, v10);
    v17 = v47;
    if ( v22 != v47 )
      goto LABEL_15;
    LOBYTE(v54) = 0;
    v27 = sub_10202B0(v50, v14, &v54);
    v17 = v47;
    if ( (_BYTE)v54 )
      goto LABEL_15;
    v29 = (unsigned int)(a5 + v8);
    if ( v29 == v28 )
      goto LABEL_15;
    v30 = v27[v29];
    if ( (_DWORD)v8 )
    {
      v31 = (unsigned int)v27[(unsigned int)(v8 - 1)];
      v32 = v27[(unsigned int)(v8 - 1)];
      if ( v30 != 32 )
      {
        v33 = sub_13D14D0(v31, a7);
        v17 = v47;
        if ( v33 )
        {
          v34 = sub_13D14D0((unsigned int)v30, a7);
          v17 = v47;
          if ( v34 )
          {
            a2 = " ";
            v18 = v47 + a5;
            v19 = *a1;
            v10 = 1;
LABEL_8:
            if ( !a5 )
              return (*(__int64 (__fastcall **)(__int64 *, _QWORD, const char *, __int64))(v19 + 16))(a1, v17, a2, v10);
            v24 = *(__int64 (__fastcall **)(__int64 *, unsigned __int64, _QWORD, const char *, __int64))(v19 + 24);
            v54 = __PAIR64__(v18, v17);
            LOBYTE(v55) = 0;
            return v24(a1, __PAIR64__(v18, v17), v55, a2, v10);
          }
        }
        goto LABEL_15;
      }
      v40 = v27[(unsigned int)(v29 + 1)];
      v41 = v27[(unsigned int)(v29 - 1)];
      v42 = sub_13D14D0(v31, a7);
      v17 = v47;
      if ( v42 && (v45 = sub_13D14D0(v40, a7), v17 = v47, v45)
        || (byte_2411740[2 * v32] & 7) == 0
        && (byte_2411740[2 * (unsigned __int8)v40] & 7) == 0
        && ((v49 = v17, v43 = sub_13D14D0((unsigned int)v41, a7), v17 = v49, !v43)
         || (v44 = sub_13D14D0(v40, a7), v17 = v49, !v44)) )
      {
LABEL_15:
        v19 = *a1;
        v18 = v17 + a5;
        goto LABEL_16;
      }
    }
    else if ( v30 != 32 )
    {
      goto LABEL_15;
    }
    ++a5;
    goto LABEL_15;
  }
LABEL_7:
  v18 = v17 + a5;
  v19 = *a1;
  if ( a3 )
    goto LABEL_8;
LABEL_16:
  v23 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v19 + 32);
  v54 = __PAIR64__(v18, v17);
  LOBYTE(v55) = 0;
  if ( v23 == sub_12D7AD0 )
    return (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, _QWORD, _QWORD, _QWORD))(v19 + 24))(
             a1,
             v54,
             v55,
             0,
             0);
  else
    return ((__int64 (__fastcall *)(__int64 *, unsigned __int64, _QWORD, __int64 (__fastcall *)(__int64, __int64, __int64), __int64))v23)(
             a1,
             v54,
             v55,
             v23,
             v10);
}
