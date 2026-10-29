/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44100
// Address: 0x00044100

//----- (00044100) --------------------------------------------------------
unsigned int __cdecl sub_44100(int a1, unsigned int a2)
{
  unsigned int v2; // ecx
  unsigned int i; // esi
  __int64 v4; // rax
  int v5; // ecx
  int v6; // esi
  int v7; // edi
  unsigned __int64 v8; // rax
  int v9; // eax
  int v10; // edx
  int v11; // edi
  int *v13; // [esp+0h] [ebp-1Ch]
  unsigned int v14; // [esp+4h] [ebp-18h]
  unsigned int v15; // [esp+8h] [ebp-14h]

  v2 = *(_DWORD *)(a1 + 24);
  if ( !*(_QWORD *)(a1 + 40) || !v2 || (i = 0, 0xFFFFFFFFFFFFFFFFLL / v2 >= *(_QWORD *)(a1 + 40)) )
  {
    if ( !a2 || !v2 || (i = 0, 0xFFFFFFFF / v2 >= a2) )
    {
      v13 = *(int **)(a1 + 4);
      LODWORD(v4) = qlseek(v13[90], 0, 1);
      v5 = v13[92];
      v6 = v13[91];
      v15 = v4 - v6;
      v14 = (v4 - __PAIR64__(v5, v6)) >> 32;
      LODWORD(v4) = *(_DWORD *)(a1 + 24);
      v7 = v4 * *(_DWORD *)(a1 + 44);
      v8 = *(unsigned int *)(a1 + 40) * (unsigned __int64)(unsigned int)v4;
      HIDWORD(v8) += v7;
      v9 = qlseek(v13[90], v8 + *(_QWORD *)(a1 + 8) + __PAIR64__(v5, v6), 0);
      i = 0;
      if ( (v10 & v9) != 0xFFFFFFFF && a2 )
      {
        v11 = 0;
        for ( i = 0; i < a2; ++i )
        {
          if ( !sub_3F080(a1, (_DWORD *)(v11 + *(_DWORD *)(a1 + 28))) )
            break;
          v11 += 16;
        }
      }
      qlseek(v13[90], *(_QWORD *)(v13 + 91) + __PAIR64__(v14, v15), 0);
    }
  }
  return i;
}
// 4419D: variable 'v4' is possibly undefined
// 441DB: variable 'v10' is possibly undefined
