__int64 __fastcall sub_11E5C00(__int64 a1)
{
  _QWORD *v1; // rbp
  _QWORD *v2; // r13
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rbx
  _QWORD *v7; // rax
  const char *v9; // [rsp+0h] [rbp-48h] BYREF
  __int64 v10; // [rsp+8h] [rbp-40h]

  v1 = *(_QWORD **)(a1 + 8);
  v2 = &v1[*(unsigned int *)(a1 + 16)];
  if ( v1 == v2 )
    return 0;
  while ( !*v1 )
  {
    if ( v2 == ++v1 )
      return 0;
  }
  while ( 1 )
  {
    v3 = *v1;
    if ( (unsigned __int8)sub_21B9810(*v1, 373) )
      break;
    if ( (unsigned __int8)sub_21B9810(v3, 3441) || (unsigned __int8)sub_21B9810(v3, 3496) )
    {
      v4 = *(_QWORD *)(v3 + 48);
      v5 = *(unsigned int *)(v3 + 56);
      v9 = "-exported_symbols_list";
      v10 = 22;
      v6 = v4 + 8 * v5;
      if ( v6 != sub_11E58E0(v4, v6, (__int64)&v9) )
        break;
      v9 = "-exported_symbol";
      v10 = 16;
      if ( v6 != sub_11E58E0(v4, v6, (__int64)&v9) )
        break;
    }
    v7 = v1 + 1;
    if ( v2 == v1 + 1 )
      return 0;
    if ( !v1[1] )
    {
      v7 = v1 + 2;
      if ( v2 == v1 + 2 )
        return 0;
      while ( !*v7 )
      {
        if ( v2 == ++v7 )
          return 0;
      }
    }
    v1 = v7;
  }
  return 1;
}
