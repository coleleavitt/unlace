__int64 __fastcall sub_20D30B0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  _BYTE *v4; // rbp
  __int64 (__fastcall *v5)(__int64, __int64); // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  _BYTE *v8; // rbp
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  __int64 result; // rax
  __int64 (__fastcall *v11)(__int64, __int64); // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  _BYTE *v14; // rbp
  __int64 (__fastcall *v15)(__int64, __int64); // rax
  size_t v16; // rax

  if ( *(_BYTE *)(a1 + 32) )
  {
    sub_20CFD70((__int64)a2);
    v2 = a2[2];
    v3 = a2[1];
    a2[2] = v2 + 1;
    *(_BYTE *)(v3 + v2) = 91;
    v4 = *(_BYTE **)(a1 + 16);
    v5 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
    if ( v5 == sub_20CEB40 )
      (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)v4 + 64LL))(*(_QWORD *)(a1 + 16), a2);
    else
      v5((__int64)a2, *(_QWORD *)(a1 + 16));
    if ( (v4[9] & 0xC0) != 0x40 )
      (*(void (__fastcall **)(_QWORD *, _BYTE *))(*a2 + 24LL))(a2, v4);
    sub_20CFD70((__int64)a2);
    v6 = a2[2];
    v7 = a2[1];
    a2[2] = v6 + 1;
    *(_BYTE *)(v7 + v6) = 93;
    goto LABEL_7;
  }
  sub_20CFD70((__int64)a2);
  v12 = a2[2];
  v13 = a2[1];
  a2[2] = v12 + 1;
  *(_BYTE *)(v13 + v12) = 46;
  v14 = *(_BYTE **)(a1 + 16);
  v15 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
  if ( v15 == sub_20CEB40 )
    (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)v14 + 64LL))(*(_QWORD *)(a1 + 16), a2);
  else
    v15((__int64)a2, *(_QWORD *)(a1 + 16));
  if ( (v14[9] & 0xC0) == 0x40 )
  {
LABEL_7:
    v8 = *(_BYTE **)(a1 + 24);
    if ( (unsigned __int8)(v8[8] - 81) <= 1u )
      goto LABEL_8;
    goto LABEL_16;
  }
  (*(void (__fastcall **)(_QWORD *, _BYTE *))(*a2 + 24LL))(a2, v14);
  v8 = *(_BYTE **)(a1 + 24);
  if ( (unsigned __int8)(v8[8] - 81) <= 1u )
  {
LABEL_8:
    v9 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
    if ( v9 == sub_20CEB40 )
      goto LABEL_9;
LABEL_17:
    v9((__int64)a2, (__int64)v8);
    result = v8[9] & 0xC0;
    if ( (v8[9] & 0xC0) == 0x40 )
      return result;
    goto LABEL_10;
  }
LABEL_16:
  v16 = j__strlen(" = ");
  sub_20D1ED0(a2, v16, " = ");
  v8 = *(_BYTE **)(a1 + 24);
  v9 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
  if ( v9 != sub_20CEB40 )
    goto LABEL_17;
LABEL_9:
  (*(void (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v8 + 64LL))(v8, a2);
  result = v8[9] & 0xC0;
  if ( (v8[9] & 0xC0) == 0x40 )
    return result;
LABEL_10:
  v11 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 24LL);
  if ( v11 == sub_20CEB60 )
    return (*(__int64 (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v8 + 72LL))(v8, a2);
  else
    return v11((__int64)a2, (__int64)v8);
}
