unsigned __int64 __fastcall sub_8218C0(__int64 *a1)
{
  __int64 v1; // rdx
  char *v4; // rdi
  __int64 v5; // r12
  char *v6; // r12
  char *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // r13
  int v10; // eax
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
      v5 = 11 * v1 + 5;
      v17 = 0;
      if ( 11 * v1 != -5 )
      {
        ptr = (void *)qvector_reserve(&ptr, 0, 11 * v1 + 5, 1);
        memset((char *)ptr + v17, 0, v5 - v17);
        *(_QWORD *)&v17 = v5;
        v4 = (char *)ptr;
        v1 = a1[1];
      }
      v6 = &v4[v5];
      v7 = (char *)pack_dd(v4, v6, v1);
      v8 = *a1;
      v9 = *a1 + 12 * a1[1];
      if ( *a1 != v9 )
      {
        v10 = 0;
        do
        {
          if ( v7 < v6 )
            *v7++ = *(_BYTE *)(v8 + 8);
          v11 = pack_dd(v7, v6, (unsigned int)(*(_DWORD *)v8 - v10));
          v7 = (char *)pack_dd(v11, v6, (unsigned int)(*(_DWORD *)(v8 + 4) - *(_DWORD *)v8));
          v8 += 12;
          v10 = *(_DWORD *)(v8 - 8);
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

