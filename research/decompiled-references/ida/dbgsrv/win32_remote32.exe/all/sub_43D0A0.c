/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43D0A0
// Address: 0x0043D0A0

//----- (0043D0A0) --------------------------------------------------------
int __userpurge sub_43D0A0@<eax>(int a1@<ecx>, int a2@<ebx>, int a3, unsigned int a4)
{
  int *v4; // edi
  int v5; // esi
  int v6; // esi
  const char *v7; // edi
  int v8; // esi
  unsigned int v9; // eax
  double v11; // [esp-4h] [ebp-60h]
  char v12[8]; // [esp+Ch] [ebp-50h] BYREF
  __int128 v13; // [esp+14h] [ebp-48h] BYREF
  int v14; // [esp+24h] [ebp-38h]
  char v15; // [esp+2Bh] [ebp-31h]
  _DWORD v16[8]; // [esp+2Ch] [ebp-30h] BYREF
  int v17; // [esp+58h] [ebp-4h]

  v14 = a1;
  v4 = (int *)(a1 + 168);
  sub_408C10((int *)(a1 + 168), (_DWORD *)&v13 + 1, &a4);
  v5 = HIDWORD(v13);
  if ( *(_BYTE *)(HIDWORD(v13) + 13) || a4 < *(_DWORD *)(HIDWORD(v13) + 16) )
    v5 = *v4;
  if ( v5 == *v4 )
    return 0;
  v12[0] = 2;
  v13 = 0;
  LODWORD(v13) = 0;
  LODWORD(v11) = a4;
  v17 = 0;
  sub_453D50((__m128i)0LL, v16, 32, "__lc%a", v11);
  v6 = v5 + 20;
  sub_439DD0();
  sub_439E90(v14, a3);
  if ( *(_BYTE *)(v6 + 248) )
    goto LABEL_8;
  v15 = sub_428A70(a2, (__m128i)0LL, (const char *)v16, *(char **)(v6 + 4), 0, 0, 1);
  if ( v15 )
  {
    *(_BYTE *)(v6 + 248) = 1;
LABEL_8:
    v15 = sub_4235F0(a2, v12, (char *)v16, nullptr, 0, 0, 0);
  }
  sub_439DE0();
  if ( !v15 )
  {
    v7 = (const char *)sub_45C9A0(0);
    v8 = sub_45C960(0);
    v9 = sub_45C9E0();
    sub_446A20(*(_DWORD *)(v14 + 200), a4, v9, v8, v7);
    v6 = 0;
LABEL_12:
    v17 = 2;
    sub_423B70((int)v12);
    return v6;
  }
  sub_4246D0(a2, (int)v4, v12);
  if ( !(_QWORD)v13 )
    goto LABEL_12;
  v17 = 3;
  sub_423B70((int)v12);
  return 0;
}
// 43D124: variable 'v11' is possibly undefined
