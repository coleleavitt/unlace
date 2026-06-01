__int64 __fastcall sub_3F51A0(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // r14
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdi
  void *v10; // rdi
  __int64 v12; // rax
  char *v13; // rsi
  void **p_ptr; // rdi
  void *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  size_t v19; // r8
  __int64 v20; // r10
  unsigned __int64 v21; // r11
  char *v22; // rsi
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // r9
  unsigned __int64 v26; // [rsp+10h] [rbp-4A8h]
  unsigned __int64 v27; // [rsp+10h] [rbp-4A8h]
  size_t na; // [rsp+18h] [rbp-4A0h]
  size_t n; // [rsp+18h] [rbp-4A0h]
  __int64 v30; // [rsp+20h] [rbp-498h]
  __int64 v31; // [rsp+20h] [rbp-498h]
  char *v32; // [rsp+30h] [rbp-488h] BYREF
  char *v33; // [rsp+38h] [rbp-480h]
  void *ptr; // [rsp+40h] [rbp-478h] BYREF
  __int128 v35; // [rsp+48h] [rbp-470h]
  _BYTE src[10]; // [rsp+66h] [rbp-452h] BYREF
  char v37; // [rsp+70h] [rbp-448h] BYREF
  char v38; // [rsp+71h] [rbp-447h] BYREF
  unsigned __int64 v39; // [rsp+478h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v3 = *(_QWORD **)(qword_2CCB598 + 1672);
  v4 = (_QWORD *)sub_506150(v3 + 203);
  if ( v4 )
  {
    while ( 1 )
    {
      if ( *((_BYTE *)v4 + 184) != 6 )
        goto LABEL_3;
      v5 = sub_3BDD60(v3, *v4);
      v6 = netnode_supval(v5, 29, &v37, 1024, 83);
      if ( v6 <= 0 )
        goto LABEL_3;
      v32 = &v37;
      v33 = &v37 + v6;
      ptr = nullptr;
      v35 = 0;
      if ( &v37 < &v37 + v6 )
      {
        v32 = &v38;
        if ( v37 == 1 )
          break;
      }
      v7 = a2[1];
      v8 = *a2;
      if ( a2[2] < (unsigned __int64)(v7 + 1) )
      {
        v12 = qvector_reserve(a2, v8, v7 + 1, 24);
        *a2 = v12;
        v7 = a2[1];
        v8 = v12;
      }
      v9 = v8 + 24 * v7;
      *(_QWORD *)v9 = 0;
      *(_OWORD *)(v9 + 8) = 0;
      ++a2[1];
      sub_35A790((char **)v9);
      v10 = ptr;
      if ( !ptr )
        goto LABEL_3;
LABEL_11:
      *(_QWORD *)&v35 = 0;
      qfree(v10);
LABEL_3:
      v4 = (_QWORD *)sub_505EB0(v3 + 203, *v4);
      if ( !v4 )
        return 1;
    }
    v13 = nullptr;
    p_ptr = &ptr;
    v15 = (void *)qvector_reserve(&ptr, 0, 1, 1);
    v16 = v35;
    ptr = v15;
    *((_BYTE *)v15 + v35) = 1;
    *(_QWORD *)&v35 = v35 + 1;
LABEL_14:
    if ( v32 >= v33 )
    {
LABEL_23:
      v24 = sub_3BDD60(v3, *v4);
      netnode_supset(v24, 29, ptr, v35, 83, v25);
      v10 = ptr;
      if ( !ptr )
        goto LABEL_3;
      goto LABEL_11;
    }
    while ( 1 )
    {
      if ( (unsigned __int8)is_cvt64(p_ptr, v13, v16) )
      {
        v17 = (unsigned int)unpack_dd(&v32);
        if ( v17 == 0xFFFFFFFFLL )
          v17 = -1;
      }
      else
      {
        v17 = unpack_dq(&v32);
      }
      v13 = &v37;
      p_ptr = (void **)src;
      v18 = pack_dq(src, &v37, v17) - (_QWORD)src;
      v19 = v18;
      if ( !v18 )
        goto LABEL_14;
      v20 = v35;
      v21 = v35 + v18;
      if ( __CFADD__((_QWORD)v35, v18) )
      {
        if ( (unsigned __int64)v35 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v35 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v35 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_22;
        }
        v21 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v22 = (char *)ptr;
      v23 = v35;
      if ( *((_QWORD *)&v35 + 1) < v21 )
      {
        v31 = v35;
        n = v19;
        v27 = v21;
        ptr = (void *)qvector_reserve(&ptr, ptr, v21, 1);
        v22 = (char *)ptr;
        v20 = v31;
        v23 = v35;
        v19 = n;
        v21 = v27;
      }
      v30 = v20;
      na = v19;
      v26 = v21;
      memset(&v22[v23], 0, v21 - v23);
      v19 = na;
      v20 = v30;
      *(_QWORD *)&v35 = v26;
LABEL_22:
      v13 = src;
      p_ptr = (void **)((char *)ptr + v20);
      memcpy((char *)ptr + v20, src, v19);
      if ( v32 >= v33 )
        goto LABEL_23;
    }
  }
  return 1;
}
