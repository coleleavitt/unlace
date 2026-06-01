__int64 __fastcall sub_8B1530(_QWORD *a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5)
{
  char *v7; // rax
  __int64 v8; // r14
  unsigned int v9; // ebx
  void *ptr; // [rsp+8h] [rbp-58h] BYREF
  __int128 v12; // [rsp+10h] [rbp-50h]
  int v13; // [rsp+2Ah] [rbp-36h]
  __int16 v14; // [rsp+2Eh] [rbp-32h]
  unsigned __int64 v15; // [rsp+30h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v14 = WORD2(a3);
  v13 = a3;
  ptr = nullptr;
  v12 = 0;
  ptr = (void *)qvector_reserve(&ptr, 0, 1, 6);
  v7 = (char *)ptr + 6 * v12;
  *(_DWORD *)v7 = v13;
  *((_WORD *)v7 + 2) = v14;
  v8 = a1[53];
  *(_QWORD *)&v12 = v12 + 1;
  qmutex_lock(v8);
  v9 = sub_8B11E0(a1, a5, (int **)&ptr, *a4);
  qmutex_unlock(v8);
  if ( ptr )
  {
    *(_QWORD *)&v12 = 0;
    qfree(ptr);
  }
  return v9;
}
