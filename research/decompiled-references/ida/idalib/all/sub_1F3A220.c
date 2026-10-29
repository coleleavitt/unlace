bool __fastcall sub_1F3A220(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  char *v6; // rdi
  __int64 v7; // rcx
  char *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 *v11; // r8
  __int64 *v12; // rcx
  __int64 v13; // rdx
  int v14; // r13d
  int v15; // r12d
  _QWORD *v16; // r14
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // [rsp+8h] [rbp-48h] BYREF
  unsigned __int64 v28; // [rsp+Ch] [rbp-44h]
  int v29; // [rsp+14h] [rbp-3Ch]

  if ( *(_DWORD *)(a2 + 412) <= *(_DWORD *)(a1 + 64) )
    return 1;
  v4 = sub_1EE1230(*(_QWORD *)a1, a2, *(_QWORD *)(a1 + 56));
  if ( v4 )
  {
    v5 = *(unsigned int *)(a2 + 3104);
    v6 = *(char **)(a2 + 3096);
    v28 = v4;
    v29 = 0;
    v7 = 12 * v5;
    v8 = &v6[12 * v5];
    v9 = 0xAAAAAAAAAAAAAAABLL * ((12 * v5) >> 2);
    if ( v7 )
    {
      do
      {
        while ( 1 )
        {
          v10 = v9 >> 1;
          v11 = (unsigned __int64 *)&v6[12 * (v9 >> 1)];
          if ( *v11 >= v4 )
            break;
          v6 = (char *)v11 + 12;
          v9 = v9 - v10 - 1;
          if ( v9 <= 0 )
            goto LABEL_7;
        }
        v9 >>= 1;
      }
      while ( v10 );
    }
LABEL_7:
    if ( v8 == v6 || v4 != *(_QWORD *)v6 )
      return sub_1EAB360(*(_QWORD *)a1, *(_QWORD *)(a1 + 56), (_DWORD *)a2);
    v12 = (__int64 *)(*(_QWORD *)(a2 + 3112) + 8LL * *((unsigned int *)v6 + 2));
    v13 = *v12;
    v27 = *((_DWORD *)v6 + 2) + 1;
    v14 = v13;
    *v12 = 0;
    if ( (_DWORD)v13 )
    {
      v15 = 0;
      do
      {
        v16 = *(_QWORD **)a1;
        ++v15;
        v17 = sub_1EE13A0(*(_QWORD *)a1, a2, (__int64 *)(a2 + 3112), &v27);
        v22 = sub_1EDB980(v16, v17, v18, v19, v20, v21);
        sub_1F39880(a1, v22, v23, v24, v25, v26);
      }
      while ( v14 != v15 );
    }
  }
  return 1;
}
