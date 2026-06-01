void __fastcall sub_11D95E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  void **v8; // rbp
  __int64 v9; // rax
  void **v10; // r12
  void **v11; // rbx
  void **v12; // rdi
  void **v13; // rdi
  void **v14; // rbx
  void **v15; // r12
  size_t v16; // r14
  const void *v17; // r15
  __int64 v18; // rax
  void *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 *v22; // rdi
  __int64 v23; // rdx
  char *v24; // rdi
  __int64 v25; // [rsp+0h] [rbp-1A8h]
  _QWORD v26[4]; // [rsp+10h] [rbp-198h] BYREF
  __int16 v27; // [rsp+30h] [rbp-178h]
  _BYTE v28[32]; // [rsp+40h] [rbp-168h] BYREF
  __int16 v29; // [rsp+60h] [rbp-148h]
  _BYTE v30[32]; // [rsp+70h] [rbp-138h] BYREF
  __int16 v31; // [rsp+90h] [rbp-118h]
  _QWORD v32[4]; // [rsp+A0h] [rbp-108h] BYREF
  __int16 v33; // [rsp+C0h] [rbp-E8h]
  void *ptr; // [rsp+D0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+D8h] [rbp-D0h]
  __int64 v36; // [rsp+E8h] [rbp-C0h] BYREF
  void *v37; // [rsp+F0h] [rbp-B8h]
  __int64 v38; // [rsp+100h] [rbp-A8h] BYREF
  __int16 v39; // [rsp+110h] [rbp-98h]

  if ( sub_10DCD30(a2, 0xBD9u) )
    goto LABEL_2;
  v16 = *(_QWORD *)(*(_QWORD *)a1 + 256LL);
  v17 = *(const void **)(*(_QWORD *)a1 + 248LL);
  ptr = &v36;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( v16 > 0x80 )
  {
    sub_2236E10(&ptr, &v36, v16, 1);
    v24 = (char *)ptr + si128.m128i_i64[0];
LABEL_44:
    memcpy(v24, v17, v16);
    v16 += si128.m128i_i64[0];
    goto LABEL_35;
  }
  if ( v16 )
  {
    v24 = (char *)&v36;
    goto LABEL_44;
  }
LABEL_35:
  si128.m128i_i64[0] = v16;
  v33 = 257;
  v31 = 257;
  v26[0] = "include";
  v29 = 257;
  v27 = 259;
  sub_228A3B0(&ptr, v26, v28, v30, v32);
  v26[0] = "cuda_wrappers";
  v33 = 257;
  v27 = 259;
  v29 = 257;
  v31 = 257;
  sub_228A3B0(&ptr, v26, v28, v30, v32);
  v18 = *(unsigned int *)(a3 + 8);
  if ( v18 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_2237220(a3, a3 + 16, v18 + 1, 8);
    v18 = *(unsigned int *)(a3 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v18) = "-internal-isystem";
  v19 = ptr;
  ++*(_DWORD *)(a3 + 8);
  v32[0] = v19;
  v33 = 261;
  v32[1] = si128.m128i_i64[0];
  v20 = sub_10DA6C0(a2, (__int64)v32);
  v21 = *(unsigned int *)(a3 + 8);
  if ( v21 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    v25 = v20;
    sub_2237220(a3, a3 + 16, v21 + 1, 8);
    v21 = *(unsigned int *)(a3 + 8);
    v20 = v25;
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v21) = v20;
  v22 = (__int64 *)ptr;
  ++*(_DWORD *)(a3 + 8);
  if ( v22 != &v36 )
    free(v22);
LABEL_2:
  if ( (unsigned __int8)sub_21B7850(a2, 3085, 3016, 1) )
  {
    if ( *(_BYTE *)(a1 + 8) )
    {
      v5 = *(unsigned int *)(a3 + 8);
      if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        sub_2237220(a3, a3 + 16, v5 + 1, 8);
        v5 = *(unsigned int *)(a3 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v5) = "-include";
      v6 = *(unsigned int *)(a3 + 12);
      v7 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
      *(_DWORD *)(a3 + 8) = v7;
      if ( v7 + 1 > v6 )
      {
        sub_2237220(a3, a3 + 16, v7 + 1, 8);
        v7 = *(unsigned int *)(a3 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v7) = "__clang_cuda_runtime_wrapper.h";
      ++*(_DWORD *)(a3 + 8);
    }
    else
    {
      sub_FC70B0((__int64)&ptr, **(_QWORD **)a1, 0, 431);
      if ( (_BYTE)v39 )
      {
        sub_FC7790(si128.m128i_i64[1], (__int64 *)&ptr, SHIBYTE(v39));
        si128.m128i_i64[1] = 0;
        v39 = 0;
      }
      if ( v37 != &v38 )
        operator delete(v37);
      v8 = (void **)ptr;
      if ( ptr )
      {
        v9 = si128.m128i_i64[0];
        if ( si128.m128i_i64[0] )
        {
          if ( (unsigned __int64)ptr < si128.m128i_i64[0] || (unsigned __int64)ptr > si128.m128i_i64[0] + 14848 )
          {
            v10 = *((void ***)ptr + 66);
            v11 = &v10[8 * (unsigned __int64)*((unsigned int *)ptr + 134)];
            if ( v10 != v11 )
            {
              do
              {
                while ( 1 )
                {
                  v11 -= 8;
                  v12 = (void **)v11[3];
                  if ( v12 == v11 + 5 )
                    break;
                  operator delete(v12);
                  if ( v10 == v11 )
                    goto LABEL_20;
                }
              }
              while ( v10 != v11 );
LABEL_20:
              v11 = (void **)v8[66];
            }
            if ( v11 != v8 + 68 )
              free(v11);
            v13 = (void **)v8[52];
            v14 = v8 + 52;
            if ( v13 != v8 + 54 )
              free(v13);
            v15 = v8 + 12;
            do
            {
              while ( 1 )
              {
                v14 -= 4;
                if ( *v14 == v14 + 2 )
                  break;
                operator delete(*v14);
                if ( v14 == v15 )
                  goto LABEL_28;
              }
            }
            while ( v14 != v15 );
LABEL_28:
            operator delete(v8, 0x3A0u);
          }
          else
          {
            v23 = *(unsigned int *)(si128.m128i_i64[0] + 14976);
            *(_DWORD *)(si128.m128i_i64[0] + 14976) = v23 + 1;
            *(_QWORD *)(v9 + 8 * v23 + 14848) = v8;
          }
        }
      }
    }
  }
}
