__int64 __fastcall sub_53BA0(__int64 a1, const char *a2, const char *a3)
{
  __int64 *v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r15
  const char *v10; // r12
  const char *v11; // rdi
  const char *v12; // rax
  __int64 v13; // rdx
  int v14; // r8d
  _DWORD *v15; // rcx
  _DWORD *v16; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // [rsp+Ch] [rbp-3Ch]

  v4 = (__int64 *)a2;
  if ( (debug[2] & 4) != 0 )
  {
    a2 = a3;
    sub_29350();
  }
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 144LL);
  sub_75D50(v5);
  v7 = qbasename(a3, a2, v6);
  v8 = *(_QWORD *)(v5 + 560);
  v9 = *(_QWORD *)(v5 + 552);
  v10 = (const char *)v7;
  if ( 56 * v8 )
  {
    do
    {
      v11 = src;
      if ( *(_QWORD *)(v9 + 32) )
        v11 = *(const char **)(v9 + 24);
      v12 = (const char *)qbasename(v11, a2, v8);
      a2 = v10;
      if ( !strcasecmp(v12, v10) )
      {
        if ( (debug[2] & 4) != 0 )
          sub_29350();
        a2 = (const char *)*v4;
        v13 = v4[1];
        v14 = *(_DWORD *)(v9 + 52);
        v15 = (_DWORD *)(*v4 + 4 * v13);
        if ( (_DWORD *)*v4 == v15 )
          goto LABEL_16;
        v16 = (_DWORD *)*v4;
        while ( v14 != *v16 )
        {
          if ( v15 == ++v16 )
            goto LABEL_16;
        }
        if ( v15 == v16 )
        {
LABEL_16:
          v18 = v13 + 1;
          if ( v4[2] < v18 )
          {
            v21 = *(_DWORD *)(v9 + 52);
            v19 = qvector_reserve(v4, a2, v18, 4);
            v20 = v4[1];
            v14 = v21;
            *v4 = v19;
            v15 = (_DWORD *)(v19 + 4 * v20);
          }
          *v15 = v14;
          ++v4[1];
        }
      }
      v9 += 56;
      v8 = *(_QWORD *)(v5 + 552);
    }
    while ( v9 != v8 + 56LL * *(_QWORD *)(v5 + 560) );
  }
  return 0;
}
