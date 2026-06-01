__int64 __fastcall sub_1E8B740(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r12
  unsigned int v18; // ebp
  __int64 v20; // rsi
  __int64 v21; // rsi
  unsigned __int64 v22; // rax
  __int64 (__fastcall *v23)(__int64); // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  _BYTE *v26; // rbx
  __int64 (__fastcall *v27)(__int64); // rax
  __int64 v28; // rax
  __int64 (__fastcall *v29)(__int64); // rax
  __int64 v30; // rax

  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), a3, a4, a5, a6);
  if ( (**(_BYTE **)(a2 + 128) & 8) != 0
    || (v20 = *(_QWORD *)(a2 + 104),
        sub_7052B0((__int64 *)(v20 + 96), v20, v9, v10, v11, v12),
        (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 9LL) & 4) == 0)
    && !(unsigned __int8)sub_B9C060(a2, v20, v9, v10, v11, v12)
    || (sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v9, v10, v11, v12),
        (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 4LL) & 8) != 0) )
  {
    sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v9, v10, v11, v12);
    if ( (**(_BYTE **)(a2 + 128) & 4) != 0
      || (sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v13, v10, v11, v12),
          (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 4LL) & 4) != 0) )
    {
      v14 = sub_1E86DC0(a1, a2, 0, v10, v11, v12, a7, a8);
      v17 = v14;
      if ( !v14
        || (unsigned __int8)sub_B967A0(v14, a2, v15, v16)
        || (*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 32LL))(v17) + 82) & 0x40) != 0 )
      {
        return 0;
      }
    }
  }
  v21 = a2;
  v18 = sub_1E880D0(a1, a2, 0, v10, v11, v12, a7, a8);
  if ( !(_BYTE)v18 )
    return 0;
  v22 = sub_B97300(a2);
  if ( !v22 )
    return v18;
  v23 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 32LL);
  v26 = (_BYTE *)(v23 == sub_B94CD0 ? sub_B709C0(v22) : v23(v22));
  if ( (unsigned __int8)sub_B967A0((__int64)v26, v21, v24, v25) )
  {
    if ( (v26[83] & 2) == 0 )
      return 0;
    v27 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 32LL);
    v28 = v27 == sub_B94CD0 ? sub_B709C0((__int64)v26) : v27((__int64)v26);
    if ( (*(_BYTE *)(v28 + 82) & 0x40) != 0 )
      return 0;
  }
  v29 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 32LL);
  if ( v29 == sub_B94CD0 )
    v30 = sub_B709C0((__int64)v26);
  else
    v30 = v29((__int64)v26);
  return ((*(_BYTE *)(v30 + 82) >> 6) ^ 1) & 1;
}
