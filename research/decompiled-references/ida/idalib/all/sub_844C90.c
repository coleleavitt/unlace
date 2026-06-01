unsigned __int64 __fastcall sub_844C90(__int64 *a1)
{
  __int64 v1; // rdx
  char *v4; // rdi
  __int64 v5; // r12
  char *v6; // r12
  char *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rax
  char *v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  void *v15; // rdi
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v17; // [rsp+8h] [rbp-40h]
  unsigned __int64 v18; // [rsp+18h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  if ( *((_BYTE *)a1 + 28) )
  {
    v1 = a1[1];
    if ( v1 )
    {
      ptr = nullptr;
      v4 = nullptr;
      v5 = 21 * v1 + 10;
      v17 = 0;
      if ( 21 * v1 != -10 )
      {
        ptr = (void *)qvector_reserve(&ptr, 0, 21 * v1 + 10, 1);
        memset((char *)ptr + v17, 0, v5 - v17);
        *(_QWORD *)&v17 = v5;
        v4 = (char *)ptr;
        v1 = a1[1];
      }
      v6 = &v4[v5];
      v7 = (char *)pack_dq(v4, v6, v1);
      v8 = *a1;
      v9 = *a1 + 24 * a1[1];
      if ( *a1 != v9 )
      {
        v10 = 0;
        do
        {
          if ( v7 < v6 )
            *v7++ = *(_BYTE *)(v8 + 16);
          v11 = pack_dq(v7, v6, *(_QWORD *)v8 - v10);
          v7 = (char *)pack_dq(v11, v6, *(_QWORD *)(v8 + 8) - *(_QWORD *)v8);
          v8 += 24;
          v10 = *(_QWORD *)(v8 - 16);
        }
        while ( v9 != v8 );
      }
      v12 = (char *)ptr;
      v13 = v17;
      v14 = v7 - (_BYTE *)ptr;
      if ( (unsigned __int64)v17 < v7 - (_BYTE *)ptr )
      {
        if ( *((_QWORD *)&v17 + 1) < v14 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v14, 1);
          v12 = (char *)ptr;
          v13 = v17;
        }
        memset(&v12[v13], 0, v14 - v13);
        *(_QWORD *)&v17 = v14;
        v12 = (char *)ptr;
      }
      else if ( v14 != (_QWORD)v17 )
      {
        *(_QWORD *)&v17 = v7 - (_BYTE *)ptr;
      }
      add_undo_record(*((unsigned int *)a1 + 6), v12, v14);
      v15 = ptr;
      a1[1] = 0;
      if ( v15 )
      {
        *(_QWORD *)&v17 = 0;
        qfree(v15);
      }
    }
  }
  return v18 - __readfsqword(0x28u);
}
