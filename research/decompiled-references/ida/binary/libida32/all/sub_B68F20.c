void __fastcall sub_B68F20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // r9
  __int64 v16; // r8
  char *v17; // rcx
  char *v18; // rbx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  void **v21; // r12
  char *v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  int v25; // r13d
  char *v26; // rdi
  __int64 v27; // r14
  char *v28; // rsi
  __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  char *v32; // r13
  void *src; // [rsp+0h] [rbp-58h] BYREF
  __int64 v34; // [rsp+8h] [rbp-50h]
  _QWORD v35[9]; // [rsp+10h] [rbp-48h] BYREF

  v8 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
  {
    v35[0] = a2;
    src = v35;
    v34 = 0x400000001LL;
    v20 = a1;
    if ( (_BYTE)v8 )
      v20 = sub_B68580(a1);
    v21 = (void **)sub_A71BE0(*(_QWORD *)(v20 + 88), a1, v8, a4, a5, a6);
    v22 = (char *)src;
    if ( v21 != &src )
    {
      v23 = (unsigned int)v34;
      v24 = *((unsigned int *)v21 + 2);
      v25 = v34;
      if ( (unsigned int)v34 <= v24 )
      {
        memmove(*v21, src, 8LL * (unsigned int)v34);
        v22 = (char *)src;
      }
      else
      {
        if ( (unsigned int)v34 > (unsigned __int64)*((unsigned int *)v21 + 3) )
        {
          *((_DWORD *)v21 + 2) = 0;
          sub_22134E0(v21, v21 + 2, v23, 8);
          v22 = (char *)src;
          v23 = (unsigned int)v34;
          v24 = 0;
          v26 = (char *)*v21;
          v28 = (char *)src;
        }
        else
        {
          v22 = (char *)src;
          v26 = (char *)*v21;
          v27 = 8 * v24;
          v28 = (char *)src;
          if ( *((_DWORD *)v21 + 2) )
          {
            memmove(v26, src, 8 * v24);
            v22 = (char *)src;
            v24 = v27;
            v23 = (unsigned int)v34;
            v26 = (char *)*v21 + v27;
            v28 = (char *)src + v27;
          }
        }
        v29 = 8 * v23;
        if ( v28 != &v22[v29] )
        {
          memcpy(v26, v28, v29 - v24);
          v22 = (char *)src;
        }
      }
      *((_DWORD *)v21 + 2) = v25;
    }
    *(_BYTE *)(a1 + 29) |= 1u;
    if ( v22 != (char *)v35 )
      free(v22);
    return;
  }
  v9 = a1;
  if ( (_BYTE)v8 )
    v9 = sub_B68580(a1);
  v10 = sub_A71BE0(*(_QWORD *)(v9 + 88), a1, v8, a4, a5, a6);
  v11 = v10;
  if ( (*(_BYTE *)(a2 + 38) & 1) == 0 )
  {
    v31 = *((unsigned int *)v10 + 2);
    if ( v31 + 1 > (unsigned __int64)*((unsigned int *)v11 + 3) )
    {
      sub_22134E0(v11, v11 + 2, v31 + 1, 8);
      v31 = *((unsigned int *)v11 + 2);
    }
    *(_QWORD *)(*v11 + 8 * v31) = a2;
    ++*((_DWORD *)v11 + 2);
    return;
  }
  v12 = *((unsigned int *)v10 + 2);
  v13 = *v10;
  v14 = 8 * v12;
  v15 = *v10;
  LODWORD(v16) = *((_DWORD *)v10 + 2);
  v17 = (char *)(*v10 + 8 * v12);
  if ( (char *)*v10 == v17 )
  {
LABEL_10:
    v19 = v12 + 1;
    if ( v19 > *((unsigned int *)v10 + 3) )
    {
      sub_22134E0(v10, v10 + 2, v19, 8);
      v15 = *v11;
    }
    *(_QWORD *)(v15 + 8LL * (unsigned int)(*((_DWORD *)v11 + 2))++) = a2;
    return;
  }
  v18 = (char *)*v10;
  if ( (*(_BYTE *)(*(_QWORD *)v13 + 38LL) & 1) != 0 )
  {
    while ( 1 )
    {
      v18 += 8;
      if ( v18 == v17 )
        goto LABEL_10;
      if ( (*(_BYTE *)(*(_QWORD *)v18 + 38LL) & 1) == 0 )
      {
        v32 = &v18[-v15];
        goto LABEL_27;
      }
    }
  }
  v32 = nullptr;
LABEL_27:
  v30 = v12 + 1;
  if ( v30 > *((unsigned int *)v10 + 3) )
  {
    sub_22134E0(v10, v10 + 2, v30, 8);
    v13 = *v11;
    v16 = *((unsigned int *)v11 + 2);
    v14 = 8 * v16;
    v18 = &v32[*v11];
    v17 = (char *)(*v11 + 8 * v16);
  }
  *(_QWORD *)v17 = *(_QWORD *)(v13 + v14 - 8);
  if ( v18 != (char *)(*v11 + v14 - 8) )
  {
    memmove(&v18[*v11 + 8 - *v11], v18, *v11 + v14 - 8 - (_QWORD)v18);
    LODWORD(v16) = *((_DWORD *)v11 + 2);
  }
  *((_DWORD *)v11 + 2) = v16 + 1;
  *(_QWORD *)v18 = a2;
}

