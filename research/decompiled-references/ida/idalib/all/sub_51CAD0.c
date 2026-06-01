unsigned __int64 __fastcall sub_51CAD0(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 *v4; // rbx
  __int64 v5; // rdi
  __int64 (__fastcall *v7)(__int64); // rax
  unsigned __int64 *v8; // rax
  unsigned __int64 (__fastcall *v9)(__int64, unsigned __int64, int); // rax
  _QWORD *v10; // rax
  unsigned __int64 *v11; // r13
  __int64 v12; // rdi
  int v13; // r14d
  __int64 v14; // rax
  unsigned __int64 v15; // r12
  __int64 v16; // r12
  __int64 v17; // r12
  unsigned __int64 *i; // r15
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdi
  unsigned __int64 v22; // rdx
  __int64 v24; // rax
  void *ptr; // [rsp+10h] [rbp-60h] BYREF
  __int128 v27; // [rsp+18h] [rbp-58h]
  char v28[5]; // [rsp+33h] [rbp-3Dh] BYREF
  unsigned __int64 v29; // [rsp+38h] [rbp-38h]

  v4 = a2;
  v5 = *(int *)(a1 + 8);
  v29 = __readfsqword(0x28u);
  switch_dbctx(v5);
  v7 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL);
  if ( v7 == sub_3DB7B0 )
    v8 = (unsigned __int64 *)(a1 + 16);
  else
    v8 = (unsigned __int64 *)v7(a1);
  if ( a3 >= *v8 && a3 < v8[1] )
  {
    v9 = *(unsigned __int64 (__fastcall **)(__int64, unsigned __int64, int))(*(_QWORD *)a1 + 40LL);
    if ( v9 == sub_514350 )
    {
      v10 = *(_QWORD **)(a1 + 40);
      if ( a3 >= v10[1] )
        return v29 - __readfsqword(0x28u);
    }
    else
    {
      a2 = (__int64 *)a3;
      if ( a3 != v9(a1, a3, 0) )
        return v29 - __readfsqword(0x28u);
      v10 = *(_QWORD **)(a1 + 40);
    }
    v11 = (unsigned __int64 *)(*v10 + 16 * a3);
    v12 = *(int *)(a1 + 8);
    v13 = *(_DWORD *)(a1 + 72);
    v14 = *(_QWORD *)(switch_dbctx(v12) + 1768);
    if ( !*(_BYTE *)(v14 + 152) )
    {
      if ( !under_debugger )
        interr(1336);
      BUG();
    }
    v15 = v13 - *(_DWORD *)(*(_QWORD *)(v14 + 8) + 68LL);
    if ( v15 >= *(_QWORD *)(v14 + 40) )
      sub_5144F0(v12, a2);
    v16 = v15 << 6;
    *(_DWORD *)(*(_QWORD *)(v14 + 32) + v16 + 56) = v13;
    v17 = *(_QWORD *)(v14 + 32) + v16;
    for ( i = sub_5168B0((unsigned __int64 **)v17, *v11);
          i != (unsigned __int64 *)(*(_QWORD *)v17 + 33LL * *(_QWORD *)(v17 + 8));
          i = (unsigned __int64 *)((char *)i + 33) )
    {
      if ( *i >= v11[1] )
        break;
      ptr = nullptr;
      v27 = 0;
      v22 = i[2];
      strcpy(v28, " uaa");
      if ( v22 == -1 )
      {
        ptr = (void *)qvector_reserve(&ptr, 0, 3, 1);
        *(_QWORD *)&v27 = 3;
        strcpy((char *)ptr, "-1");
      }
      else
      {
        sub_35A790((char **)&ptr);
      }
      v19 = v4[1];
      v20 = *v4;
      if ( v4[2] < (unsigned __int64)(v19 + 1) )
      {
        v24 = qvector_reserve(v4, v20, v19 + 1, 24);
        *v4 = v24;
        v19 = v4[1];
        v20 = v24;
      }
      v21 = v20 + 24 * v19;
      *(_QWORD *)v21 = 0;
      *(_OWORD *)(v21 + 8) = 0;
      ++v4[1];
      sub_35A790((char **)v21);
      if ( ptr )
      {
        *(_QWORD *)&v27 = 0;
        qfree(ptr);
      }
    }
  }
  return v29 - __readfsqword(0x28u);
}
