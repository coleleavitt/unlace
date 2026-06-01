unsigned __int64 __fastcall sub_40B440(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rsi
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rbx
  unsigned int v10; // ebx
  __int64 v11; // r12
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v17; // rax
  char **v18; // [rsp+8h] [rbp-100h]
  void *v19; // [rsp+10h] [rbp-F8h] BYREF
  __int128 v20; // [rsp+18h] [rbp-F0h]
  _QWORD v21[4]; // [rsp+30h] [rbp-D8h] BYREF
  void *ptr; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v23; // [rsp+58h] [rbp-B0h]
  _BYTE v24[88]; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v25; // [rsp+C8h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 1480);
  v25 = __readfsqword(0x28u);
  sub_419620(v24, v4);
  v6 = *(_QWORD *)(a2 + 1480);
  v20 = 0;
  v19 = nullptr;
  sub_79BD30(v6 + 2356, a2, &v19);
  v7 = a3[1];
  v8 = *a3;
  if ( a3[2] < (unsigned __int64)(v7 + 1) )
  {
    v17 = qvector_reserve(a3, v8, v7 + 1, 24);
    *a3 = v17;
    v7 = a3[1];
    v8 = v17;
  }
  v9 = v8 + 24 * v7;
  *(_QWORD *)v9 = 0;
  *(_OWORD *)(v9 + 8) = 0;
  ++a3[1];
  sub_419660(v24, *(unsigned int *)(v6 + 2356), 0, 1);
  sub_3573A0((char **)v9);
  v10 = -1;
  if ( *(_QWORD *)(v6 + 2400) )
    v10 = *(_DWORD *)(*(_QWORD *)(v6 + 2384) + 32LL);
  v11 = 11;
  while ( v10 != -1 )
  {
    if ( !--v11 )
      break;
    v21[1] = 0xFFFFFFFF00000000LL;
    v21[0] = 0;
    v21[2] = 0;
    if ( (unsigned __int8)get_fixup(v21, v10) )
    {
      v13 = a3[1];
      v14 = *a3;
      ptr = nullptr;
      v23 = 0;
      if ( a3[2] < (unsigned __int64)(v13 + 1) )
      {
        v15 = qvector_reserve(a3, v14, v13 + 1, 24);
        *a3 = v15;
        v13 = a3[1];
        v14 = v15;
      }
      v12 = v14 + 24 * v13;
      *(_QWORD *)v12 = 0;
      *(_OWORD *)(v12 + 8) = 0;
      ++a3[1];
      v18 = (char **)v12;
      get_fixup_desc(&ptr, v10, v21);
      sub_3573A0(v18);
      if ( ptr )
      {
        *(_QWORD *)&v23 = 0;
        qfree(ptr);
      }
    }
    v10 = sub_4087C0(v6, v10);
  }
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v19);
  }
  return v25 - __readfsqword(0x28u);
}

