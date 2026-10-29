__int64 __fastcall sub_1B7C0(__int64 a1, __int64 a2, const char *a3)
{
  __int64 v4; // rbx

  if ( !*(_DWORD *)(a2 + 88) && *(_WORD *)(a2 + 54) != 0xFFF1 || strcmp(a3, "_SDA_BASE_") )
    return 1;
  v4 = *(_QWORD *)(a2 + 80);
  if ( *(_DWORD *)(get_ph() + 4) == 15 )
  {
    sub_101F0(0xBBEu, v4);
    return 1;
  }
  else
  {
    sub_1AB00();
    return sub_1B820();
  }
}

