__int64 __fastcall sub_865600(char a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  int v5; // r14d
  __int64 v7; // rdi
  __int64 v8; // rbp
  int v9; // r12d
  unsigned int v10; // r13d
  unsigned int v11; // ebx
  unsigned int v12; // r9d
  size_t v13; // rdx
  unsigned int v14; // r14d
  unsigned int v15; // edx
  char v16; // cl
  int v17; // edx
  unsigned __int8 v18; // cl

  result = 255;
  v5 = a3 + 7;
  if ( a4 <= 0xFF )
    result = a4;
  v7 = (unsigned int)(a3 + 7) >> 3;
  v8 = a2 + 176;
  v9 = result + 1;
  v10 = result;
  v11 = a3;
  v12 = (unsigned int)(result + 1) >> 3;
  if ( (a1 & 8) == 0 )
  {
    if ( (unsigned int)v7 < v12 )
      goto LABEL_5;
    if ( (unsigned int)result < (unsigned int)a3 )
      return result;
    do
    {
LABEL_16:
      *(_BYTE *)(v8 + (v11 >> 3)) |= 1 << (v11 & 7);
      result = v11++;
    }
    while ( v10 != (_DWORD)result );
    return result;
  }
  if ( (unsigned int)result < (unsigned int)a3 )
  {
    if ( (unsigned int)v7 >= v12 )
      return result;
    goto LABEL_5;
  }
  a3 = (unsigned int)a3;
  do
  {
    v18 = *(_BYTE *)(*(_QWORD *)(a2 + 16) + a3++);
    *(_BYTE *)(v8 + (v18 >> 3)) |= 1 << (v18 & 7);
  }
  while ( (unsigned int)result >= (unsigned int)a3 );
  if ( (unsigned int)v7 >= v12 )
    goto LABEL_16;
LABEL_5:
  v13 = v12 - (unsigned int)v7 - 1 + 1LL;
  if ( v12 < (int)v7 + 1 )
    v13 = 1;
  v14 = v5 & 0xFFFFFFF8;
  memset((void *)(v8 + v7), 255, v13);
  result = v9 & 0xFFFFFFF8;
  if ( v11 < v14 )
  {
    do
    {
      v15 = v11;
      v16 = v11++;
      *(_BYTE *)(v8 + (v15 >> 3)) |= 1 << (v16 & 7);
    }
    while ( v14 != v11 );
  }
  if ( v10 >= (unsigned int)result )
  {
    do
    {
      *(_BYTE *)(v8 + ((unsigned int)result >> 3)) |= 1 << (result & 7);
      v17 = result;
      result = (unsigned int)(result + 1);
    }
    while ( v10 != v17 );
  }
  return result;
}
