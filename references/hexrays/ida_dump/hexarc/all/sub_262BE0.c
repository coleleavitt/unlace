__int64 __fastcall sub_262BE0(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v7; // rsi
  __int64 v8; // r12
  int v9; // r13d
  __int64 v10; // r14
  __int64 v11; // rax

  v5 = a1;
  if ( a5 )
  {
    v7 = a5;
    v8 = *(_QWORD *)(a2 + 216);
    if ( a1 )
    {
      v9 = 35;
      if ( a5 < 0 )
      {
        v7 = -a5;
        v9 = 36;
      }
      v10 = sub_239BD0(v8, v7, a2, a3, a4, 1u, 0);
      v11 = j__qalloc_or_throw(64);
      *(_QWORD *)v11 = -1;
      v5 = v11;
      *(_DWORD *)(v11 + 8) = v9;
      *(_QWORD *)(v11 + 12) = -1;
      *(_QWORD *)(v11 + 24) = a1;
      *(_QWORD *)(v11 + 32) = v10;
      *(_QWORD *)(v11 + 40) = 0;
      *(_QWORD *)(v11 + 48) = 0;
      *(_DWORD *)(v11 + 56) = 0;
      sub_23CE40(v11, *(_QWORD *)(v8 + 112), 0);
      *(_DWORD *)(v5 + 56) |= 1u;
    }
    else
    {
      return sub_239BD0(v8, a5, a2, a3, a4, 1u, 0);
    }
  }
  return v5;
}
