void __fastcall sub_1AEBC50(__int64 a1, __int64 a2, char a3)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  void **v7; // r14
  __int64 v8; // rbx
  signed __int64 v9; // rbx
  void **v10; // rbx
  int v11; // eax
  void *v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  void *ptr; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars8; // [rsp+8h] [rbp+8h]
  _BYTE vars10[72]; // [rsp+10h] [rbp+10h] BYREF

  v4 = a2;
  vars8 = 0x800000000LL;
  ptr = vars10;
  if ( sub_FFE8A0(a2) )
  {
    v6 = (unsigned int)vars8;
    a2 = HIDWORD(vars8);
    v11 = vars8;
    if ( (unsigned int)vars8 < (unsigned __int64)HIDWORD(vars8) )
    {
      v12 = ptr;
      *((_DWORD *)ptr + (unsigned int)vars8) = 1;
      LODWORD(vars8) = v11 + 1;
      if ( !sub_FFEA60(v4, a2, (__int64)v12, v6) )
        goto LABEL_3;
      goto LABEL_15;
    }
    v5 = (unsigned int)vars8 + 1LL;
    if ( HIDWORD(vars8) < v5 )
    {
      a2 = (__int64)vars10;
      sub_2237220(&ptr, vars10, v5, 4);
      v6 = (unsigned int)vars8;
    }
    *((_DWORD *)ptr + v6) = 1;
    LODWORD(vars8) = vars8 + 1;
  }
  if ( !sub_FFEA60(v4, a2, v5, v6) )
    goto LABEL_3;
LABEL_15:
  v13 = (unsigned int)vars8;
  a2 = HIDWORD(vars8);
  v14 = vars8;
  if ( (unsigned int)vars8 < (unsigned __int64)HIDWORD(vars8) )
  {
    *((_DWORD *)ptr + (unsigned int)vars8) = 2;
    LODWORD(vars8) = v14 + 1;
    if ( !sub_FFE740(v4) )
      goto LABEL_4;
    goto LABEL_17;
  }
  if ( HIDWORD(vars8) < (unsigned __int64)(unsigned int)vars8 + 1 )
  {
    a2 = (__int64)vars10;
    sub_2237220(&ptr, vars10, (unsigned int)vars8 + 1LL, 4);
    v13 = (unsigned int)vars8;
  }
  *((_DWORD *)ptr + v13) = 2;
  LODWORD(vars8) = vars8 + 1;
LABEL_3:
  if ( !sub_FFE740(v4) )
    goto LABEL_4;
LABEL_17:
  v15 = (unsigned int)vars8;
  a2 = HIDWORD(vars8);
  v16 = vars8;
  if ( (unsigned int)vars8 < (unsigned __int64)HIDWORD(vars8) )
  {
    *((_DWORD *)ptr + (unsigned int)vars8) = 3;
    LODWORD(vars8) = v16 + 1;
    if ( !sub_FFE580(v4) )
      goto LABEL_5;
    goto LABEL_19;
  }
  if ( HIDWORD(vars8) < (unsigned __int64)(unsigned int)vars8 + 1 )
  {
    a2 = (__int64)vars10;
    sub_2237220(&ptr, vars10, (unsigned int)vars8 + 1LL, 4);
    v15 = (unsigned int)vars8;
  }
  *((_DWORD *)ptr + v15) = 3;
  LODWORD(vars8) = vars8 + 1;
LABEL_4:
  if ( !sub_FFE580(v4) )
    goto LABEL_5;
LABEL_19:
  v17 = (unsigned int)vars8;
  a2 = HIDWORD(vars8);
  v18 = vars8;
  if ( (unsigned int)vars8 < (unsigned __int64)HIDWORD(vars8) )
  {
    *((_DWORD *)ptr + (unsigned int)vars8) = 4;
    LODWORD(vars8) = v18 + 1;
    if ( !(unsigned __int8)sub_FFEBC0(v4, a2) )
      goto LABEL_6;
    goto LABEL_21;
  }
  if ( HIDWORD(vars8) < (unsigned __int64)(unsigned int)vars8 + 1 )
  {
    a2 = (__int64)vars10;
    sub_2237220(&ptr, vars10, (unsigned int)vars8 + 1LL, 4);
    v17 = (unsigned int)vars8;
  }
  *((_DWORD *)ptr + v17) = 4;
  LODWORD(vars8) = vars8 + 1;
LABEL_5:
  if ( !(unsigned __int8)sub_FFEBC0(v4, a2) )
  {
LABEL_6:
    v7 = (void **)ptr;
    v8 = (unsigned int)vars8;
    goto LABEL_7;
  }
LABEL_21:
  v19 = (unsigned int)vars8;
  if ( (unsigned int)vars8 >= (unsigned __int64)HIDWORD(vars8) )
  {
    if ( HIDWORD(vars8) < (unsigned __int64)(unsigned int)vars8 + 1 )
    {
      sub_2237220(&ptr, vars10, (unsigned int)vars8 + 1LL, 4);
      v19 = (unsigned int)vars8;
    }
    *((_DWORD *)ptr + v19) = 5;
    v7 = (void **)ptr;
    v8 = (unsigned int)(vars8 + 1);
    LODWORD(vars8) = vars8 + 1;
LABEL_7:
    v9 = 4 * v8;
    if ( !a3 )
      goto LABEL_8;
    goto LABEL_23;
  }
  v7 = (void **)ptr;
  v20 = (unsigned int)(vars8 + 1);
  *((_DWORD *)ptr + (unsigned int)vars8) = 5;
  LODWORD(vars8) = v20;
  v9 = 4 * v20;
  if ( !a3 )
  {
LABEL_8:
    v10 = (void **)((char *)v7 + v9);
    if ( v10 != v7 )
      *(_DWORD *)(a1 + 27688) += ~(unsigned int)((unsigned __int64)((char *)v10 - (char *)v7 - 4) >> 2);
    goto LABEL_10;
  }
LABEL_23:
  v21 = *(unsigned int *)(a1 + 27688);
  v22 = (v9 >> 2) + v21;
  if ( v22 > *(unsigned int *)(a1 + 27692) )
  {
    sub_2237220(a1 + 27680, a1 + 27696, v22, 4);
    v21 = *(unsigned int *)(a1 + 27688);
  }
  if ( v9 )
  {
    memcpy((void *)(*(_QWORD *)(a1 + 27680) + 4 * v21), v7, v9);
    LODWORD(v21) = *(_DWORD *)(a1 + 27688);
  }
  v7 = (void **)ptr;
  *(_DWORD *)(a1 + 27688) = (v9 >> 2) + v21;
LABEL_10:
  if ( v7 != &ptr )
    free(v7);
}
