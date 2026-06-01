_QWORD *__fastcall sub_20D5070(_QWORD *a1, _QWORD *a2)
{
  _BYTE *v2; // r12
  __int64 (__fastcall *v3)(__int64, __int64); // rax
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  size_t v5; // rax
  _BYTE *v6; // r12
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  size_t v9; // rax
  _BYTE *v10; // rdx
  size_t v11; // rax
  size_t v13; // rax
  size_t v14; // rax

  v2 = (_BYTE *)a1[3];
  v3 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
  if ( v3 == sub_20CEB40 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 64LL))(a1[3]);
  else
    v3((__int64)a2, a1[3]);
  if ( (v2[9] & 0xC0) != 0x40 )
  {
    v4 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 24LL);
    if ( v4 == sub_20CEB60 )
      (*(void (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v2 + 72LL))(v2, a2);
    else
      v4((__int64)a2, (__int64)v2);
  }
  v5 = j__strlen(".<");
  sub_20D1ED0(a2, v5, ".<");
  v6 = (_BYTE *)a1[2];
  v7 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
  if ( v7 == sub_20CEB40 )
    (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)v6 + 64LL))(a1[2], a2);
  else
    v7((__int64)a2, a1[2]);
  if ( (v6[9] & 0xC0) != 0x40 )
  {
    v8 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 24LL);
    if ( v8 == sub_20CEB60 )
      (*(void (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v6 + 72LL))(v6, a2);
    else
      v8((__int64)a2, (__int64)v6);
  }
  v9 = j__strlen(" at offset ");
  sub_20D1ED0(a2, v9, " at offset ");
  if ( a1[4] )
  {
    v10 = (_BYTE *)a1[5];
    if ( *v10 == 110 )
    {
      v13 = j__strlen("-");
      sub_20D1ED0(a2, v13, "-");
      sub_20D1ED0(a2, a1[4] - 1LL, (const void *)(a1[5] + 1LL));
    }
    else
    {
      sub_20D1ED0(a2, a1[4], v10);
    }
  }
  else
  {
    v14 = j__strlen("0");
    sub_20D1ED0(a2, v14, "0");
  }
  v11 = j__strlen(">");
  return sub_20D1ED0(a2, v11, ">");
}
