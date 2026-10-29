/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_95A90
// Address: 0x0000000000095A90

//----- (0000000000095A90) ----------------------------------------------------
__int64 __fastcall sub_95A90(__int128 *a1, char *s, char *a3)
{
  size_t v6; // x22
  const char *v7; // x23
  char *v8; // x0
  char *v9; // x24
  char *v10; // x25
  signed __int64 v11; // x26
  __int64 align; // x1
  __int64 v13; // x29
  __int128 v14; // q1
  __int64 v15; // x9
  void *v16; // x0
  unsigned int v17; // w19
  pthread_mutex_t ptr; // [xsp+10h] [xbp-80h] BYREF

  ptr.__list.__prev = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  memset(&ptr, 0, 24);
  v6 = strlen(s);
  if ( *((_QWORD *)a1 + 1) )
    v7 = *(const char **)a1;
  else
    v7 = &byte_F154B;
  v8 = strstr(v7, s);
  if ( !v8 )
    goto LABEL_19;
  v9 = v8;
  v10 = (char *)v7;
  do
  {
    v11 = v9 - v10;
    if ( v9 != v10 )
    {
      align = ptr.__align;
      if ( *(&ptr.__align + 1) )
        v13 = *(&ptr.__align + 1) - 1;
      else
        v13 = 0;
      if ( *(&ptr.__align + 2) < (unsigned __int64)(v13 + v11 + 1) )
      {
        align = (__int64)qvector_reserve(&ptr, (void *)ptr.__align, v13 + v11 + 1, 1u);
        ptr.__align = align;
      }
      *(&ptr.__align + 1) = v13 + v11 + 1;
      *(_BYTE *)(align + v13 + v11) = 0;
      memmove((void *)(ptr.__align + v13), v10, v9 - v10);
    }
    sub_4C694((__int64)&ptr, a3);
    v10 = &v9[v6];
    v9 = strstr(&v9[v6], s);
  }
  while ( v9 );
  if ( v10 == v7 )
  {
LABEL_19:
    v16 = (void *)ptr.__align;
    v17 = 0;
    if ( !ptr.__align )
      return v17;
LABEL_20:
    *(&ptr.__align + 1) = 0;
    qfree(v16);
    ptr.__align = 0;
    *(&ptr.__align + 2) = 0;
    return v17;
  }
  if ( *v10 )
    sub_4C694((__int64)&ptr, v10);
  v14 = *a1;
  v15 = *((_QWORD *)a1 + 2);
  *a1 = *(_OWORD *)&ptr.__lock;
  v16 = (void *)v14;
  *((_QWORD *)a1 + 2) = *(&ptr.__align + 2);
  v17 = 1;
  *(_OWORD *)&ptr.__lock = v14;
  *(&ptr.__align + 2) = v15;
  if ( (_QWORD)v14 )
    goto LABEL_20;
  return v17;
}
// F154B: using guessed type char byte_F154B;
