void __fastcall sub_2F0FB0(__int64 a1, char a2, _QWORD *a3)
{
  __int64 v4; // r12
  const char *v5; // rax
  __int64 i; // rbp
  __int64 v7; // rdx
  const char *v8; // [rsp+8h] [rbp-40h]

  if ( a3 )
    v4 = a3[1];
  else
    v4 = *(_QWORD *)(a1 + 192);
  if ( v4 )
  {
    v5 = "Applying";
    if ( !a2 )
      v5 = "Restoring";
    v8 = v5;
    sub_1C76F0((int)"%s metadata", v5);
    for ( i = 0; i != v4; sub_1C77E0((int)"%s metadata (%zu/%zu)", v8, i, v4) )
    {
      while ( 1 )
      {
        v7 = i;
        if ( a3 )
          v7 = *(_QWORD *)(*a3 + 8 * i);
        ++i;
        sub_2F0F20(a1, a2, v7);
        if ( __ROR8__(0x8F5C28F5C28F5C29LL * i, 2) <= 0x28F5C28F5C28F5CuLL )
          break;
        if ( i == v4 )
          goto LABEL_13;
      }
      if ( (unsigned __int8)sub_541EF0() )
        break;
    }
LABEL_13:
    sub_1C78D0();
  }
}
