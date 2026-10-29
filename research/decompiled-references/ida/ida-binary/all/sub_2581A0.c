_BOOL8 __fastcall sub_2581A0(__m128 a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __m128 v13; // xmm4
  __m128 v14; // xmm5
  int v15; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  const char *v23; // rsi
  char v24; // [rsp+0h] [rbp-8h]

  v8 = sub_2579E0(0xFFFFFFFF, 0xFFFFFFFFLL, a1, a2, a3, a4, a5, a6, a7, a8);
  v15 = v8;
  if ( v8 == -3 )
  {
    sub_169630(
      (int)"ICON ERROR\nAUTOHIDE NONE\nSorry, the debugger does not support this command",
      0xFFFFFFFFLL,
      v9,
      v10,
      v11,
      v12,
      a1,
      a2,
      a3,
      a4,
      v13,
      v14,
      a7,
      a8,
      v24);
    return 0;
  }
  else if ( v8 == -2 )
  {
    v23 = "The debugger could not find running processes corresponding to this database.";
    if ( (unsigned __int8)is_miniidb() )
      v23 = "The process list of the remote machine is empty.";
    sub_169630((int)"AUTOHIDE NONE\n%s", (__int64)v23, v17, v18, v19, v20, a1, a2, a3, a4, v21, v22, a7, a8, v24);
    return v15 >= 0;
  }
  else
  {
    if ( v8 == -1 )
      sub_169630(
        (int)"ICON ERROR\n"
             "AUTOHIDE NONE\n"
             "The debugger could not attach to the selected process.\n"
             "This can perhaps indicate the process was just terminated, or that you don't have the necessary privileges.",
        0xFFFFFFFFLL,
        v9,
        v10,
        v11,
        v12,
        a1,
        a2,
        a3,
        a4,
        v13,
        v14,
        a7,
        a8,
        v24);
    return v15 >= 0;
  }
}
