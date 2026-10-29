__int64 __fastcall sub_13FC690(__int64 a1, int a2, __int64 a3)
{
  size_t v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // r12d
  signed __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rbx
  bool v11; // zf
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rsi

  v4 = j__strlen("<global>");
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
  sub_FF1F40(v10, "<global>", v8, a2, a3, 0, 1, v7);
  v11 = *(_QWORD *)(v10 + 40) == 0;
  *(_DWORD *)(v10 + 36) = 6;
  if ( v11 )
  {
    v13 = *(unsigned int *)(a1 + 184);
    v14 = *(unsigned int *)(a1 + 188);
    if ( v13 >= v14 )
    {
      if ( v14 < v13 + 1 )
      {
        sub_2237220(a1 + 176, a1 + 192, v13 + 1, 8);
        v13 = *(unsigned int *)(a1 + 184);
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 8 * v13) = v10;
      ++*(_DWORD *)(a1 + 184);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 8 * v13) = v10;
      *(_DWORD *)(a1 + 184) = v13 + 1;
    }
  }
  return v10;
}
