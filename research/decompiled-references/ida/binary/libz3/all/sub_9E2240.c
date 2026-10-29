__int64 __fastcall sub_9E2240(__int64 *a1, unsigned int *a2)
{
  unsigned int v2; // ebp
  __int64 v3; // r12
  __int64 v4; // r10
  __int64 v5; // rdx
  void *v6; // rbx
  __int64 v8; // rbx
  unsigned int v9; // edx
  unsigned int v10; // r13d
  _QWORD *v11; // rbp
  __int64 v12; // r13
  __int64 v13; // rax
  _QWORD *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // r15
  unsigned int *v21; // rsi
  unsigned int **v22; // rbp
  __int64 i; // rax
  unsigned int v24; // [rsp+0h] [rbp-58h] BYREF
  char v25; // [rsp+4h] [rbp-54h]
  __int64 v26; // [rsp+8h] [rbp-50h]
  int v27; // [rsp+10h] [rbp-48h] BYREF
  char v28; // [rsp+14h] [rbp-44h]
  __int64 v29; // [rsp+18h] [rbp-40h]

  if ( (unsigned __int8)sub_1666AE0(*a1 + 408, a2, a1[1], &v24) )
    return sub_9AF730((__int64)qword_1C7F2C0, a1[2], a1[1], a1[2]);
  v2 = sub_B39350(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 16) + 8656LL) + 8LL * *a2), *(unsigned int *)(*a1 + 8));
  if ( sub_9B2ED0(*a1, v2) )
  {
    v3 = v2;
    if ( !sub_98B080(*(_DWORD **)a1[3], *(_DWORD *)(a1[3] + 8), v2) )
    {
      v24 = v2;
      sub_9E1E20(v4, (int *)&v24);
      v16 = *a1;
      v17 = *(_QWORD *)(*(_QWORD *)(*a1 + 688) + 8LL * v2);
      v18 = sub_180C100(*(_QWORD *)(*a1 + 832), 16);
      *(_QWORD *)v18 = 0x80000000LL;
      v19 = *a1;
      *(_QWORD *)(v18 + 8) = v17;
      v20 = *(_QWORD *)(*(_QWORD *)(v19 + 680) + 8 * v3);
      v21 = (unsigned int *)sub_180C100(*(_QWORD *)(v19 + 832), 16);
      *(_QWORD *)v21 = 0x80000000LL;
      *((_QWORD *)v21 + 1) = v20;
      if ( (unsigned int *)v18 != v21 )
        v21 = (unsigned int *)sub_98AE60(*(_QWORD *)(v16 + 832), v21, (unsigned int *)v18);
      v22 = (unsigned int **)a1[4];
      if ( *v22 )
      {
        if ( *v22 != v21 )
          v21 = (unsigned int *)sub_98AE60(*(_QWORD *)(v16 + 832), *v22, v21);
      }
      *v22 = v21;
    }
    v5 = *(_QWORD *)(*(_QWORD *)(*a1 + 680) + 8 * v3);
    v25 &= 0xFCu;
    v28 &= 0xFCu;
    v24 = 0;
    v26 = 0;
    v27 = 1;
    v29 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v24, (int *)(v5 + 16));
    sub_9AF730((__int64)qword_1C7F2C0, a1[2], (__int64)&v24, a1[2]);
    v6 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v24);
    return sub_182CBA0(v6, &v27);
  }
  else
  {
    v8 = a1[5];
    v9 = *(_DWORD *)(v8 + 8);
    v10 = *(_DWORD *)(v8 + 12);
    if ( v9 >= v10 )
    {
      v12 = 2 * v10;
      v13 = sub_186B270(8 * v12);
      v9 = *(_DWORD *)(v8 + 8);
      v14 = *(_QWORD **)v8;
      v11 = (_QWORD *)v13;
      if ( v9 )
      {
        if ( v9 - 1 <= 2 || (_QWORD *)v13 == v14 + 1 )
        {
          for ( i = 0; i != v9; ++i )
            v11[i] = v14[i];
        }
        else
        {
          v15 = 0;
          do
          {
            *(__m128i *)&v11[v15] = _mm_loadu_si128((const __m128i *)&v14[v15]);
            v15 += 2;
          }
          while ( 2LL * (v9 >> 1) != v15 );
          if ( (v9 & 1) != 0 )
            v11[v9 & 0xFFFFFFFE] = v14[v9 & 0xFFFFFFFE];
        }
      }
      if ( v14 != (_QWORD *)(v8 + 16) && v14 )
      {
        sub_186B220(v14);
        v9 = *(_DWORD *)(v8 + 8);
      }
      *(_QWORD *)v8 = v11;
      *(_DWORD *)(v8 + 12) = v12;
    }
    else
    {
      v11 = *(_QWORD **)v8;
    }
    v11[v9] = a2;
    *(_DWORD *)(v8 + 8) = v9 + 1;
    return v9;
  }
}

