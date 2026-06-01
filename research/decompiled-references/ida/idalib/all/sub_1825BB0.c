__m128i *__fastcall sub_1825BB0(__int64 a1, const __m128i *a2, _DWORD *a3, __int64 a4, __int64 a5, double a6)
{
  _DWORD *v8; // r12
  _DWORD *v9; // rbp
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r14
  _QWORD *v15; // rdx
  __int64 v16; // rax
  size_t v17; // rsi
  unsigned int v18; // eax
  __int64 v19; // rsi
  char *v20; // rax
  unsigned __int64 v21; // rdi
  __int64 v22; // rax
  __m128i *v23; // r15
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  _QWORD *v37; // rax
  int v38; // [rsp+0h] [rbp-128h]
  char *v39; // [rsp+0h] [rbp-128h]
  __int64 v40; // [rsp+8h] [rbp-120h]
  __int64 v41; // [rsp+8h] [rbp-120h]
  __int64 v42; // [rsp+8h] [rbp-120h]
  __int64 v43; // [rsp+18h] [rbp-110h] BYREF
  __m128i v44[4]; // [rsp+20h] [rbp-108h] BYREF
  _QWORD v45[2]; // [rsp+60h] [rbp-C8h] BYREF
  _QWORD *v46; // [rsp+70h] [rbp-B8h]
  unsigned __int8 *v47[11]; // [rsp+80h] [rbp-A8h] BYREF
  char v48; // [rsp+D8h] [rbp-50h]
  unsigned int v49; // [rsp+E0h] [rbp-48h]
  char v50; // [rsp+E4h] [rbp-44h]

  v8 = (_DWORD *)a5;
  v9 = (_DWORD *)a4;
  sub_B0E6E0(v44, *(_QWORD *)(a1 + 248), a2, (__int64)a3, a4, a5);
  v11 = sub_1817AB0(a1, a3, (__int64)v44, 0, a6);
  if ( !v11 )
    return nullptr;
  v14 = v11;
  if ( v9 )
  {
    v9 = (_DWORD *)sub_1817AB0(a1, v9, (__int64)v44, 1u, a6);
    if ( !v9 )
      return nullptr;
  }
  v15 = *(_QWORD **)(a1 + 248);
  if ( !v8 )
    goto LABEL_9;
  v16 = *(_QWORD *)(v15[2181] + 208LL);
  v17 = *(_QWORD *)(v16 + 72);
  v38 = sub_FF7C60(*(void **)(v16 + 64), v17);
  if ( v38 <= 20 )
  {
    v18 = sub_EEB7E0((unsigned __int64)v8, v17, a6);
    v19 = a1 + 8;
    sub_168B9F0((__int64)v45, (__int64 *)(a1 + 8), v18, 0x1A42u, 0);
    v20 = sub_FF7B80(v38);
    if ( v48 )
    {
      v19 = (__int64)v20;
      sub_AE9DF0(v47, (__int64)v20, 1u);
    }
    else
    {
      if ( !v50 )
      {
LABEL_8:
        v21 = (unsigned __int64)v8;
        v8 = nullptr;
        v43 = sub_EEC8C0(v21, v19, a6);
        sub_1587DB0((__int64)v45, &v43);
        sub_15F7200(v45);
        v15 = *(_QWORD **)(a1 + 248);
        goto LABEL_9;
      }
      v39 = v20;
      v25 = sub_168B9E0(v45);
      v28 = (__int64)v39;
      v29 = v25;
      v30 = (__int64)v46;
      if ( v46 )
      {
        v40 = v29;
        v30 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, char *))(*v46 + 32LL))(v46, *v46, v29, v39);
        v29 = v40;
        v28 = (__int64)v39;
      }
      v43 = v30;
      v41 = v28;
      v31 = sub_1587BC0(v29, &v43, v29, v28, v26, v27);
      v19 = v41;
      sub_AE9DF0((unsigned __int8 **)(*v31 + 32LL * v49 + 8), v41, 1u);
    }
    if ( v48 )
    {
      v19 = (__int64)a2;
      sub_AE9DF0(v47, (__int64)a2, 0x10u);
    }
    else if ( v50 )
    {
      v32 = sub_168B9E0(v45);
      v36 = (__int64)v46;
      if ( v46 )
      {
        v42 = v32;
        v36 = (*(__int64 (__fastcall **)(_QWORD *))(*v46 + 32LL))(v46);
        v32 = v42;
      }
      v43 = v36;
      v37 = sub_1587BC0(v32, &v43, v32, v33, v34, v35);
      v19 = (__int64)a2;
      sub_AE9DF0((unsigned __int8 **)(*v37 + 32LL * v49 + 8), (__int64)a2, 0x10u);
    }
    goto LABEL_8;
  }
  v8 = (_DWORD *)sub_1817AB0(a1, v8, (__int64)v44, 2u, a6);
  if ( !v8 )
    return nullptr;
  v15 = *(_QWORD **)(a1 + 248);
LABEL_9:
  v22 = v15[294];
  v15[304] += 64LL;
  v23 = (__m128i *)((v22 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v15[295] >= (unsigned __int64)&v23[4] && v22 )
    v15[294] = v23 + 4;
  else
    v23 = (__m128i *)sub_986170((__int64)(v15 + 294), 64, 64, 3, v12, v13);
  sub_B0E6E0(v23, *(_QWORD *)(a1 + 248), a2, v14, (__int64)v9, (__int64)v8);
  return v23;
}
