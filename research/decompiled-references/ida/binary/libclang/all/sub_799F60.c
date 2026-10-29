void __fastcall sub_799F60(__int64 a1, __int64 a2)
{
  char v4; // dl
  __int64 v5; // rax
  _QWORD *v6; // rbp
  __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  char *v10; // r13
  __int64 v11; // rcx
  char *v12; // rdx
  char *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdi
  signed __int64 v16; // rdx
  __int64 v17; // rax
  void **v18; // rax
  void **v19; // rbp
  __int64 v20; // rdx
  size_t v21; // r12
  int v22; // r14d
  char *v23; // rdi
  __int64 v24; // rdx
  _QWORD *v25; // rdi
  _QWORD *v26; // rdi
  __int64 v27; // rdx
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int64 v29; // [rsp+8h] [rbp-50h]
  _QWORD v30[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
  {
    v30[0] = a2;
    ptr = v30;
    v29 = 0x400000001LL;
    v17 = a1;
    if ( v4 )
      v17 = sub_793320(a1);
    v18 = (void **)sub_6BB160(*(_QWORD *)(v17 + 88), a1);
    v19 = v18;
    if ( v18 != &ptr )
    {
      v20 = (unsigned int)v29;
      v21 = *((unsigned int *)v18 + 2);
      v22 = v29;
      if ( v21 < (unsigned int)v29 )
      {
        if ( *((unsigned int *)v18 + 3) < (unsigned __int64)(unsigned int)v29 )
        {
          v21 = 0;
          *((_DWORD *)v18 + 2) = 0;
          sub_25D6060(v18, v18 + 2, v20, 8);
          v27 = (unsigned int)v29;
        }
        else
        {
          if ( !*((_DWORD *)v18 + 2) )
          {
            v23 = (char *)ptr;
            v24 = 8LL * (unsigned int)v29;
LABEL_23:
            memcpy((char *)*v19 + v21, &v23[v21], v24 - v21);
            v23 = (char *)ptr;
LABEL_24:
            *((_DWORD *)v19 + 2) = v22;
            goto LABEL_25;
          }
          v21 *= 8LL;
          v26 = *v18;
          if ( v21 == 8 )
            *v26 = *(_QWORD *)ptr;
          else
            memmove(v26, ptr, v21);
          v27 = (unsigned int)v29;
        }
        v24 = 8 * v27;
        v23 = (char *)ptr;
        if ( v24 == v21 )
          goto LABEL_24;
        goto LABEL_23;
      }
      v25 = *v18;
      if ( (unsigned int)v29 == 1 )
        *v25 = *(_QWORD *)ptr;
      else
        memmove(v25, ptr, 8LL * (unsigned int)v29);
      *((_DWORD *)v19 + 2) = v22;
    }
    v23 = (char *)ptr;
LABEL_25:
    *(_BYTE *)(a1 + 29) |= 1u;
    if ( v23 != (char *)v30 )
      free(v23);
    return;
  }
  v5 = a1;
  if ( v4 )
    v5 = sub_793320(a1);
  v6 = sub_6BB160(*(_QWORD *)(v5 + 88), a1);
  v7 = *((unsigned int *)v6 + 2);
  v8 = *((unsigned int *)v6 + 3);
  v9 = v7 + 1;
  if ( (*(_BYTE *)(a2 + 34) & 1) != 0 )
  {
    v10 = (char *)*v6;
    v11 = 8 * v7;
    v12 = (char *)(*v6 + 8 * v7);
    if ( v12 == (char *)*v6 )
      goto LABEL_31;
    v13 = (char *)*v6;
    while ( (*(_BYTE *)(*(_QWORD *)v13 + 34LL) & 1) != 0 )
    {
      v13 += 8;
      if ( v13 == v12 )
        goto LABEL_31;
    }
    if ( v12 == v13 )
    {
LABEL_31:
      if ( v8 < v9 )
      {
        sub_25D6060(v6, v6 + 2, v9, 8);
        v12 = (char *)(*v6 + 8LL * *((unsigned int *)v6 + 2));
      }
      *(_QWORD *)v12 = a2;
      ++*((_DWORD *)v6 + 2);
    }
    else
    {
      if ( v8 < v9 )
      {
        sub_25D6060(v6, v6 + 2, v9, 8);
        v11 = 8LL * *((unsigned int *)v6 + 2);
        v13 = (char *)(*v6 + v13 - v10);
        v10 = (char *)*v6;
        v12 = (char *)(*v6 + v11);
      }
      *(_QWORD *)v12 = *(_QWORD *)&v10[v11 - 8];
      v14 = *((unsigned int *)v6 + 2);
      v15 = *v6 + 8 * v14;
      v16 = v15 - 8 - (_QWORD)v13;
      if ( v16 <= 8 )
      {
        if ( v16 == 8 )
        {
          *(_QWORD *)(v15 - 8) = *(_QWORD *)v13;
          LODWORD(v14) = *((_DWORD *)v6 + 2);
        }
      }
      else
      {
        memmove(v13 + 8, v13, v16);
        LODWORD(v14) = *((_DWORD *)v6 + 2);
      }
      *((_DWORD *)v6 + 2) = v14 + 1;
      *(_QWORD *)v13 = a2;
    }
  }
  else
  {
    if ( v8 < v9 )
    {
      sub_25D6060(v6, v6 + 2, v9, 8);
      v7 = *((unsigned int *)v6 + 2);
    }
    *(_QWORD *)(*v6 + 8 * v7) = a2;
    ++*((_DWORD *)v6 + 2);
  }
}

