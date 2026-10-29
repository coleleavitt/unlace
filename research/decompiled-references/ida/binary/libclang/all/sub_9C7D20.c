__int64 __fastcall sub_9C7D20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r14
  int v9; // ebx
  __int64 *v10; // r15
  __int64 *v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // esi
  unsigned int v17; // ebx
  unsigned int v18; // eax
  __int64 *v22; // [rsp+20h] [rbp-98h] BYREF
  __int64 v23; // [rsp+28h] [rbp-90h]
  void *ptr; // [rsp+30h] [rbp-88h] BYREF
  char v25; // [rsp+40h] [rbp-78h] BYREF

  v22 = (__int64 *)(a4 + *(unsigned __int8 *)(a4 + 3) + 8LL * ((*(_BYTE *)(a4 + 2) & 8) != 0) + 8);
  v23 = *(unsigned int *)(a4 + 16);
  v6 = *(_QWORD *)(a3 + 8);
  v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v6 & 4) != 0 )
    v7 = 0;
  v8 = 0;
  v9 = 0;
  sub_A2E680(&ptr, v7, &v22);
  v10 = v22;
  v11 = &v22[v23];
  if ( v22 != v11 )
  {
    do
    {
      v13 = *v10;
      v14 = *((_QWORD *)ptr + ((unsigned int)v8 >> 6));
      if ( _bittest64(&v14, v8)
        && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 41 )
      {
        v15 = sub_A1A5A0(*(_QWORD *)(a1 + 184), (unsigned int)(a5 - v9));
        v16 = *(_DWORD *)(v15 + 48);
        if ( !v16 || v16 == 2 )
        {
          if ( !*(_QWORD *)(v15 + 24) )
            goto LABEL_17;
        }
        else if ( v16 != 3 && !*(_QWORD *)(v15 + 32) && !*(_QWORD *)v15 )
        {
LABEL_17:
          v17 = 0;
          v18 = sub_A1A260(*(_QWORD *)(a1 + 200), a2);
          sub_A2E050(a1, v18, 2324, 0);
          goto LABEL_21;
        }
      }
      if ( (*(_BYTE *)(v13 + 1) & 6) != 0 )
      {
        v12 = (unsigned int)((unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 8)
                                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                                      + 8LL)
                                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                                              + 16LL)
                           - 25 < 2)
            + 13;
      }
      else
      {
        v12 = sub_8CA760(*(__int64 **)(a1 + 192), *(_QWORD *)(v13 + 8));
        if ( !BYTE4(v12) )
          v12 = 13;
      }
      ++v10;
      v8 = (unsigned int)(v8 + 1);
      v9 += (sub_A24BE0(v12) + 7) & 0xFFFFFFF8;
    }
    while ( v11 != v10 );
  }
  v17 = 1;
LABEL_21:
  if ( ptr != &v25 )
    free(ptr);
  return v17;
}

