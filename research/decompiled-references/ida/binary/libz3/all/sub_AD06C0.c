unsigned __int64 *__fastcall sub_AD06C0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  char *v6; // rax
  unsigned __int64 *v7; // r13
  unsigned __int64 *v8; // r14
  unsigned __int64 v9; // rsi
  __int64 (__fastcall *v10)(_QWORD *, unsigned __int64, int); // rax
  __int64 v11; // rax
  __int64 v12; // rbp
  int v13; // r15d
  int v14; // edi
  __int64 v15; // r11
  __int64 v16; // rdx
  char *v17; // r10
  char *v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // edx
  unsigned int v21; // r15d
  __int64 v22; // rsi
  unsigned __int64 *result; // rax
  char *i; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rbx
  __int64 v27; // r15
  _QWORD *v28; // rdi
  __int64 v29; // rax
  __int64 j; // rax
  __int64 v31; // [rsp+0h] [rbp-88h]
  char *ptr; // [rsp+8h] [rbp-80h]
  unsigned int v33; // [rsp+14h] [rbp-74h]
  __int64 *v35; // [rsp+28h] [rbp-60h] BYREF
  char *v36; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v37; // [rsp+38h] [rbp-50h]
  __int64 v38; // [rsp+3Ch] [rbp-4Ch]

  do
  {
    v4 = a2;
    a2 = *(_QWORD *)(a2 + 8);
  }
  while ( a2 );
  v5 = *(_QWORD *)(v4 + 56);
  v6 = (char *)sub_186B270(0x40u);
  v38 = 0;
  *(_OWORD *)v6 = 0;
  *((_OWORD *)v6 + 1) = 0;
  *((_OWORD *)v6 + 2) = 0;
  *((_OWORD *)v6 + 3) = 0;
  v7 = *(unsigned __int64 **)(v5 + 8);
  ptr = v6;
  v8 = &v7[2 * *(unsigned int *)(v5 + 16)];
  if ( v7 == v8 )
    return (unsigned __int64 *)sub_186B220(ptr);
  while ( *v7 <= 1 )
  {
    v7 += 2;
    if ( v8 == v7 )
      return (unsigned __int64 *)sub_186B220(ptr);
  }
  if ( v8 == v7 )
    return (unsigned __int64 *)sub_186B220(ptr);
  v33 = 8;
  v9 = *v7;
  do
  {
    v10 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int64, int))(*a1 + 16LL);
    if ( v10 == sub_AD0270 )
      v11 = sub_AC8870((__int64)a1, v9);
    else
      v11 = v10(a1, v9, 1);
    v12 = v11;
    if ( v11 )
    {
      v13 = sub_15D2710(a1[1], v11);
      if ( (_BYTE)v13 )
        goto LABEL_12;
      v31 = *(_QWORD *)a3 + 8LL * *(unsigned int *)(a3 + 8);
      if ( v31 == *(_QWORD *)a3 )
        goto LABEL_12;
      v26 = *(_QWORD **)a3;
      do
        v13 |= sub_15D2760(a1[1], *v26++, v12);
      while ( (_QWORD *)v31 != v26 );
      if ( !(_BYTE)v13 )
      {
LABEL_12:
        v14 = *(_DWORD *)(v12 + 12);
        v15 = 8LL * v33;
        v16 = 8LL * (v14 & (v33 - 1));
        v17 = &ptr[v16];
        v18 = &ptr[v16];
        if ( v16 != v15 )
        {
          do
          {
            v19 = *(_QWORD *)v18;
            if ( *(_QWORD *)v18 > 1u )
            {
              if ( *(_DWORD *)(v19 + 12) == v14 && v12 == v19 )
                goto LABEL_22;
            }
            else if ( !v19 )
            {
              goto LABEL_19;
            }
            v18 += 8;
          }
          while ( &ptr[v15] != v18 );
        }
        for ( i = ptr; v17 != i; i += 8 )
        {
          v25 = *(_QWORD *)i;
          if ( *(_QWORD *)i > 1u )
          {
            if ( *(_DWORD *)(v25 + 12) == v14 && v12 == v25 )
              goto LABEL_22;
          }
          else if ( !v25 )
          {
            break;
          }
        }
LABEL_19:
        v20 = *(_DWORD *)(a3 + 8);
        v21 = *(_DWORD *)(a3 + 12);
        if ( v20 >= v21 )
        {
          v27 = 2 * v21;
          v22 = sub_186B270(8 * v27);
          v20 = *(_DWORD *)(a3 + 8);
          v28 = *(_QWORD **)a3;
          if ( v20 )
          {
            if ( v20 - 1 <= 2 || (_QWORD *)v22 == v28 + 1 )
            {
              for ( j = 0; j != v20; ++j )
                *(_QWORD *)(v22 + j * 8) = v28[j];
            }
            else
            {
              v29 = 0;
              do
              {
                *(__m128i *)(v22 + v29 * 8) = _mm_loadu_si128((const __m128i *)&v28[v29]);
                v29 += 2;
              }
              while ( 2LL * (v20 >> 1) != v29 );
              if ( (v20 & 1) != 0 )
                *(_QWORD *)(v22 + 8LL * (v20 & 0xFFFFFFFE)) = v28[v20 & 0xFFFFFFFE];
            }
          }
          if ( v28 )
          {
            if ( v28 != (_QWORD *)(a3 + 16) )
            {
              sub_186B220(v28);
              v20 = *(_DWORD *)(a3 + 8);
            }
          }
          *(_QWORD *)a3 = v22;
          *(_DWORD *)(a3 + 12) = v27;
        }
        else
        {
          v22 = *(_QWORD *)a3;
        }
        v35 = (__int64 *)v12;
        *(_QWORD *)(v22 + 8LL * v20) = v12;
        *(_DWORD *)(a3 + 8) = v20 + 1;
        v36 = ptr;
        v37 = v33;
        sub_4A3CA0((__int64)&v36, &v35);
        ptr = v36;
        v33 = v37;
      }
    }
LABEL_22:
    result = v7 + 2;
    if ( v8 == v7 + 2 )
      break;
    while ( 1 )
    {
      v9 = *result;
      v7 = result;
      if ( *result > 1 )
        break;
      result += 2;
      if ( v8 == result )
        goto LABEL_27;
    }
  }
  while ( v8 != result );
LABEL_27:
  if ( ptr )
    return (unsigned __int64 *)sub_186B220(ptr);
  return result;
}

