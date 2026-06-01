bool __fastcall sub_5CB330(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v5; // rax
  _QWORD *v6; // r9

  if ( !a2 )
    return 0;
  if ( *(char *)(a2 + 17) < 0 )
  {
    if ( *(_DWORD *)(a2 + 32) )
    {
      if ( (unsigned __int8)sub_5C7D50(*(__int64 **)(qword_2CCB598 + 1672), a2, a3) )
      {
        v5 = sub_5C4680(*(_QWORD **)(a2 + 40), *(_QWORD *)(a2 + 40) + 8LL * *(int *)(a2 + 32), a3);
        if ( v6 != v5 && a3 == *v5 )
          return v5 != nullptr;
      }
    }
  }
  return 0;
}
