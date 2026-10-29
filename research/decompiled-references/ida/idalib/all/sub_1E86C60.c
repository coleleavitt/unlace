_BOOL8 __fastcall sub_1E86C60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  _BOOL8 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9

  sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), a3, a4, a5, a6);
  v9 = *(_QWORD *)(a1 + 128);
  result = 1;
  if ( (*(_BYTE *)(v9 + 6) & 8) == 0 )
  {
    sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v9, v6, v7, v8);
    if ( ((**(_BYTE **)(a1 + 128) & 1) != 0
       || (sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v11, v12, v13, v14),
           v15 = *(_QWORD *)(a1 + 128),
           (*(_BYTE *)(v15 + 9) & 1) != 0)
       || (*(_BYTE *)(v15 + 10) & 0x20) != 0 && !(unsigned __int8)sub_B96D80(a1))
      && ((sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v11, v12, v13, v14),
           (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) & 8) == 0)
       || (sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v16, v17, v18, v19),
           (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 9LL) & 1) != 0)) )
    {
      return 0;
    }
    else
    {
      sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v11, v12, v13, v14);
      return (*(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) & 0x80) == 0;
    }
  }
  return result;
}
