void __fastcall sub_12D9370(__int64 a1, int a2, int *a3, __int64 a4)
{
  int v7; // ebp
  int v8; // r13d
  __int32 v9; // edx
  __int32 v10; // edx
  void *v11; // rcx
  __int64 v12; // r15
  __int64 v13; // rdi
  __int64 v14; // rax
  size_t v15; // rdx
  size_t v16; // r15
  unsigned int v17; // eax
  __int64 v18; // r8
  unsigned int v19; // r10d
  __int64 *v20; // r9
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned int v28; // eax
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  size_t v31; // rdx
  unsigned int v32; // eax
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rax
  void *src; // [rsp+0h] [rbp-98h]
  void *srca; // [rsp+0h] [rbp-98h]
  _QWORD *srcb; // [rsp+0h] [rbp-98h]
  void *srcc; // [rsp+0h] [rbp-98h]
  __int64 v40; // [rsp+8h] [rbp-90h]
  _QWORD *v41; // [rsp+8h] [rbp-90h]
  unsigned int v42; // [rsp+8h] [rbp-90h]
  unsigned int v43; // [rsp+10h] [rbp-88h]
  __int64 *v44; // [rsp+10h] [rbp-88h]
  __int64 *v45; // [rsp+18h] [rbp-80h]
  __int64 *v46; // [rsp+28h] [rbp-70h] BYREF
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __m128i si128; // [rsp+38h] [rbp-60h]
  _BYTE v49[80]; // [rsp+48h] [rbp-50h] BYREF

  v7 = sub_101FC50(*(_QWORD *)a1, a2);
  ptr = (void *)sub_101FC50(*(_QWORD *)a1, v7);
  v8 = (int)ptr;
  si128.m128i_i32[0] = v9;
  for ( *a3 = (int)ptr; sub_1020410(*(_QWORD *)a1, *a3); *a3 = (int)ptr )
  {
    ptr = (void *)sub_101FC50(*(_QWORD *)a1, *a3);
    si128.m128i_i32[0] = v10;
  }
  v11 = *(void **)(a1 + 8);
  v12 = *(_QWORD *)a1;
  v13 = (unsigned int)v7;
  ptr = v49;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8080);
  if ( v7 < 0 )
  {
    srca = v11;
    v28 = sub_1021B90(v12, v7);
    v11 = srca;
    v13 = v28;
  }
  v14 = sub_13DB940(v13, &ptr, v12, v11, 0);
  *(_QWORD *)a4 = 0;
  src = (void *)v14;
  v16 = v15;
  *(_QWORD *)(a4 + 8) = 0;
  if ( v15 )
  {
    v17 = sub_2244B30(v14, v15);
    v19 = sub_2244CB0(a1 + 160, src, v16, v17);
    v20 = (__int64 *)(*(_QWORD *)(a1 + 160) + 8LL * v19);
    if ( *v20 )
    {
      if ( *v20 != -8 )
      {
        sub_989490(&v46, v20, 0);
        v22 = *v46;
        v23 = *(_QWORD **)(*v46 + 8);
        if ( !v23 )
          goto LABEL_13;
        goto LABEL_24;
      }
      --*(_DWORD *)(a1 + 176);
    }
    v29 = *(_QWORD *)(a1 + 184);
    *(_QWORD *)(a1 + 264) += v16 + 17;
    v30 = (v29 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v31 = v16 + 17 + v30;
    if ( *(_QWORD *)(a1 + 192) >= v31 && v29 )
    {
      *(_QWORD *)(a1 + 184) = v31;
    }
    else
    {
      v44 = v20;
      v42 = v19;
      v34 = sub_986170(a1 + 184, v16 + 17, v16 + 17, 3, v18, (__int64)v20);
      v20 = v44;
      v19 = v42;
      v30 = v34;
    }
    v45 = v20;
    v43 = v19;
    v41 = (_QWORD *)v30;
    memcpy((void *)(v30 + 16), src, v16);
    *((_BYTE *)v41 + v16 + 16) = 0;
    *v41 = v16;
    v41[1] = 0;
    *v45 = (__int64)v41;
    ++*(_DWORD *)(a1 + 172);
    v32 = sub_22450D0(a1 + 160, v43);
    sub_989490(&v46, (__int64 *)(*(_QWORD *)(a1 + 160) + 8LL * v32), 0);
    v22 = *v46;
    v23 = *(_QWORD **)(*v46 + 8);
    if ( !v23 )
    {
LABEL_13:
      v24 = *(_QWORD *)(a1 + 280);
      if ( !v24
        || (v40 = v22,
            v25 = (*(__int64 (__fastcall **)(__int64, void *, size_t))(*(_QWORD *)v24 + 16LL))(v24, src, v16),
            v22 = v40,
            v23 = (_QWORD *)v25,
            (*(_QWORD *)(v40 + 8) = v25) == 0) )
      {
        v26 = *(_QWORD *)(a1 + 184);
        *(_QWORD *)(a1 + 264) += 24LL;
        v23 = (_QWORD *)((v26 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( *(_QWORD *)(a1 + 192) >= (unsigned __int64)(v23 + 3) && v26 )
        {
          *(_QWORD *)(a1 + 184) = v23 + 3;
        }
        else
        {
          srcc = (void *)v22;
          v35 = sub_986170(a1 + 184, 24, 24, 3, v21, v22);
          v22 = (__int64)srcc;
          v23 = (_QWORD *)v35;
        }
        v27 = *v23 & 0xFFFFF80000000000LL;
        v23[1] = 0;
        *v23 = v27 | 0x1FFFC05;
        *(_QWORD *)(v22 + 8) = v23;
        v23[2] = v22;
      }
    }
LABEL_24:
    if ( v7 < 0 )
    {
      srcb = v23;
      v33 = sub_1021B90(*(_QWORD *)a1, v7);
      v23 = srcb;
      v7 = v33;
    }
    *(_QWORD *)a4 = v23;
    *(_DWORD *)(a4 + 8) = v8;
    *(_DWORD *)(a4 + 12) = v7;
  }
  if ( ptr != v49 )
    free(ptr);
}
