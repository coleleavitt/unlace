unsigned __int64 __fastcall sub_B92690(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  bool v3; // zf
  __int64 v4; // r8
  unsigned __int64 *v5; // r9
  unsigned __int64 result; // rax
  __int64 v7; // rdx
  unsigned __int64 i; // rdx
  __int64 v9; // r10
  int v10; // edi
  unsigned int v11; // edx
  unsigned __int64 *v12; // rcx
  unsigned __int64 v13; // r11
  _BYTE *v14; // rdx
  unsigned __int64 v15; // r10
  __int64 v16; // rcx
  int v17; // edx
  int v18; // ebx
  unsigned __int64 *v19; // rbp
  int v20; // edx

  v3 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  v4 = a1;
  v5 = a3;
  if ( v3 )
  {
    result = *(_QWORD *)(a1 + 8);
    v7 = 16LL * *(unsigned int *)(a1 + 16);
  }
  else
  {
    result = a1 + 8;
    v7 = 64;
  }
  for ( i = result + v7; result != i; result += 16LL )
    *(_QWORD *)result = -1;
  if ( a2 == v5 )
    return result;
  while ( 1 )
  {
    result = *a2;
    if ( *a2 + 2 > 1 )
      break;
    a2 += 2;
    if ( v5 == a2 )
      return result;
  }
  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v9 = a1 + 8;
    v10 = 3;
  }
  else
  {
    v20 = *(_DWORD *)(a1 + 16);
    v9 = *(_QWORD *)(a1 + 8);
    if ( !v20 )
    {
      *(_QWORD *)&dword_0 = *a2;
      BUG();
    }
    v10 = v20 - 1;
  }
LABEL_13:
  v11 = v10 & (((unsigned int)result >> 9) ^ ((unsigned int)result >> 4));
  v12 = (unsigned __int64 *)(v9 + 16LL * v11);
  v13 = *v12;
  if ( result != *v12 )
  {
    v18 = 1;
    v19 = nullptr;
    if ( v13 != -1 )
    {
      while ( 1 )
      {
        if ( !v19 && v13 == -2 )
          v19 = v12;
        v11 = v10 & (v18 + v11);
        v12 = (unsigned __int64 *)(v9 + 16LL * v11);
        v13 = *v12;
        if ( result == *v12 )
          break;
        if ( v13 == -1 )
        {
          if ( v19 )
            v12 = v19;
          break;
        }
        ++v18;
      }
    }
  }
  *v12 = *a2;
  v12[1] = a2[1];
  a2[1] &= 1u;
  *(_DWORD *)v4 = (2 * (*(_DWORD *)v4 >> 1) + 2) | *(_DWORD *)v4 & 1;
  result = a2[1];
  v14 = (_BYTE *)(result & 0xFFFFFFFFFFFFFFF8LL);
  if ( (result & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    goto LABEL_21;
  v15 = result & 0xFFFFFFFFFFFFFFFCLL;
  if ( (result & 4) != 0 )
  {
    result = *(_QWORD *)v14;
    if ( (*(_BYTE *)(*(_QWORD *)v14 + 28LL) & 0x7F) == 0 )
      goto LABEL_17;
LABEL_29:
    result = sub_B8C2C0(result);
    goto LABEL_17;
  }
  result = a2[1] & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v14[28] & 0x7F) != 0 )
    goto LABEL_29;
LABEL_17:
  v16 = *(_QWORD *)(result + 88);
  do
  {
    if ( (v15 & 4) == 0 )
      break;
    result = v15 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v15 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      break;
    v15 = *(_QWORD *)(result + 8);
    *(_QWORD *)(result + 8) = *(_QWORD *)(v16 + 17496) | 4LL;
    *(_QWORD *)(v16 + 17496) = result;
  }
  while ( v15 );
LABEL_21:
  while ( 1 )
  {
    a2 += 2;
    if ( v5 == a2 )
      return result;
    result = *a2;
    if ( *a2 + 2 > 1 )
    {
      if ( (*(_BYTE *)v4 & 1) != 0 )
      {
        v9 = v4 + 8;
        v10 = 3;
      }
      else
      {
        v17 = *(_DWORD *)(v4 + 16);
        v9 = *(_QWORD *)(v4 + 8);
        if ( !v17 )
        {
          *(_QWORD *)&dword_0 = *a2;
          BUG();
        }
        v10 = v17 - 1;
      }
      goto LABEL_13;
    }
  }
}
