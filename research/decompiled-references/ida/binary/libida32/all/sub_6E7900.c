unsigned __int64 __fastcall sub_6E7900(_QWORD *a1, _QWORD *a2, const char *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // r14d
  _QWORD *v9; // r13
  __int64 *v10; // rax
  __int64 v11; // r12
  __int64 v13; // rsi
  void **v14; // rcx
  __int64 v15; // rsi
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // r14
  const char *v20; // rdx
  unsigned __int64 v21; // [rsp+8h] [rbp-C0h]
  __int64 v22; // [rsp+18h] [rbp-B0h] BYREF
  void *v23; // [rsp+20h] [rbp-A8h] BYREF
  void *v24; // [rsp+28h] [rbp-A0h] BYREF
  void *v25; // [rsp+30h] [rbp-98h] BYREF
  __int128 v26; // [rsp+38h] [rbp-90h]
  void *v27; // [rsp+50h] [rbp-78h] BYREF
  __int128 v28; // [rsp+58h] [rbp-70h]
  void *ptr; // [rsp+70h] [rbp-58h] BYREF
  __int128 v30; // [rsp+78h] [rbp-50h]
  unsigned __int64 v31; // [rsp+88h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v8 = a4;
  v9 = sub_6E4310(a1, (__int64)a2, (__int64)a3, a4, a5, a6);
  v10 = sub_6D3920(a1, a3);
  if ( v10 )
  {
    v11 = sub_6D3C30((__int64)a1, v10);
    return sub_6D3D30((__int64)a1, a2, v11);
  }
  if ( get_tinfo_size(0, *a2, 0) == -1 )
  {
    v17 = sub_B72E20(a1[6], 0);
    *(_BYTE *)(v17 + 73) &= 0x1Fu;
    v18 = v17;
    sub_B68340(v17, v9);
    *(_QWORD *)(v18 + 40) = sub_6D3CC0((__int64)a1, a3);
    sub_6D3180((__int64)a1, a3, v18, 2);
    sub_B70D90(v9, v18);
    v11 = sub_A56EE0(a1[6], v18);
    sub_B5CC80(v18);
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v18 + 104LL))(v18);
    *(_DWORD *)(v18 + 72) &= 0xF7FFFE7F;
    return sub_6D3D30((__int64)a1, a2, v11);
  }
  v13 = *a2;
  v22 = 0;
  v25 = nullptr;
  v26 = 0;
  if ( (v13 & 0x100) != 0 && get_tinfo_pdata(&v25, v13, 1) )
  {
    v20 = haystack;
    if ( (_QWORD)v26 )
      v20 = (const char *)v25;
    sub_6BC100((__int64)a1, &v22, v20);
  }
  else
  {
    v28 = 0;
    v30 = 0;
    v27 = nullptr;
    ptr = nullptr;
    serialize_tinfo(&v27, &ptr, 0, a2, 512);
    v14 = (void **)ptr;
    v15 = a1[2];
    v23 = v27;
    v24 = ptr;
    if ( ptr )
      v14 = &v24;
    deserialize_tinfo(&v22, v15, &v23, v14, 0, 0);
    if ( ptr )
    {
      *(_QWORD *)&v30 = 0;
      qfree(ptr);
    }
    if ( v27 )
    {
      *(_QWORD *)&v28 = 0;
      qfree(v27);
    }
  }
  v16 = sub_6E7240(a1, &v22, v8);
  if ( (v16 & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
  {
    v21 = v16;
    v19 = sub_B56930(a1[6], 0);
    sub_B68340(v19, v9);
    *(_QWORD *)(v19 + 40) = sub_6D3CC0((__int64)a1, a3);
    *(_QWORD *)(v19 + 80) = sub_A5DBD0(a1[6], v21, 0) & 0xFFFFFFFFFFFFFFFBLL | *(_QWORD *)(v19 + 80) & 3LL;
    sub_6D3180((__int64)a1, a3, v19, 2);
    sub_B70D90(v9, v19);
    v11 = sub_A4CD00(a1[6], v19, 0);
    if ( v25 )
    {
      *(_QWORD *)&v26 = 0;
      qfree(v25);
    }
    clear_tinfo_t(&v22);
    return sub_6D3D30((__int64)a1, a2, v11);
  }
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25);
  }
  clear_tinfo_t(&v22);
  return 0;
}

