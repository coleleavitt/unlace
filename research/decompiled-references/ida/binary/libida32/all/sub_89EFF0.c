__int64 __fastcall sub_89EFF0(__int64 a1, __int64 *a2)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  int v4; // r8d
  int v5; // r9d
  unsigned int v6; // ebp
  __int64 *v8; // r13
  __int64 v9; // r12
  __int64 v10; // r15
  __int128 v11; // xmm0
  __int64 i; // rbx
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rbp
  void *v16; // rax
  void *v17; // rax
  size_t na; // [rsp+8h] [rbp-70h]
  size_t n; // [rsp+8h] [rbp-70h]
  __int64 (__fastcall **v20)(); // [rsp+10h] [rbp-68h] BYREF
  char v21; // [rsp+18h] [rbp-60h]
  __int64 v22; // [rsp+20h] [rbp-58h]
  __int128 v23; // [rsp+28h] [rbp-50h]
  unsigned __int64 v24; // [rsp+38h] [rbp-40h]

  v2 = a2[1];
  v24 = __readfsqword(0x28u);
  v21 = 18;
  v22 = 0;
  v23 = 0;
  v20 = &off_2B142A8;
  if ( v2 )
  {
    v8 = a2;
    v9 = 0;
    v10 = 0;
    *((_QWORD *)&v23 + 1) = v2;
    v11 = 0;
    v22 = qalloc_or_throw(56 * v2, (const char *)a2);
    for ( i = v22; ; i = v22 )
    {
      v13 = *v8;
      v14 = v9 + i;
      *(_QWORD *)v14 = 0;
      v15 = v9 + v13;
      *(_OWORD *)(v14 + 8) = v11;
      if ( *(_QWORD *)(v15 + 8) )
      {
        na = *(_QWORD *)(v15 + 8);
        v16 = (void *)qalloc_or_throw(na, (const char *)a2);
        *(_QWORD *)v14 = v16;
        *(_QWORD *)(v14 + 16) = na;
        a2 = *(__int64 **)v15;
        memcpy(v16, *(const void **)v15, na);
        v11 = 0;
        *(_QWORD *)(v14 + 8) = na;
      }
      *(_QWORD *)(v14 + 24) = 0;
      *(_OWORD *)(v14 + 32) = v11;
      if ( *(_QWORD *)(v15 + 32) )
      {
        n = *(_QWORD *)(v15 + 32);
        v17 = (void *)qalloc_or_throw(n, (const char *)a2);
        *(_QWORD *)(v14 + 24) = v17;
        *(_QWORD *)(v14 + 40) = n;
        a2 = *(__int64 **)(v15 + 24);
        memcpy(v17, a2, n);
        v11 = 0;
        *(_QWORD *)(v14 + 32) = n;
      }
      ++v10;
      v9 += 56;
      *(_DWORD *)(v14 + 48) = *(_DWORD *)(v15 + 48);
      if ( v2 == v10 )
        break;
    }
    *(_QWORD *)&v23 = v2;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)(a1 + 40) + 80LL))(a1 + 40, &v20);
  v6 = sub_89A5C0((_QWORD *)(a1 + 40), v3, 10, nullptr, v4, v5);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  sub_8B35C0(&v20);
  return v6;
}

