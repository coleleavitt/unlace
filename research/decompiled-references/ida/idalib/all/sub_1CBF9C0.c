unsigned __int64 __fastcall sub_1CBF9C0(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        double a8)
{
  bool v8; // sf
  char v11; // al
  _QWORD *v12; // rbx
  __int64 v13; // r13
  unsigned __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rbp
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // rdi
  unsigned __int64 result; // rax
  __int64 v21; // rdi
  unsigned __int64 v22; // rdi
  char v23; // al
  __int64 v24; // rax
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rsi
  unsigned __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rbp
  unsigned __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r13
  __int64 v42; // rax
  _QWORD *v43; // rax
  unsigned int v44; // [rsp+1Ch] [rbp-DCh] BYREF
  bool v45; // [rsp+27h] [rbp-D1h] BYREF
  __int64 v46; // [rsp+28h] [rbp-D0h] BYREF
  _BYTE v47[200]; // [rsp+30h] [rbp-C8h] BYREF

  v8 = *(char *)(a3 + 28) < 0;
  v44 = a2;
  if ( v8 )
    return 0;
  v11 = *(_BYTE *)(a3 + 28) & 0x7F;
  if ( v11 != 55 )
  {
    v27 = *a1;
    v28 = *(_QWORD *)(a3 + 48);
    if ( v11 != 81 )
    {
      if ( v28 )
        return v28 & 0xFFFFFFFFFFFFFFF0LL;
      else
        return sub_A7AA70(*(_QWORD *)(v27 + 248), a3, a3, a4, a5, a6);
    }
    v29 = v28 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !(unsigned __int8)sub_18F5260(
                             v27,
                             *(_QWORD *)((v28 & 0xFFFFFFFFFFFFFFF8LL) + 64),
                             (int *)&v44,
                             1u,
                             0,
                             0,
                             a7,
                             a8,
                             0,
                             0,
                             0) )
    {
      v33 = *(_QWORD *)(v29 + 64);
      v34 = *(_QWORD *)(v33 + 48);
      v35 = *(_QWORD *)(*a1 + 248);
      if ( v34 )
        v36 = v34 & 0xFFFFFFFFFFFFFFF0LL;
      else
        v36 = sub_A7AA70(*(_QWORD *)(*a1 + 248), v33, 0, v30, v31, v32);
      return sub_A77600(v35, v29, v36);
    }
    return 0;
  }
  if ( !*(_DWORD *)(a3 + 56) )
  {
    sub_168B9F0((__int64)v47, (__int64 *)(*a1 + 8), a2, 0x1527u, 0);
    v21 = *(_QWORD *)(a3 + 16);
    if ( (v21 & 4) != 0 )
      v22 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v22 = v21 & 0xFFFFFFFFFFFFFFF8LL;
    v23 = *(_BYTE *)(v22 + 8) & 0x7F;
    if ( v23 == 62 )
      v23 = *(_BYTE *)(sub_B8EAA0(v22) + 8) & 0x7F;
    v45 = ((v23 + 70) & 0x7Fu) <= 3;
    v24 = sub_1588420((__int64)v47, (unsigned __int8 *)&v45);
    v25 = v24;
    if ( *(_BYTE *)(v24 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v24 + 32), a3, 0xAu);
    }
    else if ( *(_BYTE *)(v24 + 132) )
    {
      v41 = sub_168B9E0((_QWORD *)v24);
      v42 = *(_QWORD *)(v25 + 16);
      if ( v42 )
        v42 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v42 + 32LL))(*(_QWORD *)(v25 + 16));
      v46 = v42;
      v43 = sub_1587BC0(v41, &v46, v37, v38, v39, v40);
      sub_AE9DF0((unsigned __int8 **)(*v43 + 32LL * *(unsigned int *)(v25 + 128) + 8), a3, 0xAu);
    }
    sub_15F7200(v47);
    return 0;
  }
  v12 = (_QWORD *)(a3 + 64);
  v13 = 0;
  v14 = 0;
  v15 = a3 + 64 + 8LL * *(unsigned int *)(a3 + 56);
  do
  {
    v16 = sub_1CBF9C0(a1, v44, *v12);
    v17 = v13 & 0xFFFFFFFFFFFFFFF0LL;
    v18 = v16 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (v16 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v19 = *(_QWORD *)v18;
      if ( *(_BYTE *)(*(_QWORD *)v18 + 16LL) == 55
        || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 55
        && (v26 = sub_F63050(v19, v44, v18, v17), v17 = v13 & 0xFFFFFFFFFFFFFFF0LL,
                                                  v18 = v16 & 0xFFFFFFFFFFFFFFF0LL,
                                                  v26) )
      {
        v14 = v16;
      }
      else if ( !v17 )
      {
        v17 = v18;
        v13 = v16;
      }
    }
    ++v12;
  }
  while ( (_QWORD *)v15 != v12 );
  result = v14;
  if ( v17 )
    return v13;
  return result;
}
