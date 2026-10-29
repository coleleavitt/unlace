__int64 __fastcall sub_2E3FC0(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 *v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 v10; // r12
  const char *v11; // rdi
  const void *v13; // r14
  void *v14; // rax
  const void *v15; // r8
  void *v16; // rdi
  __int64 v17; // rax
  const void *v18; // [rsp+8h] [rbp-60h]
  char s2[24]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v3 = 96 * a3;
  v4 = *(_QWORD *)(a1 + 2488);
  v5 = *(__int64 **)a2;
  v20 = __readfsqword(0x28u);
  v6 = 96 * a3 + *(_QWORD *)(v4 + 40);
  v7 = v6;
  if ( v5 != (__int64 *)(v6 + 24) )
  {
    v8 = *(_QWORD *)(v6 + 32);
    if ( v8 > 1 )
    {
      v15 = *(const void **)(v6 + 24);
      v16 = (void *)*v5;
      if ( v5[2] < v8 )
      {
        v18 = *(const void **)(v6 + 24);
        v17 = qvector_reserve(v5, *v5, v8, 1);
        v15 = v18;
        *v5 = v17;
        v16 = (void *)v17;
      }
      v5[1] = v8;
      memmove(v16, v15, v8 - 1);
      *(_BYTE *)(*v5 + v8 - 1) = 0;
      v5 = *(__int64 **)a2;
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 2488) + 40LL) + v3;
    }
    else
    {
      v5[1] = 0;
      v5 = *(__int64 **)a2;
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 2488) + 40LL) + v3;
    }
  }
  if ( v5 + 3 != (__int64 *)(v7 + 48) )
  {
    v10 = *(_QWORD *)(v7 + 56);
    if ( v10 > 1 )
    {
      v13 = *(const void **)(v7 + 48);
      v14 = (void *)v5[3];
      if ( v5[5] < v10 )
      {
        v14 = (void *)qvector_reserve(v5 + 3, v5[3], v10, 1);
        v5[3] = (__int64)v14;
      }
      v5[4] = v10;
      memmove(v14, v13, v10 - 1);
      *(_BYTE *)(v5[3] + v10 - 1) = 0;
    }
    else
    {
      v5[4] = 0;
    }
  }
  getinf_buf(1, s2, 16);
  v11 = &s1;
  if ( *(_QWORD *)(*(_QWORD *)a2 + 32LL) )
    v11 = *(const char **)(*(_QWORD *)a2 + 24LL);
  if ( !strcmp(v11, s2) )
    a2[33] |= 1u;
  return 1;
}
