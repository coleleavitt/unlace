/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45CD10
// Address: 0x0045CD10

//----- (0045CD10) --------------------------------------------------------
int __usercall sub_45CD10@<eax>(int a1@<ebx>, int a2@<edi>, __m128i a3@<xmm0>, LPCCH lpMultiByteStr, int a5, int a6)
{
  int v6; // esi
  unsigned __int16 *v7; // eax
  LPWSTR v9; // [esp+8h] [ebp-24h] BYREF
  unsigned int v10; // [esp+Ch] [ebp-20h]
  int v11; // [esp+10h] [ebp-1Ch]
  unsigned __int16 *v12; // [esp+14h] [ebp-18h] BYREF
  int v13; // [esp+18h] [ebp-14h]
  int v14; // [esp+1Ch] [ebp-10h]
  int v15; // [esp+28h] [ebp-4h]

  v12 = nullptr;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  if ( sub_45AAC0((int)&v12, a5, -1) )
  {
    sub_4579C0(&v9, lpMultiByteStr);
    LOBYTE(v15) = 2;
    if ( v10 <= 1 )
    {
      v6 = 0;
    }
    else
    {
      v7 = (unsigned __int16 *)&dword_48A0F4;
      if ( v13 )
        v7 = v12;
      v6 = sub_4751B9(a1, a2, a3, v9, v7, a6);
    }
    LOBYTE(v15) = 3;
    if ( v9 )
    {
      v10 = 0;
      sub_453A20(v9);
      v9 = nullptr;
      v11 = 0;
    }
  }
  else
  {
    v6 = 0;
  }
  v15 = 4;
  if ( v12 )
  {
    v13 = 0;
    sub_453A20(v12);
  }
  return v6;
}
// 45CD94: conditional instruction was optimized away because %var_20.4>=2u
// 48A0F4: using guessed type int dword_48A0F4;
