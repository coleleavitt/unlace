char *__fastcall sub_4EE860(__int64 a1)
{
  __int64 v2; // rbp
  __int64 (__fastcall *v3)(__int64, _QWORD *); // rax
  __int64 *v4; // rbx
  __int64 i; // r14
  __int64 v6; // rbp
  __int64 v7; // rax
  unsigned int v8; // edx
  unsigned int v9; // r13d
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // rax
  char *v13; // rdi
  __int64 v14; // rax
  __int64 v16; // rax

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v2 + 40LL);
  if ( v3 == sub_4EE670 )
  {
    v4 = (__int64 *)sub_186B270(0x80u);
    sub_4EE440((__int64)v4, v2, (_QWORD *)(a1 + 16));
LABEL_3:
    v4 = (__int64 *)__dynamic_cast(
                      v4,
                      (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                      (const struct __class_type_info *)&`typeinfo for'datalog::udoc_relation,
                      0);
    goto LABEL_4;
  }
  v4 = (__int64 *)v3(*(_QWORD *)(a1 + 8), (_QWORD *)(a1 + 16));
  if ( v4 )
    goto LABEL_3;
LABEL_4:
  for ( i = 0; (unsigned int)i < *(_DWORD *)(a1 + 48); *((_DWORD *)v4 + 12) = v8 + 1 )
  {
    v7 = sub_552E90(*(_QWORD *)(a1 + 32), *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * i));
    v8 = *((_DWORD *)v4 + 12);
    v9 = *((_DWORD *)v4 + 13);
    v10 = v7;
    if ( v8 < v9 )
    {
      v6 = v4[5];
    }
    else
    {
      v11 = 2 * v9;
      v12 = sub_186B270(8 * v11);
      v8 = *((_DWORD *)v4 + 12);
      v13 = (char *)v4[5];
      v6 = v12;
      if ( v8 )
      {
        if ( v8 - 1 <= 2 || (char *)v12 == v13 + 8 )
        {
          v16 = 0;
          do
          {
            *(_QWORD *)(v6 + v16) = *(_QWORD *)&v13[v16];
            v16 += 8;
          }
          while ( v16 != 8LL * v8 );
        }
        else
        {
          v14 = 0;
          do
          {
            *(__m128i *)(v6 + v14) = _mm_loadu_si128((const __m128i *)&v13[v14]);
            v14 += 16;
          }
          while ( 16LL * (v8 >> 1) != v14 );
          if ( (v8 & 1) != 0 )
            *(_QWORD *)(v6 + 8LL * (v8 & 0xFFFFFFFE)) = *(_QWORD *)&v13[8 * (v8 & 0xFFFFFFFE)];
        }
      }
      if ( v13 != (char *)(v4 + 7) && v13 )
      {
        sub_186B220(v13);
        v8 = *((_DWORD *)v4 + 12);
      }
      v4[5] = v6;
      *((_DWORD *)v4 + 13) = v11;
    }
    ++i;
    *(_QWORD *)(v6 + 8LL * v8) = v10;
  }
  return (char *)v4;
}

