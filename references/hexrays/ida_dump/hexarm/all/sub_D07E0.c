void __fastcall sub_D07E0(__int64 a1, __int64 *a2, _QWORD *a3)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rcx
  int v7; // ebp
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rax

  v5 = a3[1];
  v6 = a2[1];
  if ( v6 < v5 )
  {
    v9 = *a2;
    if ( a2[2] < v5 )
    {
      v10 = qvector_reserve(a2, v9, a3[1], 4);
      v6 = a2[1];
      *a2 = v10;
      v9 = v10;
    }
    memset((void *)(v9 + 4 * v6), 0, 4 * (v5 - v6));
    a2[1] = v5;
    v5 = a3[1];
  }
  else if ( v5 != v6 )
  {
    a2[1] = v5;
  }
  v7 = 0;
  v8 = 0;
  if ( v5 )
  {
    do
    {
      ++v7;
      *(_DWORD *)(*a2 + 4 * v8) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL)
                                                                            + 168LL))(
                                    *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                                    *(unsigned int *)(*a3 + 4 * v8));
      v8 = v7;
    }
    while ( (unsigned __int64)v7 < a3[1] );
  }
}
