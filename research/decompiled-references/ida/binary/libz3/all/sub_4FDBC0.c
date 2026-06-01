_QWORD *__fastcall sub_4FDBC0(__int64 a1, _QWORD *a2, unsigned int *a3)
{
  char **exception; // rbp
  unsigned int v4; // ebx
  unsigned int *v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int *v10; // r13
  _QWORD *v11; // r14
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // r12
  __int64 v15; // rax
  unsigned int v16; // r8d
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rax
  int v20; // ebx
  _QWORD *v21; // rbx
  _QWORD *v23; // rax
  unsigned int v24; // ebp
  _QWORD *v25; // rax
  __int64 v26; // rdx
  size_t v27; // rdx
  _QWORD *v28; // rax
  unsigned int v29; // [rsp+4h] [rbp-74h]
  __int64 v30; // [rsp+8h] [rbp-70h]
  __int64 v31[11]; // [rsp+20h] [rbp-58h] BYREF

  v4 = *(_DWORD *)(a2[1] + 32LL);
  if ( v4 != 1 )
    return nullptr;
  v6 = a3;
  v7 = sub_4C5840(*(_QWORD *)(a1 + 24), a2[4], a3);
  v8 = a2[2];
  v30 = v7;
  if ( v8 && (v9 = *(unsigned int *)(v8 - 4), (_DWORD)v9) )
  {
    v10 = &v6[v9];
    v11 = (_QWORD *)(v8 + 8LL * *v6);
    v12 = (_QWORD *)sub_186B270(0x18u);
    *v12 = 2;
    v13 = v12 + 1;
    v14 = v13;
    while ( 1 )
    {
      ++v6;
      *v13 = *v11;
      *((_DWORD *)v14 - 1) = v4;
      if ( v10 == v6 )
        break;
      v11 = (_QWORD *)(a2[2] + 8LL * *v6);
      if ( *((_DWORD *)v14 - 2) == v4 )
      {
        v16 = (3 * v4 + 1) >> 1;
        v17 = 8 * v16 + 8;
        if ( 8 * v4 + 8 >= (unsigned int)v17 || v4 >= v16 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v31, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v31);
          sub_233E40((__int64)v31);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v18 = (unsigned int *)sub_186B300(v14 - 1, v17);
        v14 = v18 + 2;
        *v18 = (3 * v4 + 1) >> 1;
        v19 = v18[1];
        v20 = v19;
        v13 = &v14[v19];
        v4 = v20 + 1;
      }
      else
      {
        v15 = v4++;
        v13 = &v14[v15];
      }
    }
    v23 = (_QWORD *)sub_186B270(0x18u);
    v23[1] = 0;
    v21 = v23;
    v24 = *((_DWORD *)v14 - 1);
    *v23 = &off_1C500E0;
    v23[2] = v30;
    v29 = *((_DWORD *)v14 - 2);
    v25 = (_QWORD *)sub_186B270(8LL * v29 + 8);
    v26 = *((unsigned int *)v14 - 1);
    v21[1] = v25 + 1;
    v27 = 8 * v26;
    *v25 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v29), _mm_cvtsi32_si128(v24)).m128i_u64[0];
    if ( v27 <= 8 )
    {
      if ( v27 == 8 )
        v25[1] = *v14;
    }
    else
    {
      memcpy(v25 + 1, v14, v27);
    }
    sub_186B220(v14 - 1);
  }
  else
  {
    v28 = (_QWORD *)sub_186B270(0x18u);
    v28[1] = 0;
    v21 = v28;
    *v28 = &off_1C500E0;
    v28[2] = v30;
  }
  return v21;
}

