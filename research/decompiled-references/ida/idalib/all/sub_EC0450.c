_DWORD *__fastcall sub_EC0450(_QWORD *a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  __int64 v10; // rdx
  _DWORD *result; // rax
  int v12; // edx
  unsigned int v13; // edi
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // esi
  int v18; // [rsp+0h] [rbp-28h]
  __int64 v19; // [rsp+8h] [rbp-20h]

  v7 = 2 * (3 * a6 + 3);
  v10 = a1[294];
  a1[304] += v7 * 4;
  result = (_DWORD *)((v10 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a1[295] >= (unsigned __int64)&result[v7] && v10 )
  {
    a1[294] = &result[v7];
  }
  else
  {
    v18 = a6;
    v19 = a5;
    result = (_DWORD *)sub_986170((__int64)(a1 + 294), v7 * 4, 8 * (3 * a6 + 3), 3, a5, a6);
    a5 = v19;
    LODWORD(a6) = v18;
  }
  v12 = a6;
  *result = a2;
  result[1] = a4;
  result[2] = 112;
  result[3] = a3;
  result[4] = a6;
  if ( (_DWORD)a6 )
  {
    v13 = 0;
    v14 = a5 + 24LL * (unsigned int)(a6 - 1);
    while ( 1 )
    {
      *(_QWORD *)&result[2 * v13 + 6] = *(_QWORD *)a5;
      v15 = v13 + 1;
      v16 = 4LL * v13 + 8LL * (unsigned int)(2 * v12);
      v17 = *(_DWORD *)(a5 + 16);
      v13 += 2;
      *(_QWORD *)&result[2 * v15 + 6] = *(_QWORD *)(a5 + 8);
      *(_DWORD *)((char *)result + v16 + 24) = v17;
      result[2 * (unsigned int)(2 * result[4]) + 6 + v15] = *(_DWORD *)(a5 + 20);
      if ( a5 == v14 )
        break;
      v12 = result[4];
      a5 += 24;
    }
  }
  return result;
}
