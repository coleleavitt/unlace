__int64 __fastcall sub_2236950(__int64 a1, void *a2, int a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v7; // rdx
  int v8; // ecx
  size_t v9; // rdx
  int v10; // edx
  int v11; // edx
  __int64 v12; // [rsp+8h] [rbp-20h]

  result = *(unsigned __int8 *)(a5 + 20);
  if ( (_BYTE)result )
  {
    v7 = *(unsigned int *)(a5 + 12);
    *(_QWORD *)a1 = a2;
    v8 = v7;
    v9 = 8 * v7;
    if ( v9 )
    {
      v12 = a5;
      memmove(a2, *(const void **)a5, v9);
      a5 = v12;
      v8 = *(_DWORD *)(v12 + 12);
      result = *(unsigned __int8 *)(v12 + 20);
    }
  }
  else
  {
    *(_QWORD *)a1 = *(_QWORD *)a5;
    *(_QWORD *)a5 = a4;
    v8 = *(_DWORD *)(a5 + 12);
  }
  v10 = *(_DWORD *)(a5 + 8);
  *(_DWORD *)(a1 + 12) = v8;
  *(_DWORD *)(a1 + 8) = v10;
  v11 = *(_DWORD *)(a5 + 16);
  *(_BYTE *)(a1 + 20) = result;
  *(_DWORD *)(a1 + 16) = v11;
  *(_DWORD *)(a5 + 8) = a3;
  *(_QWORD *)(a5 + 12) = 0;
  *(_BYTE *)(a5 + 20) = 1;
  return result;
}
