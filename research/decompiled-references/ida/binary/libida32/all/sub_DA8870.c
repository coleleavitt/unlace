__int64 __fastcall sub_DA8870(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 *v6; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 *v9; // rbp
  unsigned __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // r15
  int v15; // ebx
  __int64 v16; // rdi
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // esi
  unsigned int v22; // ebx
  unsigned int v23; // eax
  void *ptr; // [rsp+20h] [rbp-88h] BYREF
  __int64 v27; // [rsp+30h] [rbp-78h] BYREF

  v6 = (__int64 *)(a4 + 8 * (((*(_BYTE *)(a4 + 2) & 8) != 0) + 1LL) + 32);
  v7 = *(_QWORD *)(a3 + 16);
  v8 = *(unsigned int *)(a4 + 16);
  v9 = &v6[v8];
  v10 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v7 & 4) != 0 )
    v10 = 0;
  sub_E10490(&ptr, v10, v6, v8);
  if ( v9 != v6 )
  {
    v14 = 0;
    v15 = 0;
    do
    {
      v17 = *v6;
      v18 = *((_QWORD *)ptr + ((unsigned int)v14 >> 6));
      if ( _bittest64(&v18, v14)
        && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 42 )
      {
        v20 = sub_DFDA20(a1[22], (unsigned int)(a5 - v15));
        v21 = *(_DWORD *)(v20 + 24);
        if ( !v21 || v21 == 2 )
        {
          if ( !*(_QWORD *)(v20 + 32) )
            goto LABEL_17;
        }
        else if ( v21 != 3 && !*(_QWORD *)(v20 + 40) && !*(_QWORD *)v20 )
        {
LABEL_17:
          v22 = 0;
          v23 = sub_DFC980(a1[50]);
          sub_E0FDF0(a1, v23, 2526, 0);
          goto LABEL_21;
        }
      }
      if ( (*(_BYTE *)(v17 + 1) & 6) != 0
        || (v19 = sub_CC2440(a1[23], *(_QWORD *)(v17 + 8), v11, v12, v13), !BYTE4(v19)) )
      {
        v16 = 13;
      }
      else
      {
        v16 = (unsigned int)v19;
      }
      ++v6;
      v14 = (unsigned int)(v14 + 1);
      v15 += (sub_E05440(v16) + 7) & 0xFFFFFFF8;
    }
    while ( v9 != v6 );
  }
  v22 = 1;
LABEL_21:
  if ( ptr != &v27 )
    free(ptr);
  return v22;
}

