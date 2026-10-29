__int64 __fastcall sub_1F14D50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned int v10; // ecx
  __int64 *v11; // rsi
  __int64 v12; // r8
  unsigned __int64 v13; // r13
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // r12d
  size_t v18; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r14
  __int64 (__fastcall *v22)(__int64); // rax
  int v23; // eax
  void **p_ptr; // rsi
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  void *v32; // rdi
  unsigned __int64 *v33; // r15
  unsigned __int64 *v34; // r13
  __int64 (__fastcall *v35)(__int64, __int64, unsigned __int64, __int64, __int64, __int64); // rdx
  __int64 (__fastcall *v36)(__int64, __int64, unsigned __int64, __int64, __int64, __int64); // rax
  int v37; // eax
  int v38; // eax
  int v40; // esi
  int v41; // r10d
  __int64 v42; // r8
  __int64 v43; // rdi
  int v44; // eax
  __int64 v46; // [rsp+18h] [rbp-D0h] BYREF
  int v47; // [rsp+2Ch] [rbp-BCh] BYREF
  void *ptr; // [rsp+30h] [rbp-B8h] BYREF
  int v49; // [rsp+38h] [rbp-B0h]
  _BYTE v50[32]; // [rsp+40h] [rbp-A8h] BYREF
  __m128 v51; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v52[120]; // [rsp+70h] [rbp-78h] BYREF

  v8 = *(unsigned int *)(a2 + 16);
  v9 = *(_QWORD *)a2;
  v46 = a3;
  if ( (_DWORD)v8 )
  {
    v10 = (v8 - 1) & (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4));
    v11 = (__int64 *)(v9 + 24LL * v10);
    v12 = *v11;
    if ( a3 == *v11 )
    {
LABEL_3:
      sub_1ECCBC0(&v51, v11, (_QWORD *)(v9 + 24 * v8), a2, 1);
      v13 = v51.m128_u64[0];
      goto LABEL_4;
    }
    v40 = 1;
    if ( v12 != -4096 )
    {
      do
      {
        v41 = v40 + 1;
        v10 = (v8 - 1) & (v40 + v10);
        v11 = (__int64 *)(v9 + 24LL * v10);
        v42 = *v11;
        if ( a3 == *v11 )
          goto LABEL_3;
        v40 = v41;
      }
      while ( v42 != -4096 );
    }
  }
  sub_1ECCBC0(&v51, (_QWORD *)(v9 + 24 * v8), (_QWORD *)(v9 + 24 * v8), a2, 1);
  v13 = v51.m128_u64[0];
LABEL_4:
  v14 = a2;
  v15 = 3LL * *(unsigned int *)(a2 + 16);
  v16 = *(_QWORD *)a2;
  v17 = 0;
  sub_1ECCBC0(&v51, (_QWORD *)(v16 + 8 * v15), (_QWORD *)(v16 + 8 * v15), v14, 1);
  if ( v13 == v51.m128_u64[0] )
    return v17;
  v51.m128_u64[0] = (unsigned __int64)&v46;
  v18 = j__strlen("Load External Specializations for ");
  v21 = sub_224AF30("Load External Specializations for ", v18, sub_1EA8890, &v51, v19, v20);
  v22 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 24) + 184LL);
  if ( v22 == sub_1EA8950 )
  {
    v23 = *(_DWORD *)(a1 + 9408) + 1;
    *(_DWORD *)(a1 + 9408) = v23;
    if ( v23 == 1 )
    {
      v43 = *(_QWORD *)(a1 + 496);
      if ( v43 )
        sub_224E010(v43);
    }
  }
  else
  {
    v22(a1 + 24);
  }
  p_ptr = (void **)(v13 + 8);
  v47 = sub_1FE3F40(a4, a5);
  sub_1F02AD0((__int64 *)&ptr, v13 + 8, (__int64)&v47, v25, v26, v27);
  v51.m128_u64[0] = (unsigned __int64)v52;
  v51.m128_u64[1] = 0x800000000LL;
  if ( !v49 )
  {
    v32 = ptr;
    if ( ptr == v50 )
      goto LABEL_10;
    goto LABEL_9;
  }
  p_ptr = &ptr;
  sub_1EB3E90((char ***)&v51, (char ***)&ptr);
  v32 = ptr;
  if ( ptr != v50 )
LABEL_9:
    free(v32);
LABEL_10:
  v33 = (unsigned __int64 *)v51.m128_u64[0];
  v17 = 0;
  v34 = (unsigned __int64 *)(v51.m128_u64[0] + 8LL * v51.m128_u32[2]);
  if ( (unsigned __int64 *)v51.m128_u64[0] != v34 )
  {
    do
    {
      while ( 1 )
      {
        p_ptr = (void **)*v33;
        if ( !sub_1EDB740(a1, *v33, v28, v29, v30, v31) )
          break;
        if ( v34 == ++v33 )
          goto LABEL_15;
      }
      p_ptr = (void **)*v33++;
      v17 = 1;
      sub_1EDB980((_QWORD *)a1, (unsigned __int64)p_ptr, v28, v29, v30, v31);
    }
    while ( v34 != v33 );
LABEL_15:
    v34 = (unsigned __int64 *)v51.m128_u64[0];
  }
  if ( v34 != (unsigned __int64 *)v52 )
    free(v34);
  v35 = sub_1F14160;
  v36 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, __int64, __int64, __int64))(*(_QWORD *)(a1 + 24)
                                                                                                + 192LL);
  if ( v36 != sub_1F14160 )
  {
    ((void (__fastcall *)(__int64))v36)(a1 + 24);
    if ( !v21 )
      return v17;
    goto LABEL_23;
  }
  v37 = *(_DWORD *)(a1 + 9408);
  if ( v37 != 1 )
  {
    v38 = v37 - 1;
    *(_DWORD *)(a1 + 9408) = v38;
    if ( v38 )
      goto LABEL_22;
    goto LABEL_21;
  }
  sub_1F10680((std::_V2 *)a1);
  v44 = *(_DWORD *)(a1 + 9408) - 1;
  *(_DWORD *)(a1 + 9408) = v44;
  if ( !v44 )
LABEL_21:
    sub_1ED6E50(a1, (__int64)p_ptr, (unsigned __int64)v35, v29, v30, v31);
LABEL_22:
  if ( v21 )
LABEL_23:
    sub_224D6D0(v21);
  return v17;
}
