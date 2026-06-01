__int64 __fastcall sub_F3E540(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9

  sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), a3, a4, a5, a6);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 9LL) & 1) != 0 )
    goto LABEL_2;
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v6, v7, v8, v9);
  if ( (**(_BYTE **)(a1 + 128) & 1) == 0 )
  {
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v6, v7, v8, v9);
    v11 = *(_QWORD *)(a1 + 128);
    if ( (*(_BYTE *)(v11 + 9) & 1) == 0 && ((*(_BYTE *)(v11 + 10) & 0x20) == 0 || (unsigned __int8)sub_B73040(a1)) )
      goto LABEL_2;
  }
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v6, v7, v8, v9);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) & 8) == 0 )
    return 0;
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v12, v13, v14, v15);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 9LL) & 1) == 0 )
  {
LABEL_2:
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v6, v7, v8, v9);
    return *(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) >> 7;
  }
  return 0;
}

