__int64 __fastcall sub_7C9200(__int64 a1, __int64 a2, unsigned __int8 a3, char a4, __m128i a5)
{
  int *v6; // rax
  int v7; // eax
  unsigned int v9; // eax
  __int64 v10; // rdi
  unsigned int v11; // ebp

  if ( *(_WORD *)(a2 + 4)
    || ((v6 = *(int **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr ? (v7 = -1) : (v7 = *v6), *(_DWORD *)(a1 + 56) != v7) )
  {
    sub_1872CE0("");
    sub_1873130(114, 36);
  }
  v9 = sub_7C8EA0(a1 - 48, a2, a3, a4, a5);
  v10 = *(_QWORD *)(a1 + 120);
  v11 = v9;
  if ( ((unsigned __int8)a4 | (v10 == 0)) != 1 && v9 != -2 )
    sub_79B540(v10, v9 & 0xFFFFFFFE, (unsigned int *)a2, *(double *)a5.m128i_i64);
  return v11;
}

