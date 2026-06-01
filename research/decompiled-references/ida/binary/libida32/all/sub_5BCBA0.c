__int64 __fastcall sub_5BCBA0(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  size_t v3; // r13
  size_t v4; // rbp
  void *v5; // rax
  int v7; // eax
  int v8; // r9d
  char v9[4104]; // [rsp+0h] [rbp-1038h] BYREF
  unsigned __int64 v10; // [rsp+1008h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v9[0] = 0;
  if ( (unsigned __int8)qisabspath(a2) )
  {
    if ( (unsigned __int8)qfileexist(a2, a2) )
      qstrncpy(v9, a2, 4096);
  }
  else
  {
    v7 = idadir(0);
    qmakepath((int)v9, 4096, v7, a2, 0, v8, v9[0]);
    if ( !(unsigned __int8)qfileexist(v9, 4096) && !(unsigned __int8)search_path(v9, 4096, a2, 0) )
      v9[0] = 0;
  }
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v2 = strlen(v9);
  v3 = v2 + 1;
  v4 = v2;
  v5 = (void *)qvector_reserve(a1, 0, v2 + 1, 1);
  *(_QWORD *)a1 = v5;
  *(_QWORD *)(a1 + 8) = v3;
  memmove(v5, v9, v4);
  *(_BYTE *)(*(_QWORD *)a1 + v4) = 0;
  return a1;
}

