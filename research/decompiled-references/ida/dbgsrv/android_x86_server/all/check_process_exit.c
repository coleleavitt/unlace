/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: check_process_exit
// Address: 0x000B5FE0

//----- (000B5FE0) --------------------------------------------------------
int __cdecl check_process_exit(__pid_t pid, int *a2, int a3)
{
  int v3; // edi
  void *v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // esi
  int v8; // eax
  __time_t v10[6]; // [esp+4h] [ebp-18h] BYREF

  v10[1] = __readgsdword(0x14u);
  v3 = -1;
  if ( a3 != 1 )
    v3 = a3;
  v4 = (void *)sub_B4700();
  v5 = sub_B3D90(v4, v10, pid, 0, v3);
  if ( !v5 )
    return 1;
  if ( v5 == -1 )
  {
    v7 = -1;
    if ( a2 )
    {
      v8 = *(_DWORD *)__errno(v6);
LABEL_14:
      *a2 = v8;
    }
  }
  else if ( (v10[0] & 0x7F) != 0 )
  {
    if ( ((LOBYTE(v10[0]) + 1) & 0x7E) == 0 )
    {
      if ( !(_BYTE)under_debugger )
        interr(1150);
      BUG();
    }
    v7 = 0;
    if ( a2 )
    {
      v8 = -(v10[0] & 0x7F);
      goto LABEL_14;
    }
  }
  else
  {
    v7 = 0;
    if ( a2 )
    {
      v8 = BYTE1(v10[0]);
      goto LABEL_14;
    }
  }
  return v7;
}
// B6043: variable 'v6' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
// 13E34C: using guessed type int under_debugger;
