/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: str2user
// Address: 0x00070B28

//----- (00070B28) --------------------------------------------------------
unsigned int __fastcall str2user(unsigned int a1, const char *a2, int a3)
{
  unsigned __int8 *v5; // r1
  unsigned __int8 *v7; // [sp+4h] [bp-10h] BYREF
  int v8; // [sp+8h] [bp-Ch]
  int v9; // [sp+Ch] [bp-8h]

  if ( a3 < 0 )
  {
    if ( !under_debugger )
      interr(1225);
    __debugbreak();
  }
  if ( a3 )
  {
    v8 = 0;
    v7 = nullptr;
    v9 = 0;
    sub_70968((void **)&v7, a2, -1, a3);
    if ( v8 )
      v5 = v7;
    else
      v5 = (unsigned __int8 *)&byte_B3CBE;
    a1 = qstrncpy(a1, v5, a3);
    if ( v7 )
    {
      v8 = 0;
      qfree(v7);
      v9 = 0;
      v7 = nullptr;
    }
  }
  return a1;
}
// B3CBE: using guessed type char byte_B3CBE;
// E0550: using guessed type char under_debugger;
