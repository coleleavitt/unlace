char __fastcall sub_FD40E0(__int64 a1, unsigned int a2, const void *a3, size_t a4, __int64 a5)
{
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rsi
  int *v11; // r14
  __int64 v12; // r15
  unsigned int v13; // edx
  __int64 v14; // rcx
  int v15; // r13d
  unsigned __int64 v16; // rdx
  _QWORD *v17; // rsi
  unsigned __int64 v19; // [rsp+8h] [rbp-40h]

  v7 = sub_FD3F00(a3, a4);
  if ( !BYTE4(v7) )
    return 1;
  v8 = *(_QWORD *)(a1 + 8);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 88);
    if ( v9 )
    {
      v10 = v8 + 80;
      do
      {
        while ( (int)v7 <= *(_DWORD *)(v9 + 32) )
        {
          v10 = v9;
          v9 = *(_QWORD *)(v9 + 16);
          if ( !v9 )
            goto LABEL_8;
        }
        v9 = *(_QWORD *)(v9 + 24);
      }
      while ( v9 );
LABEL_8:
      if ( v8 + 80 != v10 && (int)v7 >= *(_DWORD *)(v10 + 32) )
      {
        v11 = *(int **)(v10 + 40);
        v12 = (__int64)(*(_QWORD *)(v10 + 48) - (_QWORD)v11) >> 2;
        if ( (__int64)(*(_QWORD *)(v10 + 48) - (_QWORD)v11) > 0 )
        {
          v13 = *(_DWORD *)(a5 + 8);
          do
          {
            while ( 1 )
            {
              v14 = v13;
              v15 = *v11;
              v16 = v13 + 1LL;
              if ( v16 > *(unsigned int *)(a5 + 12) )
                break;
              ++v11;
              *(_DWORD *)(*(_QWORD *)a5 + 4 * v14) = v15;
              v13 = *(_DWORD *)(a5 + 8) + 1;
              *(_DWORD *)(a5 + 8) = v13;
              if ( !--v12 )
                goto LABEL_15;
            }
            ++v11;
            v19 = v7;
            sub_2237220(a5, a5 + 16, v16, 4);
            --v12;
            *(_DWORD *)(*(_QWORD *)a5 + 4LL * *(unsigned int *)(a5 + 8)) = v15;
            v13 = *(_DWORD *)(a5 + 8) + 1;
            v7 = v19;
            *(_DWORD *)(a5 + 8) = v13;
          }
          while ( v12 );
LABEL_15:
          v8 = *(_QWORD *)(a1 + 8);
        }
      }
    }
  }
  v17 = (_QWORD *)((char *)&unk_2B4D8A0 + 24 * (unsigned int)v7);
  if ( (*v17 & 0xFFFFFFFF0000LL) != 0 )
    return sub_FD2E60(a2, (__int64)v17, a5, v8);
  else
    return a2 == 1;
}
