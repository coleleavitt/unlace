__int64 __fastcall sub_20986D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  int v4; // r14d
  _BYTE *v5; // rax
  __int64 v6; // rdx
  _BYTE *v7; // r13
  size_t v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 *v12; // r8
  __int64 *v13; // rax
  __int64 v14; // rax
  _BYTE *v15; // rdi
  __int64 v17; // rax
  unsigned int v18; // r9d
  __int64 *v19; // r8
  _QWORD *v20; // rcx
  unsigned int v21; // eax
  __int64 *v22; // [rsp+0h] [rbp-98h]
  unsigned int v23; // [rsp+8h] [rbp-90h]
  unsigned int v24; // [rsp+Ch] [rbp-8Ch]
  __int64 v25; // [rsp+10h] [rbp-88h]
  _QWORD *v26; // [rsp+28h] [rbp-70h]
  __int64 *v27; // [rsp+38h] [rbp-60h] BYREF
  void *src; // [rsp+40h] [rbp-58h] BYREF
  size_t n; // [rsp+48h] [rbp-50h]
  _BYTE v30[72]; // [rsp+50h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  v25 = a1 + 24;
  if ( v2 != a1 + 24 )
  {
    v24 = 0;
    while ( 1 )
    {
      v3 = v2 - 56;
      if ( !v2 )
        v3 = 0;
      v4 = sub_208D420(v3);
      v5 = (_BYTE *)sub_20CC3B0(v3);
      src = v30;
      if ( v5 )
      {
        sub_2094420(&src, v5, (__int64)&v5[v6]);
        v7 = src;
        v8 = n;
      }
      else
      {
        n = 0;
        v8 = 0;
        v7 = v30;
        v30[0] = 0;
      }
      v9 = sub_2244B30(v7, v8);
      v10 = (unsigned int)sub_2244CB0(a2, v7, v8, v9);
      v12 = (__int64 *)(*(_QWORD *)a2 + 8 * v10);
      if ( !*v12 )
        goto LABEL_14;
      if ( *v12 == -8 )
        break;
      sub_2098140(&v27, v12, 0);
      v13 = v27;
LABEL_10:
      v14 = *v13;
      v15 = src;
      *(_DWORD *)(v14 + 8) = v4;
      *(_DWORD *)(v14 + 12) = 0;
      if ( v15 == v30 )
      {
        v24 += v4;
        v2 = *(_QWORD *)(v2 + 8);
        if ( v25 == v2 )
          return v24;
      }
      else
      {
        operator delete(v15);
        v24 += v4;
        v2 = *(_QWORD *)(v2 + 8);
        if ( v25 == v2 )
          return v24;
      }
    }
    --*(_DWORD *)(a2 + 16);
LABEL_14:
    v22 = v12;
    v23 = v10;
    v17 = sub_22300B0(v8 + 17, 8, v10, v11, v12, v10);
    v18 = v23;
    v19 = v22;
    v20 = (_QWORD *)v17;
    if ( v8 )
    {
      v26 = (_QWORD *)v17;
      memcpy((void *)(v17 + 16), v7, v8);
      v20 = v26;
      v19 = v22;
      v18 = v23;
    }
    *((_BYTE *)v20 + v8 + 16) = 0;
    *v20 = v8;
    v20[1] = 0;
    *v19 = (__int64)v20;
    ++*(_DWORD *)(a2 + 12);
    v21 = sub_22450D0(a2, v18);
    sub_2098140(&v27, (__int64 *)(*(_QWORD *)a2 + 8LL * v21), 0);
    v13 = v27;
    goto LABEL_10;
  }
  return 0;
}
