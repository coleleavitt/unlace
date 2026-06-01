__int64 __fastcall sub_20D2B50(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  _BYTE *v5; // r12
  __int64 (__fastcall *v6)(__int64, __int64); // rax
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  size_t v10; // rax
  _BYTE *v11; // rbp
  __int64 (__fastcall *v12)(__int64, __int64); // rax
  __int64 result; // rax
  __int64 v14; // rdx
  size_t v15; // rax

  v2 = j__strlen(" ");
  sub_20D1ED0((_QWORD *)a2, v2, " ");
  if ( *(_BYTE *)(a1 + 24) || *(_QWORD *)(a1 + 32) )
  {
    ++*(_DWORD *)(a2 + 40);
    sub_20CFD70(a2);
    v3 = *(_QWORD *)(a2 + 16);
    v4 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 16) = v3 + 1;
    *(_BYTE *)(v4 + v3) = 123;
  }
  v5 = *(_BYTE **)(a1 + 16);
  v6 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 16LL);
  if ( v6 == sub_20CEB40 )
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v5 + 64LL))(*(_QWORD *)(a1 + 16), a2);
  else
    v6(a2, *(_QWORD *)(a1 + 16));
  if ( (v5[9] & 0xC0) != 0x40 )
  {
    v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 24LL);
    if ( v7 == sub_20CEB60 )
      (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v5 + 72LL))(v5, a2);
    else
      v7(a2, (__int64)v5);
  }
  if ( *(_BYTE *)(a1 + 24) || *(_QWORD *)(a1 + 32) )
  {
    --*(_DWORD *)(a2 + 40);
    sub_20CFD70(a2);
    v8 = *(_QWORD *)(a2 + 16);
    v9 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 16) = v8 + 1;
    *(_BYTE *)(v9 + v8) = 125;
    if ( *(_BYTE *)(a1 + 24) )
    {
      v15 = j__strlen(" noexcept");
      sub_20D1ED0((_QWORD *)a2, v15, " noexcept");
    }
    if ( *(_QWORD *)(a1 + 32) )
    {
      v10 = j__strlen(" -> ");
      sub_20D1ED0((_QWORD *)a2, v10, " -> ");
      v11 = *(_BYTE **)(a1 + 32);
      v12 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 16LL);
      if ( v12 == sub_20CEB40 )
        (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v11 + 64LL))(v11, a2);
      else
        v12(a2, (__int64)v11);
      if ( (v11[9] & 0xC0) != 0x40 )
        (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 24LL))(a2, v11);
    }
  }
  sub_20CFD70(a2);
  result = *(_QWORD *)(a2 + 16);
  v14 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 16) = result + 1;
  *(_BYTE *)(v14 + result) = 59;
  return result;
}
