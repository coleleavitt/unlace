/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C53B0
// Address: 0x080C53B0

//----- (080C53B0) --------------------------------------------------------
int __cdecl sub_80C53B0(char **a1, char *a2, int a3)
{
  int result; // eax
  int v5; // ebp
  char *v6; // eax
  __int64 v7; // xmm0_8
  char *v8; // ecx
  int v9; // edx
  char *v10; // eax
  char v11; // [esp+1h] [ebp-31h]
  int v12; // [esp+2h] [ebp-30h]
  __int64 v13; // [esp+6h] [ebp-2Ch]
  int v14; // [esp+Eh] [ebp-24h]

  result = a3;
  if ( a3 )
  {
    result = (int)a1[1];
    v5 = 0;
    do
    {
      v7 = *(_QWORD *)(a2 + 4);
      v8 = *a1;
      v11 = *a2;
      v12 = *((_DWORD *)a2 + 3);
      v9 = *((_DWORD *)a2 + 4);
      if ( (unsigned int)a1[2] < result + 1 )
      {
        v14 = *((_DWORD *)a2 + 4);
        v13 = v7;
        v10 = (char *)sub_80CF920((int)a1, v8, result + 1, 0x14u);
        v9 = v14;
        v7 = v13;
        *a1 = v10;
        v8 = v10;
        result = (int)a1[1];
      }
      ++v5;
      a2 += 20;
      v6 = &v8[20 * result];
      *((_DWORD *)v6 + 3) = v12;
      *v6 = v11;
      *((_DWORD *)v6 + 4) = v9;
      *(_QWORD *)(v6 + 4) = v7;
      result = (int)(a1[1] + 1);
      a1[1] = (char *)result;
    }
    while ( a3 != v5 );
  }
  return result;
}
