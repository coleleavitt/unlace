__int64 __fastcall sub_570EC0(__int64 a1, int *a2, int a3, unsigned int a4)
{
  int v7; // eax
  unsigned int v9; // ebx
  int v11; // edi
  __int64 v12; // r15
  const char *v13; // r14
  int v14; // eax
  int v15; // edx
  unsigned __int16 v16; // cx
  unsigned int v17; // eax
  unsigned __int16 v18; // ax
  __int64 v19; // rax
  const char **v20; // r13
  int v21; // r15d
  __int64 *v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rax
  int v26; // edx
  void *v27; // rdi
  __int64 *v28; // rbp
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // [rsp+Ch] [rbp-6Ch]
  int v35; // [rsp+14h] [rbp-64h] BYREF
  char *s1; // [rsp+18h] [rbp-60h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v38; // [rsp+28h] [rbp-50h]
  unsigned __int64 v39; // [rsp+38h] [rbp-40h]

  v7 = *a2;
  v39 = __readfsqword(0x28u);
  if ( v7 != 3 )
  {
    if ( v7 == 1 )
    {
      v28 = *(__int64 **)(a1 + 8);
      v29 = v28[1];
      v30 = *v28;
      if ( v28[2] < (unsigned __int64)(v29 + 1) )
      {
        v32 = qvector_reserve(*(_QWORD *)(a1 + 8), v30, v29 + 1, 20);
        v29 = v28[1];
        *v28 = v32;
        v30 = v32;
      }
      v31 = v30 + 20 * v29;
      *(_DWORD *)(v31 + 8) = 0;
      ++v28[1];
      *(_BYTE *)(v31 + 16) = 0;
      *(_DWORD *)(v31 + 12) = a3;
      *(_QWORD *)v31 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2[2]), _mm_cvtsi32_si128(a4)).m128i_u64[0];
    }
    return 1;
  }
  v11 = *((unsigned __int16 *)a2 + 5);
  ptr = nullptr;
  v38 = 0;
  v12 = (int)round_up_power2(a4 + v11);
  if ( get_reg_name(&ptr, *((unsigned __int16 *)a2 + 4), v12, 0xFFFFFFFFLL) <= 0 )
    goto LABEL_27;
  v35 = 0;
  v13 = haystack;
  if ( (_QWORD)v38 )
    v13 = (const char *)ptr;
  v14 = sub_375980(0x3F0u, &s1, &v35, v13);
  if ( !v14 )
  {
    if ( (unsigned int)str2reg(v13) != -1 )
    {
      v35 = 0;
      goto LABEL_11;
    }
LABEL_27:
    if ( ptr )
    {
      *(_QWORD *)&v38 = 0;
      qfree(ptr);
    }
    return 1;
  }
  if ( v14 != 1 )
    goto LABEL_27;
  v13 = s1;
LABEL_11:
  if ( !v13 )
    goto LABEL_27;
  v15 = *((unsigned __int16 *)a2 + 5);
  if ( *((_WORD *)a2 + 5) || a4 != (_DWORD)v12 )
  {
    v16 = 8 * v15;
    if ( HIWORD(v35) )
    {
      v17 = ((HIWORD(v35) + 7) >> 3) - v15;
      if ( v17 > a4 )
        LOWORD(v17) = a4;
      v18 = 8 * v17;
      if ( HIWORD(v35) < v18 + (unsigned int)v16 )
      {
        if ( !under_debugger )
          interr(1109);
        BUG();
      }
      LOWORD(v35) = v16 + v35;
      HIWORD(v35) = v18;
    }
    else
    {
      LOWORD(v35) = 8 * v15;
      HIWORD(v35) = 8 * a4;
    }
  }
  v19 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 536LL);
  v34 = *(_DWORD *)(v19 + 64);
  if ( v34 <= 0 )
    goto LABEL_27;
  v20 = *(const char ***)(v19 + 56);
  v21 = 0;
  while ( 1 )
  {
    v9 = strcasecmp(v13, *v20);
    if ( !v9 )
      break;
    ++v21;
    v20 += 4;
    if ( v34 == v21 )
      goto LABEL_27;
  }
  v22 = *(__int64 **)(a1 + 8);
  v23 = v22[1];
  v24 = *v22;
  if ( v22[2] < (unsigned __int64)(v23 + 1) )
  {
    v33 = qvector_reserve(v22, v24, v23 + 1, 20);
    *v22 = v33;
    v23 = v22[1];
    v24 = v33;
  }
  v25 = v24 + 20 * v23;
  *(_DWORD *)(v25 + 8) = 0;
  ++v22[1];
  *(_DWORD *)v25 = v21;
  v26 = v35;
  v27 = ptr;
  *(_BYTE *)(v25 + 16) = 1;
  *(_DWORD *)(v25 + 12) = a3;
  *(_DWORD *)(v25 + 8) = v26;
  if ( v27 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v27);
  }
  return v9;
}

