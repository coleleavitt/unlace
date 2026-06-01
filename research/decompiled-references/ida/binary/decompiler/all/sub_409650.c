__int64 __fastcall sub_409650(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r15
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // edx
  int v10; // r8d
  int v11; // r14d
  int v12; // ecx
  int v14; // eax
  int dtype_size; // eax
  int v16; // [rsp+0h] [rbp-38h]

  v4 = 0;
  if ( *(_DWORD *)(a1 + 76) != -1 )
  {
    v7 = *(unsigned __int8 *)(a4 + 12);
    if ( (unsigned __int8)v7 <= 0x12u )
    {
      v8 = 294968;
      v4 = _bittest64(&v8, v7);
    }
  }
  v9 = *(_DWORD *)(a4 + 16);
  v10 = 0;
  v11 = (v9 >> 10) & 1;
  if ( (v9 & 0x2A) == 0 )
  {
    v10 = 1;
    if ( (unsigned int)(*(_DWORD *)(a4 + 8) - 22) <= 2 )
      goto LABEL_8;
    dtype_size = get_dtype_size();
    v9 = *(_DWORD *)(a4 + 16);
    v10 = dtype_size;
  }
  v12 = 0;
  if ( (v9 & 8) == 0 )
  {
LABEL_8:
    v16 = v10;
    v14 = get_dtype_size();
    v10 = v16;
    v12 = v14;
  }
  return sub_4094A0(a1, a2, a3, v12, v10, v4, 1, v11);
}
