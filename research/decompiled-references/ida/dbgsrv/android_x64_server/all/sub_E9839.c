/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E9839
// Address: 0x00000000000E9839

//----- (00000000000E9839) ----------------------------------------------------
unsigned int *__fastcall sub_E9839(__int64 a1, unsigned int *a2, __int64 a3)
{
  int v5; // ebp
  char *v6; // r14
  char *v7; // rax
  __int64 v8; // rdx
  char *v9; // r15
  unsigned __int64 v10; // rdx
  bool v11; // zf
  char *v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rdx
  unsigned __int64 v16; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v17[8]; // [rsp+28h] [rbp-40h] BYREF

  v5 = (unsigned __int8)((unsigned __int16)*(_DWORD *)(a1 + 32) >> 3);
  v6 = (char *)sub_E959E((unsigned __int16)*(_DWORD *)(a1 + 32) >> 3, a1);
  v7 = nullptr;
  while ( *a2 )
  {
    v8 = (int)a2[1];
    v9 = v7;
    if ( (_DWORD)v8 )
    {
      if ( (*(_BYTE *)(a1 + 32) & 4) != 0 )
      {
        v9 = (char *)a2 - v8 + 4;
        if ( v9 != v7 )
        {
          v5 = sub_E9763((__int64)a2 - v8 + 4);
          v6 = (char *)sub_E959E(v5, a1);
        }
      }
      if ( v5 )
      {
        v13 = sub_E961A(v5, v6, (char *)a2 + 8, &v16);
        sub_E961A(v5 & 0xF, nullptr, v13, v17);
        v14 = sub_E955D(v5);
        v15 = -1;
        if ( v14 <= 7uLL )
          v15 = (1LL << (8 * (unsigned __int8)v14)) - 1;
        v11 = (v15 & v16) == 0;
      }
      else
      {
        v10 = *((_QWORD *)a2 + 2);
        v16 = *((_QWORD *)a2 + 1);
        v11 = v16 == 0;
        v17[0] = v10;
      }
      if ( !v11 && a3 - v16 < v17[0] )
        return a2;
    }
    a2 = (unsigned int *)((char *)a2 + *a2 + 4);
    v7 = v9;
  }
  return nullptr;
}
