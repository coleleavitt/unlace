void __fastcall sub_1722B20(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 **v7; // rax
  __int64 *v8; // rcx
  unsigned __int64 v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rdx
  size_t v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD v22[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v23; // [rsp+10h] [rbp-28h]

  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    return;
  v7 = (__int64 **)sub_B8C3D0(a2, a2, a3, a4, a5, a6);
  v8 = *v7;
  v9 = (unsigned __int64)&(*v7)[*((unsigned int *)v7 + 2)];
  if ( (unsigned __int64)v8 >= v9 )
  {
    if ( v8 == (__int64 *)v9 )
      return;
    if ( *(_WORD *)(*(_QWORD *)v9 + 36LL) != 358 )
    {
      v10 = (__int64 *)(v9 + 8);
      while ( v8 != v10 )
      {
        v11 = *v10++;
        if ( *(_WORD *)(v11 + 36) == 358 )
          goto LABEL_10;
      }
      return;
    }
LABEL_10:
    while ( *(_WORD *)(*v8 + 36) != 358 )
      ++v8;
    if ( !*(_DWORD *)(*v8 + 40) )
    {
      if ( (*(_BYTE *)(a1[7] + 2LL) & 4) != 0
        && (v12 = j__strlen("nil"), v13 = sub_6F3470((__int64)(a1 + 69), "nil", v12), (*(_BYTE *)(v13 + 3) & 2) != 0)
        && ((*(_BYTE *)(a1[7] + 21LL) & 2) == 0
         || (sub_1423DB0((__int64)v22, a1, v13, v14, v15, v16), v23 | v22[0] & 0xFFFFFFFFFFFFFFF8LL)) )
      {
        sub_15A2FD0(a3, (__int64)", nil");
      }
      else
      {
        v18 = sub_6F3470((__int64)(a1 + 69), "NULL", 4u);
        if ( (*(_BYTE *)(v18 + 3) & 2) != 0
          && ((*(_BYTE *)(a1[7] + 21LL) & 2) == 0
           || (sub_1423DB0((__int64)v22, a1, v18, v19, v20, v21), v23 | v22[0] & 0xFFFFFFFFFFFFFFF8LL)) )
        {
          sub_15A2FD0(a3, (__int64)", NULL");
        }
        else
        {
          sub_15A2FD0(a3, (__int64)", (void*)0");
        }
      }
    }
    return;
  }
  v17 = v8;
  if ( *(_WORD *)(*v8 + 36) == 358 )
  {
LABEL_19:
    if ( (__int64 *)v9 == v17 )
      return;
    goto LABEL_10;
  }
  while ( (__int64 *)v9 != ++v17 )
  {
    if ( *(_WORD *)(*v17 + 36) == 358 )
      goto LABEL_19;
  }
}
