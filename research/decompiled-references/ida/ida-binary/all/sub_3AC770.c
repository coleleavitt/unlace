unsigned __int64 __fastcall sub_3AC770(_QWORD *a1, const char *a2, __int64 a3)
{
  __int128 v4; // kr00_16
  __int64 v5; // r12
  __int64 (__fastcall *v6)(_QWORD); // rax
  __int64 v7; // rax
  __int64 (__fastcall *v8)(_QWORD); // rax
  __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64); // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rbp
  double v14; // xmm0_8
  double v15; // xmm0_8
  __int128 v17; // [rsp+0h] [rbp-58h] BYREF
  __int64 v18; // [rsp+10h] [rbp-48h]
  unsigned __int64 v19; // [rsp+18h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v17 = 0;
  v18 = 0;
  sub_3AC5C0((__int64 *)&v17, (__int64)a2, a3);
  v4 = v17;
  v5 = v18;
  v6 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v17 + 16LL);
  if ( v6 == j__tiplace_t__clone )
    v7 = tiplace_t__clone(v17);
  else
    v7 = v6(v17);
  a1[14] = v7;
  v8 = *(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v4 + 1) + 16LL);
  if ( v8 == j__tiplace_t__clone )
    v9 = tiplace_t__clone(*((_QWORD *)&v4 + 1));
  else
    v9 = v8(*((_QWORD *)&v4 + 1));
  a1[15] = v9;
  v10 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL);
  if ( v10 == j__tiplace_t__clone )
    v11 = tiplace_t__clone(v5);
  else
    v11 = v10(v5);
  v12 = a1[13];
  v13 = v11;
  if ( v12 )
  {
    qfree(v12, a2);
    a1[13] = 0;
  }
  if ( v13 )
    a1[13] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v14 = qfree(v4, a2);
  v15 = qfree(*((_QWORD *)&v4 + 1), a2, v14);
  qfree(v5, a2, v15);
  return v19 - __readfsqword(0x28u);
}
