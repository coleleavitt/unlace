__int64 __fastcall sub_234E50(__int64 *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 result; // rax
  __int128 v10; // xmm0
  __int64 j; // rbp
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax

  v3 = *a1;
  if ( v3 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (_QWORD *)(v3 + 80 * i);
        v7 = v6[5];
        if ( v7 )
        {
          v6[6] = 0;
          qfree(v7, a2);
        }
        v8 = v6[2];
        if ( v8 )
        {
          v6[3] = 0;
          qfree(v8, a2);
        }
        v3 = *a1;
      }
    }
    a1[1] = 0;
    qfree(v3, a2);
    *a1 = 0;
    a1[2] = 0;
  }
  result = get_first_seg();
  v10 = 0;
  for ( j = result; result; j = result )
  {
    v13 = a1[1];
    v14 = *a1;
    if ( a1[2] < (unsigned __int64)(v13 + 1) )
    {
      v15 = qvector_reserve(a1, v14, v13 + 1, 80);
      v10 = 0;
      *a1 = v15;
      v14 = v15;
      v13 = a1[1];
    }
    v12 = v14 + 80 * v13;
    *(_OWORD *)v12 = v10;
    *(_OWORD *)(v12 + 24) = v10;
    *(_OWORD *)(v12 + 48) = v10;
    *(_QWORD *)(v12 + 16) = 0;
    *(_QWORD *)(v12 + 40) = 0;
    *(_QWORD *)(v12 + 64) = 0;
    *(_WORD *)(v12 + 72) = 0;
    ++a1[1];
    get_segm_name(v12 + 16, j, 0);
    get_segm_class(v12 + 40, j);
    *(_QWORD *)v12 = *(_QWORD *)j;
    *(_QWORD *)(v12 + 8) = *(_QWORD *)(j + 8);
    *(_BYTE *)(v12 + 73) = *(_BYTE *)(j + 42);
    *(_BYTE *)(v12 + 72) = *(_BYTE *)(j + 43);
    result = get_next_seg(*(_QWORD *)j);
    v10 = 0;
  }
  return result;
}
