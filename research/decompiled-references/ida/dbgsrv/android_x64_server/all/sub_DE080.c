/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DE080
// Address: 0x00000000000DE080

//----- (00000000000DE080) ----------------------------------------------------
char *__fastcall sub_DE080(char **a1, __int64 a2, __int64 a3)
{
  char *v4; // r12
  char *v5; // rcx
  char *v6; // rbx
  char *v7; // rbx
  char *v8; // rdx
  unsigned int v9; // eax
  char *v10; // rbx
  char *result; // rax
  char *v12; // rbp
  __int64 v13; // rcx
  char **v14; // rax
  _QWORD *v15; // rdx

  v4 = *a1;
  v5 = a1[1];
  v6 = *a1;
  if ( *a1 != v5 )
  {
    v6 = *a1;
    if ( *v4 == 110 )
    {
      v6 = v4 + 1;
      *a1 = v4 + 1;
    }
  }
  if ( v6 == v5 || (unsigned int)(*v6 - 48) > 9 )
    return nullptr;
  v7 = v6 + 1;
  while ( 1 )
  {
    v8 = v7;
    *a1 = v7;
    if ( v5 == v7 )
      break;
    v9 = *v7++ - 48;
    if ( v9 >= 0xA )
    {
      v10 = v8;
      goto LABEL_11;
    }
  }
  v10 = v5;
LABEL_11:
  result = nullptr;
  if ( v4 != v10 && v5 != v8 )
  {
    if ( *v8 == 69 )
    {
      *a1 = v8 + 1;
      v12 = a1[604];
      v13 = *((_QWORD *)v12 + 1);
      if ( (unsigned __int64)(v13 + 48) < 0xFF0 )
      {
        v15 = v12 + 8;
      }
      else
      {
        v14 = (char **)operator new[](0x1000u);
        *v14 = v12;
        v14[1] = nullptr;
        a1[604] = (char *)v14;
        v13 = 0;
        v15 = v14 + 1;
        v12 = (char *)v14;
      }
      *v15 = v13 + 48;
      result = &v12[v13 + 16];
      *(_DWORD *)&v12[v13 + 24] = 16843050;
      *(_QWORD *)result = off_151B08;
      *(_QWORD *)&v12[v13 + 32] = a2;
      *(_QWORD *)&v12[v13 + 40] = a3;
      *(_QWORD *)&v12[v13 + 48] = v4;
      *(_QWORD *)&v12[v13 + 56] = v10;
      return result;
    }
    return nullptr;
  }
  return result;
}
// 151B08: using guessed type __int64 (__fastcall *off_151B08[7])();
