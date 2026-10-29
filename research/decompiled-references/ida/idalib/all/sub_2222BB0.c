__int64 __fastcall sub_2222BB0(__int64 a1, unsigned __int8 *a2, unsigned int a3)
{
  __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rcx
  unsigned int v12; // r15d
  int v13; // ebx
  int v14; // edx
  int v15; // eax
  __int64 v16; // rbx
  unsigned int v17; // ebx
  unsigned int v18; // [rsp+8h] [rbp-40h]

  v6 = *(unsigned int *)(a1 + 8);
  v7 = *(unsigned int *)(a1 + 12);
  v8 = v6 + (a3 != 0) + ((a3 - (a3 != 0)) >> 2) + 1;
  if ( v8 > v7 )
  {
    sub_2237220(a1, a1 + 16, v8, 4);
    v6 = *(unsigned int *)(a1 + 8);
    v9 = v6 + 1;
    if ( v6 + 1 <= (unsigned __int64)*(unsigned int *)(a1 + 12) )
      goto LABEL_3;
  }
  else
  {
    v9 = v6 + 1;
    if ( v6 + 1 <= v7 )
      goto LABEL_3;
  }
  sub_2237220(a1, a1 + 16, v9, 4);
  v6 = *(unsigned int *)(a1 + 8);
LABEL_3:
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v6) = a3;
  result = *(unsigned int *)(a1 + 8);
  v11 = (unsigned int)(result + 1);
  *(_DWORD *)(a1 + 8) = v11;
  if ( !a3 )
    return result;
  if ( ((unsigned __int8)a2 & 3) == 0 )
  {
    v16 = (4LL * (a3 >> 2)) >> 2;
    if ( v16 + v11 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
    {
      sub_2237220(a1, a1 + 16, v16 + v11, 4);
      v11 = *(unsigned int *)(a1 + 8);
    }
    if ( 4LL * (a3 >> 2) )
    {
      memcpy((void *)(*(_QWORD *)a1 + 4 * v11), a2, 4LL * (a3 >> 2));
      LODWORD(v11) = *(_DWORD *)(a1 + 8);
    }
    v17 = v11 + v16;
    v11 = v17;
    *(_DWORD *)(a1 + 8) = v17;
    result = 4 * (a3 >> 2) + 4 - a3;
    if ( (_DWORD)result != 2 )
      goto LABEL_10;
LABEL_23:
    v14 = 0;
    goto LABEL_13;
  }
  v12 = 4;
  if ( a3 > 3 )
  {
    do
    {
      v13 = (a2[v12 - 3] << 8) | a2[v12 - 4] | (a2[v12 - 2] << 16) | (a2[v12 - 1] << 24);
      if ( v11 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
      {
        sub_2237220(a1, a1 + 16, v11 + 1, 4);
        v11 = *(unsigned int *)(a1 + 8);
      }
      v12 += 4;
      *(_DWORD *)(*(_QWORD *)a1 + 4 * v11) = v13;
      v11 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
      *(_DWORD *)(a1 + 8) = v11;
    }
    while ( a3 >= v12 );
  }
  result = v12 - a3;
  if ( (_DWORD)result == 2 )
    goto LABEL_23;
LABEL_10:
  if ( (_DWORD)result == 3 )
  {
    v15 = 0;
    goto LABEL_14;
  }
  if ( (_DWORD)result != 1 )
    return result;
  v14 = a2[a3 - 3] << 8;
LABEL_13:
  v15 = (v14 | a2[a3 - 2]) << 8;
LABEL_14:
  result = a2[a3 - 1] | (unsigned int)v15;
  if ( v11 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    v18 = result;
    sub_2237220(a1, a1 + 16, v11 + 1, 4);
    v11 = *(unsigned int *)(a1 + 8);
    result = v18;
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v11) = result;
  ++*(_DWORD *)(a1 + 8);
  return result;
}
