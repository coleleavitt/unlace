char **__fastcall sub_2333C0(char **a1, _QWORD *a2)
{
  _QWORD *v2; // rcx
  char **result; // rax
  char *v4; // rsi
  char *v5; // rdx
  char *v6; // rdx
  unsigned int v7; // r8d
  unsigned __int64 v8; // rdx
  char *v9; // rcx
  __int64 v10; // r10
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  unsigned int v13; // ecx
  __int64 v14; // r9

  v2 = a1 + 2;
  result = (char **)a2;
  v4 = (char *)(a2 + 2);
  *a1 = (char *)(a1 + 2);
  v5 = *((char **)v4 - 2);
  if ( v4 != v5 )
  {
    *a1 = v5;
    a1[2] = result[2];
LABEL_3:
    v6 = result[1];
    goto LABEL_4;
  }
  v6 = result[1];
  v7 = (_DWORD)v6 + 1;
  if ( (unsigned int)((_DWORD)v6 + 1) >= 8 )
  {
    a1[2] = result[2];
    *(_QWORD *)((char *)v2 + v7 - 8) = *(_QWORD *)&v4[v7 - 8];
    v8 = (unsigned __int64)(a1 + 3) & 0xFFFFFFFFFFFFFFF8LL;
    v9 = (char *)v2 - v8;
    v10 = v4 - v9;
    v11 = ((_DWORD)v9 + v7) & 0xFFFFFFF8;
    if ( v11 >= 8 )
    {
      v12 = v11 & 0xFFFFFFF8;
      v13 = 0;
      do
      {
        v14 = v13;
        v13 += 8;
        *(_QWORD *)(v8 + v14) = *(_QWORD *)(v10 + v14);
      }
      while ( v13 < v12 );
    }
    goto LABEL_3;
  }
  if ( (v7 & 4) != 0 )
  {
    *((_DWORD *)a1 + 4) = *((_DWORD *)result + 4);
    *(_DWORD *)((char *)v2 + v7 - 4) = *(_DWORD *)&v4[v7 - 4];
    v6 = result[1];
    goto LABEL_4;
  }
  if ( (_DWORD)v6 != -1 )
  {
    *((_BYTE *)a1 + 16) = *((_BYTE *)result + 16);
    if ( (v7 & 2) != 0 )
    {
      *(_WORD *)((char *)v2 + v7 - 2) = *(_WORD *)&v4[v7 - 2];
      v6 = result[1];
      goto LABEL_4;
    }
    goto LABEL_3;
  }
LABEL_4:
  a1[1] = v6;
  *result = v4;
  result[1] = nullptr;
  *((_BYTE *)result + 16) = 0;
  return result;
}

