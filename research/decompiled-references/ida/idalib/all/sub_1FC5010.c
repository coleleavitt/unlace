__int64 __fastcall sub_1FC5010(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  int *v4; // rbx
  int v5; // esi
  __int64 v6; // r14
  __int64 result; // rax
  char *v8; // rbp
  char *v9; // r14
  __int64 *v10; // rbx
  __int64 v11; // r13

  sub_1FC2690(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 4));
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 16));
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_WORD *)(a2 + 2) >> 6) & 7);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_BYTE *)(a2 + 2) >> 3) & 7);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_QWORD *)a2 >> 25) & 1LL);
  v3 = *(unsigned int *)(a2 + 4);
  if ( (_DWORD)v3 )
  {
    v4 = (int *)(a2 + 20);
    do
    {
      v5 = *v4++;
      sub_1F6F570(*(_QWORD **)(a1 + 16), v5, *(_QWORD *)(a1 + 24));
    }
    while ( (int *)(a2 + 4LL * (unsigned int)(v3 - 1) + 24) != v4 );
    v3 = *(unsigned int *)(a2 + 4);
  }
  v6 = 4 * v3;
  result = *(_DWORD *)(a2 + 16) * ((*(_WORD *)(a2 + 2) >> 6) & 7u);
  if ( (_DWORD)result )
  {
    v8 = (char *)(a2 + v6 + 20);
    v9 = (char *)(a2 + (unsigned int)(result - 1) + 21 + v6);
    do
    {
      while ( 1 )
      {
        v10 = *(__int64 **)(a1 + 24);
        v11 = *v8;
        result = *((unsigned int *)v10 + 2);
        if ( result + 1 > (unsigned __int64)*((unsigned int *)v10 + 3) )
          break;
        ++v8;
        *(_QWORD *)(*v10 + 8 * result) = v11;
        ++*((_DWORD *)v10 + 2);
        if ( v9 == v8 )
          goto LABEL_10;
      }
      ++v8;
      sub_2237220(*(_QWORD *)(a1 + 24), v10 + 2, result + 1, 8);
      result = *v10;
      *(_QWORD *)(*v10 + 8LL * (unsigned int)(*((_DWORD *)v10 + 2))++) = v11;
    }
    while ( v8 != v9 );
  }
LABEL_10:
  *(_DWORD *)(a1 + 224) = 177;
  return result;
}
