__int64 __fastcall sub_223F410(__m128i **a1, __int64 *a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbp
  _QWORD *v6; // rbx
  void *v7; // rsi
  _BYTE *v8; // rdi
  _QWORD *v9; // rcx
  _QWORD **v10; // rax
  __int64 v11; // rdx
  size_t v13; // rdx
  _QWORD **v14; // [rsp+0h] [rbp-148h] BYREF
  __int64 v15; // [rsp+8h] [rbp-140h]
  __m128i **v16; // [rsp+10h] [rbp-138h]
  _QWORD *v17; // [rsp+18h] [rbp-130h]
  __int64 v18[2]; // [rsp+20h] [rbp-128h] BYREF
  char v19; // [rsp+30h] [rbp-118h]
  void *v20[2]; // [rsp+40h] [rbp-108h] BYREF
  _BYTE v21[16]; // [rsp+50h] [rbp-F8h] BYREF
  void *src; // [rsp+60h] [rbp-E8h] BYREF
  size_t n; // [rsp+68h] [rbp-E0h]
  _QWORD v24[2]; // [rsp+70h] [rbp-D8h] BYREF
  _QWORD v25[2]; // [rsp+80h] [rbp-C8h] BYREF
  _QWORD *v26; // [rsp+90h] [rbp-B8h]
  __int16 v27; // [rsp+A0h] [rbp-A8h]
  _QWORD v28[2]; // [rsp+B0h] [rbp-98h] BYREF
  const char *v29; // [rsp+C0h] [rbp-88h]
  __int16 v30; // [rsp+D0h] [rbp-78h]
  _QWORD *v31; // [rsp+E0h] [rbp-68h] BYREF
  void **v32; // [rsp+F0h] [rbp-58h]
  __int16 v33; // [rsp+100h] [rbp-48h]

  v4 = *a2;
  if ( *a2 == a2[1] )
    return 1;
  v5 = 0;
  v17 = a4;
  v15 = a3;
  v16 = a1;
  v14 = &v31;
  while ( 1 )
  {
    v33 = 260;
    v6 = (_QWORD *)(v4 + 32 * v5);
    v31 = v6;
    sub_225D6F0((unsigned int)v18, v15, (_DWORD)v14, -1, 1, 0, 1);
    if ( (v19 & 1) != 0 && LODWORD(v18[0]) )
    {
      (*(void (__fastcall **)(void **))(*(_QWORD *)v18[1] + 32LL))(v20);
      v26 = v6;
      v25[0] = "can't open file '";
      v27 = 1027;
      v28[0] = v25;
      v29 = "': ";
      v30 = 770;
      v31 = v28;
      v32 = v20;
      v33 = 1026;
      sub_2253560(&src, v14);
      v7 = src;
      v8 = (_BYTE *)*v17;
      if ( src != v24 )
      {
        v9 = v17;
        v10 = (_QWORD **)v24[0];
        if ( v8 == (_BYTE *)(v17 + 2) )
          goto LABEL_21;
        goto LABEL_11;
      }
      goto LABEL_23;
    }
    v20[0] = v21;
    v20[1] = nullptr;
    v21[0] = 0;
    if ( !(unsigned __int8)sub_223E350(v16, v5, v18[0], v20) )
      break;
    if ( v20[0] != v21 )
      operator delete(v20[0]);
    ++v5;
    sub_FC2AF0(v18);
    v4 = *a2;
    if ( (a2[1] - *a2) >> 5 <= v5 )
      return 1;
  }
  v26 = v6;
  v25[0] = "error parsing file '";
  v27 = 1027;
  v28[0] = v25;
  v29 = "': ";
  v31 = v28;
  v30 = 770;
  v32 = v20;
  v33 = 1026;
  sub_2253560(&src, v14);
  v7 = src;
  v8 = (_BYTE *)*v17;
  if ( src != v24 )
  {
    v9 = v17;
    v10 = (_QWORD **)v24[0];
    if ( v8 == (_BYTE *)(v17 + 2) )
    {
LABEL_21:
      v14 = v10;
      *v9 = v7;
      *(__m128 *)(v9 + 1) = _mm_loadh_ps((const double *)&v14);
LABEL_22:
      v8 = v24;
      src = v24;
      goto LABEL_13;
    }
LABEL_11:
    v14 = v10;
    v11 = v9[2];
    *v9 = v7;
    *(__m128 *)(v9 + 1) = _mm_loadh_ps((const double *)&v14);
    if ( v8 )
    {
      src = v8;
      v24[0] = v11;
      goto LABEL_13;
    }
    goto LABEL_22;
  }
LABEL_23:
  v13 = n;
  if ( n )
  {
    if ( n == 1 )
      *v8 = v24[0];
    else
      memcpy(v8, v7, n);
    v13 = n;
    v8 = (_BYTE *)*v17;
  }
  v17[1] = v13;
  v8[v13] = 0;
  v8 = src;
LABEL_13:
  n = 0;
  *v8 = 0;
  if ( src != v24 )
    operator delete(src);
  if ( v20[0] != v21 )
    operator delete(v20[0]);
  sub_FC2AF0(v18);
  return 0;
}
