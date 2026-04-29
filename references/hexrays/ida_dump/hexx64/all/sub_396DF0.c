__int64 __fastcall sub_396DF0(__int64 a1, char a2, double a3)
{
  __int64 v5; // rdi
  int v6; // eax
  int v7; // edx
  int v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r13
  __int64 v13; // rdi
  int v14; // edx
  unsigned int v15; // eax
  int v16; // eax
  __m128i v17; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  sub_38B490(a1, 0);
  if ( !a2 )
  {
    if ( **(_QWORD **)(a1 + 88) != -1 )
    {
      v5 = *(_QWORD *)(a1 + 24);
      v17.m128i_i64[0] = **(_QWORD **)(a1 + 88);
      v17.m128i_i32[2] = 0;
      v6 = sub_137670(v5, (__int64)&v17);
      v7 = 0;
      v8 = v6;
      if ( (v6 & 7) != 0 )
        goto LABEL_5;
    }
    return 0;
  }
  v12 = sub_38C590(a1);
  if ( !v12 )
    return 0;
  if ( **(_QWORD **)(a1 + 88) == -1 )
    return 0;
  v13 = *(_QWORD *)(a1 + 24);
  v17.m128i_i64[0] = **(_QWORD **)(a1 + 88);
  v17.m128i_i32[2] = 0;
  v8 = sub_137670(v13, (__int64)&v17);
  v14 = v8 & 7;
  if ( v14 == 1 )
    return 0;
  v15 = v14 - 2;
  v7 = v14 - 1;
  if ( v15 > 2 )
  {
    if ( *(_DWORD *)(a1 + 80) == 1 )
    {
      v16 = (*(_BYTE *)(v12 + 5) & 8) != 0
          ? *(_DWORD *)(v12 + 36)
          : get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(a1 + 88) + 48LL), 0);
      if ( v16 > 1 )
      {
        v7 = 1;
        if ( v16 != 2 )
        {
          v7 = 2;
          if ( v16 > 4 )
            v7 = (v16 > 8) + 3;
        }
        goto LABEL_5;
      }
    }
    return 0;
  }
LABEL_5:
  sub_141B70(*(_QWORD *)(a1 + 24), &v17, v8 & 0xFFFFFFF8 | v7);
  sub_2B81A0(
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 1496LL),
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL),
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 1344LL));
  sub_395A90(a1, 0, a3, v9, v10, v11);
  return 1;
}
