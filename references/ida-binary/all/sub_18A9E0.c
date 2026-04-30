unsigned __int64 __fastcall sub_18A9E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        double a6,
        __m128 a7)
{
  _BYTE *v7; // rax
  __int64 v9; // rdi
  char *v10; // rbp
  __int64 v11; // rbx
  __int64 *v12; // r15
  unsigned __int64 v13; // rdx
  __int64 *v14; // r14
  __int64 v15; // r13
  __int64 *i; // rbx
  __int64 v17; // rbp
  __int64 v18; // rcx
  __int64 v19; // rbp
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdi
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rdi
  _QWORD v31[2]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v32; // [rsp+10h] [rbp-58h] BYREF
  __int128 v33; // [rsp+18h] [rbp-50h]
  unsigned __int64 v34; // [rsp+28h] [rbp-40h]

  v7 = *(_BYTE **)(a1 + 64);
  v34 = __readfsqword(0x28u);
  *v7 = a2;
  *(_BYTE *)(*(_QWORD *)(a1 + 64) + 1LL) = a3;
  v9 = *(_QWORD *)(a1 + 72);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    qfree(v9, a2, a3, a4, a5);
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 88) = 0;
LABEL_3:
    a2 = 0;
    *(_QWORD *)(a1 + 72) = qvector_reserve(a1 + 72, 0, 500, 8);
    goto LABEL_4;
  }
  if ( *(_QWORD *)(a1 + 88) <= 0x1F3u )
    goto LABEL_3;
LABEL_4:
  v31[1] = a1;
  v31[0] = ActionsInspector::update_action_list;
  sub_5313B0(v31);
  v10 = *(char **)(a1 + 72);
  v11 = 8LL * *(_QWORD *)(a1 + 80);
  v12 = (__int64 *)&v10[v11];
  if ( v10 == &v10[v11] )
    goto LABEL_12;
  if ( !(v11 >> 3) )
  {
    sub_18A7C0(*(__m128i **)(a1 + 72), v12, -2, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1850C0);
    goto LABEL_32;
  }
  _BitScanReverse64(&v13, v11 >> 3);
  sub_18A7C0(*(__m128i **)(a1 + 72), v12, 2LL * (int)v13, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1850C0);
  if ( v11 <= 128 )
  {
LABEL_32:
    a2 = (__int64)&v10[v11];
    sub_188E40(v10, (char *)v12, sub_1850C0);
    goto LABEL_12;
  }
  v14 = (__int64 *)(v10 + 128);
  sub_188E40(v10, v10 + 128, sub_1850C0);
  do
  {
    v15 = *v14;
    for ( i = v14; ; --i )
    {
      v17 = *(i - 1);
      a2 = v17;
      if ( !(unsigned __int8)sub_1850C0(v15, v17) )
        break;
      *i = v17;
    }
    ++v14;
    *i = v15;
  }
  while ( v12 != v14 );
LABEL_12:
  sub_189CA0((_QWORD *)a1, a6, a7);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 64) + 1LL) )
  {
    v19 = *(_QWORD *)(a1 + 80);
    v20 = 0;
    v32 = 0;
    v33 = 0;
    if ( v19 )
    {
      do
      {
        while ( *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * v20) + 120LL) <= 3 )
        {
          a2 = (unsigned int)v20;
          if ( (unsigned int)sub_187500(a1, (unsigned int)v20, 1, v18, 0.0) == -1 )
            break;
          if ( ++v20 == v19 )
            goto LABEL_26;
        }
        v26 = v33;
        a2 = v32;
        if ( *((_QWORD *)&v33 + 1) < (unsigned __int64)(v33 + 1) )
        {
          v32 = qvector_reserve(&v32, v32, v33 + 1, 8);
          a2 = v32;
          v26 = v33;
        }
        *(_QWORD *)(a2 + 8 * v26) = v20++;
        *(_QWORD *)&v33 = v33 + 1;
      }
      while ( v20 != v19 );
LABEL_26:
      v27 = v33 - 1;
      if ( (__int64)v33 - 1 >= 0 )
      {
        do
        {
          v28 = *(_QWORD *)(v32 + 8 * v27);
          v29 = *(_QWORD *)(a1 + 72) + 8 * v28;
          a2 = v29 + 8;
          memmove((void *)v29, (const void *)(v29 + 8), 8 * (*(_QWORD *)(a1 + 80) - v28) - 8);
          --*(_QWORD *)(a1 + 80);
        }
        while ( v27-- != 0 );
      }
    }
    sub_189CA0((_QWORD *)a1, 0.0, a7);
    if ( v32 )
    {
      *(_QWORD *)&v33 = 0;
      qfree(v32, a2, v21, v22, v23);
    }
  }
  v24 = *(_QWORD *)(a1 + 128);
  if ( v24 && (*(_BYTE *)(v24 + 2008) & 0x40) == 0 )
    sub_4A4600(v24, 0, 7, 0);
  return v34 - __readfsqword(0x28u);
}
