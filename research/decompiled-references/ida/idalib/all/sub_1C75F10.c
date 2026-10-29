unsigned __int64 __fastcall sub_1C75F10(
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
  bool v24; // r12
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rsi
  unsigned __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rbp
  unsigned __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r13
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // r12
  __int64 v48; // rax
  _QWORD *v49; // rax
  unsigned int v50[3]; // [rsp+1Ch] [rbp-DCh] BYREF
  __int64 v51; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v52[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v53; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v54[11]; // [rsp+50h] [rbp-A8h] BYREF
  char v55; // [rsp+A8h] [rbp-50h]
  unsigned int v56; // [rsp+B0h] [rbp-48h]
  char v57; // [rsp+B4h] [rbp-44h]

  v8 = *(char *)(a3 + 28) < 0;
  v50[0] = a2;
  if ( v8 )
    return 0;
  v11 = *(_BYTE *)(a3 + 28) & 0x7F;
  if ( v11 != 55 )
  {
    v26 = *a1;
    v27 = *(_QWORD *)(a3 + 48);
    if ( v11 != 81 )
    {
      if ( v27 )
        return v27 & 0xFFFFFFFFFFFFFFF0LL;
      else
        return sub_A7AA70(*(_QWORD *)(v26 + 248), a3, a3, a4, a5, a6);
    }
    v28 = v27 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !(unsigned __int8)sub_18F5260(
                             v26,
                             *(_QWORD *)((v27 & 0xFFFFFFFFFFFFFFF8LL) + 64),
                             (int *)v50,
                             1u,
                             0,
                             0,
                             a7,
                             a8,
                             0,
                             0,
                             0) )
    {
      v32 = *(_QWORD *)(v28 + 64);
      v33 = *(_QWORD *)(v32 + 48);
      v34 = *(_QWORD *)(*a1 + 248);
      if ( v33 )
        v35 = v33 & 0xFFFFFFFFFFFFFFF0LL;
      else
        v35 = sub_A7AA70(*(_QWORD *)(*a1 + 248), v32, 0, v29, v30, v31);
      return sub_A77600(v34, v28, v35);
    }
    return 0;
  }
  if ( !*(_DWORD *)(a3 + 56) )
  {
    sub_168B9F0((__int64)v52, (__int64 *)(*a1 + 8), a2, 0x1527u, 0);
    v21 = *(_QWORD *)(a3 + 16);
    if ( (v21 & 4) != 0 )
      v22 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v22 = v21 & 0xFFFFFFFFFFFFFFF8LL;
    v23 = *(_BYTE *)(v22 + 8) & 0x7F;
    if ( v23 == 62 )
      v23 = *(_BYTE *)(sub_B8EAA0(v22) + 8) & 0x7F;
    v24 = ((v23 + 70) & 0x7Fu) <= 3;
    if ( v55 )
    {
      sub_AE9DF0(v54, v24, 2u);
    }
    else
    {
      if ( !v57 )
      {
LABEL_18:
        sub_15F7200(v52);
        return 0;
      }
      v40 = sub_168B9E0(v52);
      v41 = v53;
      if ( v53 )
        v41 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v53 + 32LL))(v53);
      v51 = v41;
      v42 = sub_1587BC0(v40, &v51, v36, v37, v38, v39);
      sub_AE9DF0((unsigned __int8 **)(*v42 + 32LL * v56 + 8), v24, 2u);
    }
    if ( v55 )
    {
      sub_AE9DF0(v54, a3, 0xAu);
    }
    else if ( v57 )
    {
      v47 = sub_168B9E0(v52);
      v48 = v53;
      if ( v53 )
        v48 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v53 + 32LL))(v53);
      v51 = v48;
      v49 = sub_1587BC0(v47, &v51, v43, v44, v45, v46);
      sub_AE9DF0((unsigned __int8 **)(*v49 + 32LL * v56 + 8), a3, 0xAu);
    }
    goto LABEL_18;
  }
  v12 = (_QWORD *)(a3 + 64);
  v13 = 0;
  v14 = 0;
  v15 = a3 + 64 + 8LL * *(unsigned int *)(a3 + 56);
  do
  {
    v16 = sub_1C75F10(a1, v50[0], *v12);
    v17 = v13 & 0xFFFFFFFFFFFFFFF0LL;
    v18 = v16 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (v16 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v19 = *(_QWORD *)v18;
      if ( *(_BYTE *)(*(_QWORD *)v18 + 16LL) == 55
        || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 55
        && (v25 = sub_F63050(v19, v50[0], v18, v17),
            v18 = v16 & 0xFFFFFFFFFFFFFFF0LL,
            v17 = v13 & 0xFFFFFFFFFFFFFFF0LL,
            v25) )
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
