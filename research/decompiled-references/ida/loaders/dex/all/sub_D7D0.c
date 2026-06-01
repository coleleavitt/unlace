__int64 __fastcall sub_D7D0(__int64 a1, __int64 a2, const char *a3)
{
  const void *v4; // rbp
  size_t v5; // rax
  size_t v6; // r15
  size_t v7; // r13
  void *v8; // rax
  const void *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 v12; // r8
  unsigned __int64 v13; // r15
  _DWORD *v14; // rax
  unsigned int dword; // ebp
  const char *v16; // r13
  __int64 v17; // rax
  __int64 v19; // [rsp+0h] [rbp-60h]
  __int64 v20; // [rsp+8h] [rbp-58h] BYREF
  __int128 v21; // [rsp+10h] [rbp-50h]
  unsigned __int64 v22; // [rsp+20h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v4 = a3;
  v21 = 0;
  v20 = 0;
  if ( !a3 )
  {
    v13 = 8;
    v11 = 0;
    v12 = 7;
LABEL_11:
    v9 = v4;
    v19 = v12;
    v20 = qvector_reserve(&v20, v4, v13, 1);
    v12 = v19;
    v4 = (const void *)v20;
    goto LABEL_5;
  }
  v5 = strlen(a3);
  v6 = v5 + 1;
  v7 = v5;
  v8 = (void *)qvector_reserve(&v20, 0, v5 + 1, 1);
  v9 = v4;
  *(_QWORD *)&v21 = v6;
  v20 = (__int64)v8;
  memmove(v8, v4, v7);
  *(_BYTE *)(v20 + v7) = 0;
  v10 = *((_QWORD *)&v21 + 1);
  v4 = (const void *)v20;
  v11 = v21 - 1;
  v12 = v21 + 6;
  v13 = v21 + 7;
  if ( !(_QWORD)v21 )
  {
    v11 = 0;
    v13 = 8;
    v12 = 7;
  }
  if ( *((_QWORD *)&v21 + 1) < v13 )
    goto LABEL_11;
LABEL_5:
  *(_QWORD *)&v21 = v13;
  *((_BYTE *)v4 + v12) = 0;
  v14 = (_DWORD *)(v11 + v20);
  *v14 = 1717989152;
  *(_DWORD *)((char *)v14 + 3) = 1952805734;
  dword = get_dword(a2, v9, v10);
  v16 = s1;
  if ( (_QWORD)v21 )
    v16 = (const char *)v20;
  create_data(a2, 0x20000000, 4, -1);
  v17 = num_flag();
  set_op_type(a2, v17, 0);
  set_cmt(a2, v16, 0);
  add_dref(a2, *(_QWORD *)(a1 + 152) + dword, 5);
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20);
  }
  return a2 + 4;
}

