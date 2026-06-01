void __fastcall sub_7BC640(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // r14
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rcx
  __int128 v7; // xmm0
  __int64 v8; // rbp
  __int64 v9; // rbp
  __int64 v10; // rbx
  size_t v11; // r13
  void *v12; // rax
  __int64 v13; // [rsp+0h] [rbp-40h]
  __int64 v14; // [rsp+0h] [rbp-40h]

  v2 = a2[1];
  if ( v2 )
  {
    v3 = a2;
    v4 = 0;
    v13 = a2[1];
    v5 = qalloc_or_throw(24 * v2, (const char *)a2);
    v6 = v13;
    v7 = 0;
    *a1 = v5;
    v8 = v5;
    a1[2] = v13;
    while ( 1 )
    {
      v9 = 24 * v4 + v8;
      v10 = 24 * v4 + *v3;
      *(_QWORD *)v9 = 0;
      *(_OWORD *)(v9 + 8) = v7;
      v11 = *(_QWORD *)(v10 + 8);
      if ( v11 )
      {
        v14 = v6;
        ++v4;
        v12 = (void *)qalloc_or_throw(*(_QWORD *)(v10 + 8), (const char *)a2);
        *(_QWORD *)(v9 + 16) = v11;
        *(_QWORD *)v9 = v12;
        a2 = *(_QWORD **)v10;
        memcpy(v12, *(const void **)v10, v11);
        v6 = v14;
        *(_QWORD *)(v9 + 8) = v11;
        v7 = 0;
        if ( v14 == v4 )
        {
LABEL_7:
          a1[1] = v6;
          return;
        }
      }
      else if ( v6 == ++v4 )
      {
        goto LABEL_7;
      }
      v8 = *a1;
    }
  }
}

