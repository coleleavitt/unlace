/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_64794
// Address: 0x0000000000064794

//----- (0000000000064794) ----------------------------------------------------
__int64 __fastcall sub_64794(pthread_mutex_t *a1)
{
  struct __pthread_internal_list *next; // x9
  int *v2; // x19
  unsigned int v3; // w20

  next = a1[8].__list.__next;
  v2 = *((int **)&a1[8].__list.__prev->__prev + (_QWORD)next - 1);
  if ( next )
    a1[8].__list.__next = (struct __pthread_internal_list *)((char *)next - 1);
  if ( (*v2 | 4) == 5 )
    v3 = sub_642D8(a1, v2, 0, 1);
  else
    v3 = 58;
  sub_62860(v2);
  operator delete(v2);
  return set_qerrno(v3);
}
