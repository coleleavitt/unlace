__int64 __fastcall sub_9F1420(unsigned int **a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // r12
  int v5; // edx
  __int64 result; // rax
  int v7; // r15d
  __int64 v8; // rbp
  int v9; // ebx
  __int64 v10; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+8h] [rbp-40h]

  v4 = (unsigned int *)(a1 + 2);
  *a1 = (unsigned int *)(a1 + 2);
  v11 = a3;
  v5 = *(_DWORD *)(a4 + 8);
  v10 = a2;
  a1[1] = (unsigned int *)0x100000000LL;
  if ( !v5 )
  {
    *((_BYTE *)a1 + 196) = 0;
    goto LABEL_3;
  }
  sub_9F0D60((__int64 *)a1, (__int64 *)a4);
  v7 = *((_DWORD *)a1 + 2);
  *((_BYTE *)a1 + 196) = 0;
  if ( !v7 )
  {
    v4 = *a1;
    goto LABEL_3;
  }
  v4 = *a1;
  if ( !((unsigned int)v10 | HIDWORD(v11) & 0x7FFFFFFF | ((unsigned int)v11 | HIDWORD(v10)) & 0x7FFFFFFF) )
  {
LABEL_3:
    result = *v4;
    if ( !(_DWORD)result && (v4[1] & 0x7FFFFFFF) == 0 && (v4[2] & 0x7FFFFFFF) == 0 && (v4[3] & 0x7FFFFFFF) == 0 )
    {
      *((_DWORD *)a1 + 48) = 0;
      *((_BYTE *)a1 + 196) = 1;
    }
    return result;
  }
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    result = sub_9E60E0(&v4[v8], (unsigned int *)&v10);
    if ( !(_BYTE)result )
      break;
    ++v9;
    v8 += 44;
    if ( v7 == v9 )
      goto LABEL_3;
  }
  *((_DWORD *)a1 + 48) = v9;
  *((_BYTE *)a1 + 196) = 1;
  return result;
}

