_BYTE *__fastcall sub_E2AF60(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdi
  _BYTE *v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  __int64 v13; // rdx
  _BOOL4 v14; // r15d
  __m128 v15; // xmm0
  __int64 v16; // rcx
  __int64 v17; // r14
  unsigned __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  _BYTE *result; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rcx
  unsigned __int16 *v26; // rbx
  __int128 v27; // [rsp+10h] [rbp-78h] BYREF
  __int64 v28; // [rsp+20h] [rbp-68h]
  __int64 *v29; // [rsp+30h] [rbp-58h] BYREF
  __int64 v30; // [rsp+38h] [rbp-50h]
  char v31; // [rsp+40h] [rbp-48h]
  __int64 v32; // [rsp+48h] [rbp-40h]

  v7 = a1[1];
  v8 = *(_BYTE **)(v7 + 32);
  if ( (unsigned __int64)v8 >= *(_QWORD *)(v7 + 24) )
  {
    sub_2257CD0(v7, 73);
  }
  else
  {
    *(_QWORD *)(v7 + 32) = v8 + 1;
    *v8 = 73;
  }
  *(_QWORD *)&v27 = a2;
  v29 = a1;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v9 = sub_EFEE90(&v27, 0);
  if ( !v9 )
  {
    v9 = v30;
    if ( !a4 )
      goto LABEL_14;
    goto LABEL_5;
  }
  v30 = v9;
  if ( a4 )
  {
LABEL_5:
    v12 = 0;
    v13 = 0;
    do
    {
      v14 = 1;
      v15 = (__m128)_mm_loadu_si128((const __m128i *)(a3 + 24 * v13));
      v16 = *(_QWORD *)(a3 + 24 * v13 + 16);
      v27 = (__int128)v15;
      v28 = v16;
      if ( v9 && !v31 )
      {
        v17 = v32;
        if ( !v32 )
        {
          v17 = *(_QWORD *)(*(_QWORD *)(v9 + 56) + 8 * v13 + 24);
          if ( sub_B68190(v17) )
          {
            if ( (v27 & 0x7FFFFFFF) != 9 )
              v32 = v17;
          }
        }
        if ( (unsigned __int8)sub_EF9830(&v27) && (!sub_B68190(v17) || v32) )
        {
          v31 = 1;
          v14 = 1;
        }
        else
        {
          LODWORD(v13) = v30;
          if ( !v30 || (*(_BYTE *)(v30 + 28) & 0x7F) != 0x47 )
            goto LABEL_31;
          v23 = *(_QWORD *)(v30 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v30 + 16) & 4) != 0 )
            v23 = *(_QWORD *)v23;
          if ( (*(_BYTE *)(v23 + 8) & 0x7Fu) - 59 > 2 || (v24 = v23 - 64) == 0 || !sub_B731B0(v24) )
          {
            v14 = 1;
            if ( sub_E2AAC0(&v29, v17, (__int64)&v27)
              && v17
              && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 2320LL) + 212LL) > 0x9Fu )
            {
              sub_E2A700(a1, v17, v15, v13, v16, v10);
            }
          }
          else
          {
LABEL_31:
            v14 = 0;
            if ( (*(_BYTE *)(v17 + 28) & 0x7F) == 0x2F )
              v14 = sub_F34140(*(_QWORD *)(*(_QWORD *)(v17 + 48) & 0xFFFFFFFFFFFFFFF0LL)) != 0;
          }
        }
      }
      sub_E2B990((_DWORD)a1, v14, v13, v16, v10, v11, v27, v28);
      v9 = v30;
      v13 = (unsigned int)++v12;
    }
    while ( v12 != a4 );
LABEL_14:
    if ( !v9 )
      goto LABEL_21;
  }
  if ( (*(_BYTE *)(v9 + 28) & 0x7F) == 0x47 )
  {
    v18 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v9 + 16) & 4) != 0 )
      v18 = *(_QWORD *)v18;
    if ( (*(_BYTE *)(v18 + 8) & 0x7Fu) - 59 <= 2 )
    {
      v19 = v18 - 64;
      if ( v19 )
      {
        if ( sub_B731B0(v19) )
          goto LABEL_21;
        v9 = v30;
      }
    }
    v20 = a1[1];
    v25 = *(_QWORD *)(v9 + 56);
    v22 = *(_QWORD *)(v20 + 24);
    result = *(_BYTE **)(v20 + 32);
    if ( (*(_BYTE *)(v25 + 23) & 0x40) == 0 )
      goto LABEL_22;
    v26 = *(unsigned __int16 **)(v25 + 8LL * (*(_DWORD *)(v25 + 20) & 0x1FFFFFFF) + 24);
    if ( !v26 || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 2320LL) + 212LL) <= 0x9Fu )
      goto LABEL_22;
    if ( (unsigned __int64)result >= v22 )
    {
      sub_2257CD0(v20, 81);
    }
    else
    {
      *(_QWORD *)(v20 + 32) = result + 1;
      *result = 81;
    }
    sub_E24970((__int64)a1, v26, (unsigned __int16 *)0xFFFFFFFFLL, 0, v10, v11);
  }
LABEL_21:
  v20 = a1[1];
  result = *(_BYTE **)(v20 + 32);
  v22 = *(_QWORD *)(v20 + 24);
LABEL_22:
  if ( (unsigned __int64)result >= v22 )
    return (_BYTE *)sub_2257CD0(v20, 69);
  *(_QWORD *)(v20 + 32) = result + 1;
  *result = 69;
  return result;
}

