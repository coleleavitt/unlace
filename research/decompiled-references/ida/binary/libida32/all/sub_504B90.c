unsigned __int64 __fastcall sub_504B90(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 *v4; // rbx
  __int64 v5; // rdi
  __int64 (__fastcall *v7)(__int64); // rax
  unsigned __int64 *v8; // rax
  unsigned __int64 (__fastcall *v9)(__int64, unsigned __int64, int); // rax
  _QWORD *v10; // rax
  unsigned int *v11; // r13
  __int64 v12; // rdi
  int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // r12
  __int64 v18; // r12
  __int64 v19; // r12
  unsigned int *i; // r15
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdi
  unsigned int v24; // edx
  __int64 v26; // rax
  void *ptr; // [rsp+10h] [rbp-60h] BYREF
  __int128 v29; // [rsp+18h] [rbp-58h]
  char v30[5]; // [rsp+33h] [rbp-3Dh] BYREF
  unsigned __int64 v31; // [rsp+38h] [rbp-38h]

  v4 = a2;
  v5 = *(int *)(a1 + 8);
  v31 = __readfsqword(0x28u);
  switch_dbctx(v5);
  v7 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL);
  if ( v7 == sub_3D58E0 )
    v8 = (unsigned __int64 *)(a1 + 16);
  else
    v8 = (unsigned __int64 *)v7(a1);
  if ( a3 >= *v8 && a3 < v8[1] )
  {
    v9 = *(unsigned __int64 (__fastcall **)(__int64, unsigned __int64, int))(*(_QWORD *)a1 + 40LL);
    if ( v9 == sub_4FC7D0 )
    {
      v10 = *(_QWORD **)(a1 + 40);
      if ( a3 >= v10[1] )
        return v31 - __readfsqword(0x28u);
    }
    else
    {
      a2 = (__int64 *)a3;
      if ( a3 != v9(a1, a3, 0) )
        return v31 - __readfsqword(0x28u);
      v10 = *(_QWORD **)(a1 + 40);
    }
    v11 = (unsigned int *)(*v10 + 8 * a3);
    v12 = *(int *)(a1 + 8);
    v13 = *(_DWORD *)(a1 + 72);
    v14 = *(_QWORD *)(switch_dbctx(v12) + 1576);
    if ( !*(_BYTE *)(v14 + 144) )
    {
      if ( !under_debugger )
        interr(1336);
      BUG();
    }
    v16 = *(_QWORD *)(v14 + 8);
    v17 = v13 - *(_DWORD *)(v16 + 68);
    if ( v17 >= *(_QWORD *)(v14 + 40) )
      sub_4FC970(v12, a2, v16, v15);
    v18 = v17 << 6;
    *(_DWORD *)(*(_QWORD *)(v14 + 32) + v18 + 56) = v13;
    v19 = *(_QWORD *)(v14 + 32) + v18;
    for ( i = sub_4FED00((unsigned int **)v19, *v11);
          i != (unsigned int *)(*(_QWORD *)v19 + 17LL * *(_QWORD *)(v19 + 8));
          i = (unsigned int *)((char *)i + 17) )
    {
      if ( *i >= v11[1] )
        break;
      ptr = nullptr;
      v29 = 0;
      v24 = i[2];
      strcpy(v30, " uaa");
      if ( v24 == -1 )
      {
        ptr = (void *)qvector_reserve(&ptr, 0, 3, 1);
        *(_QWORD *)&v29 = 3;
        strcpy((char *)ptr, "-1");
      }
      else
      {
        sub_3573A0((char **)&ptr);
      }
      v21 = v4[1];
      v22 = *v4;
      if ( v4[2] < (unsigned __int64)(v21 + 1) )
      {
        v26 = qvector_reserve(v4, v22, v21 + 1, 24);
        *v4 = v26;
        v21 = v4[1];
        v22 = v26;
      }
      v23 = v22 + 24 * v21;
      *(_QWORD *)v23 = 0;
      *(_OWORD *)(v23 + 8) = 0;
      ++v4[1];
      sub_3573A0((char **)v23);
      if ( ptr )
      {
        *(_QWORD *)&v29 = 0;
        qfree(ptr);
      }
    }
  }
  return v31 - __readfsqword(0x28u);
}

