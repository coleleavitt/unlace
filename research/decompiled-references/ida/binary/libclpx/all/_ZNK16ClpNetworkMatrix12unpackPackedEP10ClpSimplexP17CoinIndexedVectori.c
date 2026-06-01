__int64 __fastcall ClpNetworkMatrix::unpackPacked(ClpNetworkMatrix *this, ClpSimplex *a2, int **a3, int a4)
{
  __int64 v4; // rax
  int *v5; // r8
  __int64 v6; // rcx
  int *v7; // r9
  int v8; // esi
  __int64 result; // rax
  int v10; // ecx
  int v11; // r10d
  __int64 v12; // rdi
  __int64 v13; // rsi

  v4 = *((_QWORD *)this + 13);
  v5 = *a3;
  v6 = 2 * a4;
  v7 = a3[1];
  v8 = *(_DWORD *)(v4 + 4 * v6);
  result = *(unsigned int *)(v4 + 4 * v6 + 4);
  if ( v8 < 0 )
  {
    v13 = 0;
    v12 = 0;
    v11 = 0;
    v10 = 1;
    if ( (int)result >= 0 )
      goto LABEL_3;
  }
  else
  {
    v10 = 2;
    v11 = 1;
    *(_QWORD *)v7 = 0xBFF0000000000000LL;
    *v5 = v8;
    v12 = 2;
    v13 = 1;
    if ( (int)result >= 0 )
    {
LABEL_3:
      *(_QWORD *)&v7[v12] = 0x3FF0000000000000LL;
      v5[v13] = result;
      *((_DWORD *)a3 + 4) = v10;
      *((_BYTE *)a3 + 28) = 1;
      return result;
    }
  }
  *((_BYTE *)a3 + 28) = 1;
  *((_DWORD *)a3 + 4) = v11;
  return result;
}

