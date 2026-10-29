/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2F160
// Address: 0x0002F160

//----- (0002F160) --------------------------------------------------------
_QWORD *__userpurge sub_2F160@<eax>(_QWORD *a1, int a2, int a3, __int64 a4)
{
  int v4; // eax
  int v5; // ecx
  unsigned int v6; // ecx
  int v7; // edi
  _DWORD *v8; // eax
  int v9; // edi
  int v10; // ecx
  int v11; // esi
  int v12; // eax
  int v13; // ecx
  bool v14; // cc
  int v15; // esi
  _DWORD *v16; // eax
  int v17; // eax
  unsigned int v18; // ecx
  char *v19; // eax
  int v21; // [esp+8h] [ebp-24h]
  _DWORD *v22; // [esp+8h] [ebp-24h]
  int v23; // [esp+Ch] [ebp-20h]
  int v24; // [esp+14h] [ebp-18h]
  int v25; // [esp+18h] [ebp-14h]

  v4 = a3;
  if ( a3 != a2 )
  {
    do
    {
      v21 = v4;
      v5 = -1171354717 * ((HIDWORD(a4) - *(_DWORD *)a4) >> 2);
      v24 = a4;
      if ( HIDWORD(a4) - *(_DWORD *)a4 < 45 )
      {
        v9 = 93 - v5;
        v10 = (93 - v5) / -93;
        v7 = *(_DWORD *)(a4 + 4 * v10) + 44 * (93 * (v9 / 93) - v9) + 4048;
        v8 = (_DWORD *)(a4 + 4 * v10);
      }
      else
      {
        v6 = v5 - 1;
        v7 = *(_DWORD *)(a4 + 4 * (v6 / 0x5D)) + 44 * (v6 % 0x5D);
        v8 = (_DWORD *)(a4 + 4 * (v6 / 0x5D));
      }
      v11 = -1171354717 * ((v7 + 44 - *v8) >> 2);
      v12 = -1171354717 * ((v21 - a2) >> 2);
      v13 = v21 - 44 * v11;
      v14 = v12 <= v11;
      if ( v12 > v11 )
        v12 = v11;
      v25 = v12;
      if ( v14 )
        v13 = a2;
      v23 = v13;
      if ( v21 != v13 )
      {
        v15 = v13 - v21;
        v16 = (_DWORD *)(v21 - 44);
        do
        {
          v22 = v16;
          copy_debug_event(v7, v16);
          v7 -= 44;
          v16 = v22 - 11;
          v15 += 44;
        }
        while ( v15 );
      }
      if ( v25 )
      {
        v17 = (HIDWORD(a4) - *(_DWORD *)a4) >> 2;
        v18 = -1171354717 * v17 - v25;
        if ( -1171354717 * v17 <= v25 )
        {
          LODWORD(a4) = a4 + 4 * ((int)(92 - v18) / -93);
          v19 = (char *)&dword_13BCA8[11 * (93 * ((int)(92 - v18) / 93) - (92 - v18)) - 322358] + *(_DWORD *)a4;
        }
        else
        {
          LODWORD(a4) = a4 + 4 * (v18 / 0x5D);
          v19 = (char *)(*(_DWORD *)(v24 + 4 * (v18 / 0x5D)) + 44 * (v18 % 0x5D));
        }
        HIDWORD(a4) = v19;
      }
      v4 = v23;
    }
    while ( v23 != a2 );
  }
  *a1 = a4;
  return a1;
}
// 13BCA8: using guessed type int dword_13BCA8[6];
