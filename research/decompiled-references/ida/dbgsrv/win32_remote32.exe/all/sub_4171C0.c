/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4171C0
// Address: 0x004171C0

//----- (004171C0) --------------------------------------------------------
void __cdecl sub_4171C0(_BYTE *a1, int a2, char a3)
{
  char *v3; // eax
  char *v4; // [esp+8h] [ebp-18h] BYREF
  int v5; // [esp+Ch] [ebp-14h]
  int v6; // [esp+10h] [ebp-10h]
  int v7; // [esp+1Ch] [ebp-4h]

  if ( a3 || !sub_45A180(a1) )
  {
    v4 = nullptr;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    if ( sub_402A50((int)&v4, (int)a1, -1, 0) )
    {
      v3 = (char *)MultiByteStr;
      if ( v5 )
        v3 = v4;
      sub_45ACB0((unsigned int)a1, v3, a2);
    }
    v7 = 1;
    if ( v4 )
    {
      v5 = 0;
      sub_453A20(v4);
    }
  }
}
