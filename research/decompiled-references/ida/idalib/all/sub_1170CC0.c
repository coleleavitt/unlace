__int64 __fastcall sub_1170CC0(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, unsigned __int64 a5, const __m128i *a6)
{
  unsigned int v6; // r15d
  __int64 v13; // rsi
  const char **v14; // rax
  const char *v15; // rcx
  size_t v16; // rax
  __int64 v17; // rdx
  size_t v18; // r13
  unsigned int v19; // eax
  int v20; // eax
  __int64 *v21; // rsi
  __int64 *v22; // r15
  __int64 v23; // r9
  __int64 v24; // rax
  char *v25; // rdi
  __int64 v26; // rbx
  _QWORD *v27; // rax
  unsigned __int8 v28; // [rsp+8h] [rbp-110h]
  __int64 v29; // [rsp+8h] [rbp-110h]
  const char *v30; // [rsp+10h] [rbp-108h]
  __int64 v31; // [rsp+18h] [rbp-100h]
  __m128i v32; // [rsp+20h] [rbp-F8h] BYREF
  void *ptr; // [rsp+30h] [rbp-E8h] BYREF
  __m128i si128; // [rsp+38h] [rbp-E0h]
  _BYTE v35[32]; // [rsp+50h] [rbp-C8h] BYREF
  void *v36[2]; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+80h] [rbp-98h] BYREF
  __int64 *v38[17]; // [rsp+90h] [rbp-88h] BYREF

  if ( a5 && (v32 = _mm_loadu_si128(a6), v6 = sub_21B9810(&v32, 1781), (_BYTE)v6) )
  {
    v28 = sub_21B7850(a3, 826, 1165, 1);
    if ( v28 )
    {
      v13 = 0;
      v31 = **(_QWORD **)(a2 + 8);
      v14 = (const char **)a6[3].m128i_i64[0];
      v15 = *v14;
      if ( *v14 )
      {
        v30 = *v14;
        v16 = j__strlen(*v14);
        v15 = v30;
        v13 = v16;
      }
      if ( sub_1001430((__int64)v15, v13, 0) == 1 && !v17 )
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
        ptr = nullptr;
        sub_102B150((__int64)v35, a2 + 16, (__int64)a4, a5, &ptr);
        v18 = j__strlen("xnack");
        v19 = sub_2244B30("xnack", v18);
        v20 = sub_2244E60(&ptr, "xnack", v18, v19);
        if ( v20 == -1 )
          v21 = (__int64 *)((char *)ptr + 8 * si128.m128i_u32[0]);
        else
          v21 = (__int64 *)((char *)ptr + 8 * v20);
        sub_10298F0(v38, v21, 1);
        v22 = v38[0];
        sub_10298F0(v38, (__int64 *)ptr + si128.m128i_u32[0], 1);
        v23 = 0;
        if ( v38[0] == v22 || (v24 = *v22, v6 = 0, !*(_BYTE *)(v24 + 8)) )
        {
          sub_FC70B0((__int64)v38, v31, 0, 607);
          sub_21B5FF0(v36, a6, a3);
          sub_AEC220((unsigned __int8 **)v38, (_BYTE *)v36[0], (signed __int64)v36[1]);
          sub_AEC220((unsigned __int8 **)v38, a4, a5);
          sub_AE9DF0((unsigned __int8 **)v38, (__int64)"xnack+", 1u);
          if ( v36[0] != &v37 )
            operator delete(v36[0]);
          sub_AEA040((__int64)v38);
          v6 = v28;
          v23 = 0;
        }
        v25 = (char *)ptr;
        if ( si128.m128i_i32[1] && si128.m128i_i32[0] )
        {
          v26 = 8LL * (unsigned int)(si128.m128i_i32[0] - 1) + 8;
          do
          {
            v27 = *(_QWORD **)&v25[v23];
            if ( v27 && v27 != (_QWORD *)-8LL )
            {
              v29 = v23;
              operator delete(v27, *v27 + 17LL, 8);
              v25 = (char *)ptr;
              v23 = v29;
            }
            v23 += 8;
          }
          while ( v23 != v26 );
        }
        free(v25);
      }
    }
  }
  else
  {
    return 0;
  }
  return v6;
}
