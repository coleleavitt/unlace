__int64 __fastcall sub_502AE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned int v5; // r13d
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  __int64 v9; // rbx
  unsigned int v10; // esi
  __int64 *v12; // rbx
  unsigned int *v13; // r12
  __int64 v14; // rax
  char *v15; // r14
  __int64 v16; // rax

  v4 = *(_QWORD *)(a1 + 1576);
  v5 = *(unsigned __int8 *)(v4 + 144);
  if ( !(_BYTE)v5 )
  {
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v7 = *(_QWORD *)(v4 + 8);
  v8 = (int)a2 - *(_DWORD *)(v7 + 68);
  if ( v8 >= *(_QWORD *)(v4 + 40) )
    sub_4FC970(a1, a2, v7, a4);
  v9 = v8 << 6;
  *(_DWORD *)(*(_QWORD *)(v4 + 32) + v9 + 56) = a2;
  v10 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 >= *(_DWORD *)(a3 + 4) )
    return 0;
  v12 = (__int64 *)(*(_QWORD *)(v4 + 32) + v9);
  v13 = sub_4FED00((unsigned int **)v12, v10);
  if ( v13 != (unsigned int *)(*v12 + 17 * v12[1]) && (v10 >= *v13 && v10 < v13[1] || *v13 < *(_DWORD *)(a3 + 4)) )
    return 0;
  sub_4FCEA0(*((unsigned int *)v12 + 14), (unsigned int *)a3, 183);
  v14 = v12[1];
  v15 = (char *)v13 - *v12;
  if ( v12[2] < (unsigned __int64)(v14 + 1) )
  {
    v16 = qvector_reserve(v12, *v12, v14 + 1, 17);
    *v12 = v16;
    v13 = (unsigned int *)&v15[v16];
    v14 = v12[1];
  }
  memmove((char *)v13 + 17, v13, 17 * v14 - (_QWORD)v15);
  *(_QWORD *)v13 = 0;
  v13[2] = 0;
  *((_BYTE *)v13 + 12) = 0;
  *((_BYTE *)v13 + 16) = 0;
  v12[3] = (__int64)v13;
  ++v12[1];
  *(_QWORD *)v13 = *(_QWORD *)a3;
  *(_QWORD *)((char *)v13 + 5) = *(_QWORD *)(a3 + 5);
  *(_BYTE *)(v12[3] + 16) = 1;
  return v5;
}

