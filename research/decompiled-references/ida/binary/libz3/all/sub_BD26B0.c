__int64 __fastcall sub_BD26B0(__int64 a1, __int64 a2, double a3)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf

  result = sub_BBF690(a2, *(_QWORD *)(a1 + 8), 0, 0, a3);
  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 && (v6 = *(_QWORD *)(a1 + 16), v7 = *(_DWORD *)(v5 + 8) == 1, --*(_DWORD *)(v5 + 8), v7) )
  {
    result = sub_15D7BC0(v6, v5);
    *(_QWORD *)(a1 + 8) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
  }
  return result;
}

