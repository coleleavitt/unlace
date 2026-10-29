__int64 __fastcall sub_20D6FC0(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  size_t v3; // rax
  _BYTE *v4; // r12
  __int64 (__fastcall *v5)(__int64, __int64); // rax
  __int64 result; // rax
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  size_t v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  size_t v16; // rax

  if ( *(_BYTE *)(a1 + 56) )
  {
    v8 = j__strlen("::");
    sub_20D1ED0((_QWORD *)a2, v8, "::");
  }
  v2 = j__strlen("new");
  sub_20D1ED0((_QWORD *)a2, v2, "new");
  if ( *(_BYTE *)(a1 + 57) )
  {
    v16 = j__strlen("[]");
    sub_20D1ED0((_QWORD *)a2, v16, "[]");
  }
  if ( *(_QWORD *)(a1 + 24) )
  {
    ++*(_DWORD *)(a2 + 40);
    sub_20CFD70(a2);
    v12 = *(_QWORD *)(a2 + 16);
    v13 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 16) = v12 + 1;
    *(_BYTE *)(v13 + v12) = 40;
    sub_20D6480((_QWORD *)(a1 + 16), a2);
    --*(_DWORD *)(a2 + 40);
    sub_20CFD70(a2);
    v14 = *(_QWORD *)(a2 + 16);
    v15 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 16) = v14 + 1;
    *(_BYTE *)(v15 + v14) = 41;
  }
  v3 = j__strlen(" ");
  sub_20D1ED0((_QWORD *)a2, v3, " ");
  v4 = *(_BYTE **)(a1 + 32);
  v5 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 16LL);
  if ( v5 == sub_20CEB40 )
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v4 + 64LL))(*(_QWORD *)(a1 + 32), a2);
  else
    v5(a2, *(_QWORD *)(a1 + 32));
  result = v4[9] & 0xC0;
  if ( (v4[9] & 0xC0) != 0x40 )
  {
    v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 24LL);
    if ( v7 == sub_20CEB60 )
      result = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v4 + 72LL))(v4, a2);
    else
      result = v7(a2, (__int64)v4);
  }
  if ( *(_QWORD *)(a1 + 48) )
  {
    ++*(_DWORD *)(a2 + 40);
    sub_20CFD70(a2);
    v9 = *(_QWORD *)(a2 + 16);
    v10 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 16) = v9 + 1;
    *(_BYTE *)(v10 + v9) = 40;
    sub_20D6480((_QWORD *)(a1 + 40), a2);
    --*(_DWORD *)(a2 + 40);
    sub_20CFD70(a2);
    result = *(_QWORD *)(a2 + 16);
    v11 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 16) = result + 1;
    *(_BYTE *)(v11 + result) = 41;
  }
  return result;
}
