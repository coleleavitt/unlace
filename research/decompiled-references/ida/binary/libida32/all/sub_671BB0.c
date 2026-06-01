unsigned __int64 __fastcall sub_671BB0(__int64 a1, int *a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rbx
  int v7; // r12d
  void *v8; // rdi
  unsigned int v9; // ebx
  unsigned int v10; // r13d
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v16; // [rsp+20h] [rbp-F8h]
  unsigned __int64 v17; // [rsp+D8h] [rbp-40h]

  v6 = *(__int64 **)(a1 + 8);
  v7 = a2[8];
  v17 = __readfsqword(0x28u);
  v16 = *v6;
  if ( v7 != -1 )
  {
    v12 = v6[15];
    a5 = (__int64)(v6 + 14);
    a4 = v6[16];
    v13 = v6[14];
    a3 = v12 + 1;
    if ( a4 < v12 + 1 )
    {
      v14 = qvector_reserve(v6 + 14, v13, a3, 4);
      v6[14] = v14;
      v13 = v14;
      v12 = v6[15];
    }
    *(_DWORD *)(v13 + 4 * v12) = v7;
    ++v6[15];
    a2[8] = -1;
  }
  v8 = *((void **)a2 + 1);
  if ( v8 )
  {
    *((_QWORD *)a2 + 2) = 0;
    qfree(v8);
    *((_QWORD *)a2 + 1) = 0;
    *((_QWORD *)a2 + 3) = 0;
  }
  v9 = *a2;
  if ( *a2 == -1 )
    v9 = sub_614FB0(**(_QWORD **)(v16 + 1480), 19, a3, a4, a5, a6);
  v10 = a2[1];
  if ( v10 == -1 )
    v10 = sub_614FB0(**(_QWORD **)(v16 + 1480), 20, a3, a4, a5, a6);
  if ( v9 < v10 )
    callui(27, (int)&callui, a3, a4, a5, a6);
  *((_BYTE *)a2 + 36) = 1;
  return v17 - __readfsqword(0x28u);
}

