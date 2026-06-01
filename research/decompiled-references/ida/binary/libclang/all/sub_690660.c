__int64 __fastcall sub_690660(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  _QWORD *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rbx
  size_t *v6; // r14
  __int64 v7; // r13
  size_t v8; // rbp
  const void *v9; // r15
  size_t v10; // r12
  void *v11; // rcx
  _BYTE *v12; // rax
  __int64 v14; // [rsp+8h] [rbp-40h]

  v1 = operator new(0x10u);
  v2 = (__int64)(a1[1] - *a1) >> 5;
  v3 = (_QWORD *)v1;
  v14 = v1;
  *(_DWORD *)(v1 + 8) = v2;
  v4 = operator new[](16LL * (unsigned int)v2);
  *v3 = v4;
  if ( (_DWORD)v2 )
  {
    v5 = v4 + 8;
    v6 = (size_t *)(*a1 + 8LL);
    v7 = *a1 + 32LL * (unsigned int)(v2 - 1) + 40;
    do
    {
      v8 = *v6;
      v9 = (const void *)*(v6 - 1);
      v10 = *v6 + 1;
      v11 = malloc(v10);
      if ( !v11 && (v10 || (v11 = malloc(1u)) == nullptr) )
        sub_25AA9F0("Allocation failed");
      v6 += 4;
      v12 = memcpy(v11, v9, v8);
      v5 += 16;
      *(_DWORD *)(v5 - 16) = 1;
      *(_QWORD *)(v5 - 24) = v12;
      v12[v8] = 0;
    }
    while ( v6 != (size_t *)v7 );
  }
  return v14;
}

