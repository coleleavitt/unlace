__int64 __fastcall sub_20D2E80(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  _BYTE *v4; // rbp
  __int64 (__fastcall *v5)(__int64, __int64); // rax
  __int64 (__fastcall *v6)(__int64, __int64); // rax
  size_t v7; // rax
  _BYTE *v8; // rbp
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  _BYTE *v13; // rbp
  __int64 (__fastcall *v14)(__int64, __int64); // rax
  __int64 result; // rax
  __int64 (__fastcall *v16)(__int64, __int64); // rax
  size_t v17; // rax

  sub_20CFD70((__int64)a2);
  v2 = a2[2];
  v3 = a2[1];
  a2[2] = v2 + 1;
  *(_BYTE *)(v3 + v2) = 91;
  v4 = (_BYTE *)a1[2];
  v5 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
  if ( v5 == sub_20CEB40 )
    (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)v4 + 64LL))(a1[2], a2);
  else
    v5((__int64)a2, a1[2]);
  if ( (v4[9] & 0xC0) != 0x40 )
  {
    v6 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 24LL);
    if ( v6 == sub_20CEB60 )
      (*(void (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v4 + 72LL))(v4, a2);
    else
      v6((__int64)a2, (__int64)v4);
  }
  v7 = j__strlen(" ... ");
  sub_20D1ED0(a2, v7, " ... ");
  v8 = (_BYTE *)a1[3];
  v9 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
  if ( v9 == sub_20CEB40 )
    (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)v8 + 64LL))(a1[3], a2);
  else
    v9((__int64)a2, a1[3]);
  if ( (v8[9] & 0xC0) != 0x40 )
  {
    v10 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 24LL);
    if ( v10 == sub_20CEB60 )
      (*(void (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v8 + 72LL))(v8, a2);
    else
      v10((__int64)a2, (__int64)v8);
  }
  sub_20CFD70((__int64)a2);
  v11 = a2[2];
  v12 = a2[1];
  a2[2] = v11 + 1;
  *(_BYTE *)(v12 + v11) = 93;
  v13 = (_BYTE *)a1[4];
  if ( (unsigned __int8)(v13[8] - 81) > 1u )
  {
    v17 = j__strlen(" = ");
    sub_20D1ED0(a2, v17, " = ");
    v13 = (_BYTE *)a1[4];
    v14 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
    if ( v14 == sub_20CEB40 )
      goto LABEL_13;
  }
  else
  {
    v14 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
    if ( v14 == sub_20CEB40 )
    {
LABEL_13:
      (*(void (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v13 + 64LL))(v13, a2);
      goto LABEL_14;
    }
  }
  v14((__int64)a2, (__int64)v13);
LABEL_14:
  result = v13[9] & 0xC0;
  if ( (v13[9] & 0xC0) != 0x40 )
  {
    v16 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 24LL);
    if ( v16 == sub_20CEB60 )
      return (*(__int64 (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v13 + 72LL))(v13, a2);
    else
      return v16((__int64)a2, (__int64)v13);
  }
  return result;
}
