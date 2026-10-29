__int64 __fastcall sub_11B9C0(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)a2 == 1 )
    return (unsigned __int8)sub_64A60(
                              (_QWORD *)(*(_QWORD *)(a1 + 48) + 104LL),
                              *(_DWORD *)(a2 + 8),
                              *(_DWORD *)(a2 + 4));
  else
    return 0;
}
