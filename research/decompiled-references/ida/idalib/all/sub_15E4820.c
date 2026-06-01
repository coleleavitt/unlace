__int64 __fastcall sub_15E4820(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  __int64 v8; // rax
  __int64 v9; // rax
  bool v10; // [rsp+Fh] [rbp-A9h] BYREF
  _BYTE v11[168]; // [rsp+10h] [rbp-A8h] BYREF

  v6 = *(_BYTE *)(a4 + 28) & 0x7F;
  if ( (unsigned int)(v6 - 59) <= 2 )
  {
    if ( sub_B97230(a4) )
      return 1;
    v6 = *(_BYTE *)(a4 + 28) & 0x7F;
  }
  if ( (unsigned int)(v6 - 34) <= 5 )
  {
    if ( (unsigned int)sub_B778D0(a4) == 1 )
      return 1;
    v6 = *(_BYTE *)(a4 + 28) & 0x7F;
  }
  if ( (unsigned int)(v6 - 40) <= 6 && sub_B73BE0(a4) )
    return 1;
  sub_168B9F0(v11, a2 + 8, *(unsigned int *)(a3 + 24), 6599, 0);
  v8 = sub_15DD120((__int64)v11, a3);
  v10 = (*(_BYTE *)(a3 + 35) & 2) != 0;
  v9 = sub_1588420(v8, (unsigned __int8 *)&v10);
  if ( *(_BYTE *)(v9 + 120) )
  {
    sub_15D6400((unsigned __int8 **)(v9 + 32), (__int64)"class templates, function templates, and variable templates");
  }
  else if ( *(_BYTE *)(v9 + 132) )
  {
    sub_15DDC70(v9, (__int64)"class templates, function templates, and variable templates");
  }
  sub_15F7200(v11);
  return 0;
}
