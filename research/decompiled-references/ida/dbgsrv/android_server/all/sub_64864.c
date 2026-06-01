/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_64864
// Address: 0x0000000000064864

//----- (0000000000064864) ----------------------------------------------------
__int64 __fastcall sub_64864(pthread_mutex_t *a1)
{
  struct __pthread_internal_list *next; // x9
  int *v2; // x19
  unsigned int v3; // w20

  next = a1[8].__list.__next;
  v2 = *((int **)&a1[8].__list.__prev->__prev + (_QWORD)next - 1);
  if ( next )
    a1[8].__list.__next = (struct __pthread_internal_list *)((char *)next - 1);
  v3 = sub_642D8(a1, v2, 1, 0);
  if ( v2 )
  {
    sub_62860(v2);
    operator delete(v2);
  }
  return set_qerrno(v3);
}
