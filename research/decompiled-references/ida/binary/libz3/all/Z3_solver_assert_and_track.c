void __fastcall Z3_solver_assert_and_track(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // r12

  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v6 )
    sub_29D960(a1, a2, a3, a4);
  *(_DWORD *)(a1 + 1520) = 0;
  if ( !*(_QWORD *)(a2 + 32) )
    sub_2A74C0(a1, a2);
  if ( a3
    && *(_DWORD *)(a3 + 8)
    && (unsigned int)*(unsigned __int16 *)(a3 + 4) - 3 > 1
    && (unsigned __int8)sub_15D2CB0(*(_QWORD *)(a1 + 232), a3)
    && a4
    && *(_DWORD *)(a4 + 8)
    && (unsigned int)*(unsigned __int16 *)(a4 + 4) - 3 > 1
    && (unsigned __int8)sub_15D2CB0(*(_QWORD *)(a1 + 232), a4) )
  {
    sub_2AC1D0(a2, a3, a4);
  }
  else
  {
    sub_24EA30(a1, 3u, nullptr);
  }
  if ( v6 )
    byte_1C7EBA0 = 1;
}

