__int64 __fastcall Z3_solver_get_proof(__int64 a1, __int64 a2)
{
  char v2; // r12
  __int64 v3; // rax
  __int64 v4; // rbx

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_29E420(a1, a2);
  *(_DWORD *)(a1 + 1520) = 0;
  if ( !*(_QWORD *)(a2 + 32) )
    sub_2A74C0(a1, a2);
  v3 = sub_E39670();
  v4 = v3;
  if ( v3 )
  {
    sub_251FD0(a1, v3);
    if ( !v2 )
      return v4;
    sub_2BB620(v4);
  }
  else
  {
    sub_24EA30(a1, 0xAu, "there is no current proof");
    if ( !v2 )
      return 0;
    sub_2BB620(0);
  }
  byte_1C7EBA0 = 1;
  return v4;
}

