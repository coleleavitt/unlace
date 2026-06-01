__int64 __fastcall sub_869D00(__int64 a1)
{
  char **exception; // rbp
  char **v2; // rbp
  float *v3; // rbx
  __int64 v4; // r12
  int v6; // ebp
  float *v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __m128i *v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __m128i *v16; // rcx
  __int64 v17; // r13
  _QWORD *v18; // rax
  _QWORD *v19; // rdx
  _QWORD *v20; // rcx
  unsigned int v21; // eax
  __int64 v22; // rsi
  int v23; // eax
  _QWORD *v24; // rsi
  unsigned __int8 (*v25)(void); // rax
  __int64 v26; // rsi
  __int64 v27; // rax
  unsigned int v29; // r10d
  size_t v30; // rsi
  unsigned int *v31; // rax
  __int64 v32; // rsi
  unsigned int v33; // ecx
  unsigned int v34; // r13d
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rcx
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // [rsp+8h] [rbp-80h]
  _QWORD *v41; // [rsp+10h] [rbp-78h]
  _QWORD *v42; // [rsp+10h] [rbp-78h]
  unsigned int v43; // [rsp+1Ch] [rbp-6Ch]
  __int64 v44[11]; // [rsp+30h] [rbp-58h] BYREF

  v3 = *(float **)(a1 + 896);
  if ( !v3 )
    return 0;
  v4 = *((unsigned int *)v3 - 1);
  if ( !(_DWORD)v4 )
    return 0;
  LOBYTE(v6) = 0;
  v40 = a1 + 904;
  v7 = &v3[4 * v4];
  while ( 1 )
  {
    v6 = (unsigned __int8)(v6 + 1);
    if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 16)) )
      break;
    if ( !v6 )
    {
      v25 = *(unsigned __int8 (**)(void))(**(_QWORD **)(a1 + 8) + 456LL);
      if ( (char *)v25 != (char *)sub_79F060 )
      {
        if ( v25() )
          break;
      }
    }
    if ( *(double *)(a1 + 888) >= v3[2] )
      goto LABEL_19;
    if ( !*(_BYTE *)(*(_QWORD *)(a1 + 24) + 101LL) )
      goto LABEL_8;
    v8 = *(_QWORD *)a1;
    v9 = *(_QWORD *)(*(_QWORD *)a1 + 2592LL);
    v10 = *(_QWORD *)(*(_QWORD *)v3 + 16LL);
    v11 = *(_QWORD *)v3 + 48LL;
    if ( v9 )
      *(_DWORD *)(v9 - 4) = 0;
    if ( (unsigned int)sub_868700(v8 + 32, v11, v10, (__int64 *)(v8 + 2592)) == -1 )
    {
LABEL_19:
      v26 = (__int64)v3;
      v3 += 4;
      sub_869350(a1, v26);
      if ( v7 == v3 )
        break;
    }
    else
    {
LABEL_8:
      v12 = *(__m128i **)(a1 + 904);
      if ( v12 )
      {
        v13 = v12[-1].m128i_u32[3];
        if ( v13 == v12[-1].m128i_i32[2] )
        {
          v33 = (3 * v13 + 1) >> 1;
          v34 = v33;
          v35 = 16 * v33 + 8;
          if ( 16 * v13 + 8 >= (unsigned int)v35 || v13 >= v33 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v44, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v44);
            sub_233E40((__int64)v44);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v36 = (unsigned int *)sub_186B300(&v12[-1].m128i_u64[1], v35);
          v37 = v36[1];
          v12 = (__m128i *)(v36 + 2);
          *v36 = v34;
          *(_QWORD *)(a1 + 904) = v36 + 2;
          LODWORD(v36) = v37;
          v16 = &v12[v37];
          v15 = (_DWORD)v36 + 1;
        }
        else
        {
          v14 = v13;
          v15 = v13 + 1;
          v16 = &v12[v14];
        }
      }
      else
      {
        v38 = (_QWORD *)sub_186B270(0x28u);
        v12 = (__m128i *)(v38 + 1);
        *v38 = 2;
        v15 = 1;
        *(_QWORD *)(a1 + 904) = v12;
        v16 = v12;
      }
      v17 = *(_QWORD *)(a1 + 8);
      *v16 = _mm_loadu_si128((const __m128i *)v3);
      v12[-1].m128i_i32[3] = v15;
      v18 = (_QWORD *)sub_180C100(v17 + 2144, 16);
      v19 = *(_QWORD **)(v17 + 2128);
      *v18 = off_1C55610;
      v20 = v18;
      v18[1] = v40;
      if ( v19 )
      {
        v21 = *((_DWORD *)v19 - 1);
        if ( v21 == *((_DWORD *)v19 - 2) )
        {
          v29 = (3 * v21 + 1) >> 1;
          v30 = 8 * v29 + 8;
          if ( 8 * v21 + 8 >= (unsigned int)v30 || v21 >= v29 )
          {
            v2 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v44, "Overflow encountered when expanding vector");
            *v2 = (char *)off_1C63128;
            sub_2333C0(v2 + 1, v44);
            sub_233E40((__int64)v44);
            __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v43 = (3 * v21 + 1) >> 1;
          v41 = v20;
          v31 = (unsigned int *)sub_186B300(v19 - 1, v30);
          v20 = v41;
          v32 = v31[1];
          v19 = v31 + 2;
          *(_QWORD *)(v17 + 2128) = v31 + 2;
          *v31 = v43;
          LODWORD(v31) = v32;
          v24 = &v19[v32];
          v23 = (_DWORD)v31 + 1;
        }
        else
        {
          v22 = v21;
          v23 = v21 + 1;
          v24 = &v19[v22];
        }
      }
      else
      {
        v42 = v18;
        v39 = (_QWORD *)sub_186B270(0x18u);
        v20 = v42;
        v19 = v39 + 1;
        *v39 = 2;
        v23 = 1;
        *(_QWORD *)(v17 + 2128) = v19;
        v24 = v19;
      }
      v3 += 4;
      *v24 = v20;
      *((_DWORD *)v19 - 1) = v23;
      if ( v7 == v3 )
        break;
    }
  }
  v27 = *(_QWORD *)(a1 + 896);
  if ( v27 )
    *(_DWORD *)(v27 - 4) = 0;
  return 1;
}

