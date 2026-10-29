unsigned __int64 __fastcall sub_5F2BB0(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  const void *v6; // r14
  __int64 *v7; // r15
  size_t v9; // rax
  size_t v10; // r13
  __int64 v11; // rsi
  __int64 *v12; // r12
  const void *v13; // r14
  size_t v14; // rax
  size_t v15; // rbx
  void *v17; // rdi
  size_t v18; // rdx
  void *v19; // rdi
  size_t v20; // r13
  __int64 v21; // rax
  __int64 v22; // rax
  size_t v23; // [rsp+0h] [rbp-70h]
  _BYTE *v25; // [rsp+18h] [rbp-58h] BYREF
  char v26[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v27; // [rsp+28h] [rbp-48h] BYREF
  __int64 v28; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v29; // [rsp+38h] [rbp-38h]

  v5 = *(_QWORD *)(a1 + 184) + 16 * a5;
  v6 = *(const void **)v5;
  v7 = *a2;
  v29 = __readfsqword(0x28u);
  if ( v6 && (v9 = strlen((const char *)v6), (v10 = v9) != 0) )
  {
    v17 = (void *)*v7;
    v18 = v9 + 1;
    if ( v7[2] < v9 + 1 )
    {
      v23 = v9 + 1;
      v22 = qvector_reserve(v7, *v7, v18, 1);
      v18 = v23;
      *v7 = v22;
      v17 = (void *)v22;
    }
    v7[1] = v18;
    memmove(v17, v6, v10);
    *(_BYTE *)(*v7 + v10) = 0;
  }
  else
  {
    v7[1] = 0;
  }
  if ( (unsigned int)get_named_type(
                       *(_QWORD *)(v5 + 8),
                       *(_QWORD *)v5,
                       *(_DWORD *)(a1 + 180) | 0x40u,
                       (int)&v25,
                       (int)v26,
                       0,
                       0,
                       0,
                       (__int64)&v27) )
  {
    if ( (*(_BYTE *)(a1 + 180) & 9) == 0 && (*v25 & 0x3F) == 0x3D )
    {
      sub_3573A0((char **)*a2 + 3);
    }
    else
    {
      v11 = *(_QWORD *)(v5 + 8);
      v28 = 0;
      if ( (unsigned __int8)deserialize_tinfo(&v28, v11, &v25, v26, 0, 0) )
        print_tinfo(*(_DWORD *)a2 + 24, 0, 0, 0, 0x10000, (int)&v28, 0, 0);
      clear_tinfo_t(&v28);
    }
  }
  v12 = *a2;
  v13 = *(const void **)(*(_QWORD *)(v5 + 8) + 8LL);
  if ( v13 && (v14 = strlen(*(const char **)(*(_QWORD *)(v5 + 8) + 8LL)), (v15 = v14) != 0) )
  {
    v19 = (void *)v12[6];
    v20 = v14 + 1;
    if ( v12[8] < v14 + 1 )
    {
      v21 = qvector_reserve(v12 + 6, v12[6], v20, 1);
      v12[6] = v21;
      v19 = (void *)v21;
    }
    v12[7] = v20;
    memmove(v19, v13, v15);
    *(_BYTE *)(v12[6] + v15) = 0;
  }
  else
  {
    v12[7] = 0;
  }
  return v29 - __readfsqword(0x28u);
}

