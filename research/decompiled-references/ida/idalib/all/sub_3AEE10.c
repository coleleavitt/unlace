__int64 __fastcall sub_3AEE10(__int64 *a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  const char *v6; // rax
  const char *v7; // r12
  size_t v8; // rax
  size_t v9; // r13
  int v10; // eax
  int v11; // r12d
  int v12; // r15d
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int8 v15; // dl
  __int64 (__fastcall ***bpt_kernel_interface)(); // rax
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  void *v22; // rdi
  size_t v23; // r15
  __int64 v24; // rax
  __int64 v25; // [rsp+8h] [rbp-60h]
  __int64 v26; // [rsp+10h] [rbp-58h] BYREF
  __int64 v27; // [rsp+18h] [rbp-50h]
  unsigned __int64 v28; // [rsp+28h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v6 = (const char *)unpack_ds(a2, a3, 0);
  if ( v6 && (v7 = v6, v8 = strlen(v6), (v9 = v8) != 0) )
  {
    v22 = (void *)a1[3];
    v23 = v8 + 1;
    if ( a1[5] < v8 + 1 )
    {
      v24 = qvector_reserve(a1 + 3, a1[3], v23, 1);
      a1[3] = v24;
      v22 = (void *)v24;
    }
    a1[4] = v23;
    memmove(v22, v7, v9);
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
  while ( 1 )
  {
    v13 = *a2;
    if ( *a2 >= a3 )
      break;
    v27 = 0;
    v14 = v13 + 1;
    v26 = -1;
    v15 = *(_BYTE *)(v14 - 1);
    *a2 = v14;
    HIDWORD(v27) = v15;
    v26 = unpack_dq(a2);
    LODWORD(v27) = unpack_dd(a2);
    bpt_kernel_interface = get_bpt_kernel_interface();
    v17 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(), __int64 *))(*bpt_kernel_interface)[35])(
            bpt_kernel_interface,
            &v26);
    if ( v17 )
    {
      v18 = a1[1];
      v19 = *a1;
      if ( a1[2] < (unsigned __int64)(v18 + 1) )
      {
        v25 = v17;
        v20 = qvector_reserve(a1, v19, v18 + 1, 8);
        v17 = v25;
        *a1 = v20;
        v19 = v20;
        v18 = a1[1];
      }
      *(_QWORD *)(v19 + 8 * v18) = v17;
      ++a1[1];
    }
    if ( v11 == ++v12 )
      return 1;
  }
  return 0;
}
