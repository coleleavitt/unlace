/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C290
// Address: 0x0008C290

//----- (0008C290) --------------------------------------------------------
int __cdecl sub_8C290(_DWORD *a1, int a2)
{
  _DWORD *v2; // esi
  int result; // eax
  _DWORD *v4; // edi
  int v5; // eax
  int v6; // esi
  int v7; // esi
  int v8; // eax
  int v9; // eax
  int v10; // [esp+8h] [ebp-44h]
  int v11; // [esp+8h] [ebp-44h]
  _DWORD *v12; // [esp+Ch] [ebp-40h]
  void **v13; // [esp+18h] [ebp-34h] BYREF
  int v14[3]; // [esp+20h] [ebp-2Ch] BYREF
  __int64 v15; // [esp+2Ch] [ebp-20h]
  char v16; // [esp+34h] [ebp-18h]
  unsigned int v17; // [esp+38h] [ebp-14h]

  v17 = __readgsdword(0x14u);
  v2 = (_DWORD *)a1[41];
  result = -1;
  if ( !v2 )
    return result;
  v4 = a1 + 41;
  do
  {
    if ( v2[4] >= a2 )
      v4 = v2;
    v2 = (_DWORD *)v2[v2[4] < a2];
  }
  while ( v2 );
  if ( v4 == a1 + 41 )
    return -1;
  if ( v4[4] > a2 )
    return -1;
  v5 = v4[6];
  if ( !v5 )
    return -1;
  v6 = 3 * (v5 - 1);
  v10 = v4[5];
  v12 = (_DWORD *)(v10 + 24 * (v5 - 1));
  if ( !(*(unsigned __int8 (__cdecl **)(_DWORD *, int, _DWORD *))(*a1 + 240))(a1, a2, v12) )
    return -1;
  (*(void (__cdecl **)(_DWORD *, int, _DWORD, _DWORD, _DWORD))(*a1 + 160))(
    a1,
    4,
    *(_DWORD *)(v10 + 8 * v6 + 16),
    a1[53],
    a1[54]);
  if ( *(_BYTE *)(v10 + 8 * v6 + 20)
    && !(*(unsigned __int8 (__cdecl **)(_DWORD *, int, _DWORD, _DWORD, _DWORD))(*a1 + 220))(
          a1,
          a2,
          0,
          *(_DWORD *)(v10 + 8 * v6 + 4),
          *v12) )
  {
    sub_1C9D0((int)a1, "Failed to restore %zu registers!\n", *(_DWORD *)(v10 + 8 * v6 + 4));
    return -1;
  }
  v11 = v4[5];
  v7 = 3 * v4[6];
  sub_8E640(v14, (int *)(v11 + 24 * v4[6] - 24));
  v16 = *(_BYTE *)(v11 + 8 * v7 - 4);
  v15 = *(_QWORD *)(v11 + 8 * v7 - 12);
  v8 = v4[6];
  if ( v8 )
  {
    v9 = v8 - 1;
    v4[6] = v9;
    sub_84B00(v4[5] + 24 * v9);
  }
  sub_84B00((int)v14);
  if ( !v4[6] )
    sub_8E730(&v13, (int)(a1 + 40), v4);
  return 2 * (a1[19] != 0) + 1;
}
