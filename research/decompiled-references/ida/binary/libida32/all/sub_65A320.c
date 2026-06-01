__int64 __fastcall sub_65A320(int a1, int a2, char a3, int a4)
{
  char *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  unsigned int v12; // r13d
  char *v13; // rdi
  __int64 v14; // r12
  __int64 v15; // rbp
  char *v16; // rbx
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  __int64 v21; // rax
  _DWORD v22[2]; // [rsp+0h] [rbp-80h] BYREF
  void *v23; // [rsp+8h] [rbp-78h] BYREF
  __int128 v24; // [rsp+10h] [rbp-70h]
  void *ptr; // [rsp+28h] [rbp-58h] BYREF
  __int128 v26; // [rsp+30h] [rbp-50h]
  unsigned __int64 v27; // [rsp+40h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v23 = nullptr;
  v24 = 0;
  v23 = (void *)qvector_reserve(&v23, 0, 1, 80);
  v7 = (char *)v23 + 80 * v24;
  v8 = -1;
  *(_QWORD *)v7 = 0;
  *(_OWORD *)(v7 + 8) = 0;
  *(_QWORD *)&v24 = v24 + 1;
  v9 = *((_QWORD *)v7 + 1);
  *((_QWORD *)v7 + 3) = 0;
  v10 = *(_QWORD *)v7;
  *((_QWORD *)v7 + 6) = 0;
  *((_DWORD *)v7 + 18) = -1;
  *((_OWORD *)v7 + 2) = 0;
  *(_OWORD *)(v7 + 56) = 0;
  v11 = v9 + 1;
  if ( v11 )
  {
    v21 = qvector_reserve(v7, v10, v11, 1);
    *(_QWORD *)v7 = v21;
    v10 = v21;
    v8 = *((_QWORD *)v7 + 1);
  }
  *(_BYTE *)(v10 + v8) = a3;
  ++*((_QWORD *)v7 + 1);
  v26 = 0;
  ptr = nullptr;
  ptr = (void *)qvector_reserve(&ptr, 0, 1, 8);
  v22[0] = a1;
  *((_QWORD *)ptr + v26) = 0;
  *(_QWORD *)&v26 = v26 + 1;
  v22[1] = a2 + a1;
  v12 = sub_659430(*(_QWORD **)(qword_2CA1698 + 1480), (const char *)v22, a4 & 0xFFFFFFDF, &v23, &ptr, nullptr);
  if ( ptr )
  {
    *(_QWORD *)&v26 = 0;
    qfree(ptr);
  }
  v13 = (char *)v23;
  if ( v23 )
  {
    v14 = v24;
    if ( (_QWORD)v24 )
    {
      v15 = 0;
      do
      {
        v16 = &v13[80 * v15];
        v17 = *((void **)v16 + 6);
        if ( v17 )
        {
          *((_QWORD *)v16 + 7) = 0;
          qfree(v17);
        }
        v18 = *((void **)v16 + 3);
        if ( v18 )
        {
          *((_QWORD *)v16 + 4) = 0;
          qfree(v18);
        }
        v19 = *(void **)v16;
        if ( *(_QWORD *)v16 )
        {
          *((_QWORD *)v16 + 1) = 0;
          qfree(v19);
        }
        ++v15;
        v13 = (char *)v23;
      }
      while ( v14 != v15 );
    }
    *(_QWORD *)&v24 = 0;
    qfree(v13);
  }
  return v12;
}

