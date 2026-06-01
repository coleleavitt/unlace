_BOOL8 __fastcall sub_9E26A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned int v7; // eax

  if ( !(unsigned __int8)sub_9D4CF0(a1, a2, a3, 2)
    || !(unsigned __int8)sub_9E25F0(a1, a2, a3, 2)
    || !(unsigned __int8)sub_9D4710(a1, a2, a3)
    || !sub_9D52F0(a1, a2, a3, 2) )
  {
    return 0;
  }
  if ( !*(_DWORD *)(a3 + 48) )
  {
    v5 = *(_QWORD *)(a3 + 24);
    if ( *(_BYTE *)(v5 + 20) )
    {
      if ( *(_BYTE *)(v5 + 24) )
      {
        v6 = *(_QWORD *)(a1 + 176);
        if ( *(_DWORD *)(v6 + 324) == -1 || *(_DWORD *)(v6 + 320) != (unsigned int)*(_QWORD *)(v5 + 16) )
        {
          v7 = sub_A1A260(*(_QWORD *)(a1 + 200), a2);
          sub_A2E1A0(a1, v7, 2241, 0);
          return 0;
        }
      }
    }
  }
  return sub_9D77A0(a1, a2, a3);
}

