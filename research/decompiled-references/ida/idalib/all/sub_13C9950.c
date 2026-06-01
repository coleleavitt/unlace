__int64 __fastcall sub_13C9950(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4, char a5, char a6)
{
  __int64 v9; // rbx
  size_t v11; // r15
  size_t v12; // rax
  unsigned __int64 v13; // rcx
  int v14; // eax
  size_t v15; // rax
  unsigned __int64 v16; // r8
  int v17; // eax
  unsigned __int64 v18; // [rsp+8h] [rbp-40h]
  unsigned __int64 v19; // [rsp+8h] [rbp-40h]

  v9 = sub_14075F0(a1 + 79, a2, a3);
  if ( v9 )
    return v9;
  if ( a5 != 1 )
    return v9;
  if ( (*(_BYTE *)(*a1 + 280) & 2) == 0 )
    return v9;
  v11 = a3;
  v9 = sub_13C9570(a1, a2, a3, a2, a3, a6);
  if ( v9 )
    return v9;
  v12 = j__strlen("_Private");
  if ( v12 <= a3 )
  {
    v13 = a3 - v12;
    if ( !v12 || (v18 = a3 - v12, v14 = memcmp((const void *)(a2 + v13), "_Private", v12), v13 = v18, !v14) )
    {
      if ( a3 <= v13 )
        v13 = a3;
      v11 = v13;
      v9 = sub_13C9570(a1, a2, a3, a2, v13, a6);
      if ( v9 )
        return v9;
    }
  }
  v15 = j__strlen("Private");
  if ( v15 > v11 )
    return v9;
  v16 = v11 - v15;
  if ( v15 )
  {
    v19 = v11 - v15;
    v17 = memcmp((const void *)(a2 + v16), "Private", v15);
    v16 = v19;
    if ( v17 )
      return v9;
  }
  if ( v16 > v11 )
    v16 = v11;
  return sub_13C9570(a1, a2, a3, a2, v16, a6);
}
