__int64 __fastcall sub_35D9C0(_QWORD *a1, __int64 a2)
{
  __int64 (__fastcall *v3)(_QWORD *, char); // rax
  __int64 v4; // r12
  __int64 v5; // rsi
  __int64 v6; // r14
  unsigned __int64 v7; // r13
  __int64 v9; // rax

  (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(a1, *(_QWORD *)(a1[79] + 32LL), 32);
  v3 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
  if ( v3 != sub_35CB90 )
  {
    v3(a1, 32);
    goto LABEL_5;
  }
  v4 = a1[4];
  if ( v4 )
  {
    v7 = v4 + 1;
    v6 = a1[4];
    v5 = a1[3];
    --v4;
    if ( a1[5] >= v7 )
      goto LABEL_4;
LABEL_7:
    v9 = qvector_reserve(a1 + 3, v5, v7, 1);
    a1[3] = v9;
    v5 = v9;
    goto LABEL_4;
  }
  v5 = a1[3];
  v6 = 1;
  v7 = 2;
  if ( a1[5] < 2u )
    goto LABEL_7;
LABEL_4:
  a1[4] = v7;
  *(_BYTE *)(v5 + v4) = 32;
  *(_BYTE *)(a1[3] + v6) = 0;
LABEL_5:
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 31);
  sub_35D570((__int64)a1, a2);
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 31);
}
