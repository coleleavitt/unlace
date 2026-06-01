__int64 __fastcall sub_13FC510(__int64 a1, int a2, __int64 a3)
{
  size_t v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // r15d
  signed __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rbx

  v4 = j__strlen("<implicit global>");
  v7 = *(_DWORD *)(a1 + 336);
  *(_QWORD *)(a1 + 160) += 1776LL;
  v8 = v4;
  *(_DWORD *)(a1 + 336) = v7 + 1;
  v9 = *(_QWORD *)(a1 + 80);
  v10 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(a1 + 88) >= (unsigned __int64)(v10 + 1776) && v9 )
    *(_QWORD *)(a1 + 80) = v10 + 1776;
  else
    v10 = sub_986170(a1 + 80, 1776, 1776, 3, v5, v6);
  sub_FF1F40(v10, "<implicit global>", v8, a2, a3, 0, 0, v7);
  *(_DWORD *)(v10 + 36) = 8;
  return v10;
}
