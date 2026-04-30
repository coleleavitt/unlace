unsigned __int64 __fastcall sub_4D7BF0(__m128i *a1)
{
  const char *v1; // rsi
  size_t v2; // rbp
  __int32 v3; // r14d
  size_t v4; // r12
  _QWORD *v5; // r15
  __int32 v6; // r11d
  __int64 v7; // r10
  void (__fastcall ***v8)(void *); // r8
  __int64 v9; // rax
  __int64 v10; // rsi
  __m128i *v11; // rax
  __m128i v12; // xmm0
  bool v13; // zf
  void (__fastcall *v14)(void *); // rdx
  void (__fastcall *v15)(void *); // rax
  const char *v16; // rsi
  void *v17; // rbx
  void (__fastcall *v18)(void *); // rdx
  void (__fastcall *v19)(void *); // rax
  char *v20; // rdi
  void *v22; // rbx
  void (__fastcall *v23)(void *); // rdx
  void (__fastcall *v24)(void *); // rax
  char *v25; // rdi
  __int64 v26; // rax
  void *v27; // [rsp+0h] [rbp-110h]
  void (__fastcall ***v28)(void *); // [rsp+0h] [rbp-110h]
  void *v29; // [rsp+8h] [rbp-108h]
  __int32 v30; // [rsp+14h] [rbp-FCh]
  __int32 v31; // [rsp+14h] [rbp-FCh]
  __int64 v32; // [rsp+18h] [rbp-F8h]
  void (__fastcall ***v33)(void *); // [rsp+20h] [rbp-F0h]
  __int64 v34; // [rsp+28h] [rbp-E8h] BYREF
  void *v35; // [rsp+30h] [rbp-E0h]
  size_t v36[2]; // [rsp+38h] [rbp-D8h]
  __int64 v37; // [rsp+48h] [rbp-C8h]
  void *src; // [rsp+50h] [rbp-C0h]
  size_t n[2]; // [rsp+58h] [rbp-B8h]
  __int64 v40; // [rsp+68h] [rbp-A8h]
  void *v41; // [rsp+70h] [rbp-A0h]
  int v42; // [rsp+78h] [rbp-98h]
  int v43; // [rsp+98h] [rbp-78h]
  __int64 v44; // [rsp+B8h] [rbp-58h]
  void *v45; // [rsp+C0h] [rbp-50h]
  unsigned __int64 v46; // [rsp+D0h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  v37 = 0xFFFFFFFFLL;
  v1 = (const char *)&v34;
  *(_OWORD *)v36 = 0;
  v34 = 0;
  v35 = nullptr;
  src = nullptr;
  v40 = 0;
  *(_OWORD *)n = 0;
  v41 = nullptr;
  if ( (unsigned __int8)sub_4D5940((__int64)a1, (__int64)&v34) )
  {
    v2 = n[0];
    if ( n[0] > 1 )
    {
      v3 = v34;
      v4 = v36[0];
      v5 = (_QWORD *)a1[5].m128i_i64[0];
      v42 = v34;
      if ( v36[0] )
      {
        v29 = (void *)qalloc_or_throw(v36[0]);
        memcpy(v29, v35, v4);
        v6 = v37;
        v2 = n[0];
        v43 = v37;
        if ( !n[0] )
        {
          v27 = nullptr;
          goto LABEL_6;
        }
      }
      else
      {
        v29 = nullptr;
        v6 = v37;
        v43 = v37;
      }
      v30 = v6;
      v27 = (void *)qalloc_or_throw(v2);
      memcpy(v27, src, v2);
      v6 = v30;
LABEL_6:
      v7 = v40;
      v8 = (void (__fastcall ***)(void *))v41;
      v44 = v40;
      v45 = v41;
      if ( v41 )
        ++*((_DWORD *)v41 + 2);
      v9 = v5[232];
      v10 = v5[231];
      if ( v5[233] < (unsigned __int64)(v9 + 1) )
      {
        v33 = v8;
        v32 = v7;
        v31 = v6;
        v26 = qvector_reserve(v5 + 231, v10, v9 + 1, 80);
        v5[231] = v26;
        v10 = v26;
        v8 = v33;
        v9 = v5[232];
        v7 = v32;
        v6 = v31;
      }
      v11 = (__m128i *)(v10 + 80 * v9);
      v11->m128i_i64[1] = (__int64)v29;
      v11[1] = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
      v12 = _mm_unpacklo_epi64((__m128i)v2, (__m128i)v2);
      v11->m128i_i32[0] = v3;
      v11[2].m128i_i32[0] = v6;
      v11[2].m128i_i64[1] = (__int64)v27;
      v11[4].m128i_i64[0] = v7;
      v11[4].m128i_i64[1] = (__int64)v8;
      v11[3] = v12;
      if ( v8 )
      {
        ++*((_DWORD *)v8 + 2);
        ++v5[232];
        v13 = (*((_DWORD *)v8 + 2))-- == 1;
        if ( v13 )
        {
          v14 = **v8;
          if ( v14 == refcnted_regex_t__::vfunc_0 )
          {
            v15 = (*v8)[2];
            if ( (char *)v15 == (char *)refcnted_regex_t__::vfunc_2 )
            {
              v28 = v8;
              *v8 = (void (__fastcall **)(void *))&refcnted_regex_t___vtable;
              qregfree(v8 + 2);
              operator delete(v28, 0x30u);
            }
            else
            {
              v15(v8);
            }
          }
          else
          {
            v14(v8);
          }
        }
      }
      else
      {
        ++v5[232];
      }
      v16 = (const char *)&v34;
      sub_4D7850(a1, (__int64)&v34);
      if ( v41 )
      {
        v13 = (*((_DWORD *)v41 + 2))-- == 1;
        if ( v13 )
        {
          v17 = v41;
          v18 = **(void (__fastcall ***)(void *))v41;
          if ( v18 == refcnted_regex_t__::vfunc_0 )
          {
            if ( v41 )
            {
              v19 = *(void (__fastcall **)(void *))(*(_QWORD *)v41 + 16LL);
              if ( (char *)v19 == (char *)refcnted_regex_t__::vfunc_2 )
              {
                v20 = (char *)v41 + 16;
                *(_QWORD *)v41 = &refcnted_regex_t___vtable;
                qregfree(v20);
                v16 = (const char *)&dword_30;
                operator delete(v17, 0x30u);
              }
              else
              {
                v19(v41);
              }
            }
          }
          else
          {
            v18(v41);
          }
        }
      }
      if ( src )
      {
        n[0] = 0;
        *(double *)v12.m128i_i64 = qfree(src, v16);
      }
      if ( v35 )
      {
        v36[0] = 0;
        qfree(v35, v16, *(double *)v12.m128i_i64);
      }
      return v46 - __readfsqword(0x28u);
    }
  }
  if ( v41 )
  {
    v13 = (*((_DWORD *)v41 + 2))-- == 1;
    if ( v13 )
    {
      v22 = v41;
      v23 = **(void (__fastcall ***)(void *))v41;
      if ( v23 == refcnted_regex_t__::vfunc_0 )
      {
        if ( v41 )
        {
          v24 = *(void (__fastcall **)(void *))(*(_QWORD *)v41 + 16LL);
          if ( (char *)v24 == (char *)refcnted_regex_t__::vfunc_2 )
          {
            v25 = (char *)v41 + 16;
            *(_QWORD *)v41 = &refcnted_regex_t___vtable;
            qregfree(v25);
            v1 = (const char *)&dword_30;
            operator delete(v22, 0x30u);
          }
          else
          {
            v24(v41);
          }
        }
      }
      else
      {
        v23(v41);
      }
    }
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src, v1);
  }
  if ( v35 )
  {
    v36[0] = 0;
    qfree(v35, v1);
  }
  return v46 - __readfsqword(0x28u);
}
