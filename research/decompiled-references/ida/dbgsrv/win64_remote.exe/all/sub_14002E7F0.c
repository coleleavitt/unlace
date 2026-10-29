/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002E7F0
// Address: 0x000000014002E7F0

//----- (000000014002E7F0) ----------------------------------------------------
char __fastcall sub_14002E7F0(const char *a1, char *a2, void **a3, __int64 a4, char a5)
{
  const char *v9; // rax
  char v10; // bl
  void *Block[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]

  if ( !a2 )
    return 0;
  *(_OWORD *)Block = 0;
  v12 = 0;
  sub_140002FB0((__int64)Block, "static %s(){", a1);
  v9 = sub_14002D4F0(a2);
  if ( v9 )
    sub_140024520((__int64)Block, "%*.*sreturn %s\n;}", (_DWORD)v9 - (_DWORD)a2, (_DWORD)v9 - (_DWORD)a2, a2, v9);
  else
    sub_140024520((__int64)Block, "%s\n;}", a2);
  v10 = sub_140035620((__int64)Block[0], a3, a4, a5);
  if ( Block[0] )
  {
    Block[1] = nullptr;
    j_free(Block[0]);
  }
  return v10;
}
