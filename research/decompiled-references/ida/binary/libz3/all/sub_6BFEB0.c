bool __fastcall sub_6BFEB0(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rax
  __int64 v5; // rax
  _DWORD *v6; // rax
  __int64 v7; // rax
  _DWORD *v8; // rax

  if ( !*(_WORD *)(a1 + 4) )
  {
    v2 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 24LL);
    if ( v2 )
    {
      if ( *v2 == 5 && v2[1] == 9 && *(_DWORD *)(a1 + 24) == 2 )
      {
        v5 = *(_QWORD *)(a1 + 32);
        if ( !*(_WORD *)(v5 + 4) )
        {
          v6 = *(_DWORD **)(*(_QWORD *)(v5 + 16) + 24LL);
          if ( v6 )
          {
            if ( *v6 == 5 && !v6[1] )
              a1 = *(_QWORD *)(a1 + 40);
          }
        }
      }
    }
  }
  if ( !*(_WORD *)(a2 + 4) )
  {
    v3 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v3 )
    {
      if ( *v3 == 5 && v3[1] == 9 && *(_DWORD *)(a2 + 24) == 2 )
      {
        v7 = *(_QWORD *)(a2 + 32);
        if ( !*(_WORD *)(v7 + 4) )
        {
          v8 = *(_DWORD **)(*(_QWORD *)(v7 + 16) + 24LL);
          if ( v8 )
          {
            if ( *v8 == 5 && !v8[1] )
              a2 = *(_QWORD *)(a2 + 40);
          }
        }
      }
    }
  }
  return *(_DWORD *)a1 < *(_DWORD *)a2;
}

