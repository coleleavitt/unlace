/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6352C
// Address: 0x000000000006352C

//----- (000000000006352C) ----------------------------------------------------
__int64 __fastcall sub_6352C(pthread_mutex_t *a1, char a2, signed int a3)
{
  struct __pthread_internal_list *next; // x9
  int *v4; // x19
  unsigned int v5; // w20

  next = a1[8].__list.__next;
  v4 = *((int **)&a1[8].__list.__prev->__prev + (_QWORD)next - 1);
  if ( next )
    a1[8].__list.__next = (struct __pthread_internal_list *)((char *)next - 1);
  if ( a3 )
  {
    if ( (*v4 | 4) == 5 )
      v5 = sub_642D8(a1, v4, a2 & 1, a3);
    else
      v5 = 58;
  }
  else
  {
    v5 = sub_642D8(a1, v4, a2 & 1, 0);
    if ( !v4 )
      return set_qerrno(v5);
  }
  sub_62860(v4);
  operator delete(v4);
  return set_qerrno(v5);
}
