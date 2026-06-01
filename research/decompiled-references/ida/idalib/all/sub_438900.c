unsigned __int64 __fastcall sub_438900(_QWORD *a1, unsigned int a2)
{
  _QWORD *v3; // rdi
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r12
  _QWORD *v8; // rax
  size_t v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rbp
  _QWORD *v12; // rax
  size_t v13; // rdx
  unsigned __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v18; // [rsp+8h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  v3 = (_QWORD *)a1[15];
  v4 = a1[14];
  v5 = ((__int64)v3 - v4) >> 3;
  if ( a2 >= v5 )
  {
    v15 = a2 + 1;
    v17 = -1;
    if ( v5 < v15 )
    {
      sub_438420((__int64)(a1 + 14), v3, v15 - v5, &v17);
      v4 = a1[14];
    }
    else if ( v15 < v5 )
    {
      v16 = (_QWORD *)(v4 + 8 * v15);
      if ( v3 != v16 )
        a1[15] = v16;
    }
  }
  *(_QWORD *)(v4 + 8LL * a2) = -1;
  v6 = a1[26];
  v7 = *(unsigned int *)(a1[30] + 4LL * a2);
  v8 = (_QWORD *)(v6 + 8 * v7);
  v9 = *(_QWORD *)(v6 + 8LL * (unsigned int)(*(_DWORD *)(a1[30] + 4LL * a2) + 1)) - *v8;
  a1[29] += v9;
  memset((void *)(a1[20] + *v8), 0, v9);
  *(_DWORD *)(a1[23] + 4 * v7) = -1;
  v10 = a1[39];
  v11 = *(unsigned int *)(a1[43] + 4LL * a2);
  v12 = (_QWORD *)(v10 + 8 * v11);
  v13 = *(_QWORD *)(v10 + 8LL * (unsigned int)(v11 + 1)) - *v12;
  a1[42] += v13;
  memset((void *)(a1[33] + *v12), 0, v13);
  *(_DWORD *)(a1[36] + 4 * v11) = -1;
  return v18 - __readfsqword(0x28u);
}
