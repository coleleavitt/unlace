void __fastcall sub_ECA2C0(__int64 a1, __int64 a2)
{
  _BOOL8 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // ebp
  void *v5; // [rsp+8h] [rbp-28h] BYREF
  unsigned int v6; // [rsp+10h] [rbp-20h]

  if ( ((*(_BYTE *)(a1 + 1) >> 1) & 7) == 1 )
  {
    v2 = (*(_QWORD *)a1 & 0x4000) != 0;
    if ( (**(_DWORD **)(a1 + 8 * (v2 + ((*(_QWORD *)a1 & 0x2000) != 0)) + 16) & 0x20000) == 0 )
    {
      v3 = ((*(_QWORD *)a1 & 0x4000) != 0) + ((*(_QWORD *)a1 & 0x2000) != 0);
      sub_C19F20((__int64)&v5, *(_QWORD *)(a1 + 8 * v3 + 16), a2, 0, v2, v3);
      v4 = v6;
      if ( v6 > 0x40 )
        sub_21E2A40(&v5);
      if ( v4 > 0x40 )
      {
        if ( v5 )
          operator delete[](v5);
      }
    }
  }
}

