/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002B810
// Address: 0x000000014002B810

//----- (000000014002B810) ----------------------------------------------------
char __fastcall sub_14002B810(const char *a1, __int64 a2, char *a3, void **a4)
{
  const char *v7; // rax
  char v8; // bl
  _QWORD v9[2]; // [rsp+30h] [rbp-38h] BYREF
  void *Block[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]

  if ( !a3 )
    return 0;
  v9[0] = &off_140094B80;
  v9[1] = a2;
  *(_OWORD *)Block = 0;
  v11 = 0;
  sub_140002FB0((__int64)Block, "static %s(){", a1);
  v7 = sub_14002D4F0(a3);
  if ( v7 )
    sub_140024520((__int64)Block, "%*.*sreturn %s\n;}", (_DWORD)v7 - (_DWORD)a3, (_DWORD)v7 - (_DWORD)a3, a3, v7);
  else
    sub_140024520((__int64)Block, "%s\n;}", a3);
  v8 = sub_140035620((__int64)Block[0], a4, (__int64)v9, 0);
  if ( Block[0] )
  {
    Block[1] = nullptr;
    j_free(Block[0]);
  }
  return v8;
}
// 140094B80: using guessed type _UNKNOWN *off_140094B80;
