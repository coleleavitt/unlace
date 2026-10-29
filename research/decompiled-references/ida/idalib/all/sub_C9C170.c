__int64 __fastcall sub_C9C170(__int64 a1, char **a2, char *a3, int *a4)
{
  __int64 result; // rax
  char *v5; // rdi
  int v6; // r8d
  int v7; // edx
  char *v8; // rdi
  char *v9; // rcx
  int v10; // r9d

  result = a1;
  v5 = *a2;
  v6 = **a2;
  if ( **a2 == 42 )
  {
    v7 = *a4;
    v8 = v5 + 1;
    *(_WORD *)(result + 20) &= 0xFEu;
    *a2 = v8;
    *(_QWORD *)result = v8;
    *a4 = v7 + 1;
    *(_QWORD *)(result + 8) = 0x200000000LL;
    *(_DWORD *)(result + 16) = v7;
  }
  else
  {
    if ( v5 != a3 && (unsigned __int8)(v6 - 48) <= 9u )
    {
      v9 = *a2;
      v10 = 0;
      while ( 1 )
      {
        ++v9;
        v10 = v6 + 10 * v10 - 48;
        if ( a3 == v9 )
          break;
        v6 = *v9;
        if ( (unsigned __int8)(*v9 - 48) > 9u )
        {
          *(_QWORD *)result = v5;
          *(_DWORD *)(result + 16) = v10;
          *(_DWORD *)(result + 8) = (_DWORD)v9 - (_DWORD)v5;
          *(_DWORD *)(result + 12) = 1;
          *(_WORD *)(result + 20) &= 0xFEu;
          *a2 = v9;
          return result;
        }
      }
      v5 = a3;
    }
    *(_QWORD *)result = 0;
    *(_QWORD *)(result + 8) = 0;
    *(_DWORD *)(result + 16) = 0;
    *(_WORD *)(result + 20) &= 0xFEu;
    *a2 = v5;
  }
  return result;
}
