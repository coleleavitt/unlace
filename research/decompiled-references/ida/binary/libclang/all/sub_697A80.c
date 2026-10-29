__int64 __fastcall sub_697A80(__int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)a1;
  result = sub_696F60(
             *(_QWORD *)(a1 + 16),
             *(_DWORD **)(a1 + 24),
             *(_DWORD *)(a1 + 32),
             *(_DWORD *)(a1 + 36),
             *(_QWORD **)(a1 + 40));
  *v1 = result;
  return result;
}

