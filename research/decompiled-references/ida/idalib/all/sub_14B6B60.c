__int64 __fastcall sub_14B6B60(__int64 a1, char a2, char a3)
{
  int *v5; // rbx
  const __m128i *v6; // rbp
  _BYTE *v7; // rcx
  __int64 v8; // rax
  __m128i *v9; // rax
  __int64 v10; // rdx
  __int16 v11; // ax
  unsigned __int16 v12; // cx
  __int64 *v13; // rdi
  unsigned __int64 v14; // rdx
  unsigned __int16 v15; // cx
  unsigned int v16; // eax
  __int64 v17; // rdx
  unsigned __int16 v18; // cx
  unsigned int v19; // eax
  unsigned __int16 v20; // si
  _WORD *v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rbx
  unsigned int v26; // eax
  unsigned __int16 v27; // si
  __int64 v28; // rdx
  signed __int64 v29; // rbp
  int v30; // eax
  __int64 *v31; // rdi
  void *ptr; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+18h] [rbp-A0h]
  _BYTE v35[152]; // [rsp+20h] [rbp-98h] BYREF

  v5 = (int *)(a1 + 16);
  v6 = (const __m128i *)(a1 + 16);
  v7 = v35;
  v34 = 0x400000000LL;
  v8 = 0;
  ptr = v35;
  while ( 1 )
  {
    v9 = (__m128i *)&v7[24 * v8];
    *v9 = _mm_loadu_si128(v6);
    v10 = v6[1].m128i_i64[0];
    LODWORD(v34) = v34 + 1;
    v9[1].m128i_i64[0] = v10;
    v11 = *(_WORD *)(a1 + 32);
    if ( v11 == 22 )
    {
      ++*(_WORD *)(a1 + 88);
      goto LABEL_7;
    }
    if ( v11 == 23 )
    {
      v15 = *(_WORD *)(a1 + 88);
      if ( !v15 )
        goto LABEL_7;
      v16 = *(_DWORD *)(a1 + 2792);
      if ( !v16 )
      {
LABEL_23:
        *(_WORD *)(a1 + 88) = v15 - 1;
        goto LABEL_7;
      }
      v17 = *(_QWORD *)(a1 + 2784) + 24LL * v16 - 24;
      while ( 1 )
      {
        if ( v15 == *(_WORD *)(v17 + 14) )
        {
          if ( *(_DWORD *)(v17 + 16) == *(_DWORD *)(a1 + 90) )
            goto LABEL_18;
        }
        else if ( v15 > *(_WORD *)(v17 + 14) )
        {
          goto LABEL_18;
        }
        if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v17 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v17 + 18) )
          goto LABEL_23;
LABEL_18:
        --v16;
        v17 -= 24;
        *(_DWORD *)(a1 + 2792) = v16;
        if ( !v16 )
          goto LABEL_23;
      }
    }
    if ( (unsigned __int16)(v11 - 20) <= 1u )
    {
      v12 = *(_WORD *)(a1 + 90);
      if ( v11 == 20 )
      {
        *(_WORD *)(a1 + 90) = v12 + 1;
        goto LABEL_7;
      }
      if ( !v12 )
      {
LABEL_7:
        v13 = *(__int64 **)(a1 + 8);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v13, v5);
        goto LABEL_8;
      }
      v26 = *(_DWORD *)(a1 + 2792);
      if ( !v26 )
      {
LABEL_57:
        *(_WORD *)(a1 + 90) = v12 - 1;
        goto LABEL_7;
      }
      v27 = *(_WORD *)(a1 + 88);
      v28 = *(_QWORD *)(a1 + 2784) + 24LL * v26 - 24;
      while ( 1 )
      {
        if ( v27 == *(_WORD *)(v28 + 14) )
        {
          if ( *(_DWORD *)(v28 + 16) == *(_DWORD *)(a1 + 90) )
            goto LABEL_52;
        }
        else if ( v27 > *(_WORD *)(v28 + 14) )
        {
          goto LABEL_52;
        }
        if ( *(_WORD *)(v28 + 16) >= v12 && *(_WORD *)(a1 + 92) <= *(_WORD *)(v28 + 18) )
          goto LABEL_57;
LABEL_52:
        --v26;
        v28 -= 24;
        *(_DWORD *)(a1 + 2792) = v26;
        if ( !v26 )
          goto LABEL_57;
      }
    }
    if ( (unsigned __int16)(v11 - 24) <= 1u )
    {
      v18 = *(_WORD *)(a1 + 92);
      if ( v11 == 24 )
      {
        *(_WORD *)(a1 + 92) = v18 + 1;
        goto LABEL_7;
      }
      if ( !v18 )
        goto LABEL_7;
      v19 = *(_DWORD *)(a1 + 2792);
      if ( !v19 )
      {
LABEL_36:
        *(_WORD *)(a1 + 92) = v18 - 1;
        goto LABEL_7;
      }
      v20 = *(_WORD *)(a1 + 88);
      v21 = (_WORD *)(*(_QWORD *)(a1 + 2784) + 24LL * v19 - 24);
      while ( 2 )
      {
        if ( v20 == v21[7] )
        {
          if ( *((_DWORD *)v21 + 4) != *(_DWORD *)(a1 + 90) )
          {
LABEL_34:
            if ( *(_WORD *)(a1 + 90) <= v21[8] && v21[9] >= v18 )
              goto LABEL_36;
          }
        }
        else if ( v20 <= v21[7] )
        {
          goto LABEL_34;
        }
        --v19;
        v21 -= 12;
        *(_DWORD *)(a1 + 2792) = v19;
        if ( !v19 )
          goto LABEL_36;
        continue;
      }
    }
    if ( (unsigned __int16)(v11 - 14) <= 1u || (unsigned __int16)(v11 - 17) <= 2u )
      goto LABEL_7;
    if ( v11 == 3 )
    {
      sub_1566D30(a1);
    }
    else
    {
      if ( !sub_10CCDE0(v11) )
        goto LABEL_7;
      v30 = *(_DWORD *)(a1 + 20);
      v31 = *(__int64 **)(a1 + 8);
      if ( !v30 )
        v30 = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 40) = v30;
      sub_14634E0(v31, v5);
    }
LABEL_8:
    if ( !sub_13E0520((__int64)v5, *(char **)(*(_QWORD *)(a1 + 8) + 56LL)) )
      break;
    v8 = (unsigned int)v34;
    v6 = (const __m128i *)v5;
    v7 = ptr;
    v14 = (unsigned int)v34 + 1LL;
    if ( v14 > HIDWORD(v34) )
    {
      if ( ptr <= v5 && v5 < (int *)((char *)ptr + 24 * (unsigned int)v34) )
      {
        v29 = (char *)v5 - (_BYTE *)ptr;
        sub_2237220(&ptr, v35, v14, 24);
        v7 = ptr;
        v8 = (unsigned int)v34;
        v6 = (const __m128i *)((char *)ptr + v29);
      }
      else
      {
        sub_2237220(&ptr, v35, v14, 24);
        v7 = ptr;
        v8 = (unsigned int)v34;
      }
    }
  }
  v22 = *(_QWORD *)(a1 + 96);
  if ( a3 )
  {
    v24 = sub_18D7870(v22, ptr, (unsigned int)v34);
  }
  else
  {
    v23 = 0;
    if ( a2 )
      v23 = *(_QWORD *)(v22 + 608);
    v24 = sub_18D6880(v22, ptr, (unsigned int)v34, v23);
  }
  if ( ptr != v35 )
    free(ptr);
  return v24;
}
