__int64 __fastcall sub_36D530(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  unsigned int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // eax
  __int16 v10[12]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 64);
  v11 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(v2 + 1504);
  v4 = sub_36D430(a2, (unsigned int *)v3);
  if ( (_BYTE)v4 )
    return 1;
  v5 = v4;
  if ( (*(_BYTE *)(v3 + 50) & 2) != 0 && (get_tinfo_property() & 0xF) == 9 )
  {
    v8 = *(unsigned int *)(a2 + 36);
    v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL) + 80LL);
    if ( (int)v8 < v9 )
    {
      if ( (_DWORD)v8 != 4 || v9 != 8 )
      {
        if ( !under_debugger )
          sub_383060(51946);
        BUG();
      }
      sub_123A40((__int64)v10, (unsigned __int8 *)(a2 + 64), v8, v7);
      sub_12CD10(v10, (unsigned __int64 *)v3, 1);
      sub_A3240(a1, a2, 61, 0, 0, (__int64)v10);
      sub_11CDA0((__int64)v10);
      return 1;
    }
  }
  return v5;
}
