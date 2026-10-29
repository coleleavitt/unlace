__int64 __fastcall sub_8BC100(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4, __int64 *a5)
{
  unsigned int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax

  v8 = sub_8BAEC0((_QWORD *)a1, a2, a3, a4);
  if ( !v8 )
  {
    v8 = sub_8BB220((_QWORD **)a1, a2, a3, a4);
    if ( v8 )
    {
      return (unsigned int)-4;
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 48) = -1;
      *(_QWORD *)(a1 + 64) = 0;
      v10 = 3 * v9;
      v11 = *(_QWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 72) = -1;
      *(_QWORD *)(a1 + 80) = 0;
      v12 = v11 + 8 * v10;
      *(_QWORD *)(a1 + 88) = v12;
      *(_QWORD *)(a1 + 56) = v12;
      sub_8B9FB0(a1);
      if ( a5 )
        sub_8BC080(a1, a5, a2, a3, a4);
    }
  }
  return v8;
}
