unsigned __int64 __fastcall sub_607990(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rax
  unsigned int v7; // r13d
  unsigned int i; // eax
  unsigned int v10; // ebx
  __int64 v11; // rax
  _DWORD *v12; // rsi
  char *v13; // rbx
  char *v14; // r14
  unsigned int v15; // r13d
  unsigned int v16; // eax
  char *v17; // rcx
  unsigned int v18; // ebx
  char *v19; // rsi
  void *v20; // rdi
  _DWORD v21[4]; // [rsp+Ch] [rbp-5Ch] BYREF
  unsigned int v22; // [rsp+1Ch] [rbp-4Ch] BYREF
  void *ptr; // [rsp+20h] [rbp-48h] BYREF
  __int128 v24; // [rsp+28h] [rbp-40h]
  unsigned __int64 v25; // [rsp+38h] [rbp-30h]

  v5 = *(_QWORD *)(a1 + 1480);
  v21[0] = a2;
  v25 = __readfsqword(0x28u);
  sub_606C20((_QWORD *)(v5 + 2248), a3);
  v7 = sub_3B90A0(*(_QWORD **)(a1 + 1480), a3);
  if ( a4 != -1 )
  {
    if ( (unsigned __int8)sub_79BBD0(v21, a1, &v22, a4, 65) )
    {
      if ( v22 != v7 )
      {
        LODWORD(ptr) = a4;
        sub_79B440(v21, a1, v7, &ptr, 4, 79);
      }
    }
    else
    {
      LODWORD(ptr) = v7;
      sub_79B440(v21, a1, a4, &ptr, 4, 65);
    }
    return v25 - __readfsqword(0x28u);
  }
  v24 = 0;
  ptr = nullptr;
  for ( i = sub_79B7E0(v21, a1, 65); ; i = sub_79B840(v21, a1, v10, 65) )
  {
    v10 = i;
    if ( i == -1 )
      break;
    if ( v7 == (unsigned int)sub_79B3A0(v21, a1, i, 65) )
    {
      v11 = v24;
      v12 = ptr;
      if ( *((_QWORD *)&v24 + 1) < (unsigned __int64)(v24 + 1) )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v24 + 1, 4);
        v12 = ptr;
        v11 = v24;
      }
      v12[v11] = v10;
      *(_QWORD *)&v24 = v24 + 1;
    }
  }
  v13 = (char *)ptr;
  v14 = (char *)ptr + 4 * v24;
  if ( v14 != ptr )
  {
    do
    {
      sub_79B4D0(v21, a1, *(unsigned int *)v13, 65);
      v13 += 4;
    }
    while ( v14 != v13 );
  }
  sub_79B4D0(v21, a1, v7, 79);
  v15 = sub_79B7E0(v21, a1, 79);
  if ( v15 == -1 )
  {
LABEL_23:
    v20 = ptr;
    if ( !ptr )
      return v25 - __readfsqword(0x28u);
LABEL_24:
    *(_QWORD *)&v24 = 0;
    qfree(v20);
    return v25 - __readfsqword(0x28u);
  }
  while ( 1 )
  {
    v16 = sub_79B3A0(v21, a1, v15, 79);
    v17 = (char *)ptr;
    v18 = v16;
    v19 = (char *)ptr + 4 * v24;
    if ( ptr != v19 )
    {
      while ( v16 != *(_DWORD *)v17 )
      {
        v17 += 4;
        if ( v19 == v17 )
          goto LABEL_22;
      }
      if ( v19 != v17 )
        break;
    }
LABEL_22:
    v15 = sub_79B840(v21, a1, v15, 79);
    if ( v15 == -1 )
      goto LABEL_23;
  }
  sub_79B4D0(v21, a1, v15, 79);
  v22 = v15;
  sub_79B440(v21, a1, v18, &v22, 4, 65);
  v20 = ptr;
  if ( ptr )
    goto LABEL_24;
  return v25 - __readfsqword(0x28u);
}

