unsigned int *__fastcall sub_1B02B30(unsigned int *a1, __int64 *a2)
{
  __int64 v2; // r8
  unsigned int *v3; // r10
  int v4; // edx
  unsigned int v5; // ecx
  unsigned int *v6; // rax
  __int64 v7; // r11
  unsigned int *result; // rax
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  unsigned int *v14; // rax
  __int64 v15; // rdx
  int v16; // ebx
  unsigned int *v17; // rbp
  unsigned int v18; // esi
  unsigned int *v19; // [rsp+8h] [rbp-20h] BYREF

  v2 = *(_BYTE *)a1 & 1;
  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v3 = a1 + 2;
    v4 = 3;
  }
  else
  {
    v9 = a1[4];
    v3 = *((unsigned int **)a1 + 1);
    if ( !v9 )
    {
      v19 = nullptr;
      v10 = *a1;
      v11 = (*a1 >> 1) + 1;
LABEL_8:
      v12 = 3 * v9;
      goto LABEL_9;
    }
    v4 = v9 - 1;
  }
  v5 = v4 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
  v6 = &v3[4 * v5];
  v7 = *(_QWORD *)v6;
  if ( *a2 == *(_QWORD *)v6 )
    return v6 + 2;
  v16 = 1;
  v17 = nullptr;
  if ( v7 != -4096 )
  {
    while ( 1 )
    {
      if ( !v17 && v7 == -8192 )
        v17 = v6;
      v5 = v4 & (v16 + v5);
      v6 = &v3[4 * v5];
      v7 = *(_QWORD *)v6;
      if ( *a2 == *(_QWORD *)v6 )
        return v6 + 2;
      if ( v7 == -4096 )
      {
        if ( v17 )
          v6 = v17;
        break;
      }
      ++v16;
    }
  }
  v10 = *a1;
  v19 = v6;
  v12 = 12;
  v9 = 4;
  v11 = ((unsigned int)v10 >> 1) + 1;
  if ( !(_BYTE)v2 )
  {
    v9 = a1[4];
    goto LABEL_8;
  }
LABEL_9:
  if ( 4 * (int)v11 >= (unsigned int)v12 )
  {
    v18 = 2 * v9;
LABEL_27:
    sub_1B02620((__int64)a1, v18, v10, v11, v2, v12);
    sub_1AF76D0((__int64)a1, a2, &v19);
    LODWORD(v10) = *a1;
    goto LABEL_11;
  }
  v11 = v9 - a1[1] - (unsigned int)v11;
  if ( (unsigned int)v11 <= v9 >> 3 )
  {
    v18 = v9;
    goto LABEL_27;
  }
LABEL_11:
  *a1 = (2 * ((unsigned int)v10 >> 1) + 2) | v10 & 1;
  v14 = v19;
  if ( *(_QWORD *)v19 != -4096 )
    --a1[1];
  v15 = *a2;
  *((_QWORD *)v14 + 1) = 0;
  result = v14 + 2;
  *((_QWORD *)result - 1) = v15;
  return result;
}
