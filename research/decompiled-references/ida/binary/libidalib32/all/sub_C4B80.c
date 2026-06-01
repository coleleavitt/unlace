__int64 __fastcall sub_C4B80(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  _QWORD *v5; // rbx
  __int64 result; // rax
  __int64 j; // rbp
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + (i << 6));
        if ( v5[4] )
        {
          v5[5] = 0;
          qfree();
        }
        if ( v5[1] )
        {
          v5[2] = 0;
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
  for ( j = result; result; j = result )
  {
    v9 = a1[1];
    v10 = *a1;
    if ( a1[2] < (unsigned __int64)(v9 + 1) )
    {
      v11 = qvector_reserve();
      *a1 = v11;
      v10 = v11;
      v9 = a1[1];
    }
    v8 = v10 + (v9 << 6);
    *(_OWORD *)(v8 + 16) = 0;
    *(_OWORD *)(v8 + 40) = 0;
    *(_QWORD *)v8 = 0;
    *(_QWORD *)(v8 + 8) = 0;
    *(_QWORD *)(v8 + 32) = 0;
    *(_DWORD *)(v8 + 56) = 0;
    *(_WORD *)(v8 + 60) = 0;
    ++a1[1];
    get_segm_name();
    get_segm_class();
    *(_DWORD *)v8 = *(_DWORD *)j;
    *(_DWORD *)(v8 + 4) = *(_DWORD *)(j + 4);
    *(_BYTE *)(v8 + 61) = *(_BYTE *)(j + 22);
    *(_BYTE *)(v8 + 60) = *(_BYTE *)(j + 23);
    result = get_next_seg();
  }
  return result;
}

