__int64 __fastcall sub_3AA6E0(__int64 *a1, __int64 *a2, unsigned __int64 a3)
{
  const char *v6; // rax
  const char *v7; // r12
  size_t v8; // rax
  size_t v9; // r13
  int v10; // eax
  int v11; // r12d
  int v12; // r15d
  __int64 v13; // rax
  unsigned __int8 v14; // dl
  __int64 bpt_kernel_interface; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  void *v21; // rdi
  size_t v22; // r15
  __int64 v23; // rax
  __int64 v24; // [rsp+8h] [rbp-60h]
  __int64 v25; // [rsp+1Ch] [rbp-4Ch] BYREF
  int v26; // [rsp+24h] [rbp-44h]
  unsigned __int64 v27; // [rsp+28h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v6 = (const char *)unpack_ds(a2, a3, 0);
  if ( v6 && (v7 = v6, v8 = strlen(v6), (v9 = v8) != 0) )
  {
    v21 = (void *)a1[3];
    v22 = v8 + 1;
    if ( a1[5] < v8 + 1 )
    {
      v23 = qvector_reserve(a1 + 3, a1[3], v22, 1);
      a1[3] = v23;
      v21 = (void *)v23;
    }
    a1[4] = v22;
    memmove(v21, v7, v9);
    *(_BYTE *)(a1[3] + v9) = 0;
  }
  else
  {
    a1[4] = 0;
  }
  v10 = unpack_dd(a2);
  v11 = v10;
  if ( a1[2] < (unsigned __int64)v10 )
    *a1 = qvector_reserve(a1, *a1, v10, 8);
  v12 = 0;
  if ( v11 <= 0 )
    return 1;
  while ( *a2 < a3 )
  {
    v13 = *a2 + 1;
    v25 = 0xFFFFFFFFLL;
    v26 = 0;
    v14 = *(_BYTE *)(v13 - 1);
    *a2 = v13;
    v26 = v14;
    LODWORD(v25) = unpack_dd(a2);
    HIDWORD(v25) = unpack_dd(a2);
    bpt_kernel_interface = get_bpt_kernel_interface(a2, a3);
    v16 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)bpt_kernel_interface + 280LL))(
            bpt_kernel_interface,
            &v25);
    if ( v16 )
    {
      v17 = a1[1];
      v18 = *a1;
      if ( a1[2] < (unsigned __int64)(v17 + 1) )
      {
        v24 = v16;
        v19 = qvector_reserve(a1, v18, v17 + 1, 8);
        v16 = v24;
        *a1 = v19;
        v18 = v19;
        v17 = a1[1];
      }
      *(_QWORD *)(v18 + 8 * v17) = v16;
      ++a1[1];
    }
    if ( v11 == ++v12 )
      return 1;
  }
  return 0;
}

