__int64 __fastcall sub_8F34F0(__int64 a1, unsigned int **a2, unsigned int **a3)
{
  __int64 v4; // rdi
  unsigned int **v6; // r15
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // r12d
  __int64 result; // rax
  __int64 v12; // rdx
  int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  char v17; // dl
  _BYTE v18[57]; // [rsp+1Fh] [rbp-39h] BYREF

  v4 = a1 + 8400;
  v6 = a3;
  v8 = *(_QWORD *)(v4 + 432);
  v9 = *(_QWORD *)(v4 + 448);
  v10 = *(char *)(v9 + (unsigned int)(2 * *(_DWORD *)(v8 + 4LL * **a2)));
  while ( 1 )
  {
    v12 = (unsigned int)(2 * *(_DWORD *)(v8 + 4LL * **v6));
    result = (unsigned int)*(char *)(v9 + v12);
    v13 = v12;
    if ( v10 == (_DWORD)result )
      goto LABEL_4;
    if ( (_DWORD)result
      && (unsigned __int8)sub_B39690(a2, v6, v18)
      && (*((_BYTE *)a2 + 44) & 8) == 0
      && (*a2)[6]
      && **(_DWORD **)(a1 + 9096) == 1 )
    {
      sub_95A250(a1 + 9080, *a2, *v6);
    }
    v14 = sub_180C100(v4, 32);
    *(_QWORD *)(v14 + 8) = 2;
    v15 = *(_QWORD *)(a1 + 8848);
    *(_QWORD *)(v14 + 16) = a2;
    *(_QWORD *)v14 = off_1C577D8;
    *(_QWORD *)(v14 + 24) = v6;
    v16 = (unsigned int)(v10 == -1) + v13;
    v17 = *(_BYTE *)(v15 + v16);
    result = v14 | 3;
    if ( v17 == -1 )
      break;
    if ( !v17 )
      result = (__int64)sub_8F28B0(a1, v16, result, 0);
LABEL_4:
    v6 = (unsigned int **)v6[2];
    if ( a3 == v6 )
      return result;
LABEL_5:
    v9 = *(_QWORD *)(a1 + 8848);
    v8 = *(_QWORD *)(a1 + 8832);
  }
  if ( *(_QWORD *)(a1 + 8984) != qword_1C7EC50 || *(_BYTE *)(a1 + 2416) )
    goto LABEL_4;
  *(_QWORD *)(a1 + 8984) = result;
  v6 = (unsigned int **)v6[2];
  *(_DWORD *)(a1 + 8992) = v16 ^ 1;
  if ( a3 != v6 )
    goto LABEL_5;
  return result;
}

