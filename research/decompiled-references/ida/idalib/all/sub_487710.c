unsigned __int64 __fastcall sub_487710(int *a1, __int64 a2)
{
  __int64 v2; // rax
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = *(_QWORD *)a1;
  ptr[3] = (void *)__readfsqword(0x28u);
  (*(void (__fastcall **)(void **, int *, __int64))(v2 + 64))(ptr, a1, a2);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
  }
  return sub_487480(a1, (unsigned __int64 *)(16 * a2 + **((_QWORD **)a1 + 5)), 1);
}
