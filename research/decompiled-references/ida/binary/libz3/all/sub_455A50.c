bool __fastcall sub_455A50(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v4; // rax
  bool result; // al
  __int64 v6; // rdi
  _DWORD *v7; // rax
  __int64 v8; // rbx
  _DWORD *v9; // rax
  _DWORD *v10; // rax
  _DWORD *v11; // rax
  _DWORD v12[6]; // [rsp+0h] [rbp-18h] BYREF

  sub_1684300(v12, a2);
  result = !*(_WORD *)(a3 + 4)
        && (v4 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL)) != nullptr
        && !*v4
        && v4[1] == 2
        && *(_DWORD *)(a3 + 24) == 2
        && (v6 = *(_QWORD *)(a3 + 32), !*(_WORD *)(v6 + 4))
        && ((v7 = *(_DWORD **)(*(_QWORD *)(v6 + 16) + 24LL)) == nullptr || *v7 == -1)
        && (v8 = *(_QWORD *)(a3 + 40), !*(_WORD *)(v8 + 4))
        && ((v9 = *(_DWORD **)(*(_QWORD *)(v8 + 16) + 24LL)) == nullptr || *v9 == -1)
        && (v10 = *(_DWORD **)(sub_15D1F10(v6) + 24)) != nullptr
        && v12[0] == *v10
        && !v10[1]
        && (v11 = *(_DWORD **)(sub_15D1F10(v8) + 24)) != nullptr
        && v12[0] == *v11
        && v11[1] == 0;
  return result;
}

