/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A390
// Address: 0x000000000003A390

//----- (000000000003A390) ----------------------------------------------------
unsigned __int64 __fastcall sub_3A390(__int64 a1, int a2, int a3)
{
  __int64 v4; // rcx
  __int64 v7; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  __int64 v12; // rdi
  int v13[2]; // [rsp+0h] [rbp-68h] BYREF
  void *ptr; // [rsp+8h] [rbp-60h]
  _DWORD v15[5]; // [rsp+10h] [rbp-58h]
  __int128 v16; // [rsp+24h] [rbp-44h]
  __int128 v17; // [rsp+34h] [rbp-34h]
  int v18; // [rsp+44h] [rbp-24h]
  unsigned __int64 v19; // [rsp+48h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 1040);
  if ( !v4 )
    goto LABEL_8;
  v7 = a1 + 1040;
  do
  {
    if ( *(_DWORD *)(v4 + 32) >= a2 )
      v7 = v4;
    v4 = *(_QWORD *)(v4 + 8LL * (*(_DWORD *)(v4 + 32) < a2));
  }
  while ( v4 );
  if ( v7 != a1 + 1040 && *(_DWORD *)(v7 + 32) <= a2 )
  {
    *(_DWORD *)(v7 + 60) = a3;
    *(_QWORD *)v13 = 0xFFFFFFFFLL;
    ptr = (void *)-1LL;
    LOBYTE(v15[0]) = 0;
    v17 = 0;
    v16 = 0;
    *(_OWORD *)&v15[1] = 0;
    v18 = 0;
    set_debug_event_code((__int64)v13, 4);
    if ( (v15[1] & 0xFFFFFFF) != 2 && (v15[1] & 0xFFFFFFF) != 4 )
    {
      if ( !(_BYTE)under_debugger )
        interr(3296);
      BUG();
    }
    v15[2] = 0;
    v13[0] = *(_DWORD *)(a1 + 1140);
    v13[1] = a2;
    ptr = (void *)-1LL;
    LOBYTE(v15[0]) = 1;
    if ( (v15[1] & 0xFFFFFFF) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 128);
      v10 = 56 * ((*(_QWORD *)(a1 + 136) - v9) >> 3) - 1;
      if ( *(_QWORD *)(a1 + 136) == v9 )
        v10 = *(_QWORD *)(a1 + 136) - v9;
      v11 = *(_QWORD *)(a1 + 152) + *(_QWORD *)(a1 + 160);
      if ( v10 == v11 )
      {
        sub_496D0(a1 + 120);
        v9 = *(_QWORD *)(a1 + 128);
        v11 = *(_QWORD *)(a1 + 160) + *(_QWORD *)(a1 + 152);
      }
      v12 = *(_QWORD *)(v9 + 8 * (v11 / 0x38)) + 72 * (v11 % 0x38);
      *(_QWORD *)v12 = 0xFFFFFFFFLL;
      *(_QWORD *)(v12 + 8) = -1;
      *(_BYTE *)(v12 + 16) = 0;
      *(_DWORD *)(v12 + 20) = 0;
      copy_debug_event(v12, (__int64)v13);
      ++*(_QWORD *)(a1 + 160);
      *(_BYTE *)(a1 + 1228) = 0;
    }
    if ( a3 == 3 )
      sub_3C600(a1, a2);
    free_debug_event((__int64)v13);
  }
  else
  {
LABEL_8:
    sub_390A0((int)"unknown thread %d died\n", (unsigned int)a2);
  }
  return __readfsqword(0x28u);
}
// 158B40: using guessed type __int64 under_debugger;
