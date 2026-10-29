/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C3CA0
// Address: 0x080C3CA0

//----- (080C3CA0) --------------------------------------------------------
int __cdecl sub_80C3CA0(unsigned int a1)
{
  unsigned int v1; // eax
  unsigned int v2; // edx
  unsigned int v3; // ecx
  int result; // eax
  unsigned int v5; // [esp+0h] [ebp-20h] BYREF
  unsigned int v6; // [esp+10h] [ebp-10h]

  v6 = __readgsdword(0x14u);
  if ( a1 > 0x7F )
  {
    sub_80C3B50(&v5, a1);
    v3 = HIWORD(v5);
    if ( BYTE2(v5) > 1u )
    {
      v2 = a1 - 8232;
      if ( a1 - 8232 > 1 && (_WORD)v5 != 290 && (_WORD)v5 != 270 )
      {
        v1 = a1 - 8206;
        if ( a1 - 8206 > 1 && a1 != 1564 )
          goto LABEL_5;
      }
    }
  }
  else
  {
    v1 = dword_80E9AE0[a1];
    v2 = HIWORD(v1);
    v3 = HIWORD(v1);
    if ( BYTE2(v1) > 1u && (_WORD)v1 != 270 && (_WORD)v1 != 290 )
    {
LABEL_5:
      LOBYTE(v1) = a1 - 8234 > 4;
      LOBYTE(v2) = (_BYTE)v3 != 5;
      result = v2 & v1;
      goto LABEL_8;
    }
  }
  result = 0;
LABEL_8:
  if ( v6 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 80E9AE0: using guessed type int dword_80E9AE0[];
