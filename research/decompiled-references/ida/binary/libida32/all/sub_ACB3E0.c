__int64 __fastcall sub_ACB3E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  unsigned int *v12; // rsi
  _DWORD *v13; // rdi
  size_t v14; // rdx
  __int64 *v16; // r15
  bool v17; // al
  bool v18; // [rsp+Fh] [rbp-79h]
  bool v19; // [rsp+Fh] [rbp-79h]
  void *s1; // [rsp+10h] [rbp-78h] BYREF
  size_t n; // [rsp+18h] [rbp-70h]
  __int64 v22; // [rsp+20h] [rbp-68h] BYREF
  void *s2[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v24; // [rsp+40h] [rbp-48h] BYREF

  v6 = *(_QWORD *)(a3 + 40);
  if ( (v6 & 7) != 0 )
  {
    v7 = *(_QWORD *)(a2 + 40);
    if ( (v7 & 7) != 0 )
      goto LABEL_11;
    v9 = 0;
    v11 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    goto LABEL_20;
  }
  v7 = *(_QWORD *)(a2 + 40);
  v8 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  v9 = v8;
  if ( (v7 & 7) == 0 )
  {
    v10 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    v11 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v8 && v10 )
    {
      v12 = *(unsigned int **)(v8 + 16);
      v13 = *(_DWORD **)(v10 + 16);
      v14 = *v12;
      if ( v14 == *v13 && (!*v12 || !memcmp(v13 + 4, v12 + 4, v14)) )
        return sub_ACA990(a1, *(_QWORD *)(a2 + 56), *(_QWORD *)(a3 + 56));
      return 0;
    }
LABEL_20:
    if ( v11 != v9 )
      return 0;
    if ( (v7 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      return sub_ACA990(a1, *(_QWORD *)(a2 + 56), *(_QWORD *)(a3 + 56));
    goto LABEL_11;
  }
  if ( v8 )
    return 0;
LABEL_11:
  sub_B62CC0(s2, a3 + 40);
  sub_B62CC0(&s1, a2 + 40);
  v16 = (__int64 *)s1;
  v17 = 0;
  if ( (void *)n == s2[1] )
  {
    v17 = 1;
    if ( n )
      v17 = memcmp(s1, s2[0], n) == 0;
  }
  if ( v16 != &v22 )
  {
    v18 = v17;
    operator delete(v16);
    v17 = v18;
  }
  if ( s2[0] != &v24 )
  {
    v19 = v17;
    operator delete(s2[0]);
    v17 = v19;
  }
  if ( !v17 )
    return 0;
  return sub_ACA990(a1, *(_QWORD *)(a2 + 56), *(_QWORD *)(a3 + 56));
}

