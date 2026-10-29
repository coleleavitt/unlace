__int64 __fastcall sub_E4A0B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 (__fastcall *v4)(); // rax
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(); // r8

  *(_BYTE *)(a2 + 96) = 1;
  v3 = *(_QWORD *)(a2 + 112);
  v4 = *(__int64 (__fastcall **)())(*(_QWORD *)v3 + 288LL);
  if ( v4 != sub_E4A0B0 )
    goto LABEL_11;
  *(_BYTE *)(v3 + 96) = 1;
  v5 = *(_QWORD *)(v3 + 112);
  v6 = *(__int64 (__fastcall **)())(*(_QWORD *)v5 + 288LL);
  if ( v6 != v4 )
    goto LABEL_10;
  *(_BYTE *)(v5 + 96) = 1;
  v3 = *(_QWORD *)(v5 + 112);
  v4 = *(__int64 (__fastcall **)())(*(_QWORD *)v3 + 288LL);
  if ( v4 != v6 )
    goto LABEL_11;
  *(_BYTE *)(v3 + 96) = 1;
  v5 = *(_QWORD *)(v3 + 112);
  v6 = *(__int64 (__fastcall **)())(*(_QWORD *)v5 + 288LL);
  if ( v6 != v4 )
    goto LABEL_10;
  *(_BYTE *)(v5 + 96) = 1;
  v3 = *(_QWORD *)(v5 + 112);
  v4 = *(__int64 (__fastcall **)())(*(_QWORD *)v3 + 288LL);
  if ( v4 != v6 )
    goto LABEL_11;
  *(_BYTE *)(v3 + 96) = 1;
  v5 = *(_QWORD *)(v3 + 112);
  v6 = *(__int64 (__fastcall **)())(*(_QWORD *)v5 + 288LL);
  if ( v6 != v4 )
  {
LABEL_10:
    ((void (__fastcall *)(__int64, __int64, __int64))v6)(a1, v5, a3);
    return a1;
  }
  *(_BYTE *)(v5 + 96) = 1;
  v3 = *(_QWORD *)(v5 + 112);
  v4 = *(__int64 (__fastcall **)())(*(_QWORD *)v3 + 288LL);
  if ( v4 == v6 )
  {
    *(_BYTE *)(v3 + 96) = 1;
    v5 = *(_QWORD *)(v3 + 112);
    v6 = *(__int64 (__fastcall **)())(*(_QWORD *)v5 + 288LL);
    if ( v6 == v4 )
    {
      *(_BYTE *)(v5 + 96) = 1;
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(**(_QWORD **)(v5 + 112) + 288LL))(
        a1,
        *(_QWORD *)(v5 + 112),
        a3);
      return a1;
    }
    goto LABEL_10;
  }
LABEL_11:
  ((void (__fastcall *)(__int64, __int64, __int64))v4)(a1, v3, a3);
  return a1;
}

