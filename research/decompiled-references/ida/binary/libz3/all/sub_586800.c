__int64 __fastcall sub_586800(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 64LL))(*(_QWORD *)(a1 + 40));
  result = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(result + 864);
  if ( v3 )
    ++*(_DWORD *)(v3 + 8);
  v4 = *(_QWORD *)(a1 + 48);
  if ( v4 && (v5 = *(_QWORD *)(a1 + 56), v6 = *(_DWORD *)(v4 + 8) == 1, --*(_DWORD *)(v4 + 8), v6) )
  {
    result = sub_15D7BC0(v5, v4);
    *(_QWORD *)(a1 + 48) = v3;
  }
  else
  {
    *(_QWORD *)(a1 + 48) = v3;
  }
  return result;
}

