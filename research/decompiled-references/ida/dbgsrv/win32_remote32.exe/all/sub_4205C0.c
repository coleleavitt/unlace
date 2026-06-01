/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4205C0
// Address: 0x004205C0

//----- (004205C0) --------------------------------------------------------
char __userpurge sub_4205C0@<al>(int a1@<ecx>, int a2@<ebx>, __m128i a3@<xmm0>, char **a4)
{
  int *v5; // eax
  int v6; // eax
  char *v7; // ecx
  unsigned int v8; // eax
  LPVOID *v9; // eax
  const char *v10; // eax
  _BYTE *v11; // ecx
  unsigned int v12; // esi
  unsigned int v13; // eax
  char result; // al
  _BYTE v15[8]; // [esp+Ch] [ebp-50h] BYREF
  __int128 v16; // [esp+14h] [ebp-48h]
  _BYTE v17[8]; // [esp+24h] [ebp-38h] BYREF
  _BYTE *v18; // [esp+2Ch] [ebp-30h] BYREF
  unsigned int v19; // [esp+30h] [ebp-2Ch]
  int v20; // [esp+34h] [ebp-28h]
  char *v21; // [esp+3Ch] [ebp-20h] BYREF
  int v22; // [esp+40h] [ebp-1Ch]
  int v23; // [esp+44h] [ebp-18h]
  char *v24; // [esp+48h] [ebp-14h]
  LPVOID *v25; // [esp+4Ch] [ebp-10h]
  int v26; // [esp+58h] [ebp-4h]
  int v27; // [esp+64h] [ebp+8h]
  unsigned int v28; // [esp+64h] [ebp+8h]
  char v29; // [esp+67h] [ebp+Bh]

  v21 = nullptr;
  v22 = 0;
  v23 = 0;
  v26 = 0;
  v5 = (int *)sub_4208A0((_DWORD *)a1, (int *)&v21);
  if ( v5 )
  {
    result = sub_4207A0(a1, a3, v5, (unsigned int *)&v21, a4);
    goto LABEL_15;
  }
  v6 = *(_DWORD *)(a1 + 12);
  if ( *(_BYTE *)(v6 + 24 * *(_DWORD *)(a1 + 16) - 24) != 2 || dword_4B4094 <= 0 )
  {
    sub_41FBD0((LPVOID *)a1, a2);
    result = 0;
LABEL_15:
    v29 = result;
    goto LABEL_16;
  }
  v25 = *(LPVOID **)(v6 + 24 * *(_DWORD *)(a1 + 16) - 16);
  v7 = *a4;
  *a4 = nullptr;
  v27 = *(_DWORD *)(a1 + 16);
  v8 = *(_DWORD *)(a1 + 40) + 1;
  v24 = v7;
  if ( v8 > *(_DWORD *)(a1 + 44) )
    *(_DWORD *)(a1 + 36) = sub_453B00(a1 + 36, *(void **)(a1 + 36), v8, 4u);
  *(_DWORD *)(*(_DWORD *)(a1 + 36) + 4 * *(_DWORD *)(a1 + 40)) = v27;
  v9 = v25;
  ++*(_DWORD *)(a1 + 40);
  v16 = 0;
  v15[0] = 2;
  LODWORD(v16) = v9;
  LOBYTE(v26) = 1;
  sub_4235A0((LPVOID *)a1, (int)v15);
  v10 = MultiByteStr;
  v25 = (LPVOID *)&v18;
  if ( v22 )
    v10 = v21;
  v11 = nullptr;
  v28 = (unsigned int)v10;
  v17[0] = 7;
  v18 = nullptr;
  v19 = 0;
  v20 = 0;
  LOBYTE(v26) = 2;
  if ( v10 )
  {
    v12 = strlen(v10);
    v13 = v12 + 1;
    if ( v12 != -1 )
    {
      v11 = sub_453B00((int)&v18, nullptr, v12 + 1, 1u);
      v13 = v12 + 1;
      v18 = v11;
    }
    v19 = v13;
    sub_464310((unsigned int)v11, v28, v12);
    v18[v12] = 0;
  }
  LOBYTE(v26) = 3;
  sub_4235A0((LPVOID *)a1, (int)v17);
  v29 = sub_420C30((_DWORD *)a1, a2, v24, nullptr, -dword_4B4094);
  LOBYTE(v26) = 4;
  sub_423B70((int)v17);
  LOBYTE(v26) = 5;
  sub_423B70((int)v15);
  result = v29;
LABEL_16:
  v26 = 8;
  if ( v21 )
  {
    sub_453A20(v21);
    return v29;
  }
  return result;
}
// 4B4094: using guessed type int dword_4B4094;
