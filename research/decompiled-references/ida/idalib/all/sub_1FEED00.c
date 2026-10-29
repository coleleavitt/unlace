void __fastcall sub_1FEED00(__int64 a1, const void *a2, size_t a3, _BYTE *a4, __int64 a5)
{
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 *v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // rax
  unsigned int v12; // r8d
  __int64 *v13; // rcx
  __int64 v14; // r12
  unsigned int v15; // eax
  _QWORD *v16; // rbp
  _BYTE *v17; // rdi
  __int64 v18; // rax
  size_t v19; // rdx
  unsigned int v20; // [rsp+4h] [rbp-74h]
  __int64 *v21; // [rsp+8h] [rbp-70h]
  __int64 *v22; // [rsp+18h] [rbp-60h] BYREF
  void *src; // [rsp+20h] [rbp-58h] BYREF
  size_t n; // [rsp+28h] [rbp-50h]
  _QWORD v25[9]; // [rsp+30h] [rbp-48h] BYREF

  src = v25;
  sub_1FEDD70(&src, a4, (__int64)&a4[a5]);
  v6 = sub_2244B30(a2, a3);
  v7 = (unsigned int)sub_2244CB0(a1 + 112, a2, a3, v6);
  v9 = (__int64 *)(*(_QWORD *)(a1 + 112) + 8 * v7);
  if ( *v9 )
  {
    if ( *v9 != -8 )
    {
      sub_11727E0(&v22, v9, 0);
      v10 = v22;
      goto LABEL_8;
    }
    --*(_DWORD *)(a1 + 128);
  }
  v21 = v9;
  v20 = v7;
  v11 = sub_22300B0(a3 + 41, 8, v7, v9, v7, v8);
  v12 = v20;
  v13 = v21;
  v14 = v11;
  if ( a3 )
  {
    memcpy((void *)(v11 + 40), a2, a3);
    v13 = v21;
    v12 = v20;
  }
  *(_BYTE *)(v14 + a3 + 40) = 0;
  *(_QWORD *)v14 = a3;
  *(_QWORD *)(v14 + 8) = v14 + 24;
  *(_QWORD *)(v14 + 16) = 0;
  *(_BYTE *)(v14 + 24) = 0;
  *v13 = v14;
  ++*(_DWORD *)(a1 + 124);
  v15 = sub_22450D0(a1 + 112, v12);
  sub_11727E0(&v22, (__int64 *)(*(_QWORD *)(a1 + 112) + 8LL * v15), 0);
  v10 = v22;
LABEL_8:
  v16 = (_QWORD *)*v10;
  v17 = *(_BYTE **)(*v10 + 8);
  if ( src == v25 )
  {
    v19 = n;
    if ( n )
    {
      if ( n == 1 )
        *v17 = v25[0];
      else
        memcpy(v17, src, n);
      v19 = n;
      v17 = (_BYTE *)v16[1];
    }
    v16[2] = v19;
    v17[v19] = 0;
    v17 = src;
  }
  else
  {
    if ( v17 == (_BYTE *)(v16 + 3) )
    {
      v16[1] = src;
      v16[2] = n;
      v16[3] = v25[0];
    }
    else
    {
      v16[1] = src;
      v18 = v16[3];
      v16[2] = n;
      v16[3] = v25[0];
      if ( v17 )
      {
        src = v17;
        v25[0] = v18;
        goto LABEL_12;
      }
    }
    v17 = v25;
    src = v25;
  }
LABEL_12:
  n = 0;
  *v17 = 0;
  if ( src != v25 )
    operator delete(src);
}
