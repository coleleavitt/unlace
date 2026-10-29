__int64 __fastcall sub_A01320(__int64 **a1, __int64 a2)
{
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) != 42 )
    return 0;
  if ( (unsigned __int8)sub_A01150(a2) )
    return 0;
  **a1 = a2;
  return 1;
}
