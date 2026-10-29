/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44BA30
// Address: 0x0044BA30

//----- (0044BA30) --------------------------------------------------------
void __usercall sub_44BA30(int a1@<ebx>, __m128i a2@<xmm0>, char *a3, ...)
{
  int v3; // eax
  int v4; // esi
  _DWORD *v5; // eax
  const CHAR *v6; // esi
  const char *v7; // eax
  _DWORD *v8; // [esp+Ch] [ebp-18h] BYREF
  int v9; // [esp+10h] [ebp-14h]
  unsigned int v10; // [esp+14h] [ebp-10h]
  int v11; // [esp+20h] [ebp-4h]
  va_list va; // [esp+30h] [ebp+Ch] BYREF

  va_start(va, a3);
  v8 = nullptr;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v3 = sub_453E80(a2, nullptr, 0, a3, (int)va);
  if ( v3 )
  {
    v4 = v3 + 1;
    if ( v3 + 1 <= v10 )
    {
      v5 = v8;
    }
    else
    {
      v5 = sub_453B00((int)&v8, v8, v3 + 1, 1u);
      v8 = v5;
    }
    v9 = v4;
    sub_453E80(a2, v5, v4, a3, (int)va);
  }
  v6 = MultiByteStr;
  v7 = MultiByteStr;
  if ( v9 )
    v7 = (const char *)v8;
  sub_44D450(a1, a2, "%s\n", v7);
  if ( v9 )
    LOBYTE(v6) = (_BYTE)v8;
  sub_417C10(&dword_489384, (char)v6);
  v11 = 1;
  if ( v8 )
  {
    v9 = 0;
    sub_453A20(v8);
  }
}
// 417C10: using guessed type _DWORD __cdecl sub_417C10(_DWORD, char);
// 489384: using guessed type int dword_489384;
