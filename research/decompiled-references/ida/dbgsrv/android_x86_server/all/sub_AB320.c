/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AB320
// Address: 0x000AB320

//----- (000AB320) --------------------------------------------------------
int __cdecl sub_AB320(__int64 a1, int a2)
{
  int v2; // edi
  unsigned int v3; // ecx
  __int64 v4; // rax
  int v5; // esi
  unsigned int v6; // ebx
  int v7; // edi
  __int64 v8; // rax
  int v9; // ecx
  int v10; // esi
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // edi
  int v15; // edi
  int v16; // ecx
  unsigned int v18; // [esp+4h] [ebp-28h]
  int v19; // [esp+4h] [ebp-28h]
  unsigned int v20; // [esp+Ch] [ebp-20h]
  int v21; // [esp+Ch] [ebp-20h]
  size_t v22; // [esp+10h] [ebp-1Ch]
  unsigned int v23; // [esp+14h] [ebp-18h]
  int v24; // [esp+18h] [ebp-14h]

  if ( a2 < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1225);
    BUG();
  }
  v2 = *(_DWORD *)(a1 + 20);
  if ( v2 < 0 )
    return 0;
  v4 = *(_QWORD *)(a1 + 16) + (unsigned int)a2;
  v3 = HIDWORD(v4);
  v18 = *(_DWORD *)(a1 + 16);
  if ( v4 < __SPAIR64__(v2, v18) )
    return 0;
  v22 = a2;
  v6 = *(_DWORD *)(a1 + 32);
  if ( !v6 )
  {
    v5 = (***(int (__cdecl ****)(_DWORD, unsigned int, int, _DWORD, int))(a1 + 4))(
           *(_DWORD *)(a1 + 4),
           v18,
           v2,
           HIDWORD(a1),
           a2);
    v22 = v5;
    if ( v5 >= 0 )
      goto LABEL_32;
    return v5;
  }
  v23 = *(_DWORD *)(a1 + 8);
  v20 = *(_DWORD *)(a1 + 12);
  if ( __SPAIR64__(v20, v23) < v4 )
  {
    v5 = 0;
    if ( __SPAIR64__(v2, v18) >= __SPAIR64__(v20, v23) )
      return v5;
    v22 = v23 - v18;
    LODWORD(v4) = *(_DWORD *)(a1 + 8);
    v3 = *(_DWORD *)(a1 + 12);
  }
  v7 = (__int64)(v6 + __PAIR64__(v3, v4) - 1) / v6;
  if ( (int)(*(_QWORD *)(a1 + 16) / (unsigned __int64)v6) > v7 )
  {
    v8 = a1;
    v9 = *(_DWORD *)(a1 + 16);
    goto LABEL_31;
  }
  v10 = *(_QWORD *)(a1 + 16) / (unsigned __int64)v6;
  v11 = -1;
  HIDWORD(v8) = HIDWORD(a1);
  v24 = v7;
  do
  {
    v19 = v10;
    if ( v10 == v7
      || (v12 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 24) + ((unsigned int)v10 >> 3)), _bittest(&v12, v10 & 7)) )
    {
      if ( v11 == -1 )
        goto LABEL_25;
      v13 = v11 * *(_DWORD *)(a1 + 32);
      v14 = v10 * *(_DWORD *)(a1 + 32);
      if ( *(_QWORD *)(a1 + 8) < (__int64)(unsigned int)v14 )
        v14 = *(_DWORD *)(a1 + 8);
      v15 = v14 - v13;
      v5 = -1;
      if ( v15 < 0 )
        return v5;
      v21 = v11;
      if ( (***(int (__cdecl ****)(_DWORD, int, _DWORD, int, int))(a1 + 4))(
             *(_DWORD *)(a1 + 4),
             v13,
             0,
             v13 + *(_DWORD *)(a1 + 28),
             v15) != v15 )
        return v5;
      v11 = -1;
      v10 = v19;
      if ( v21 < v19 )
      {
        v16 = v21;
        do
        {
          *(_BYTE *)(*(_DWORD *)(a1 + 24) + ((unsigned int)v16 >> 3)) |= 1 << (v16 & 7);
          v10 = v19;
          ++v16;
        }
        while ( v16 < v19 );
        HIDWORD(v8) = HIDWORD(a1);
        v7 = v24;
LABEL_25:
        v11 = -1;
        goto LABEL_29;
      }
      HIDWORD(v8) = HIDWORD(a1);
      v7 = v24;
    }
    else if ( v11 == -1 )
    {
      v11 = v10;
    }
LABEL_29:
    ++v10;
  }
  while ( v10 <= v7 );
  LODWORD(v8) = a1;
  v9 = *(_DWORD *)(a1 + 16);
LABEL_31:
  memcpy((void *)HIDWORD(v8), (const void *)(*(_DWORD *)(v8 + 28) + v9), v22);
LABEL_32:
  v5 = v22;
  *(_QWORD *)(a1 + 16) += v22;
  return v5;
}
// 13ABA8: using guessed type int (__cdecl *stru_13ABA8)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 13E34C: using guessed type int under_debugger;
