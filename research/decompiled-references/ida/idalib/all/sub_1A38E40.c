unsigned __int64 __fastcall sub_1A38E40(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // rbx
  unsigned __int8 v9; // dl
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v17; // rax

  v6 = *a2;
  if ( a3 == *a2 )
    return 0;
  while ( 1 )
  {
    v7 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
    v8 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v6 & 4) != 0 && v7 )
    {
      *a2 = v7[1];
      v8 = *v7;
    }
    else
    {
      *a2 = 0;
    }
    if ( (*(_WORD *)(v8 + 30) & 0x3FFF & **(_DWORD **)a1) != 0 )
      break;
    v6 = *a2;
    if ( a3 == *a2 )
      return 0;
  }
  if ( **(_BYTE **)(a1 + 8) )
  {
    v17 = sub_1CB3DC0(v8, 1, 1, *(_QWORD *)a1, a5);
    if ( v17 )
      v8 = v17;
  }
  v9 = *(_BYTE *)(v8 + 28) & 0x7F;
  v10 = v9;
  v11 = (unsigned int)v9 - 53;
  if ( (unsigned int)v11 <= 1 || (v12 = (v9 + 52) & 0x7F, (unsigned __int8)v12 <= 1u) )
  {
    v8 = sub_B72ED0(v8);
    v10 = *(_BYTE *)(v8 + 28) & 0x7F;
  }
  if ( (unsigned int)(v10 - 58) > 9 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
  v13 = *(_QWORD *)(v8 + 48);
  if ( v13 )
  {
    v14 = v13 & 0xFFFFFFFFFFFFFFF0LL;
    v15 = v14;
  }
  else
  {
    v14 = sub_A7AA70(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 248LL), v8, v12, v11, a5, a6);
    v15 = v14 & 0xFFFFFFFFFFFFFFF0LL;
  }
  return *(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF8LL
       | ((unsigned __int8)*(_QWORD *)(v15 + 8) | (unsigned __int8)v14) & 7;
}
