__int64 __fastcall sub_1FC8280(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 *v7; // rbp
  unsigned __int64 v8; // rax
  unsigned int v9; // eax
  __int64 *v10; // r15
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // r14
  __int64 result; // rax
  _QWORD *i; // rbp
  unsigned __int64 v16; // rax
  unsigned int v17; // eax
  __int64 v18; // r12
  __int64 v19; // r13
  __int64 v20; // rax

  v4 = sub_EEE240(a2) + 16LL * *(unsigned int *)(a2 + 8);
  v5 = sub_EEE240(a2);
  v6 = v4;
  v7 = (__int64 *)(a2 + 32);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (v6 - v5) >> 4);
  v8 = sub_EEE250(a2);
  sub_1F92A90(*(_QWORD *)(a1 + 16), v8, *(_QWORD *)(a1 + 24));
  v9 = sub_EEE280(a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), v9);
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 24), *(_QWORD *)(a1 + 24));
  v10 = (__int64 *)(a2 + 8LL * *(unsigned int *)(a2 + 8) + 32);
  if ( (__int64 *)(a2 + 32) != v10 )
  {
    v11 = *(unsigned int *)(a1 + 40);
    do
    {
      v12 = *v7;
      if ( v11 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
      {
        sub_2237220(a1 + 32, a1 + 48, v11 + 1, 8);
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40)) = v12;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v11) = v12;
      }
      ++v7;
      v11 = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
      *(_DWORD *)(a1 + 40) = v11;
    }
    while ( v10 != v7 );
    v10 = (__int64 *)(a2 + 8LL * *(unsigned int *)(a2 + 8) + 32);
  }
  sub_183F100(a1 + 32, *v10);
  v13 = sub_EEE240(a2) + 16LL * *(unsigned int *)(a2 + 8);
  result = sub_EEE240(a2);
  for ( i = (_QWORD *)result;
        (_QWORD *)v13 != i;
        result = sub_1F6F570(*(_QWORD **)(a1 + 16), *((_DWORD *)i - 2), *(_QWORD *)(a1 + 24)) )
  {
    if ( !(unsigned int)sub_EEE220(i) || (unsigned int)sub_EEE220(i) == 3 )
    {
      sub_1F92A90(*(_QWORD *)(a1 + 16), 0, *(_QWORD *)(a1 + 24));
    }
    else
    {
      v16 = sub_EEE230(i);
      sub_1F92A90(*(_QWORD *)(a1 + 16), v16, *(_QWORD *)(a1 + 24));
    }
    v17 = sub_EEE220(i);
    v18 = *(_QWORD *)(a1 + 24);
    v19 = v17;
    v20 = *(unsigned int *)(v18 + 8);
    if ( v20 + 1 > (unsigned __int64)*(unsigned int *)(v18 + 12) )
    {
      sub_2237220(*(_QWORD *)(a1 + 24), v18 + 16, v20 + 1, 8);
      v20 = *(unsigned int *)(v18 + 8);
    }
    i += 2;
    *(_QWORD *)(*(_QWORD *)v18 + 8 * v20) = v19;
    ++*(_DWORD *)(v18 + 8);
  }
  *(_DWORD *)(a1 + 224) = 167;
  return result;
}
