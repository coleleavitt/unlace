__int64 __fastcall sub_637380(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v7; // r14
  unsigned int v8; // ebx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  __int64 v12; // rbx
  int ordinal_limit; // eax
  char v14; // cl
  __int64 v15; // [rsp+8h] [rbp-A0h]
  char v16; // [rsp+1Fh] [rbp-89h] BYREF
  __int64 v17; // [rsp+20h] [rbp-88h] BYREF
  void *v18; // [rsp+28h] [rbp-80h]
  int v19[4]; // [rsp+30h] [rbp-78h]
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  int v21[4]; // [rsp+48h] [rbp-60h]
  int v22; // [rsp+58h] [rbp-50h]
  int v23[2]; // [rsp+68h] [rbp-40h]

  *(_QWORD *)v23 = __readfsqword(0x28u);
  if ( !a3 )
    a3 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(a3 + 32) & 0x10) == 0 )
    return 0;
  if ( a4 )
  {
    v7 = *(unsigned int *)(a4 + 8);
  }
  else
  {
    v15 = a3;
    ordinal_limit = get_ordinal_limit(a3);
    a3 = v15;
    v7 = (unsigned int)(ordinal_limit - 1);
    if ( (unsigned int)v7 > 0xFFFFFFFD )
      return 0;
  }
  if ( !(_DWORD)v7 )
    return 0;
  v17 = a3;
  v18 = nullptr;
  ptr = nullptr;
  LOBYTE(v22) = 0;
  *(_OWORD *)v19 = 0;
  *(_OWORD *)v21 = 0;
  v10 = (unsigned int)get_ordinal_limit(a3) - 1;
  v11 = 0;
  if ( (unsigned int)v10 <= 0xFFFFFFFD )
  {
    if ( v10 == *(_QWORD *)v21 )
      goto LABEL_12;
    v16 = 0;
    if ( &v16 < ptr || &v16 >= (char *)ptr + *(_QWORD *)&v21[2] )
    {
      if ( *(_QWORD *)&v21[2] < v10 )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v10, 1);
        v11 = *(_QWORD *)v21;
      }
      v14 = v16;
      if ( v11 < v10 )
      {
        do
          *((_BYTE *)ptr + v11++) = v14;
        while ( v10 != v11 );
      }
    }
    else
    {
      if ( *(_QWORD *)&v21[2] < v10 )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v10, 1);
        v11 = *(_QWORD *)v21;
      }
      if ( v11 < v10 )
      {
        do
          *((_BYTE *)ptr + v11++) = 0;
        while ( v10 != v11 );
      }
    }
    goto LABEL_11;
  }
  v10 = 0;
  if ( *(_QWORD *)v21 )
LABEL_11:
    *(_QWORD *)v21 = v10;
LABEL_12:
  v12 = 0;
  if ( a4 )
  {
    do
      sub_635990(&v17, *(_DWORD *)(*(_QWORD *)a4 + 4 * v12++), a5);
    while ( v7 != v12 );
  }
  else
  {
    do
      sub_635990(&v17, ++v12, a5);
    while ( v12 != v7 );
  }
  v8 = sub_6370E0(&v17, a2, a5);
  if ( (_BYTE)v22 )
    v8 = -v8;
  if ( ptr )
  {
    *(_QWORD *)v21 = 0;
    qfree(ptr);
  }
  if ( v18 )
  {
    *(_QWORD *)v19 = 0;
    qfree(v18);
  }
  return v8;
}

