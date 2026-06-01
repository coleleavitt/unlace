void __fastcall sub_1D3A500(__int64 a1, __int64 a2, char a3, int a4, __int64 a5)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  unsigned __int64 *v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // r10
  unsigned __int64 v10; // rdx
  __int64 (__fastcall **v11)(); // [rsp+0h] [rbp-28h] BYREF
  int v12; // [rsp+8h] [rbp-20h]
  __int64 v13; // [rsp+10h] [rbp-18h]
  int v14; // [rsp+18h] [rbp-10h]

  v5 = a2;
  if ( a3 )
  {
    if ( (*(_WORD *)a2 & 0x1FF) == 0x16 )
      v5 = *(_QWORD *)(a2 + 24);
    v6 = sub_1D365B0(v5, a4);
    if ( v6 )
    {
      if ( v8 == (*(_DWORD *)(v6 + 68) & 0xFFFFF) )
      {
        v10 = *v7;
        if ( (*v7 & 1) != 0 )
          *v7 = 2
              * ((v10 >> 58 << 57)
               | ~(-1LL << (v10 >> 58)) & (~(-1LL << (v10 >> 58)) & (v10 >> 1) | (1LL << (*(_WORD *)(v6 + 70) >> 4))))
              + 1;
        else
          *(_QWORD *)(*(_QWORD *)v10 + 8LL * ((unsigned __int16)(*(_WORD *)(v6 + 70) >> 4) >> 6)) |= 1LL << (*(_WORD *)(v6 + 70) >> 4);
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v9 + 2320) + 1LL) & 0x40) != 0 )
        sub_1D39F20(v9, *(_QWORD *)(v6 + 48), 1, v8, v7);
    }
  }
  else
  {
    v12 = 16777472;
    v11 = off_2C6ADB0;
    v13 = a5;
    v14 = a4;
    sub_BC97E0((__int64 *)&v11, a2);
  }
}
