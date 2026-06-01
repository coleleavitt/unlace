__int64 __fastcall sub_1E86B10(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  unsigned __int8 v7; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbp

  if ( !a1[1] )
  {
    v6 = **((_QWORD **)a1 + 1);
    if ( *(_BYTE *)(v6 + 73) >> 5 != 2
      || (sub_7052B0((__int64 *)(*(_QWORD *)(v6 + 104) + 96LL), *(_QWORD *)(v6 + 104), a3, a4, a5, a6),
          (**(_BYTE **)(v6 + 128) & 4) != 0)
      || (v13 = **((_QWORD **)a1 + 1),
          sub_7052B0((__int64 *)(*(_QWORD *)(v13 + 104) + 96LL), *(_QWORD *)(v13 + 104), v9, v10, v11, v12),
          (**(_BYTE **)(v13 + 128) & 0x10) != 0)
      || (v18 = **((_QWORD **)a1 + 1),
          sub_7052B0((__int64 *)(*(_QWORD *)(v18 + 104) + 96LL), *(_QWORD *)(v18 + 104), v14, v15, v16, v17),
          ((**(_BYTE **)(v18 + 128) >> 1) & 0x14) != 0) )
    {
      v7 = 0;
    }
    else
    {
      v23 = **((_QWORD **)a1 + 1);
      sub_7052B0((__int64 *)(*(_QWORD *)(v23 + 104) + 96LL), *(_QWORD *)(v23 + 104), v19, v20, v21, v22);
      v7 = ((unsigned __int8)((**(_BYTE **)(v23 + 128) >> 1) & 0x3F) >> 5) ^ 1;
    }
    *a1 = v7;
    a1[1] = 1;
  }
  return *a1;
}
