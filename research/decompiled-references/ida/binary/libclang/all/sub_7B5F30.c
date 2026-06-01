void __fastcall sub_7B5F30(__int64 a1, const void *a2, unsigned int a3, const void *a4, _QWORD *a5)
{
  __int64 v5; // r15
  size_t v10; // r8
  __int64 v11; // rax
  char *v12; // rdi
  __int64 v13; // r15
  void *v14; // rax
  __int64 v15; // rax
  char *v16; // rdi
  __int64 v17; // rax
  size_t n; // [rsp+0h] [rbp-48h]
  size_t na; // [rsp+0h] [rbp-48h]
  __int64 v20; // [rsp+8h] [rbp-40h]

  if ( a3 )
  {
    v5 = a3;
    v10 = 4LL * a3;
    a5[284] += v10;
    v20 = (__int64)(a5 + 274);
    v11 = a5[274];
    v12 = (char *)((v11 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( a5[275] >= (unsigned __int64)&v12[v10] && v11 )
    {
      a5[274] = &v12[v10];
    }
    else
    {
      na = 4LL * a3;
      v17 = sub_7B4EB0(v20, na, 3);
      v10 = na;
      v12 = (char *)v17;
    }
    n = v10;
    v13 = 8 * v5;
    v14 = memset(v12, 0, v10);
    *(_QWORD *)(a1 + 16) = v14;
    memcpy(v14, a4, n);
    *(_QWORD *)a1 = 0;
    v15 = a5[274];
    a5[284] += v13;
    v16 = (char *)((v15 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( a5[275] >= (unsigned __int64)&v16[v13] && v15 )
      a5[274] = &v16[v13];
    else
      v16 = (char *)sub_7B4EB0(v20, v13, 3);
    *(_QWORD *)a1 = v16;
    *(_DWORD *)(a1 + 8) = a3;
    memcpy(v16, a2, v13);
  }
}

