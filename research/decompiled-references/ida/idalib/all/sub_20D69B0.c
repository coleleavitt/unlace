__int64 __fastcall sub_20D69B0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  int v9; // eax
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  _BYTE *v13; // rbp
  __int64 (__fastcall *v14)(__int64, __int64); // rax
  size_t v15; // rax
  size_t v16; // rax
  size_t v17; // rax
  size_t v18; // rax
  size_t v19; // rax

  ++*((_DWORD *)a2 + 10);
  sub_20CFD70((__int64)a2);
  v3 = a2[2];
  v4 = a2[1];
  a2[2] = v3 + 1;
  *(_BYTE *)(v4 + v3) = 40;
  sub_20D6480((_QWORD *)(a1 + 24), (__int64)a2);
  --*((_DWORD *)a2 + 10);
  sub_20CFD70((__int64)a2);
  v5 = a2[2];
  v6 = a2[1];
  a2[2] = v5 + 1;
  *(_BYTE *)(v6 + v5) = 41;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 24LL);
  if ( v8 == sub_20CEB60 )
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v7 + 72LL))(v7, a2);
  else
    v8((__int64)a2, *(_QWORD *)(a1 + 16));
  v9 = *(_DWORD *)(a1 + 40);
  if ( (v9 & 1) != 0 )
  {
    v18 = j__strlen(" const");
    sub_20D1ED0(a2, v18, " const");
    v9 = *(_DWORD *)(a1 + 40);
  }
  if ( (v9 & 2) != 0 )
  {
    v17 = j__strlen(" volatile");
    sub_20D1ED0(a2, v17, " volatile");
    v9 = *(_DWORD *)(a1 + 40);
  }
  if ( (v9 & 4) == 0 )
  {
    result = *(unsigned __int8 *)(a1 + 44);
    if ( (_BYTE)result != 1 )
      goto LABEL_9;
LABEL_18:
    v16 = j__strlen(" &");
    result = (__int64)sub_20D1ED0(a2, v16, " &");
    goto LABEL_11;
  }
  v15 = j__strlen(" restrict");
  sub_20D1ED0(a2, v15, " restrict");
  result = *(unsigned __int8 *)(a1 + 44);
  if ( (_BYTE)result == 1 )
    goto LABEL_18;
LABEL_9:
  if ( (_BYTE)result == 2 )
  {
    v19 = j__strlen(" &&");
    result = (__int64)sub_20D1ED0(a2, v19, " &&");
  }
LABEL_11:
  if ( *(_QWORD *)(a1 + 48) )
  {
    sub_20CFD70((__int64)a2);
    v11 = a2[2];
    v12 = a2[1];
    a2[2] = v11 + 1;
    *(_BYTE *)(v12 + v11) = 32;
    v13 = *(_BYTE **)(a1 + 48);
    v14 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
    if ( v14 == sub_20CEB40 )
      (*(void (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v13 + 64LL))(v13, a2);
    else
      v14((__int64)a2, (__int64)v13);
    result = v13[9] & 0xC0;
    if ( (v13[9] & 0xC0) != 0x40 )
      return (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*a2 + 24LL))(a2, v13);
  }
  return result;
}
