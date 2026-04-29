__int64 __fastcall sub_1409B0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r9d
  __int64 v10; // rbx
  unsigned int i; // ebp
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rbx
  unsigned int v24; // [rsp+Ch] [rbp-5Ch] BYREF
  __int64 v25[11]; // [rsp+10h] [rbp-58h] BYREF

  v25[5] = __readfsqword(0x28u);
  v24 = 0;
  sub_1406F0((__int64 *)a1, (__int128 *)(a2 & 1), (unsigned __int64)&v24, a4, a5, a6);
  if ( (a2 & 6) != 0 && (~*(_WORD *)a1 & 0x5000) == 0 && (BYTE1(*(_DWORD *)a1) & 0x80u) == 0 )
  {
    if ( (unsigned __int8)sub_66530(a1) )
      ++v24;
    v10 = *(_QWORD *)(a1 + 520);
    for ( i = v24; v10; v24 = i )
    {
      if ( (*(_DWORD *)(v10 + 24) & 0x600) != 0x200 )
        i += sub_A3B50(v10, 0, v6, v7, v8, v9);
      v10 = *(_QWORD *)(v10 + 8);
    }
    if ( (unsigned __int8)sub_21E2C0(a1, a2) )
    {
      if ( (~*(_DWORD *)a1 & 0x8020) == 0 )
      {
        v20 = *(unsigned int *)(a1 + 64);
        v21 = (unsigned int)(v20 - 1);
        if ( !(_DWORD)v20 )
          sub_130C70(a1, a2, v20, v12, v13, v14);
        v22 = *(_QWORD *)(a1 + 528);
        v23 = *(_QWORD *)(v22 + 8 * v21);
        sub_60C00((__int64 *)(a1 + 360), (__int64 *)(v23 + 160), v22, v12, v13, v14);
        sub_313AE0(a1 + 376, v23 + 176);
      }
      ++v24;
      memset(&v25[1], 0, 32);
      v25[0] = (__int64)&off_4CAC08;
      sub_11BFA0(a1, v25);
      v18 = *(_QWORD *)(a1 + 784);
      if ( v18 )
        *(_DWORD *)(v18 + 48) = 63;
      sub_1406F0((__int64 *)a1, (__int128 *)&byte_1, (unsigned __int64)&v24, v15, v16, v17);
    }
  }
  return v24;
}
