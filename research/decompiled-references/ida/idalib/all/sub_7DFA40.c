void __fastcall sub_7DFA40(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rcx
  __int128 v6; // xmm0
  __int64 v7; // rbp
  __int64 v8; // rbp
  __int64 v9; // rbx
  size_t v10; // r13
  void *v11; // rax
  __int64 v12; // [rsp+0h] [rbp-40h]
  __int64 v13; // [rsp+0h] [rbp-40h]

  v2 = a2[1];
  if ( v2 )
  {
    v3 = 0;
    v12 = a2[1];
    v4 = qalloc_or_throw(24 * v2);
    v5 = v12;
    v6 = 0;
    *a1 = v4;
    v7 = v4;
    a1[2] = v12;
    while ( 1 )
    {
      v8 = 24 * v3 + v7;
      v9 = 24 * v3 + *a2;
      *(_QWORD *)v8 = 0;
      *(_OWORD *)(v8 + 8) = v6;
      v10 = *(_QWORD *)(v9 + 8);
      if ( v10 )
      {
        v13 = v5;
        ++v3;
        v11 = (void *)qalloc_or_throw(*(_QWORD *)(v9 + 8));
        *(_QWORD *)(v8 + 16) = v10;
        *(_QWORD *)v8 = v11;
        memcpy(v11, *(const void **)v9, v10);
        v5 = v13;
        *(_QWORD *)(v8 + 8) = v10;
        v6 = 0;
        if ( v13 == v3 )
        {
LABEL_7:
          a1[1] = v5;
          return;
        }
      }
      else if ( v5 == ++v3 )
      {
        goto LABEL_7;
      }
      v7 = *a1;
    }
  }
}
