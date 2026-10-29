__int64 __fastcall sub_15A35B0(__int64 a1, void **a2)
{
  int v2; // eax
  __int64 v3; // rax
  unsigned __int64 v4; // rax
  const char *v6; // rbx
  unsigned __int16 *v7; // rax
  unsigned __int16 *v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  unsigned __int16 *v11; // rax
  _BYTE *v12; // rdi
  void *v13; // rdx
  size_t v14; // rdx
  double v15[2]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v16; // [rsp+10h] [rbp-40h] BYREF
  void *src; // [rsp+18h] [rbp-38h] BYREF
  size_t n; // [rsp+20h] [rbp-30h]
  _QWORD v19[5]; // [rsp+28h] [rbp-28h] BYREF

  v2 = *(_DWORD *)(a1 + 24);
  switch ( v2 )
  {
    case 2:
      return *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 16LL;
    case 3:
      v7 = *(unsigned __int16 **)(a1 + 8);
      v8 = v7 + 16;
      v9 = (__int64)&v7[8 * *v7 + 16];
      if ( v7 + 16 != (unsigned __int16 *)v9 )
      {
        v10 = *((_DWORD *)v7 + 8);
        v11 = v7 + 24;
        if ( !v10 )
        {
LABEL_26:
          v6 = *((const char **)v8 + 1);
          if ( !v6 )
            return (__int64)v6;
          goto LABEL_9;
        }
        while ( 1 )
        {
          v8 = v11;
          if ( (unsigned __int16 *)v9 == v11 )
            break;
          v11 += 8;
          if ( !*((_DWORD *)v11 - 4) )
            goto LABEL_26;
        }
      }
      return 0;
    case 1:
      v6 = *(const char **)(a1 + 8);
      if ( !v6 )
        return (__int64)v6;
LABEL_9:
      strlen(v6);
      return (__int64)v6;
  }
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 40LL);
  v16 = v3;
  if ( (v3 & 7) != 0 )
  {
    if ( (v16 & 7) == 1 )
    {
      src = (void *)v3;
      v4 = sub_FDE960((__int64 *)&src, 0);
      if ( v4 )
        return *(_QWORD *)(v4 + 16) + 16LL;
    }
  }
  else
  {
    v4 = v3 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v4 )
      return *(_QWORD *)(v4 + 16) + 16LL;
  }
  sub_B86A00((__int64)&src, &v16);
  v12 = *a2;
  if ( src == v19 )
  {
    v14 = n;
    if ( n )
    {
      if ( n == 1 )
        *v12 = v19[0];
      else
        memcpy(v12, src, n);
      v14 = n;
      v12 = *a2;
    }
    a2[1] = (void *)v14;
    v12[v14] = 0;
    v12 = src;
    goto LABEL_23;
  }
  if ( v12 == (_BYTE *)(a2 + 2) )
  {
    v15[0] = *(double *)v19;
    *a2 = src;
    *(__m128 *)(a2 + 1) = _mm_loadh_ps(v15);
    goto LABEL_29;
  }
  v15[0] = *(double *)v19;
  v13 = a2[2];
  *a2 = src;
  *(__m128 *)(a2 + 1) = _mm_loadh_ps(v15);
  if ( !v12 )
  {
LABEL_29:
    v12 = v19;
    src = v19;
    goto LABEL_23;
  }
  src = v12;
  v19[0] = v13;
LABEL_23:
  n = 0;
  *v12 = 0;
  if ( src != v19 )
    operator delete(src);
  return (__int64)*a2;
}
