unsigned __int64 __fastcall sub_174ACC0(__int64 *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool v6; // sf
  char v9; // al
  _QWORD *v10; // rbx
  __int64 v11; // r13
  unsigned __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // rbp
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // rdi
  unsigned __int64 result; // rax
  __int64 v19; // rdi
  unsigned __int64 v20; // rdi
  char v21; // al
  bool v22; // r12
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rsi
  unsigned __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rbp
  unsigned __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r13
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r12
  __int64 v46; // rax
  _QWORD *v47; // rax
  unsigned int v48; // [rsp+1Ch] [rbp-DCh] BYREF
  __int64 v49; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v50[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v52[11]; // [rsp+50h] [rbp-A8h] BYREF
  char v53; // [rsp+A8h] [rbp-50h]
  unsigned int v54; // [rsp+B0h] [rbp-48h]
  char v55; // [rsp+B4h] [rbp-44h]

  v6 = *(char *)(a3 + 28) < 0;
  v48 = a2;
  if ( v6 )
    return 0;
  v9 = *(_BYTE *)(a3 + 28) & 0x7F;
  if ( v9 != 55 )
  {
    v24 = *a1;
    v25 = *(_QWORD *)(a3 + 48);
    if ( v9 != 81 )
    {
      if ( v25 )
        return v25 & 0xFFFFFFFFFFFFFFF0LL;
      else
        return sub_A7AA70(*(_QWORD *)(v24 + 248), a3, a3, a4, a5, a6);
    }
    v26 = v25 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !(unsigned __int8)sub_18F5260(
                             v24,
                             *(_QWORD *)((v25 & 0xFFFFFFFFFFFFFFF8LL) + 64),
                             (unsigned int)&v48,
                             1,
                             0,
                             0,
                             0,
                             0,
                             0) )
    {
      v30 = *(_QWORD *)(v26 + 64);
      v31 = *(_QWORD *)(v30 + 48);
      v32 = *(_QWORD *)(*a1 + 248);
      if ( v31 )
        v33 = v31 & 0xFFFFFFFFFFFFFFF0LL;
      else
        v33 = sub_A7AA70(*(_QWORD *)(*a1 + 248), v30, 0, v27, v28, v29);
      return sub_A77600(v32, v26, v33);
    }
    return 0;
  }
  if ( !*(_DWORD *)(a3 + 56) )
  {
    sub_168B9F0((__int64)v50, (__int64 *)(*a1 + 8), a2, 0x1527u, 0);
    v19 = *(_QWORD *)(a3 + 16);
    if ( (v19 & 4) != 0 )
      v20 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v20 = v19 & 0xFFFFFFFFFFFFFFF8LL;
    v21 = *(_BYTE *)(v20 + 8) & 0x7F;
    if ( v21 == 62 )
      v21 = *(_BYTE *)(sub_B8EAA0(v20) + 8) & 0x7F;
    v22 = ((v21 + 70) & 0x7Fu) <= 3;
    if ( v53 )
    {
      sub_AE9DF0(v52, v22, 2u);
    }
    else
    {
      if ( !v55 )
      {
LABEL_18:
        sub_15F7200(v50);
        return 0;
      }
      v38 = sub_168B9E0(v50);
      v39 = v51;
      if ( v51 )
        v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 32LL))(v51);
      v49 = v39;
      v40 = sub_1587BC0(v38, &v49, v34, v35, v36, v37);
      sub_AE9DF0((unsigned __int8 **)(*v40 + 32LL * v54 + 8), v22, 2u);
    }
    if ( v53 )
    {
      sub_AE9DF0(v52, a3, 0xAu);
    }
    else if ( v55 )
    {
      v45 = sub_168B9E0(v50);
      v46 = v51;
      if ( v51 )
        v46 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 32LL))(v51);
      v49 = v46;
      v47 = sub_1587BC0(v45, &v49, v41, v42, v43, v44);
      sub_AE9DF0((unsigned __int8 **)(*v47 + 32LL * v54 + 8), a3, 0xAu);
    }
    goto LABEL_18;
  }
  v10 = (_QWORD *)(a3 + 64);
  v11 = 0;
  v12 = 0;
  v13 = a3 + 64 + 8LL * *(unsigned int *)(a3 + 56);
  do
  {
    v14 = sub_174ACC0(a1, v48, *v10);
    v15 = v11 & 0xFFFFFFFFFFFFFFF0LL;
    v16 = v14 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v17 = *(_QWORD *)v16;
      if ( *(_BYTE *)(*(_QWORD *)v16 + 16LL) == 55
        || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 55
        && (v23 = sub_F63050(v17, v48, v16, v15), v16 = v14 & 0xFFFFFFFFFFFFFFF0LL,
                                                  v15 = v11 & 0xFFFFFFFFFFFFFFF0LL,
                                                  v23) )
      {
        v12 = v14;
      }
      else if ( !v15 )
      {
        v15 = v16;
        v11 = v14;
      }
    }
    ++v10;
  }
  while ( (_QWORD *)v13 != v10 );
  result = v12;
  if ( v15 )
    return v11;
  return result;
}
