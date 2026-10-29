__int64 __fastcall sub_28C40(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // r13
  __int64 result; // rax
  unsigned __int64 v9; // rax
  int v10; // ebp
  __int64 v11; // r11
  __int64 v14; // r10
  unsigned __int64 v16; // r9
  __int64 alloc; // rax
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // [rsp+0h] [rbp-58h]
  int v23; // [rsp+8h] [rbp-50h]
  int v24; // [rsp+10h] [rbp-48h]

  if ( !a1 )
  {
    _dwarf_error(0, a7, 92);
    return 1;
  }
  v7 = *(_QWORD *)(a1 + 80);
  if ( !v7 || *(_QWORD *)v7 != 3959286781LL )
  {
    _dwarf_error(0, a7, 93);
    return 1;
  }
  v9 = *(_QWORD *)(a1 + 32);
  v10 = a2;
  if ( a2 < v9 || a2 >= *(_QWORD *)(a1 + 48) + v9 )
  {
    _dwarf_error(*(_QWORD *)(a1 + 80), a7, 97);
    return 1;
  }
  v11 = *(_QWORD *)(a1 + 24);
  v14 = a5;
  if ( *(_QWORD *)(v11 + 72) )
    goto LABEL_9;
  if ( *(_QWORD *)(v11 + 56) < *(_QWORD *)(v11 + 40)
                             + *(_QWORD *)v11
                             + *(unsigned __int16 *)(v11 + 90)
                             + (unsigned __int64)*(unsigned __int16 *)(v11 + 88) )
  {
    _dwarf_error(*(_QWORD *)(a1 + 80), a7, 339);
    return 1;
  }
  v24 = *(_DWORD *)(v11 + 40) + *(_DWORD *)v11 + *(unsigned __int16 *)(v11 + 90) + *(unsigned __int16 *)(v11 + 88);
  v23 = *(_QWORD *)(v11 + 48);
  v22 = *(_QWORD *)(a1 + 24);
  alloc = _dwarf_get_alloc(*(_QWORD *)(a1 + 80), 33, 1);
  *(_QWORD *)(v22 + 72) = alloc;
  if ( !alloc )
  {
    _dwarf_error(v7, a7, 62);
    return 1;
  }
  v18 = *(_QWORD *)(alloc + 72);
  v19 = *(_QWORD *)(v7 + 8312);
  v20 = *(_QWORD *)(alloc + 80);
  if ( v18 )
  {
    v21 = 0;
    do
    {
      ++v21;
      *(_QWORD *)(v20 + 8) = v19;
      v20 += 64;
      *(_WORD *)(v20 - 64) = 0;
      *(_QWORD *)(v20 - 48) = 0;
      *(_QWORD *)(v20 - 24) = 0;
      *(_OWORD *)(v20 - 40) = 0;
    }
    while ( v18 != v21 );
    v19 = *(_QWORD *)(v7 + 8312);
    alloc = *(_QWORD *)(v22 + 72);
  }
  *(_QWORD *)(alloc + 16) = v19;
  *(_WORD *)(alloc + 8) = 0;
  *(_QWORD *)(alloc + 24) = 0;
  *(_QWORD *)(alloc + 48) = 0;
  *(_OWORD *)(alloc + 32) = 0;
  result = _dwarf_exec_frame_instr(
             0,
             0,
             0,
             0,
             v23,
             v24,
             *(_QWORD *)(v22 + 72),
             v22,
             (Dwarf_Debug)v7,
             a4,
             a5,
             a6,
             0,
             0,
             a7);
  v11 = v22;
  v14 = a5;
  if ( !(_DWORD)result )
  {
LABEL_9:
    v16 = *(_QWORD *)(a1 + 56)
        + *(_QWORD *)a1
        + *(unsigned __int8 *)(a1 + 105)
        + (unsigned __int64)*(unsigned __int8 *)(a1 + 104);
    if ( *(_QWORD *)(a1 + 72) < v16 )
    {
      _dwarf_error(v7, a7, 340);
      return 1;
    }
    return _dwarf_exec_frame_instr(
             0,
             1,
             v10,
             *(_QWORD *)(a1 + 32),
             *(_QWORD *)(a1 + 64),
             v16,
             a3,
             v11,
             (Dwarf_Debug)v7,
             a4,
             v14,
             a6,
             0,
             0,
             a7);
  }
  return result;
}

