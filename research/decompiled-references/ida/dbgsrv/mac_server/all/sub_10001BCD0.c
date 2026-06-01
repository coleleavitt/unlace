/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001BCD0
// Address: 0x000000010001BCD0

//----- (000000010001BCD0) ----------------------------------------------------
__int64 __fastcall sub_10001BCD0(__int64 a1, _DWORD *a2)
{
  int v2; // r12d
  char **v3; // r15
  unsigned int v4; // ebx
  char *v5; // rax
  char *v6; // rcx
  __int64 v7; // rcx
  __int128 v8; // xmm0
  char **v9; // r15
  unsigned int v10; // ebx
  char *v11; // rax
  char *v12; // rcx
  __int64 v13; // rcx

  switch ( *a2 )
  {
    case '$':
      v2 = 1;
      goto LABEL_6;
    case '%':
      v2 = 2;
      goto LABEL_6;
    case '/':
      v2 = 3;
      goto LABEL_6;
    case '0':
      v2 = 4;
LABEL_6:
      v3 = *(char ***)(a1 + 16);
      v4 = a2[3];
      v5 = *v3;
      v6 = v3[1];
      if ( v3[2] < v6 + 1 )
      {
        v5 = (char *)qvector_reserve(*(_QWORD *)(a1 + 16), v5, (unsigned __int64)(v6 + 1), 0x10u);
        *v3 = v5;
        v6 = v3[1];
      }
      v7 = 16LL * (_QWORD)v6;
      v8 = 0;
      *(_OWORD *)&v5[v7] = 0;
      ++v3[1];
      *(_DWORD *)&v5[v7] = v2;
      *(_DWORD *)&v5[v7 + 4] = HIWORD(v4);
      *(_DWORD *)&v5[v7 + 8] = BYTE1(v4);
      *(_DWORD *)&v5[v7 + 12] = (unsigned __int8)v4;
      v9 = *(char ***)(a1 + 16);
      v10 = a2[2];
      v11 = *v9;
      v12 = v9[1];
      if ( v9[2] < v12 + 1 )
      {
        v11 = (char *)qvector_reserve(*(_QWORD *)(a1 + 16), v11, (unsigned __int64)(v12 + 1), 0x10u);
        v8 = 0;
        *v9 = v11;
        v12 = v9[1];
      }
      v13 = 16LL * (_QWORD)v12;
      *(_OWORD *)&v11[v13] = v8;
      ++v9[1];
      *(_DWORD *)&v11[v13] = v2;
      *(_DWORD *)&v11[v13 + 4] = HIWORD(v10);
      *(_DWORD *)&v11[v13 + 8] = BYTE1(v10);
      *(_DWORD *)&v11[v13 + 12] = (unsigned __int8)v10;
      *(_BYTE *)(a1 + 24) = 1;
      break;
    default:
      return 0;
  }
  return 0;
}
