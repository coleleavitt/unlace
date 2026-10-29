__int64 __fastcall sub_896160(__int64 **a1, __int64 a2, __int64 *a3, unsigned int *a4)
{
  __int64 *v6; // rdx
  unsigned int v7; // eax
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  unsigned int v15; // edx

  v6 = a1[10];
  if ( v6 == (__int64 *)a2 )
  {
    v8 = a1[2];
    if ( v6 == a3 || a4[1] < *(_DWORD *)a3 )
    {
      v9 = **a1;
      goto LABEL_6;
    }
  }
  else
  {
    v7 = *(_DWORD *)(a2 + 4);
    v8 = (__int64 *)(a2 + 16);
    if ( v7 >= *a4 )
    {
      v12 = a4[1];
      *(_DWORD *)(a2 + 4) = v12;
      if ( a1[10] != a3 && v12 >= *(_DWORD *)a3 )
      {
        v13 = *((_DWORD *)a3 + 1);
        a3 += 2;
        *(_DWORD *)(a2 + 4) = v13;
      }
      goto LABEL_10;
    }
    if ( v6 == a3 || a4[1] < *(_DWORD *)a3 )
    {
      v9 = *(_QWORD *)(a2 + 8) + 4LL * (v7 - *(_DWORD *)a2);
LABEL_6:
      *((_QWORD *)a4 + 1) = v9;
      v10 = (__int64)a1[3]
          - (((char *)a3 - (_BYTE *)memmove(v8, a3, (char *)&a1[2][2 * (_QWORD)a1[3]] - (char *)a3)) >> 4);
      a1[3] = (__int64 *)v10;
      a1[10] = &a1[2][2 * v10];
      sub_895360(a1, (__int64 *)a4);
      return 0;
    }
  }
  v15 = *a4;
  *(_DWORD *)a3 = *a4;
  a3[1] -= 4LL * (a4[1] - v15);
LABEL_10:
  v14 = (__int64)a1[3] - (((char *)a3 - (_BYTE *)memmove(v8, a3, (char *)&a1[2][2 * (_QWORD)a1[3]] - (char *)a3)) >> 4);
  a1[3] = (__int64 *)v14;
  a1[10] = &a1[2][2 * v14];
  return 0;
}

