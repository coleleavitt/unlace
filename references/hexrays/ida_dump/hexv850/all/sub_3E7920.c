__int64 __fastcall sub_3E7920(__int64 a1, __int64 a2, double a3)
{
  unsigned int v4; // r12d
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v12[7]; // [rsp+10h] [rbp-38h] BYREF

  v12[1] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 68) != *(_DWORD *)(a1 + 84) )
    return 0;
  if ( *(_BYTE *)(a2 + 32) != 1 )
    return 0;
  if ( **(_DWORD **)(a1 + 536) != *(_DWORD *)(a2 + 40) )
    return 0;
  if ( *(_BYTE *)(a2 + 48) != 4 )
    return 0;
  v7 = *(_QWORD *)(a2 + 56);
  if ( (unsigned int)(*(_DWORD *)v7 - 12) > 1 )
    return 0;
  if ( *(_BYTE *)(v7 + 32) != 10 )
    return 0;
  if ( **(_BYTE **)(v7 + 40) != 6 )
    return 0;
  v8 = (__int64)&v11;
  v9 = v7 + 48;
  v4 = sub_11B1C0((char *)(v7 + 48), &v11, 0);
  if ( !(_BYTE)v4 )
    return 0;
  if ( *(_DWORD *)v7 == 12 )
  {
    v8 = *(unsigned int *)(a1 + 84);
    v9 = -v11;
    v11 = sub_325150(-v11, v8, 0);
  }
  v10 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(get_ph(v9) + 4) != 55 )
  {
    if ( !under_debugger )
      sub_37CFE0(0x291Cu, v8, a3);
    BUG();
  }
  v12[0] = -1;
  sub_CB3B0(0xBB9u, v12, v10);
  if ( v12[0] != -1 && v11 == v12[0] )
  {
    *(_DWORD *)a2 = 4;
    sub_117E50((char *)(a2 + 32), (char *)(v7 + 32));
    sub_1181E0(a2 + 48);
  }
  else
  {
    return 0;
  }
  return v4;
}
