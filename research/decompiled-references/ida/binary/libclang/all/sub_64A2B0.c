void __fastcall sub_64A2B0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdx
  __int64 *v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // r13
  _BYTE *v7; // rdi
  void *v8; // rdi
  size_t v9; // r15
  _BYTE *v10; // r14
  size_t v11; // r14
  _BYTE *v12; // r15
  __int64 *v13; // rax
  __int64 *v14; // rbp
  __int64 *v15; // rdi
  __int64 v16; // r13
  __int64 v17; // r14
  __int64 *v18; // r15
  int v19; // edx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 *v22; // r14
  __int64 *v23; // rdi
  __int64 v24; // rbp
  __int64 *v25; // r14
  __int64 v26; // r13
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // [rsp+Ch] [rbp-4Ch]

  if ( a1 != a2 )
  {
    v3 = *(unsigned int *)(a1 + 8);
    v4 = *(__int64 **)a1;
    v29 = *(_DWORD *)(a2 + 8);
    if ( v3 >= v29 )
    {
      v13 = *(__int64 **)a1;
      if ( v29 )
      {
        v24 = *(_QWORD *)a2;
        v25 = *(__int64 **)a1;
        v26 = *(_QWORD *)a2 + 80LL * v29;
        do
        {
          std::string::_M_assign();
          v24 += 80;
          std::string::_M_assign();
          v25 += 10;
          *((_DWORD *)v25 - 4) = *(_DWORD *)(v24 - 16);
          *((_DWORD *)v25 - 3) = *(_DWORD *)(v24 - 12);
          *((_BYTE *)v25 - 8) = *(_BYTE *)(v24 - 8);
        }
        while ( v24 != v26 );
        v13 = *(__int64 **)a1;
        v3 = *(unsigned int *)(a1 + 8);
        v4 += 10 * v29;
      }
      v14 = &v13[10 * v3];
      while ( v14 != v4 )
      {
        while ( 1 )
        {
          v14 -= 10;
          v15 = (__int64 *)v14[4];
          if ( v15 != v14 + 6 )
            operator delete(v15, v14[6] + 1);
          if ( (__int64 *)*v14 == v14 + 2 )
            break;
          operator delete((void *)*v14, v14[2] + 1);
          if ( v14 == v4 )
            goto LABEL_23;
        }
      }
      goto LABEL_23;
    }
    if ( *(unsigned int *)(a1 + 12) < (unsigned __int64)v29 )
    {
      v22 = &v4[10 * v3];
      while ( v22 != v4 )
      {
        while ( 1 )
        {
          v22 -= 10;
          v23 = (__int64 *)v22[4];
          if ( v23 != v22 + 6 )
            operator delete(v23, v22[6] + 1);
          if ( (__int64 *)*v22 == v22 + 2 )
            break;
          operator delete((void *)*v22, v22[2] + 1);
          if ( v22 == v4 )
            goto LABEL_35;
        }
      }
LABEL_35:
      *(_DWORD *)(a1 + 8) = 0;
      v17 = 0;
      sub_649850(a1, v29);
      v20 = *(unsigned int *)(a2 + 8);
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 8) )
      {
        v5 = *(_QWORD *)a2;
        v6 = *(_QWORD *)a2 + 80LL * v29;
        goto LABEL_12;
      }
      v16 = *(_QWORD *)a2;
      v17 = 80 * v3;
      v18 = &v4[10 * v3];
      do
      {
        std::string::_M_assign();
        v4 += 10;
        std::string::_M_assign();
        v19 = *(_DWORD *)(v16 + 64);
        v16 += 80;
        *((_DWORD *)v4 - 4) = v19;
        *((_DWORD *)v4 - 3) = *(_DWORD *)(v16 - 12);
        *((_BYTE *)v4 - 8) = *(_BYTE *)(v16 - 8);
      }
      while ( v18 != v4 );
      v20 = *(unsigned int *)(a2 + 8);
    }
    v21 = 80 * v20;
    v6 = *(_QWORD *)a2 + v21;
    v4 = (__int64 *)(v17 + *(_QWORD *)a1);
    v5 = v17 + *(_QWORD *)a2;
    if ( v21 == v17 )
    {
LABEL_23:
      *(_DWORD *)(a1 + 8) = v29;
      return;
    }
LABEL_12:
    while ( 1 )
    {
      *v4 = (__int64)(v4 + 2);
      v11 = *(_QWORD *)(v5 + 8);
      v12 = *(_BYTE **)v5;
      if ( v11 > 0xF )
        break;
      v7 = (_BYTE *)*v4;
      if ( v11 == 1 )
      {
        *v7 = *v12;
        v7 = (_BYTE *)*v4;
        goto LABEL_8;
      }
      if ( v11 )
        goto LABEL_42;
LABEL_8:
      v4[1] = v11;
      v7[v11] = 0;
      v8 = v4 + 6;
      v4[4] = (__int64)(v4 + 6);
      v9 = *(_QWORD *)(v5 + 40);
      v10 = *(_BYTE **)(v5 + 32);
      if ( v9 > 0xF )
      {
        v28 = std::string::_M_create();
        v4[4] = v28;
        v8 = (void *)v28;
        v4[6] = v9;
LABEL_44:
        memcpy(v8, v10, v9);
        v8 = (void *)v4[4];
        goto LABEL_11;
      }
      if ( v9 == 1 )
      {
        *((_BYTE *)v4 + 48) = *v10;
      }
      else if ( v9 )
      {
        goto LABEL_44;
      }
LABEL_11:
      v4[5] = v9;
      v5 += 80;
      v4 += 10;
      *((_BYTE *)v8 + v9) = 0;
      *(v4 - 2) = *(_QWORD *)(v5 - 16);
      *((_BYTE *)v4 - 8) = *(_BYTE *)(v5 - 8);
      if ( v5 == v6 )
        goto LABEL_23;
    }
    v27 = std::string::_M_create();
    *v4 = v27;
    v7 = (_BYTE *)v27;
    v4[2] = v11;
LABEL_42:
    memcpy(v7, v12, v11);
    v7 = (_BYTE *)*v4;
    goto LABEL_8;
  }
}

