__int64 __fastcall sub_1E880D0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  char v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  _BYTE *v22; // rax

  v8 = a3;
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), a3, a4, a5, a6);
  if ( (**(_BYTE **)(a2 + 128) & 0x20) == 0 )
  {
    sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v9, v10, v11, v12);
    if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 9LL) & 0x10) != 0
      || (sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v9, v10, v11, v12),
          (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 9LL) & 0x10) == 0)
      && (sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v9, v10, v11, v12),
          (**(_BYTE **)(a2 + 128) & 4) == 0)
      && (sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v9, v10, v11, v12),
          (**(_BYTE **)(a2 + 128) & 0x10) == 0)
      && (sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v9, v10, v11, v12),
          (**(_BYTE **)(a2 + 128) & 8) == 0)
      && (sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v9, v10, v11, v12),
          v22 = *(_BYTE **)(a2 + 128),
          (*v22 & 0x40) == 0)
      && ((v22[10] & 0x20) == 0 || (unsigned __int8)sub_B96D80(a2)) )
    {
      sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v9, v10, v11, v12);
      if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 4LL) & 0x20) == 0 )
        return 1;
    }
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v9, v10, v11, v12);
  if ( (**(_BYTE **)(a2 + 128) & 0x10) == 0 )
  {
    sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v13, v14, v15, v16);
    if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 4LL) & 0x10) == 0 )
      return 1;
  }
  v17 = sub_1E86DC0(a1, a2, 1, v14, v15, v16, a7, a8);
  v20 = v17;
  if ( v17 && (v8 || !(unsigned __int8)sub_B967A0(v17, a2, v18, v19)) )
    return ((*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 32LL))(v20) + 82) >> 6) ^ 1) & 1;
  else
    return 0;
}
