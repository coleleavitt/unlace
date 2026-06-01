/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_32FA0
// Address: 0x00032FA0

//----- (00032FA0) --------------------------------------------------------
void __fastcall sub_32FA0(int a1, __int64 *a2, int a3, int a4)
{
  unsigned int v7; // r2
  bool v8; // zf
  const char *v9; // r1
  __int64 v10; // r2
  __int64 v11; // r10
  char *v12; // r1
  void *ptr; // [sp+0h] [bp-14h] BYREF
  int v14; // [sp+4h] [bp-10h]

  v7 = *(_DWORD *)(a3 + 4);
  v8 = (v7 & 0xFFFFFFF9) == 0;
  if ( (v7 & 0xFFFFFFF9) != 0 )
    v8 = (v7 & 0xFFFFFFFD) == 9;
  if ( v8 )
  {
    sub_32F18(&ptr, a1 + 40, v7);
    if ( v14 )
      v9 = (const char *)ptr;
    else
      v9 = (const char *)&dword_8DA5C;
    sub_1700C((int)"Illegal type %s of the string table section\n", v9);
    if ( ptr )
    {
      v14 = 0;
      sub_77E08(ptr);
    }
  }
  else
  {
    v10 = *(_QWORD *)(a3 + 24);
    if ( v10 )
    {
      v11 = *a2;
      if ( *a2 < 1 || !a2[2] )
        goto LABEL_19;
      if ( v10 != v11 )
      {
        if ( a2 == (__int64 *)(a1 + 264) )
          v12 = "dynamic linking ";
        else
          v12 = &byte_8DEAC;
        if ( a4 )
        {
          sub_23388(
            (int)"AUTOHIDE SESSION\nMore than one string table for %ssymbols, using one at offset %08llX",
            (int)v12,
            v10,
            SHIDWORD(v10));
          v10 = *(_QWORD *)(a3 + 24);
LABEL_19:
          *a2 = v10;
          a2[1] = *(_QWORD *)(a3 + 16);
          a2[2] = *(_QWORD *)(a3 + 32);
          return;
        }
        sub_23388(
          (int)"AUTOHIDE SESSION\nMore than one string table for %ssymbols, using one at offset %08llX",
          (int)v12,
          v11,
          SHIDWORD(v11));
      }
    }
    else
    {
      sub_1700C((int)"Illegal offset of the string table section\n", 0);
    }
  }
}
// 8DA5C: using guessed type int dword_8DA5C;
// 8DEAC: using guessed type char byte_8DEAC;
