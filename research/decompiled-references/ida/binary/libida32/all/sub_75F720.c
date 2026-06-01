__int64 __fastcall sub_75F720(__int64 a1, char a2)
{
  __int64 v2; // r13
  __int64 v3; // r12
  __int64 v5; // r14
  __int64 v6; // rbx
  _QWORD *v7; // r15
  void *v8; // rdi
  void *v9; // rdi
  _QWORD *v10; // r15
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  __int64 v15; // rax
  __int64 (__fastcall *v16)(__int64); // rax
  unsigned int v17; // ebx
  __int64 v18; // rax
  __int64 (*v19)(); // rcx
  __int64 (__fastcall *v20)(__int64); // rax
  __int64 result; // rax
  unsigned int v22; // ebx
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v24; // [rsp+18h] [rbp-50h]
  unsigned __int64 v25; // [rsp+28h] [rbp-40h]

  v2 = 0;
  v3 = 0;
  v25 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 56);
  if ( v5 )
  {
    do
    {
      v6 = v2 + *(_QWORD *)(a1 + 48);
      v7 = *(_QWORD **)(v6 + 120);
      while ( v7 )
      {
        v8 = v7;
        v7 = (_QWORD *)*v7;
        operator delete(v8, 0x10u);
      }
      memset(*(void **)(v6 + 104), 0, 8LL * *(_QWORD *)(v6 + 112));
      v9 = *(void **)(v6 + 104);
      *(_QWORD *)(v6 + 128) = 0;
      *(_QWORD *)(v6 + 120) = 0;
      if ( v9 != (void *)(v6 + 152) )
        operator delete(v9, 8LL * *(_QWORD *)(v6 + 112));
      v10 = *(_QWORD **)(v6 + 64);
      while ( v10 )
      {
        v11 = v10;
        v10 = (_QWORD *)*v10;
        operator delete(v11, 0x10u);
      }
      memset(*(void **)(v6 + 48), 0, 8LL * *(_QWORD *)(v6 + 56));
      v12 = *(void **)(v6 + 48);
      *(_QWORD *)(v6 + 72) = 0;
      *(_QWORD *)(v6 + 64) = 0;
      if ( v12 != (void *)(v6 + 96) )
        operator delete(v12, 8LL * *(_QWORD *)(v6 + 56));
      v13 = *(void **)(v6 + 24);
      if ( v13 )
      {
        *(_QWORD *)(v6 + 32) = 0;
        qfree(v13);
      }
      v14 = *(void **)v6;
      if ( *(_QWORD *)v6 )
      {
        *(_QWORD *)(v6 + 8) = 0;
        qfree(v14);
      }
      ++v3;
      v2 += 176;
    }
    while ( v5 != v3 );
  }
  v15 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  v16 = *(__int64 (__fastcall **)(__int64))(v15 + 40);
  if ( v16 == sub_753080 )
    v17 = *(_DWORD *)(a1 + 136);
  else
    v17 = v16(a1);
LABEL_17:
  if ( v17 == -1 )
  {
LABEL_22:
    result = 1;
    if ( a2 )
      return sub_75F400(a1);
    return result;
  }
  while ( 1 )
  {
    v18 = *(_QWORD *)a1;
    if ( !(_WORD)v17 )
      break;
    v22 = v17 + 0xFFFF;
    v20 = *(__int64 (__fastcall **)(__int64))(v18 + 48);
    LOWORD(v22) = 0;
    v17 = v22 - 1;
    if ( v20 != sub_753090 )
    {
LABEL_25:
      v17 = ((__int64 (__fastcall *)(__int64, _QWORD))v20)(a1, v17);
      goto LABEL_17;
    }
LABEL_21:
    v17 = *(_DWORD *)(a1 + 136);
    if ( v17 == -1 )
      goto LABEL_22;
  }
  v19 = *(__int64 (**)())(v18 + 32);
  ptr = nullptr;
  v24 = 0;
  if ( v19 == sub_753070 )
  {
LABEL_20:
    v20 = *(__int64 (__fastcall **)(__int64))(v18 + 48);
    if ( v20 != sub_753090 )
      goto LABEL_25;
    goto LABEL_21;
  }
  if ( !((unsigned __int8 (__fastcall *)(__int64, void **, _QWORD))v19)(a1, &ptr, v17)
    || (result = sub_75E280(a1, &ptr, v17), (_BYTE)result) )
  {
    if ( ptr )
    {
      *(_QWORD *)&v24 = 0;
      qfree(ptr);
    }
    v18 = *(_QWORD *)a1;
    goto LABEL_20;
  }
  if ( ptr )
  {
    *(_QWORD *)&v24 = 0;
    qfree(ptr);
    return 0;
  }
  return result;
}

