bool __fastcall sub_5B05C0(__int64 a1, __int64 a2, unsigned int a3)
{
  _DWORD *v5; // rax
  _DWORD *v6; // r9

  if ( !a2 )
    return 0;
  if ( *(char *)(a2 + 9) < 0 )
  {
    if ( *(_DWORD *)(a2 + 20) )
    {
      if ( (unsigned __int8)sub_5AD260(*(__int64 **)(qword_2CA1698 + 1480), a2) )
      {
        v5 = sub_5AA140(*(_DWORD **)(a2 + 24), *(_QWORD *)(a2 + 24) + 4LL * *(int *)(a2 + 20), a3);
        if ( v6 != v5 && a3 == *v5 )
          return v5 != nullptr;
      }
    }
  }
  return 0;
}

