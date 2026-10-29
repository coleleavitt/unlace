unsigned __int64 __fastcall sub_718FA0(_QWORD *a1, void *a2, int a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v7; // r15
  size_t v8; // r14
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  size_t v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax

  v7 = sub_718E20((__int64)a1, a2, *(_QWORD *)a4, *(unsigned int *)(a4 + 8), a5);
  v8 = (unsigned int)sub_B1E8D0(v7);
  v9 = a1[274];
  a1[284] += v8 + 8;
  v10 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v11 = v8 + 8 + v10;
  if ( a1[275] >= v11 && v9 )
    a1[274] = v11;
  else
    v10 = sub_6A76A0((__int64)(a1 + 274), v8 + 8, 3);
  *(_QWORD *)v10 = v7;
  memset((void *)(v10 + 8), 0, v8);
  *(_DWORD *)(v10 + 12) = 0;
  v12 = *(_QWORD *)v10;
  *(_DWORD *)(v10 + 8) = a3;
  *(_DWORD *)(v10 + 16) = *(_DWORD *)(a4 + 272);
  *(_DWORD *)(v10 + 20) = *(_DWORD *)(a4 + 276);
  v13 = *(unsigned int *)(v12 + 20);
  if ( (_DWORD)v13 )
  {
    v14 = 8 * v13;
    v15 = 0;
    do
    {
      *(_QWORD *)(v10 + v15 + 24) = *(_QWORD *)(*(_QWORD *)a4 + 4 * v15 + 24);
      v15 += 8;
    }
    while ( v14 != v15 );
  }
  return v10;
}

