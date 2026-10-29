/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44DC30
// Address: 0x0044DC30

//----- (0044DC30) --------------------------------------------------------
int __userpurge sub_44DC30@<eax>(int a1@<ecx>, __m128i a2@<xmm0>, char *a3, int a4)
{
  int v4; // eax
  int v5; // esi
  _DWORD *v6; // eax
  unsigned int v7; // eax
  int v8; // edx
  const char *v9; // eax
  int v10; // esi
  _DWORD *v13; // [esp+14h] [ebp-38h] BYREF
  int v14; // [esp+18h] [ebp-34h]
  unsigned int v15; // [esp+1Ch] [ebp-30h]
  _DWORD v16[7]; // [esp+20h] [ebp-2Ch] BYREF
  int v17; // [esp+48h] [ebp-4h]

  v13 = nullptr;
  v14 = 0;
  v15 = 0;
  v17 = 0;
  v4 = sub_453E80(a2, nullptr, 0, a3, a4);
  if ( v4 )
  {
    v5 = v4 + 1;
    if ( v4 + 1 <= v15 )
    {
      v6 = v13;
    }
    else
    {
      v6 = sub_453B00((int)&v13, v13, v4 + 1, 1u);
      v13 = v6;
    }
    v14 = v5;
    sub_453E80(a2, v6, v5, a3, a4);
  }
  v7 = sub_453720();
  sub_44D8F0((int)a3, a2, v16, 25, v7, v8, 0);
  v9 = MultiByteStr;
  if ( v14 )
    v9 = (const char *)v13;
  v10 = sub_44D450(a4, a2, "%s [%u] %s", (const char *)v16, *(_DWORD *)(a1 + 88), v9);
  v17 = 1;
  if ( v13 )
  {
    v14 = 0;
    sub_453A20(v13);
  }
  return v10;
}
// 44DCC9: variable 'v8' is possibly undefined
