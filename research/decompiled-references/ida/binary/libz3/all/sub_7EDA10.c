__int64 __fastcall sub_7EDA10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6, int a7)
{
  char **exception; // rbx
  __int64 v13; // rax
  int v14; // ecx
  char *v15; // rsi
  unsigned int v16; // edx
  char *v17; // rdi
  __int64 v18; // rdx
  char *v19; // r8
  char *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 *v26; // r13
  __int64 result; // rax
  __int64 *v28; // rax
  __int64 v29; // rax
  __int64 *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // r12
  _QWORD *v33; // rax
  _QWORD *v34; // rdx
  _QWORD *v35; // rbp
  unsigned int v36; // eax
  __int64 v37; // rcx
  _QWORD *v38; // rcx
  unsigned int v39; // r13d
  unsigned int v40; // ecx
  unsigned int *v41; // rax
  __int64 v42; // rcx
  __m128i v43; // xmm1
  _QWORD *v44; // rdx
  __int64 v45; // [rsp-10h] [rbp-78h]
  __m128i v46; // [rsp+0h] [rbp-68h] BYREF
  char v47; // [rsp+1Eh] [rbp-4Ah] BYREF
  __int64 v48[9]; // [rsp+20h] [rbp-48h] BYREF

  v13 = *(unsigned int *)(a1 + 2328);
  v14 = *(_DWORD *)(a2 + 12);
  v15 = *(char **)(a1 + 2320);
  v16 = v13 - 1;
  v13 *= 16;
  v17 = &v15[v13];
  v18 = 16LL * (v14 & v16);
  v19 = &v15[v18];
  if ( v18 == v13 )
  {
LABEL_9:
    while ( v19 != v15 )
    {
      v22 = *(_QWORD *)v15;
      if ( *(_QWORD *)v15 > 1u )
      {
        if ( *(_DWORD *)(v22 + 12) == v14 && a2 == v22 )
        {
          v20 = v15;
          goto LABEL_18;
        }
      }
      else if ( !v22 )
      {
        break;
      }
      v15 += 16;
    }
LABEL_35:
    BUG();
  }
  v20 = &v15[v18];
  while ( 1 )
  {
    while ( 1 )
    {
      v21 = *(_QWORD *)v20;
      if ( *(_QWORD *)v20 > 1u )
        break;
      if ( !v21 )
        goto LABEL_35;
      v20 += 16;
      if ( v17 == v20 )
        goto LABEL_9;
    }
    if ( *(_DWORD *)(v21 + 12) == v14 && a2 == v21 )
      break;
    v20 += 16;
    if ( v17 == v20 )
      goto LABEL_9;
  }
LABEL_18:
  v23 = *((unsigned int *)v20 + 2);
  v24 = *(_QWORD *)(a1 + 2312);
  v47 = 0;
  v25 = *(_QWORD *)(v24 + 8 * v23);
  v26 = (__int64 *)sub_7ED0D0(a1, v25, a3, a4, a5, a6, a7);
  v46 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v26, (__m128i)(unsigned __int64)v26);
  result = v45;
  if ( v26 )
  {
    result = sub_7EBDC0(a1, 0, a4, a5, v25, &v47);
    if ( !(_BYTE)result )
    {
      v28 = *(__int64 **)(v25 + 48);
      if ( v28 )
      {
        if ( v26 != v28 )
        {
          v29 = *v26;
          v30 = (__int64 *)v26[1];
          *v30 = *v26;
          *(_QWORD *)(v29 + 8) = v30;
          **(_QWORD **)(*(_QWORD *)(v25 + 48) + 8LL) = v26;
          v26[1] = *(_QWORD *)(*(_QWORD *)(v25 + 48) + 8LL);
          v31 = *(_QWORD *)(v25 + 48);
          *v26 = v31;
          *(_QWORD *)(v31 + 8) = v26;
          *(_QWORD *)(v25 + 48) = v26;
        }
      }
      else
      {
        v43 = _mm_load_si128(&v46);
        *(_QWORD *)(v25 + 48) = v26;
        *(__m128i *)v26 = v43;
      }
      v32 = *(_QWORD *)(a1 + 8);
      v33 = (_QWORD *)sub_180C100(v32 + 2144, 32);
      v34 = *(_QWORD **)(v32 + 2128);
      v35 = v33;
      *v33 = off_1C54B10;
      v33[1] = v32;
      v33[2] = v25;
      v33[3] = v26;
      if ( v34 )
      {
        v36 = *((_DWORD *)v34 - 1);
        if ( v36 == *((_DWORD *)v34 - 2) )
        {
          v39 = (3 * v36 + 1) >> 1;
          v40 = 8 * v39 + 8;
          if ( 8 * v36 + 8 >= v40 || v36 >= v39 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v48, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v48);
            sub_233E40((__int64)v48);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v41 = (unsigned int *)sub_186B300(v34 - 1, v40);
          v42 = v41[1];
          v34 = v41 + 2;
          *(_QWORD *)(v32 + 2128) = v41 + 2;
          *v41 = v39;
          LODWORD(v41) = v42;
          v38 = &v34[v42];
          result = (unsigned int)((_DWORD)v41 + 1);
        }
        else
        {
          v37 = v36;
          result = v36 + 1;
          v38 = &v34[v37];
        }
      }
      else
      {
        v44 = (_QWORD *)sub_186B270(0x18u);
        *v44 = 2;
        result = 1;
        v34 = v44 + 1;
        *(_QWORD *)(v32 + 2128) = v34;
        v38 = v34;
      }
      *v38 = v35;
      *((_DWORD *)v34 - 1) = result;
      ++*(_DWORD *)(a1 + 2368);
    }
  }
  return result;
}

