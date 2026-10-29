__int64 __fastcall sub_BE5EC0(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  unsigned int v4; // r12d
  bool v5; // zf
  _DWORD *v6; // rax
  __int64 v7; // rax
  _DWORD *v8; // rdx
  __int64 v9; // rsi
  void *v10; // rbx
  char v12; // [rsp+Fh] [rbp-39h] BYREF
  _QWORD v13[2]; // [rsp+10h] [rbp-38h] BYREF
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  v5 = *(_WORD *)(a2 + 4) == 0;
  v13[0] = 0;
  v13[1] = 0;
  v14[0] = 1;
  v14[1] = 0;
  if ( v5
    && (v6 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) != nullptr
    && *v6 == 5
    && v6[1] == 6
    && *(_DWORD *)(a2 + 24) == 2
    && (*a3 = *(_QWORD *)(a2 + 32), v7 = *(_QWORD *)(a2 + 40), !*(_WORD *)(v7 + 4))
    && (v8 = *(_DWORD **)(*(_QWORD *)(v7 + 16) + 24LL)) != nullptr
    && *v8 == 5
    && v8[1] == 9
    && *(_DWORD *)(v7 + 24) == 2
    && (v9 = *(_QWORD *)(v7 + 32), *a4 = *(_QWORD *)(v7 + 40), (unsigned __int8)sub_1666AE0(a1 + 152, v9, v13, &v12))
    && (v13[0] & 0x100000000LL) == 0
    && LODWORD(v13[0]) == -1
    && (v14[0] & 0x100000000LL) == 0 )
  {
    LOBYTE(v4) = LODWORD(v14[0]) == 1;
  }
  else
  {
    v4 = 0;
  }
  v10 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v13);
  sub_182CBA0(v10, v14);
  return v4;
}

