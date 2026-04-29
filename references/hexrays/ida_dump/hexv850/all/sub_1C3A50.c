__int64 __fastcall sub_1C3A50(__int64 a1, char *a2)
{
  char v2; // al
  __int64 v3; // rbx
  char *v5; // r12
  char v6; // al

  v2 = *a2;
  if ( *a2 == 6 )
    return 0;
  v3 = (__int64)a2;
  while ( 1 )
  {
    if ( v2 == 1
      && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 1504LL) + 264LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL),
           *(unsigned int *)(v3 + 8)) )
    {
      return 0;
    }
    if ( *(_BYTE *)v3 != 14 )
      return 1;
    v5 = *(char **)(v3 + 8);
    v6 = *v5;
    if ( *v5 == 6 )
      return 0;
    if ( v6 == 1 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 1504LL) + 264LL))(
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL),
             *((unsigned int *)v5 + 2)) )
      {
        return 0;
      }
      v6 = *v5;
    }
    if ( v6 == 14 )
    {
      if ( !(unsigned __int8)sub_1C3A50(a1, *((_QWORD *)v5 + 1)) )
        return 0;
      if ( !(unsigned __int8)sub_1C3A50(a1, *((_QWORD *)v5 + 1) + 16LL) )
        break;
    }
    v3 = *(_QWORD *)(v3 + 8) + 16LL;
    v2 = *(_BYTE *)v3;
    if ( *(_BYTE *)v3 == 6 )
      return 0;
  }
  return 0;
}
