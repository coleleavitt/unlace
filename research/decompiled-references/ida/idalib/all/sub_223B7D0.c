__int64 __fastcall sub_223B7D0(
        __int64 a1,
        __int64 a2,
        char *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        const __m128i *a9,
        __int64 a10)
{
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 *v14; // rsi
  char *v15; // r13
  int v16; // r8d
  __int64 *v17; // rdx
  int v18; // eax
  _QWORD *v19; // r14
  const char *(*v20)(); // rax
  char *v21; // rdx
  char v22; // al
  char *i; // rbp
  char *v24; // rdx
  char v25; // al
  unsigned __int64 *v26; // r9
  unsigned __int64 *v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // r14
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rax
  _BYTE *v34; // rcx
  __int64 v35; // rsi
  int v36; // r9d
  _QWORD *v37; // r13
  __int64 v39; // rax
  __int64 v40; // rdx
  char *v41; // [rsp+0h] [rbp-D8h]
  __int64 v42; // [rsp+8h] [rbp-D0h]
  char *v43; // [rsp+20h] [rbp-B8h]
  __int64 v44; // [rsp+28h] [rbp-B0h]
  int v45; // [rsp+30h] [rbp-A8h]
  int v46; // [rsp+30h] [rbp-A8h]
  int v47; // [rsp+30h] [rbp-A8h]
  int v50; // [rsp+40h] [rbp-98h]
  unsigned __int64 *v51; // [rsp+40h] [rbp-98h]
  unsigned __int64 *v52; // [rsp+48h] [rbp-90h]
  void *v53[2]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v54; // [rsp+60h] [rbp-78h] BYREF
  void *ptr; // [rsp+70h] [rbp-68h] BYREF
  __int64 v56; // [rsp+78h] [rbp-60h]
  _BYTE v57[88]; // [rsp+80h] [rbp-58h] BYREF

  v56 = 0x400000000LL;
  v12 = a8;
  v13 = a7;
  ptr = v57;
  v43 = "<unknown>";
  v44 = 9;
  v41 = nullptr;
  v42 = 0;
  if ( a3 )
  {
    v14 = *(__int64 **)a2;
    v15 = a3;
    v16 = -1431655765 * ((__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 3);
    if ( v16 )
    {
      v17 = *(__int64 **)a2;
      v18 = 0;
      while ( 1 )
      {
        v19 = (_QWORD *)*v17;
        if ( (unsigned __int64)a3 >= *(_QWORD *)(*v17 + 8) && (unsigned __int64)a3 <= v19[2] )
          break;
        ++v18;
        v17 += 3;
        if ( v16 == v18 )
        {
          v16 = 0;
          v19 = (_QWORD *)v14[0x2FFFFFFFDLL];
          goto LABEL_8;
        }
      }
      v16 = v18 + 1;
    }
    else
    {
      v19 = (_QWORD *)v14[0x2FFFFFFFDLL];
    }
LABEL_8:
    v20 = *(const char *(**)())(*v19 + 16LL);
    if ( v20 == sub_FC62B0 )
    {
      v44 = 14;
      v43 = "Unknown buffer";
    }
    else
    {
      v47 = v16;
      v39 = ((__int64 (__fastcall *)(_QWORD *))v20)(v19);
      v12 = a8;
      v13 = a7;
      v43 = (char *)v39;
      v16 = v47;
      v44 = v40;
    }
    v21 = (char *)v19[1];
    if ( a3 == v21 )
    {
      i = a3;
    }
    else
    {
      v22 = *(a3 - 1);
      for ( i = a3; v22 != 10; v22 = *(i - 1) )
      {
        if ( v22 == 13 )
          break;
        if ( --i == v21 )
          break;
      }
    }
    v24 = (char *)v19[2];
    if ( a3 == v24 )
    {
      v15 = a3;
    }
    else
    {
      v25 = *a3;
      if ( *a3 != 10 )
      {
        do
        {
          if ( v25 == 13 )
            break;
          if ( ++v15 == v24 )
            break;
          v25 = *v15;
        }
        while ( *v15 != 10 );
      }
    }
    v41 = i;
    v26 = (unsigned __int64 *)(v13 + 16 * v12);
    v42 = v15 - i;
    v27 = (unsigned __int64 *)v13;
    if ( (unsigned __int64 *)v13 != v26 )
    {
      do
      {
        v28 = *v27;
        v29 = v27[1];
        if ( *v27 != 0 && *v27 <= (unsigned __int64)v15 && v29 >= (unsigned __int64)i )
        {
          if ( v28 < (unsigned __int64)i )
            LODWORD(v28) = (_DWORD)i;
          if ( v29 > (unsigned __int64)v15 )
            LODWORD(v29) = (_DWORD)v15;
          v30 = ((unsigned __int64)(unsigned int)(v29 - (_DWORD)i) << 32) | (unsigned int)(v28 - (_DWORD)i);
          v31 = (unsigned int)v56;
          v32 = (unsigned int)v56 + 1LL;
          if ( v32 > HIDWORD(v56) )
          {
            v52 = v27;
            v51 = v26;
            v46 = v16;
            sub_2237220((__int64)&ptr, v57, v32, 8);
            v31 = (unsigned int)v56;
            v27 = v52;
            v26 = v51;
            v16 = v46;
          }
          *((_QWORD *)ptr + v31) = v30;
          LODWORD(v56) = v56 + 1;
        }
        v27 += 2;
      }
      while ( v26 != v27 );
    }
    v33 = sub_223B700((__int64 **)a2, (unsigned __int64)a3, v16);
    v34 = ptr;
    v35 = (unsigned int)v56;
    v36 = v33;
    v45 = HIDWORD(v33) - 1;
  }
  else
  {
    v35 = 0;
    v34 = v57;
    v36 = 0;
    v45 = -1;
  }
  v37 = v34;
  v50 = v36;
  sub_2253560(v53, a5);
  sub_223AE20(
    a1,
    a2,
    (__int64)a3,
    v43,
    v44,
    v50,
    v45,
    a4,
    (_BYTE *)v53[0],
    (__int64)v53[1],
    v41,
    v42,
    v37,
    v35,
    a9,
    a10);
  if ( v53[0] != &v54 )
    operator delete(v53[0]);
  if ( ptr != v57 )
    free(ptr);
  return a1;
}
