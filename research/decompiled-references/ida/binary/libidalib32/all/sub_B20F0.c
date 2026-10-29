__int64 __fastcall sub_B20F0(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 *v5; // r12
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 *v11; // rbp
  __int64 v12; // rax
  void *v13; // rax
  void *v14; // rax
  __int64 v15; // [rsp+0h] [rbp-48h]
  size_t na; // [rsp+8h] [rbp-40h]
  size_t n; // [rsp+8h] [rbp-40h]

  result = sub_AEF10(xmmword_250E60, 5u, a2, a3);
  v15 = result;
  if ( result )
  {
    v4 = qalloc_or_throw();
    *(_QWORD *)v4 = 0;
    v5 = (__int64 *)v4;
    *(_OWORD *)(v4 + 8) = 0;
    v6 = a1[1];
    if ( v6 )
    {
      v7 = qalloc_or_throw();
      *v5 = v7;
      v8 = v7;
      v9 = 0;
      v5[2] = v6;
      while ( 1 )
      {
        v10 = (v9 << 6) + v8;
        v11 = (__int64 *)(*a1 + (v9 << 6));
        v12 = *v11;
        *(_QWORD *)(v10 + 8) = 0;
        *(_OWORD *)(v10 + 16) = 0;
        *(_QWORD *)v10 = v12;
        if ( v11[2] )
        {
          na = v11[2];
          v13 = (void *)qalloc_or_throw();
          *(_QWORD *)(v10 + 8) = v13;
          *(_QWORD *)(v10 + 24) = na;
          memcpy(v13, (const void *)v11[1], na);
          *(_QWORD *)(v10 + 16) = na;
        }
        *(_QWORD *)(v10 + 32) = 0;
        *(_OWORD *)(v10 + 40) = 0;
        if ( v11[5] )
        {
          n = v11[5];
          v14 = (void *)qalloc_or_throw();
          *(_QWORD *)(v10 + 32) = v14;
          *(_QWORD *)(v10 + 48) = n;
          memcpy(v14, (const void *)v11[4], n);
          *(_QWORD *)(v10 + 40) = n;
        }
        ++v9;
        *(_DWORD *)(v10 + 56) = *((_DWORD *)v11 + 14);
        *(_WORD *)(v10 + 60) = *((_WORD *)v11 + 30);
        if ( v6 == v9 )
          break;
        v8 = *v5;
      }
      v5[1] = v6;
    }
    result = v15;
    *(_QWORD *)(v15 + 24) = v5;
  }
  return result;
}

