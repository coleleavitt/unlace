void __fastcall sub_C0FE40(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  int v4; // eax
  __int64 v5; // rax

  if ( !*(_BYTE *)(a1 + 2200) && (unsigned __int8)sub_18290A0(*(_QWORD *)a1) )
  {
    v3 = *(_QWORD *)(a1 + 936);
    v4 = v3 ? *(_DWORD *)(v3 - 4) : 0;
    if ( *(_DWORD *)(a1 + 944) != v4 && (*(_BYTE *)(a1 + 2201) || *(_BYTE *)(*(_QWORD *)(a1 + 8) + 725LL)) )
    {
      v5 = *(_QWORD *)(a1 + 1376);
      if ( v5 )
      {
        if ( *(_DWORD *)(v5 - 4) )
        {
          a2 = a1 + 7072;
          sub_C0F7F0(a1, (char *)(a1 + 7072), a3);
        }
      }
      sub_C0FAB0(a1, a2, a3);
    }
  }
}

