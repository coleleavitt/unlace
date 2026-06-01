__int64 __fastcall sub_695480(__int64 **a1, char a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // rax
  __int64 *v6; // r15
  __int64 *v7; // r14
  __int64 *v8; // rax
  __int64 v9; // rbx
  __int64 *v10; // r14
  __int64 v11; // rax
  __int64 v12; // r12
  _QWORD *v13; // rsi
  __int64 *v14; // rsi
  unsigned int v15; // r12d
  unsigned int v16; // r13d
  char *v17; // rdi
  unsigned int v18; // r12d
  unsigned int *v19; // r13
  char *v20; // rbx
  char v21; // r12
  unsigned int v22; // esi
  unsigned int *v23; // rbx
  char *v24; // r13
  __int64 v26; // rax
  __int64 v27; // r12
  _QWORD *v28; // rsi
  __int64 *v29; // [rsp+8h] [rbp-E8h]
  unsigned int v31; // [rsp+24h] [rbp-CCh]
  unsigned int v32; // [rsp+28h] [rbp-C8h]
  unsigned int v34; // [rsp+40h] [rbp-B0h]
  unsigned int v35; // [rsp+44h] [rbp-ACh]
  char v37; // [rsp+5Eh] [rbp-92h] BYREF
  char v38; // [rsp+5Fh] [rbp-91h] BYREF
  void *v39; // [rsp+60h] [rbp-90h] BYREF
  __int128 v40; // [rsp+68h] [rbp-88h]
  void *v41; // [rsp+80h] [rbp-70h] BYREF
  __int128 v42; // [rsp+88h] [rbp-68h]
  void *ptr; // [rsp+A0h] [rbp-50h] BYREF
  __int128 v44; // [rsp+A8h] [rbp-48h]
  unsigned __int64 v45; // [rsp+B8h] [rbp-38h]

  v45 = __readfsqword(0x28u);
  v5 = *a1;
  ptr = nullptr;
  sub_6141A0(*v5, 26, &ptr, 8u, a5);
  v6 = *a1;
  v39 = nullptr;
  v34 = (unsigned int)ptr;
  v7 = v6 + 239;
  v41 = nullptr;
  v31 = HIDWORD(ptr);
  v8 = a1[2];
  v40 = 0;
  v29 = v8;
  v42 = 0;
  if ( a2 )
    v7 = v6 + 213;
  v9 = v7[10];
  v10 = v7 + 8;
  if ( (__int64 *)v9 != v10 )
  {
    v35 = a2 == 0 ? 120 : 100;
    v32 = a2 == 0 ? 88 : 68;
    while ( 1 )
    {
      ptr = nullptr;
      v14 = v6;
      v44 = 0;
      v15 = *(_DWORD *)(v9 + 32);
      v16 = *(_DWORD *)(v9 + 36);
      v17 = &v37;
      if ( !(unsigned __int8)sub_693510(&v37, v6, v15, v16, v35) )
        break;
      v14 = v6;
      v17 = &v38;
      if ( !(unsigned __int8)sub_693510(&v38, v6, v16, v15, v32) || v37 != v38 )
        break;
      if ( !sub_693A20((__int64 *)a1, (__int64)&ptr, v15, v16, *(_BYTE *)(v9 + 40), a2) )
      {
        if ( *((_BYTE *)a1 + 40) )
        {
          v26 = v40;
          v27 = *(_QWORD *)(v9 + 32);
          v28 = v39;
          if ( *((_QWORD *)&v40 + 1) < (unsigned __int64)(v40 + 1) )
          {
            v39 = (void *)qvector_reserve(&v39, v39, v40 + 1, 8);
            v28 = v39;
            v26 = v40;
          }
          v28[v26] = v27;
          *(_QWORD *)&v40 = v40 + 1;
        }
        else
        {
          sub_693D00(a1, -1);
        }
      }
      if ( !ptr )
        goto LABEL_12;
      *(_QWORD *)&v44 = 0;
      qfree(ptr);
      v9 = std::_Rb_tree_increment();
      if ( v10 == (__int64 *)v9 )
        goto LABEL_22;
LABEL_13:
      v6 = *a1;
    }
    if ( *((_BYTE *)a1 + 40) || (get_merge_state(v17, v14) & 3) != 0 )
    {
      v11 = v42;
      v12 = *(_QWORD *)(v9 + 32);
      v13 = v41;
      if ( *((_QWORD *)&v42 + 1) < (unsigned __int64)(v42 + 1) )
      {
        v41 = (void *)qvector_reserve(&v41, v41, v42 + 1, 8);
        v13 = v41;
        v11 = v42;
      }
      v13[v11] = v12;
      *(_QWORD *)&v42 = v42 + 1;
    }
    if ( ptr )
    {
      *(_QWORD *)&v44 = 0;
      qfree(ptr);
    }
LABEL_12:
    v9 = std::_Rb_tree_increment();
    if ( v10 == (__int64 *)v9 )
      goto LABEL_22;
    goto LABEL_13;
  }
LABEL_22:
  v18 = *((unsigned __int8 *)a1 + 40);
  if ( !(_BYTE)v18 )
  {
    v23 = (unsigned int *)v41;
    v24 = (char *)v41 + 8 * v42;
    if ( v24 == v41 )
    {
LABEL_36:
      LOBYTE(v18) = a1[2] == v29;
      goto LABEL_37;
    }
    goto LABEL_32;
  }
  v19 = (unsigned int *)v39;
  v20 = (char *)v39 + 8 * v40;
  if ( v20 != v39 )
  {
    v21 = a2;
    do
    {
      sub_3FEAD0((__int64)*a1, *v19, v19[1], a2);
      v22 = *v19;
      if ( *v19 < v34 || v22 >= v31 )
        sub_3A1A90(*a1, v22, v22 + 1, 0x28u);
      v19 += 2;
    }
    while ( v20 != (char *)v19 );
    v23 = (unsigned int *)v41;
    v24 = (char *)v41 + 8 * v42;
    if ( v24 == v41 )
    {
LABEL_35:
      v18 = *((unsigned __int8 *)a1 + 40);
      if ( (_BYTE)v18 )
        goto LABEL_37;
      goto LABEL_36;
    }
    do
    {
LABEL_33:
      sub_3FEAB0((__int64)*a1, *v23, v23[1], v21);
      v23 += 2;
    }
    while ( v24 != (char *)v23 );
    v23 = (unsigned int *)v41;
    goto LABEL_35;
  }
  v23 = (unsigned int *)v41;
  v24 = (char *)v41 + 8 * v42;
  if ( v41 != v24 )
  {
LABEL_32:
    v21 = a2;
    goto LABEL_33;
  }
LABEL_37:
  if ( v23 )
  {
    *(_QWORD *)&v42 = 0;
    qfree(v23);
  }
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39);
  }
  return v18;
}

