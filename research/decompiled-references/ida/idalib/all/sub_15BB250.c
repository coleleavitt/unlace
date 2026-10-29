__int64 **__fastcall sub_15BB250(
        __int64 **a1,
        const void *a2,
        size_t a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10)
{
  __int64 v11; // r14
  __int64 *v15; // rax
  bool v16; // zf
  __int64 v17; // rdi
  _QWORD *v18; // r12
  unsigned __int64 v19; // rbp
  __int64 v20; // rax
  int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // r15
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // [rsp+8h] [rbp-90h]
  __int64 v33; // [rsp+10h] [rbp-88h] BYREF
  int v34; // [rsp+18h] [rbp-80h]
  __int64 v35; // [rsp+20h] [rbp-78h]
  _QWORD v36[13]; // [rsp+30h] [rbp-68h] BYREF

  v11 = a4;
  v36[0] = sub_15BAE70((__int64)a1, a5);
  v36[1] = sub_15BAE70((__int64)a1, a6);
  v36[2] = sub_15BAE70((__int64)a1, a7);
  v36[3] = sub_15BAE70((__int64)a1, a8);
  v36[4] = sub_15BAE70((__int64)a1, a9);
  v15 = sub_15BAE70((__int64)a1, a10);
  v16 = a1[3] == nullptr;
  v36[5] = v15;
  if ( v16 )
    sub_15B91E0(a1);
  v17 = **a1;
  v18 = *(_QWORD **)(v17 + 248);
  v19 = sub_15BA330(v17, a2, a3);
  v20 = v18[2389];
  v21 = *(_DWORD *)(v19 + 24);
  v22 = *(_QWORD *)(v19 + 160);
  v33 = *(_QWORD *)(v19 + 40);
  v34 = v21;
  v35 = v22;
  v23 = sub_C0C310(v18, 0, 0, 0, v19, 0, (__int64)&v33, v20, 0, 0, 0, 0);
  v24 = sub_A70010((__int64)v18, *(_QWORD *)(v19 + 48));
  v26 = sub_C0A3E0(v18, v24, 61, v23, 0, 0, 0);
  if ( (a4 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v30 = *(_QWORD *)(*(_QWORD *)(v19 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v31 = (unsigned int)*(unsigned __int8 *)(v30 + 16) - 25;
    if ( (unsigned int)v31 > 1 )
      v11 = *(_QWORD *)(sub_F63050(v30, v26, v31, v25) + 24);
    else
      v11 = *(_QWORD *)(v30 + 24);
  }
  v27 = sub_C0BFD0(v18, v26, v36, 6, v11, 0, 0, 0, 0, 0);
  v28 = *((unsigned int *)a1 + 28);
  if ( v28 + 1 > (unsigned __int64)*((unsigned int *)a1 + 29) )
  {
    v32 = v27;
    sub_2237220(a1 + 13, a1 + 15, v28 + 1, 8);
    v28 = *((unsigned int *)a1 + 28);
    v27 = v32;
  }
  a1[13][v28] = v27;
  ++*((_DWORD *)a1 + 28);
  return a1;
}
