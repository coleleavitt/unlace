char *__fastcall sub_4EE6A0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 (__fastcall *v4)(__int64, __int64 *); // rax
  __int64 *v5; // rbp
  __int64 v6; // rax
  unsigned __int32 v7; // r13d
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // edx
  unsigned int v13; // r12d
  __int64 v14; // r13
  __int64 v15; // rbx
  __int64 v17; // r12
  __int64 v18; // rax
  char *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rax

  v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 40LL);
  if ( v4 == sub_4EE670 )
  {
    v5 = (__int64 *)sub_186B270(0x80u);
    sub_4EE440((__int64)v5, a1, a3);
LABEL_3:
    v5 = (__int64 *)__dynamic_cast(
                      v5,
                      (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                      (const struct __class_type_info *)&`typeinfo for'datalog::udoc_relation,
                      0);
    goto LABEL_4;
  }
  v5 = (__int64 *)v4(a1, a3);
  if ( v5 )
    goto LABEL_3;
LABEL_4:
  v6 = *a3;
  v7 = 0;
  if ( *a3 )
  {
    v8 = 0;
    do
    {
      if ( v8 >= *(_DWORD *)(v6 - 4) )
        break;
      v9 = v8++;
      v7 += sub_4ED1A0(a1, *(_QWORD *)(v6 + 8 * v9));
      v6 = *a3;
    }
    while ( *a3 );
  }
  v10 = sub_4EC660(a1, v7);
  v11 = sub_552E50(v10);
  v12 = *((_DWORD *)v5 + 12);
  v13 = *((_DWORD *)v5 + 13);
  v14 = v11;
  if ( v12 >= v13 )
  {
    v17 = 2 * v13;
    v18 = sub_186B270(8 * v17);
    v12 = *((_DWORD *)v5 + 12);
    v19 = (char *)v5[5];
    v15 = v18;
    if ( v12 )
    {
      if ( v12 - 1 <= 2 || (char *)v18 == v19 + 8 )
      {
        v21 = 0;
        do
        {
          *(_QWORD *)(v15 + v21) = *(_QWORD *)&v19[v21];
          v21 += 8;
        }
        while ( v21 != 8LL * v12 );
      }
      else
      {
        v20 = 0;
        do
        {
          *(__m128i *)(v15 + v20) = _mm_loadu_si128((const __m128i *)&v19[v20]);
          v20 += 16;
        }
        while ( v20 != 16LL * (v12 >> 1) );
        if ( (v12 & 1) != 0 )
          *(_QWORD *)(v15 + 8LL * (v12 & 0xFFFFFFFE)) = *(_QWORD *)&v19[8 * (v12 & 0xFFFFFFFE)];
      }
    }
    if ( v19 && v19 != (char *)(v5 + 7) )
    {
      sub_186B220(v19);
      v12 = *((_DWORD *)v5 + 12);
    }
    v5[5] = v15;
    *((_DWORD *)v5 + 13) = v17;
  }
  else
  {
    v15 = v5[5];
  }
  *(_QWORD *)(v15 + 8LL * v12) = v14;
  *((_DWORD *)v5 + 12) = v12 + 1;
  return (char *)v5;
}

