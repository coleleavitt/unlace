__int64 __fastcall get_strlist_item(__m128i *a1, unsigned __int64 a2)
{
  __int64 v4; // r14
  _QWORD **v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // r12
  _QWORD *v8; // rbx
  __int64 result; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  _QWORD *v13; // rbx
  void *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r15
  __int64 *v18; // rdi
  __int64 v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v24; // rax

  if ( !a1 )
    return 0;
  v4 = *(_QWORD *)(qword_2CCB598 + 1800);
  v5 = *(_QWORD ***)(v4 + 48);
  v6 = *(_QWORD *)(v4 + 56);
  v7 = &v5[v6];
  if ( v5 == v7 )
  {
LABEL_10:
    v10 = *(_QWORD *)(v4 + 64);
    v11 = v6 + 1;
    if ( v10 < v11 )
    {
      v15 = qvector_reserve(v4 + 48, 0, v11, 8);
      v16 = *(_QWORD *)(v4 + 56);
      v17 = *(_QWORD *)(v4 + 64);
      *(_QWORD *)(v4 + 64) = v10;
      v18 = *(__int64 **)(v4 + 48);
      v19 = v15;
      v20 = v16 - 1;
      if ( v20 >= 0 )
      {
        v21 = v15;
        do
        {
          v22 = *v18;
          v21 += 8;
          ++v18;
          *(_QWORD *)(v21 - 8) = v22;
        }
        while ( v20-- != 0 );
        v18 = *(__int64 **)(v4 + 48);
      }
      qfree(v18);
      v24 = *(_QWORD *)(v4 + 56);
      *(_QWORD *)(v4 + 48) = v19;
      *(_QWORD *)(v4 + 64) = v17;
      v7 = (_QWORD *)(v19 + 8 * v24);
    }
    *v7 = 0;
    ++*(_QWORD *)(v4 + 56);
    v12 = operator new(0x38u);
    *(_OWORD *)v12 = -1;
    *(_QWORD *)(v12 + 16) = 0;
    *(_QWORD *)(v12 + 40) = -1;
    *(_BYTE *)(v12 + 48) = 0;
    *(_OWORD *)(v12 + 24) = 0;
    v13 = (_QWORD *)*v7;
    *v7 = v12;
    if ( v13 )
    {
      v14 = (void *)v13[2];
      if ( v14 )
      {
        v13[3] = 0;
        qfree(v14);
      }
      operator delete(v13, 0x38u);
    }
    *(_BYTE *)(v4 + 144) = 1;
    v8 = (_QWORD *)*v7;
  }
  else
  {
    while ( 1 )
    {
      v8 = *v5;
      if ( **v5 == -1 && v8[1] == -1 )
        break;
      if ( v7 == ++v5 )
        goto LABEL_10;
    }
  }
  sub_691FD0((__int64)v8, *(_QWORD *)v4);
  result = 0;
  if ( a2 < v8[3] )
  {
    result = 1;
    *a1 = _mm_loadu_si128((const __m128i *)(v8[2] + 16 * a2));
  }
  return result;
}
