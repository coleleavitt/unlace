__int64 __fastcall sub_917E0(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // ebp
  __int64 v4; // rsi
  unsigned int v5; // eax

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 32LL))(*(_QWORD *)(a1 + 16));
  if ( !(_BYTE)v1 )
    return 0;
  v2 = v1;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  memset(
    (void *)((a1 + 32) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((_DWORD)a1 + 24 - (((_DWORD)a1 + 32) & 0xFFFFFFF8) + 112) >> 3));
  *(_QWORD *)(a1 + 48) = a1 + 136;
  *(_DWORD *)(a1 + 56) = 0x8000;
  v4 = *(unsigned int *)(a1 + 32904);
  if ( !(_DWORD)v4 )
    v4 = 0xFFFFFFFFLL;
  v5 = sub_A2490(a1 + 24, v4, "1.3.1", 112);
  if ( v5 )
  {
    sub_91710(a1, v5);
    return 0;
  }
  return v2;
}

