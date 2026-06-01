/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42C7D0
// Address: 0x0042C7D0

//----- (0042C7D0) --------------------------------------------------------
void __cdecl sub_42C7D0(int a1, int a2)
{
  int v2; // ecx
  const CHAR *v3; // eax
  int *v4; // eax
  int *v5; // [esp+8h] [ebp-18h] BYREF
  int v6; // [esp+Ch] [ebp-14h]
  int v7; // [esp+10h] [ebp-10h]
  int v8; // [esp+1Ch] [ebp-4h]

  if ( *(_BYTE *)(a2 + 20) )
  {
    v5 = nullptr;
    v6 = 0;
    v7 = 0;
    v2 = *(_DWORD *)(a2 + 4);
    v8 = 0;
    v3 = MultiByteStr;
    if ( v2 )
      v3 = *(const CHAR **)a2;
    if ( !sub_45AAC0((int)&v5, (int)v3, v2 != 0 ? v2 - 1 : 0) )
    {
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(274);
    }
    v4 = &dword_48A0F4;
    if ( v6 )
      v4 = v5;
    sub_4043A0(a1, (unsigned int)v4, v6 != 0 ? 2 * v6 - 2 : 0);
    v8 = 1;
    if ( v5 )
    {
      v6 = 0;
      sub_453A20(v5);
    }
  }
  else
  {
    sub_40CC20(a1, (unsigned int *)a2);
  }
}
// 48A0F4: using guessed type int dword_48A0F4;
// 4B70F0: using guessed type char byte_4B70F0;
