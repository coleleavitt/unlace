/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E9F20
// Address: 0x00000000000E9F20

//----- (00000000000E9F20) ----------------------------------------------------
unsigned __int64 *__fastcall sub_E9F20(__int64 a1, __int64 *a2, char *a3)
{
  int v4; // ebp
  char *v5; // r15
  unsigned __int64 *result; // rax
  char *v7; // rdx
  __int64 v8; // rax
  char *v9; // r12
  bool v10; // zf
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15[8]; // [rsp+18h] [rbp-40h] BYREF

  v4 = (unsigned __int8)((unsigned __int16)*(_DWORD *)(a1 + 32) >> 3);
  v5 = (char *)sub_E959E((unsigned __int16)*(_DWORD *)(a1 + 32) >> 3, a1);
  result = v15;
  v7 = nullptr;
  while ( *(_DWORD *)a3 )
  {
    v8 = *((int *)a3 + 1);
    v9 = v7;
    if ( (_DWORD)v8 )
    {
      if ( (*(_BYTE *)(a1 + 32) & 4) != 0 )
      {
        v9 = &a3[-v8 + 4];
        if ( v9 != v7 )
        {
          v4 = sub_E9763((__int64)&a3[-v8 + 4]);
          v5 = (char *)sub_E959E(v4, a1);
        }
      }
      if ( v4 )
      {
        sub_E961A(v4, v5, a3 + 8, v15);
        v11 = sub_E955D(v4);
        v12 = -1;
        if ( v11 <= 7uLL )
          v12 = (1LL << (8 * (unsigned __int8)v11)) - 1;
        v10 = (v12 & v15[0]) == 0;
      }
      else
      {
        v10 = *((_QWORD *)a3 + 1) == 0;
      }
      if ( !v10 )
      {
        v13 = *a2;
        if ( *a2 )
        {
          v14 = *(_QWORD *)(v13 + 8);
          *(_QWORD *)(v13 + 8) = v14 + 1;
          *(_QWORD *)(v13 + 8 * v14 + 16) = a3;
        }
      }
    }
    result = (unsigned __int64 *)*(unsigned int *)a3;
    v7 = v9;
    a3 = (char *)result + (_QWORD)a3 + 4;
  }
  return result;
}
