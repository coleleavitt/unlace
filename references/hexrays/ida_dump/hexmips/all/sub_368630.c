__int64 __fastcall sub_368630(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v5; // r14
  unsigned int v6; // eax
  unsigned int v7; // ebx
  int v9; // edx
  int v10; // eax
  __int16 v11[12]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 64);
  v12 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(v3 + 1504);
  v6 = sub_368530(a2, (unsigned int *)v5, a3);
  if ( (_BYTE)v6 )
    return 1;
  v7 = v6;
  if ( (*(_BYTE *)(v5 + 50) & 2) != 0 && (get_tinfo_property(*a3, 2) & 0xF) == 9 )
  {
    v9 = *(_DWORD *)(a2 + 36);
    v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL) + 80LL);
    if ( v9 < v10 )
    {
      if ( v9 != 4 || v10 != 8 )
      {
        if ( !under_debugger )
          sub_37E160(51946);
        BUG();
      }
      sub_11F840((__int64)v11, (unsigned __int8 *)(a2 + 64));
      sub_128B10(v11, v5, 1);
      sub_9F040(a1, a2, 61, 0, 0, (__int64)v11);
      sub_118BA0((__int64)v11);
      return 1;
    }
  }
  return v7;
}
