/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: str2user
// Address: 0x0009B9D0

//----- (0009B9D0) --------------------------------------------------------
unsigned int __cdecl str2user(unsigned int a1, const char *a2, int a3)
{
  unsigned int v3; // esi
  char *v4; // eax
  char *v6; // [esp+18h] [ebp-24h] BYREF
  int v7; // [esp+1Ch] [ebp-20h]
  int v8; // [esp+20h] [ebp-1Ch]
  unsigned int v9; // [esp+28h] [ebp-14h]

  v9 = __readgsdword(0x14u);
  if ( a3 < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1225);
    BUG();
  }
  v3 = a1;
  if ( a3 )
  {
    v6 = nullptr;
    v7 = 0;
    v8 = 0;
    sub_9B790((int)&v6, a2, -1, a3);
    if ( v7 )
      v4 = v6;
    else
      v4 = byte_EF875;
    v3 = qstrncpy(a1, (int)v4, a3);
    if ( v6 )
    {
      v7 = 0;
      qfree(v6);
      v6 = nullptr;
      v8 = 0;
    }
  }
  return v3;
}
// 13E34C: using guessed type int under_debugger;
