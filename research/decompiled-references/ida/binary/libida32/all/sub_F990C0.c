__int64 __fastcall sub_F990C0(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  __int64 v8; // r8

  v7 = *(_QWORD *)(a3 + 16) + 16LL;
  v8 = **(unsigned int **)(a3 + 16);
  if ( a2 )
    return sub_F98810(a1, *(_QWORD *)(a2 + 16) + 16LL, **(unsigned int **)(a2 + 16), v7, v8, a4, a5, 1);
  else
    return sub_F98810(a1, (__int64)&byte_22CD811, 0, v7, v8, a4, a5, 1);
}

