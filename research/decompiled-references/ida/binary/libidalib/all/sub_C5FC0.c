__int64 __fastcall sub_C5FC0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  _QWORD *v5; // rbx
  __int64 result; // rax
  __int128 v7; // xmm0
  __int64 j; // rbp
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + 80 * i);
        if ( v5[5] )
        {
          v5[6] = 0;
          qfree();
        }
        if ( v5[2] )
        {
          v5[3] = 0;
          qfree();
        }
        v2 = *a1;
      }
    }
    a1[1] = 0;
    qfree();
    *a1 = 0;
    a1[2] = 0;
  }
  result = get_first_seg();
  v7 = 0;
  for ( j = result; result; j = result )
  {
    v10 = a1[1];
    v11 = *a1;
    if ( a1[2] < (unsigned __int64)(v10 + 1) )
    {
      v12 = qvector_reserve();
      v7 = 0;
      *a1 = v12;
      v11 = v12;
      v10 = a1[1];
    }
    v9 = v11 + 80 * v10;
    *(_OWORD *)v9 = v7;
    *(_OWORD *)(v9 + 24) = v7;
    *(_OWORD *)(v9 + 48) = v7;
    *(_QWORD *)(v9 + 16) = 0;
    *(_QWORD *)(v9 + 40) = 0;
    *(_QWORD *)(v9 + 64) = 0;
    *(_WORD *)(v9 + 72) = 0;
    ++a1[1];
    get_segm_name();
    get_segm_class();
    *(_QWORD *)v9 = *(_QWORD *)j;
    *(_QWORD *)(v9 + 8) = *(_QWORD *)(j + 8);
    *(_BYTE *)(v9 + 73) = *(_BYTE *)(j + 42);
    *(_BYTE *)(v9 + 72) = *(_BYTE *)(j + 43);
    result = get_next_seg();
    v7 = 0;
  }
  return result;
}

