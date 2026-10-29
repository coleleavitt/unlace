void __fastcall sub_1202690(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, size_t a5, __int64 a6)
{
  __int64 v6; // r15
  int v8; // eax
  unsigned int v9; // ecx
  unsigned __int64 i; // r15
  __m128i *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  _BYTE *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  _BYTE *v19; // rsi
  size_t v20; // rdx
  __int64 v21; // rax
  __int64 (__fastcall *v22)(size_t, _BYTE *, size_t); // rbx
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  bool v34; // [rsp+13h] [rbp-1A5h]
  int v35; // [rsp+14h] [rbp-1A4h]
  __int64 v38; // [rsp+28h] [rbp-190h]
  void *v39[2]; // [rsp+30h] [rbp-188h] BYREF
  __int64 v40; // [rsp+40h] [rbp-178h] BYREF
  __int16 v41; // [rsp+50h] [rbp-168h]
  void *ptr; // [rsp+60h] [rbp-158h]
  _BYTE v43[336]; // [rsp+68h] [rbp-150h] BYREF

  v6 = a6;
  v8 = *(_DWORD *)(a4 + 60);
  v35 = *(_DWORD *)(a4 + 64);
  v34 = 1;
  if ( (v8 & 4) == 0 )
    v34 = (v8 & *(_DWORD *)(a2 + 16)) != 0;
  v9 = *((_DWORD *)a3 + 2);
  if ( v9 > 1 )
  {
    for ( i = 1; i < v9; ++i )
    {
      if ( *(_DWORD *)(*a3 + 40 * i + 24) != 67 )
      {
        if ( v34 )
        {
          (*(void (__fastcall **)(void **))(**(_QWORD **)(a1 + 24) + 64LL))(v39);
          v13 = (__m128i *)sub_99BDC0(v39, 0, 0, "-fembed-offload-object=", 0x17u);
          ptr = &v43[8];
          if ( (__m128i *)v13->m128i_i64[0] == &v13[1] )
          {
            *(__m128i *)&v43[8] = _mm_loadu_si128(v13 + 1);
          }
          else
          {
            ptr = (void *)v13->m128i_i64[0];
            *(_QWORD *)&v43[8] = v13[1].m128i_i64[0];
          }
          *(_QWORD *)v43 = v13->m128i_i64[1];
          v13->m128i_i64[0] = (__int64)v13[1].m128i_i64;
          v13->m128i_i64[1] = 0;
          v13[1].m128i_i8[0] = 0;
          v14 = (*(__int64 (__fastcall **)(size_t, void *, _QWORD))(*(_QWORD *)a5 + 16LL))(a5, ptr, *(_QWORD *)v43);
          v15 = *(unsigned int *)(a6 + 8);
          if ( v15 + 1 > (unsigned __int64)*(unsigned int *)(a6 + 12) )
          {
            v38 = v14;
            sub_2237220(a6, a6 + 16, v15 + 1, 8);
            v15 = *(unsigned int *)(a6 + 8);
            v14 = v38;
          }
          *(_QWORD *)(*(_QWORD *)a6 + 8 * v15) = v14;
          v16 = ptr;
          ++*(_DWORD *)(a6 + 8);
          if ( v16 != &v43[8] )
            operator delete(v16);
          if ( v39[0] != &v40 )
            operator delete(v39[0]);
        }
        else
        {
          v17 = *(unsigned int *)(a6 + 8);
          if ( v17 + 1 > (unsigned __int64)*(unsigned int *)(a6 + 12) )
          {
            sub_2237220(a6, a6 + 16, v17 + 1, 8);
            v17 = *(unsigned int *)(a6 + 8);
          }
          *(_QWORD *)(*(_QWORD *)a6 + 8 * v17) = "-fopenmp-host-ir-file-path";
          v18 = *a3;
          ++*(_DWORD *)(a6 + 8);
          v19 = *(_BYTE **)(v18 + 40 * i);
          v41 = 257;
          if ( *v19 )
          {
            v39[0] = v19;
            v20 = 0;
            LOBYTE(v41) = 3;
            ptr = &v43[16];
            v25 = *(_QWORD *)a5;
            *(__m128i *)v43 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
            v22 = *(__int64 (__fastcall **)(size_t, _BYTE *, size_t))(v25 + 16);
            if ( v19 )
              v20 = strlen(v19);
          }
          else
          {
            v20 = 0;
            v19 = nullptr;
            ptr = &v43[16];
            v21 = *(_QWORD *)a5;
            *(__m128i *)v43 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
            v22 = *(__int64 (__fastcall **)(size_t, _BYTE *, size_t))(v21 + 16);
          }
          v23 = v22(a5, v19, v20);
          if ( ptr != &v43[16] )
            free(ptr);
          v24 = *(unsigned int *)(a6 + 8);
          if ( v24 + 1 > (unsigned __int64)*(unsigned int *)(a6 + 12) )
          {
            sub_2237220(a6, a6 + 16, v24 + 1, 8);
            v24 = *(unsigned int *)(a6 + 8);
          }
          *(_QWORD *)(*(_QWORD *)a6 + 8 * v24) = v23;
          ++*(_DWORD *)(a6 + 8);
        }
        v9 = *((_DWORD *)a3 + 2);
      }
    }
    v6 = a6;
  }
  if ( v35 == 4 )
  {
    v26 = *(unsigned int *)(v6 + 8);
    if ( v26 + 1 > (unsigned __int64)*(unsigned int *)(v6 + 12) )
    {
      sub_2237220(v6, v6 + 16, v26 + 1, 8);
      v26 = *(unsigned int *)(v6 + 8);
    }
    *(_QWORD *)(*(_QWORD *)v6 + 8 * v26) = "-fopenmp-is-target-device";
    ++*(_DWORD *)(v6 + 8);
    sub_21B7F70(a5, v6, 1555);
    if ( (unsigned __int8)sub_21B7850(a5, 1556, 1262, 0) )
    {
      v32 = *(unsigned int *)(v6 + 8);
      if ( v32 + 1 > (unsigned __int64)*(unsigned int *)(v6 + 12) )
      {
        sub_2237220(v6, v6 + 16, v32 + 1, 8);
        v32 = *(unsigned int *)(v6 + 8);
      }
      *(_QWORD *)(*(_QWORD *)v6 + 8 * v32) = "-fopenmp-target-debug";
      ++*(_DWORD *)(v6 + 8);
    }
    if ( (unsigned __int8)sub_21B7850(a5, 1538, 1255, 0) )
    {
      v31 = *(unsigned int *)(v6 + 8);
      if ( v31 + 1 > (unsigned __int64)*(unsigned int *)(v6 + 12) )
      {
        sub_2237220(v6, v6 + 16, v31 + 1, 8);
        v31 = *(unsigned int *)(v6 + 8);
      }
      *(_QWORD *)(*(_QWORD *)v6 + 8 * v31) = "-fopenmp-assume-teams-oversubscription";
      ++*(_DWORD *)(v6 + 8);
    }
    if ( (unsigned __int8)sub_21B7850(a5, 1539, 1256, 0) )
    {
      v30 = *(unsigned int *)(v6 + 8);
      if ( v30 + 1 > (unsigned __int64)*(unsigned int *)(v6 + 12) )
      {
        sub_2237220(v6, v6 + 16, v30 + 1, 8);
        v30 = *(unsigned int *)(v6 + 8);
      }
      *(_QWORD *)(*(_QWORD *)v6 + 8 * v30) = "-fopenmp-assume-threads-oversubscription";
      ++*(_DWORD *)(v6 + 8);
    }
    if ( sub_10DCD30(a5, 0x601u) )
    {
      v27 = *(unsigned int *)(v6 + 8);
      if ( v27 + 1 > (unsigned __int64)*(unsigned int *)(v6 + 12) )
      {
        sub_2237220(v6, v6 + 16, v27 + 1, 8);
        v27 = *(unsigned int *)(v6 + 8);
      }
      *(_QWORD *)(*(_QWORD *)v6 + 8 * v27) = "-fopenmp-assume-no-thread-state";
      ++*(_DWORD *)(v6 + 8);
    }
    if ( sub_10DCD30(a5, 0x600u) )
    {
      v28 = *(unsigned int *)(v6 + 8);
      if ( v28 + 1 > (unsigned __int64)*(unsigned int *)(v6 + 12) )
      {
        sub_2237220(v6, v6 + 16, v28 + 1, 8);
        v28 = *(unsigned int *)(v6 + 8);
      }
      *(_QWORD *)(*(_QWORD *)v6 + 8 * v28) = "-fopenmp-assume-no-nested-parallelism";
      ++*(_DWORD *)(v6 + 8);
    }
    if ( !(unsigned __int8)sub_21B7850(a5, 3091, 3018, 1) )
    {
      v29 = *(unsigned int *)(v6 + 8);
      if ( v29 + 1 > (unsigned __int64)*(unsigned int *)(v6 + 12) )
      {
        sub_2237220(v6, v6 + 16, v29 + 1, 8);
        v29 = *(unsigned int *)(v6 + 8);
      }
      *(_QWORD *)(*(_QWORD *)v6 + 8 * v29) = "-nogpulib";
      ++*(_DWORD *)(v6 + 8);
    }
  }
  sub_11C5330(a2, a4, a5, (_BYTE *)v6, a5, a6);
}
