__int64 __fastcall sub_20898F0(_QWORD *a1, _QWORD *a2, unsigned __int64 a3, unsigned int a4, char a5)
{
  __int64 v8; // r13
  __int64 v9; // rbx
  signed __int64 v11; // rbp
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  char *v14; // rax
  char *v15; // r15
  __int64 v16; // r9
  _QWORD *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rcx
  bool v22; // zf
  __int64 v23; // rdx
  __int64 v24; // [rsp-8h] [rbp-70h]
  __int64 v26; // [rsp+10h] [rbp-58h] BYREF
  _QWORD *v27; // [rsp+18h] [rbp-50h] BYREF
  __m128 v28[4]; // [rsp+20h] [rbp-48h] BYREF

  v8 = *a1;
  if ( !a4 )
  {
    v28[0].m128_u64[0] = (unsigned __int64)a2;
    v28[0].m128_u64[1] = a3;
    v9 = sub_2082640(v8 + 616, (const void **)v28);
    if ( v9 || !a5 )
      return v9;
    v8 = *a1;
  }
  v11 = 8 * a3;
  v12 = a1;
  v9 = sub_20B4330(40, 0, a4);
  sub_20B2FD0(v9, (_DWORD)a1, 7, a4, 0, 0, 0, 0);
  *(_QWORD *)(v9 + 32) = 0;
  *(_OWORD *)(v9 + 16) = 0;
  v13 = v24;
  if ( v11 >> 3 )
  {
    if ( (unsigned __int64)(v11 >> 3) > 0x1FFFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    v14 = (char *)operator new(v11);
  }
  else
  {
    v14 = nullptr;
  }
  v15 = &v14[v11];
  *(_QWORD *)(v9 + 16) = v14;
  *(_QWORD *)(v9 + 32) = &v14[v11];
  if ( v11 )
  {
    v12 = a2;
    memcpy(v14, a2, v11);
  }
  *(_QWORD *)(v9 + 24) = v15;
  v26 = v9;
  if ( !a4 )
  {
    if ( (unsigned __int8)sub_2081160((__int64 *)(v8 + 616), &v26, &v27) )
    {
      sub_20825C0(v28, v27, (_QWORD *)(*(_QWORD *)(v8 + 616) + 8LL * *(unsigned int *)(v8 + 632)), v8 + 616, 1);
      return v26;
    }
    v17 = v27;
    v18 = (unsigned int)(*(_DWORD *)(v8 + 624) + 1);
    v19 = *(unsigned int *)(v8 + 632);
    v28[0].m128_u64[0] = (unsigned __int64)v27;
    v20 = (unsigned int)(4 * v18);
    if ( (unsigned int)v20 >= 3 * (int)v19 )
    {
      sub_2089660(v8 + 616, 2 * v19, v18, (unsigned int)(2 * v19), v20, v16);
    }
    else
    {
      v21 = (unsigned int)(v19 - *(_DWORD *)(v8 + 628) - v18);
      if ( (unsigned int)v21 > (unsigned int)v19 >> 3 )
      {
LABEL_18:
        v22 = *v17 == -4096;
        *(_DWORD *)(v8 + 624) = v18;
        if ( !v22 )
          --*(_DWORD *)(v8 + 628);
        *v17 = v26;
        v23 = *(_QWORD *)(v8 + 616);
        v27 = v17;
        sub_20825C0(v28, v17, (_QWORD *)(v23 + 8 * v19), v8 + 616, 1);
        return v26;
      }
      sub_2089660(v8 + 616, v19, v18, v21, v20, v16);
    }
    sub_2081160((__int64 *)(v8 + 616), &v26, v28);
    v17 = (_QWORD *)v28[0].m128_u64[0];
    v19 = *(unsigned int *)(v8 + 632);
    LODWORD(v18) = *(_DWORD *)(v8 + 624) + 1;
    goto LABEL_18;
  }
  if ( a4 == 1 )
  {
    sub_20AC2A0(v9, v12, v13);
    return v26;
  }
  return v9;
}
