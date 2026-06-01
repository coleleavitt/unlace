char *__fastcall sub_1071500(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 v5; // r13
  _BYTE *v6; // rax
  __int64 v7; // rdx
  _BYTE *v8; // rdi
  __int64 v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // r12
  int v15; // eax
  __int64 v16; // rdx
  bool v17; // zf
  char *result; // rax
  __int64 v19; // rdx
  size_t v20; // rdx
  __int64 v21; // [rsp+8h] [rbp-50h] BYREF
  void *src; // [rsp+10h] [rbp-48h] BYREF
  size_t n; // [rsp+18h] [rbp-40h]
  _QWORD v24[7]; // [rsp+20h] [rbp-38h] BYREF

  v2 = sub_22B7480(a1 + 216);
  v4 = v3;
  v5 = v2;
  *(_DWORD *)(a1 + 612) = sub_229C520(v2, v3);
  v6 = (_BYTE *)sub_229FC10(v5, v4);
  src = v24;
  sub_1070010(&src, v6, (__int64)&v6[v7]);
  v8 = *(_BYTE **)(a1 + 544);
  if ( src == v24 )
  {
    v20 = n;
    if ( n )
    {
      if ( n == 1 )
        *v8 = v24[0];
      else
        memcpy(v8, src, n);
      v20 = n;
      v8 = *(_BYTE **)(a1 + 544);
    }
    *(_QWORD *)(a1 + 552) = v20;
    v8[v20] = 0;
    v8 = src;
  }
  else
  {
    if ( v8 == (_BYTE *)(a1 + 560) )
    {
      v21 = v24[0];
      *(_QWORD *)(a1 + 544) = src;
      *(__m128 *)(a1 + 552) = _mm_loadh_ps((const double *)&v21);
    }
    else
    {
      v21 = v24[0];
      v9 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 544) = src;
      *(__m128 *)(a1 + 552) = _mm_loadh_ps((const double *)&v21);
      if ( v8 )
      {
        src = v8;
        v24[0] = v9;
        goto LABEL_5;
      }
    }
    v8 = v24;
    src = v24;
  }
LABEL_5:
  n = 0;
  *v8 = 0;
  if ( src != v24 )
    operator delete(src);
  v10 = sub_229CAC0(v5, v4);
  if ( v10 )
    *(_DWORD *)(a1 + 616) = v10;
  else
    v10 = *(_DWORD *)(a1 + 616);
  v11 = sub_229FBC0(v10);
  v13 = v12;
  v14 = v11;
  *(_DWORD *)(a1 + 620) = sub_229CC10(v11, v12);
  *(_DWORD *)(a1 + 624) = sub_229CB60(v14, v13);
  *(_QWORD *)(a1 + 592) = sub_1071090(a1);
  v15 = *(_DWORD *)(a1 + 620);
  *(_QWORD *)(a1 + 600) = v16;
  if ( v15 == 2 )
  {
    v19 = 1;
    result = "R";
  }
  else if ( v15 == 3 )
  {
    v19 = 1;
    result = "M";
  }
  else
  {
    v17 = v15 == 1;
    result = "A";
    v19 = v17;
    if ( !v17 )
      result = (char *)&byte_22F0C30;
  }
  *(_QWORD *)(a1 + 576) = result;
  *(_QWORD *)(a1 + 584) = v19;
  return result;
}
