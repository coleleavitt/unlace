_BOOL8 __fastcall sub_ECBCF0(_WORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r13
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  _BOOL8 result; // rax

  if ( a3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3);
    a2[304] += 24LL;
    v7 = v4;
    v8 = a2[294];
    v9 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( a2[295] >= v9 + 24 && v8 )
      a2[294] = v9 + 24;
    else
      v9 = sub_962430((__int64)(a2 + 294), 24, 24, 3, v5, v6);
    sub_EC5910((_WORD *)v9, 245);
    *(_QWORD *)(v9 + 8) = a3;
    *(_QWORD *)(v9 + 16) = v7;
    result = (*a1 & 0x4000) != 0;
    *(_QWORD *)&a1[4 * result + 8] = v9;
  }
  else
  {
    result = (*a1 & 0x4000) != 0;
    *(_QWORD *)&a1[4 * result + 8] = 0;
  }
  return result;
}

