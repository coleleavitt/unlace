__int64 __fastcall sub_20D7AC0(_QWORD *a1, __int64 a2)
{
  size_t v2; // rax
  _BYTE *v3; // r12
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  size_t v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rdx
  size_t v10; // rax
  _BYTE *v11; // rbp
  __int64 (__fastcall *v12)(__int64, __int64); // rax
  __int64 (__fastcall *v13)(__int64, __int64); // rax
  int v14; // r12d
  size_t v15; // rax
  size_t v16; // rax

  if ( a1[3] )
  {
    v14 = *(_DWORD *)(a2 + 40);
    *(_DWORD *)(a2 + 40) = 0;
    v15 = j__strlen("<");
    sub_20D1ED0((_QWORD *)a2, v15, "<");
    sub_20D6480(a1 + 2, a2);
    v16 = j__strlen(">");
    sub_20D1ED0((_QWORD *)a2, v16, ">");
    *(_DWORD *)(a2 + 40) = v14;
  }
  if ( a1[4] )
  {
    v2 = j__strlen(" requires ");
    sub_20D1ED0((_QWORD *)a2, v2, " requires ");
    v3 = (_BYTE *)a1[4];
    v4 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 16LL);
    if ( v4 == sub_20CEB40 )
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v3 + 64LL))(a1[4], a2);
    else
      v4(a2, a1[4]);
    if ( (v3[9] & 0xC0) != 0x40 )
      (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 24LL))(a2, v3);
    v5 = j__strlen(" ");
    sub_20D1ED0((_QWORD *)a2, v5, " ");
  }
  ++*(_DWORD *)(a2 + 40);
  sub_20CFD70(a2);
  v6 = *(_QWORD *)(a2 + 16);
  v7 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 16) = v6 + 1;
  *(_BYTE *)(v7 + v6) = 40;
  sub_20D6480(a1 + 5, a2);
  --*(_DWORD *)(a2 + 40);
  sub_20CFD70(a2);
  result = *(_QWORD *)(a2 + 16);
  v9 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 16) = result + 1;
  *(_BYTE *)(v9 + result) = 41;
  if ( a1[7] )
  {
    v10 = j__strlen(" requires ");
    sub_20D1ED0((_QWORD *)a2, v10, " requires ");
    v11 = (_BYTE *)a1[7];
    v12 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 16LL);
    if ( v12 == sub_20CEB40 )
      (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v11 + 64LL))(v11, a2);
    else
      v12(a2, (__int64)v11);
    result = v11[9] & 0xC0;
    if ( (v11[9] & 0xC0) != 0x40 )
    {
      v13 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 24LL);
      if ( v13 == sub_20CEB60 )
        return (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v11 + 72LL))(v11, a2);
      else
        return v13(a2, (__int64)v11);
    }
  }
  return result;
}
