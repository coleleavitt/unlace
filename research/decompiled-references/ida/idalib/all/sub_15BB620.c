__int64 *__fastcall sub_15BB620(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  unsigned int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r14
  __int64 *v10; // r13
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r13
  _QWORD *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __m128i si128; // xmm0
  unsigned int v22; // eax
  __int64 v23; // rax
  __int64 **v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 *v35; // [rsp+8h] [rbp-E0h] BYREF
  __int64 *v36; // [rsp+10h] [rbp-D8h] BYREF
  unsigned __int64 v37; // [rsp+18h] [rbp-D0h]
  __int64 v38; // [rsp+20h] [rbp-C8h]
  __int64 v39; // [rsp+28h] [rbp-C0h]
  __int16 v40; // [rsp+30h] [rbp-B8h]
  void *v41; // [rsp+38h] [rbp-B0h]
  __int64 v42; // [rsp+40h] [rbp-A8h]
  _BYTE v43[48]; // [rsp+48h] [rbp-A0h] BYREF
  void *ptr; // [rsp+78h] [rbp-70h]
  __int64 v45; // [rsp+80h] [rbp-68h]
  _BYTE v46[96]; // [rsp+88h] [rbp-60h] BYREF

  v2 = *a1;
  v36 = a1;
  v3 = *(_QWORD *)(v2 + 248);
  v42 = 0x200000000LL;
  v45 = 0x600000000LL;
  v4 = *(_QWORD *)(v3 + 18768);
  v5 = *(_QWORD *)(v3 + 17504);
  v37 = 0;
  v39 = 0;
  v38 = v4;
  v40 = 0;
  v41 = v43;
  ptr = v46;
  v6 = sub_2244B30("IncrementCounter", 16);
  v9 = (unsigned int)sub_2244CB0(v5, "IncrementCounter", 16, v6);
  v10 = (__int64 *)(*(_QWORD *)v5 + 8 * v9);
  if ( !*v10 )
  {
LABEL_11:
    v19 = *(_QWORD *)(v5 + 24);
    *(_QWORD *)(v5 + 104) += 33LL;
    v20 = (v19 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(v5 + 32) >= v20 + 33 && v19 )
      *(_QWORD *)(v5 + 24) = v20 + 33;
    else
      v20 = sub_986170(v5 + 24, 33, 33, 3, v7, v8);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA7E0);
    *(_BYTE *)(v20 + 32) = 0;
    *(_QWORD *)v20 = 16;
    *(__m128i *)(v20 + 16) = si128;
    *(_QWORD *)(v20 + 8) = 0;
    *v10 = v20;
    ++*(_DWORD *)(v5 + 12);
    v22 = sub_22450D0(v5, (unsigned int)v9);
    sub_989490(&v35, (__int64 *)(*(_QWORD *)v5 + 8LL * v22), 0);
    v13 = *v35;
    v14 = *(_QWORD **)(*v35 + 8);
    if ( v14 )
      goto LABEL_15;
    goto LABEL_4;
  }
  if ( *v10 == -8 )
  {
    --*(_DWORD *)(v5 + 16);
    goto LABEL_11;
  }
  sub_989490(&v35, v10, 0);
  v13 = *v35;
  v14 = *(_QWORD **)(*v35 + 8);
  if ( v14 )
  {
LABEL_15:
    v17 = (unsigned __int64)v14;
    goto LABEL_16;
  }
LABEL_4:
  v15 = *(_QWORD *)(v5 + 120);
  if ( v15 )
  {
    v14 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v15 + 16LL))(
                      v15,
                      "IncrementCounter",
                      16);
    *(_QWORD *)(v13 + 8) = v14;
    if ( v14 )
      goto LABEL_15;
  }
  v16 = *(_QWORD *)(v5 + 24);
  *(_QWORD *)(v5 + 104) += 24LL;
  v17 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(v5 + 32) >= v17 + 24 && v16 )
  {
    *(_QWORD *)(v5 + 24) = v17 + 24;
    v14 = (_QWORD *)((v16 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  }
  else
  {
    v14 = (_QWORD *)sub_986170(v5 + 24, 24, 24, 3, v11, v12);
    v17 = (unsigned __int64)v14;
  }
  v18 = *v14 & 0xFFFFF80000000000LL;
  v14[1] = 0;
  *v14 = v18 | 0x1FFFC05;
  *(_QWORD *)(v13 + 8) = v14;
  v14[2] = v13;
LABEL_16:
  *(_WORD *)v14 = *(_WORD *)v14 & 0xFE00 | 5;
  v37 = v17;
  v23 = sub_15B9A20((__int64)a1, 1);
  v24 = sub_15BB460(&v36, "__builtin_hlsl_buffer_update_counter", 0x24u, 0, 0x80u, v23);
  v29 = sub_15B9700((__int64)v24, (__int64)"__builtin_hlsl_buffer_update_counter", v25, v26, v27, v28);
  sub_15B9700((__int64)&v36, (__int64)"__builtin_hlsl_buffer_update_counter", v30, v31, v32, v33);
  if ( ptr != v46 )
    free(ptr);
  if ( v41 != v43 )
    free(v41);
  return v29;
}
