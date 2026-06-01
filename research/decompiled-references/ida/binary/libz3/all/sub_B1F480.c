__int64 __fastcall sub_B1F480(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rax
  _DWORD *v7; // rax
  _DWORD *v8; // rax

  v4 = *(_DWORD **)(sub_15D1F10(a2) + 24);
  if ( v4 && *v4 == 5 && v4[1] == 1 && (v7 = *(_DWORD **)(sub_15D1F10(a3) + 24)) != nullptr && *v7 == 5 && !v7[1]
    || (v5 = *(_DWORD **)(sub_15D1F10(a3) + 24)) != nullptr
    && *v5 == 5
    && v5[1] == 1
    && (v8 = *(_DWORD **)(sub_15D1F10(a2) + 24)) != nullptr
    && *v8 == 5
    && !v8[1] )
  {
    sub_15E1A70(*(_QWORD *)(a1 + 8));
  }
  return sub_15E1B70(*(_QWORD *)(a1 + 8));
}

