__int64 __fastcall sub_E078E0(_QWORD *a1, const __m128i *a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 result; // rax
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 *v30; // rsi
  void (***v31)(void); // rdi
  void *ptr; // [rsp+0h] [rbp-48h]
  __int64 v33; // [rsp+8h] [rbp-40h]

  v7 = 0x7FFFFFFF8LL;
  v11 = a1[36];
  if ( v11 )
    v7 = 8LL * (unsigned int)(*(_DWORD *)(v11 - 4) - 1);
  if ( !*(_QWORD *)(v11 + v7) )
  {
    v27 = sub_186B270(0x50u);
    sub_DFBCB0(a1);
    v28 = a1[37];
    *(_DWORD *)(v27 + 8) = 0;
    *(_BYTE *)(v27 + 24) = 1;
    *(_QWORD *)(v27 + 32) = v28;
    *(_QWORD *)v27 = &off_1C60CE8;
    *(_QWORD *)(v27 + 16) = 0;
    sub_DF63A0((__int64 *)(v27 + 40), "cmd_context");
    v11 = a1[36];
    *(_QWORD *)(v27 + 72) = 0;
    v29 = 0x7FFFFFFF8LL;
    if ( v11 )
      v29 = 8LL * (unsigned int)(*(_DWORD *)(v11 - 4) - 1);
    v30 = (__int64 *)(v11 + v29);
    ++*(_DWORD *)(v27 + 8);
    v31 = *(void (****)(void))(v11 + v29);
    if ( v31 )
    {
      v24 = (*((_DWORD *)v31 + 2))-- == 1;
      if ( v24 )
      {
        v33 = v29;
        (**v31)();
        sub_186B220(v31);
        v11 = a1[36];
        v30 = (__int64 *)(v11 + v33);
      }
    }
    *v30 = v27;
  }
  v12 = a1[108];
  if ( v12 && !*(_QWORD *)(v12 + 56) )
  {
    v25 = 0x7FFFFFFF8LL;
    if ( v11 )
      v25 = 8LL * (unsigned int)(*(_DWORD *)(v11 - 4) - 1);
    v26 = *(_QWORD *)(v11 + v25);
    if ( v26 )
      ++*(_DWORD *)(v26 + 8);
    *(_QWORD *)(v12 + 56) = v26;
  }
  sub_DFBCB0(a1);
  ptr = (void *)a1[37];
  sub_DFBCB0(a1);
  v13 = a1[37];
  v14 = sub_15D1F10(a5);
  v15 = sub_15E3510(v13, a2, a3, a4, v14, 0);
  v19 = v15;
  if ( v15 )
    ++*(_DWORD *)(v15 + 8);
  v20 = a1[36];
  v21 = 0x7FFFFFFF8LL;
  if ( v20 )
    v21 = 8LL * (unsigned int)(*(_DWORD *)(v20 - 4) - 1);
  sub_13333D0(*(_QWORD *)(v20 + v21), v19, a5, v16, v17, v18);
  v22 = *(_QWORD *)(v19 + 40);
  if ( v22 != sub_15D1F10(a5) )
  {
    sub_1872CE0("");
    sub_1873130(114, 1026);
  }
  result = sub_E073E0((__int64)a1, a2, v19);
  v24 = (*(_DWORD *)(v19 + 8))-- == 1;
  if ( v24 )
    return sub_15D7BC0(ptr, v19);
  return result;
}

