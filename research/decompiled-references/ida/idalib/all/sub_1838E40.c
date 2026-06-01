char __fastcall sub_1838E40(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  char result; // al
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // r12
  _QWORD *v10; // rbx

  if ( (unsigned int)sub_B984E0(a1) )
  {
    v7 = sub_B98510(a1);
    v9 = v8;
    if ( (_QWORD *)v7 == v8 )
      return 0;
    v10 = (_QWORD *)v7;
    while ( 1 )
    {
      result = sub_1838E40(*v10, a2);
      if ( result )
        break;
      if ( v9 == ++v10 )
        return 0;
    }
  }
  else
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
    result = *(_BYTE *)(a2 + 20);
    if ( !result )
      return sub_2236570(a2, v3) != 0;
    v5 = *(_QWORD **)a2;
    v6 = *(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 12);
    if ( *(_QWORD *)a2 == v6 )
      return 0;
    while ( v3 != *v5 )
    {
      if ( (_QWORD *)v6 == ++v5 )
        return 0;
    }
  }
  return result;
}
