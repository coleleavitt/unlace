__int64 __fastcall sub_56FDA0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  unsigned int v6; // ebp
  void *v7; // rdi
  unsigned __int16 v8; // di
  unsigned __int64 v9; // rax

  v4 = a1 + 1328;
  v6 = *(_DWORD *)(a3 + 8);
  v7 = *(void **)(a1 + 1328);
  if ( *(_DWORD *)(a1 + 1340) < v6 )
  {
    if ( v7 )
      v7 = off_8C52A8(v7, 8LL * v6);
    else
      v7 = off_8C52B8(8LL * v6);
    *(_QWORD *)(a1 + 1328) = v7;
    *(_DWORD *)(a1 + 1340) = v6;
    v6 = *(_DWORD *)(a3 + 8);
  }
  *(_DWORD *)(a1 + 1336) = v6;
  memcpy(v7, *(const void **)a3, 8LL * v6);
  if ( (a2 & 1) != 0 )
    v8 = BYTE1(a2);
  else
    v8 = *(_WORD *)(a2 + 40);
  v9 = sub_56C3B0(v8, v4, 0, *(_QWORD *)(a1 + 1256));
  return sub_56F560(a1, a2, v9);
}
