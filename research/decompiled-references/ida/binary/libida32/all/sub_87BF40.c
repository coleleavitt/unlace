__int64 __fastcall sub_87BF40(__int64 a1, char *a2, unsigned __int64 a3, int *a4, unsigned int a5)
{
  __int64 v5; // r13
  int v8; // r14d
  __int64 v9; // r12
  int v10; // edx
  int v11; // r14d
  char v12; // cl
  __int64 result; // rax
  _QWORD *v14; // rax
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdx
  int v17; // ecx
  __int64 v18; // rsi
  int v19; // ecx
  int *v20; // rcx
  int *v21; // rax

  v5 = *(_QWORD *)(a1 + 8);
  if ( !a2 )
    return 16;
  v8 = (a5 >> 2) & 1 | 2;
  if ( (a5 & 8) == 0 )
    v8 = (a5 >> 2) & 1;
  if ( (a5 & 0x100) != 0 )
    v8 |= 4u;
  if ( (*(_BYTE *)(a1 + 40) & 0x20) != 0 )
  {
    if ( (a5 & 0x80) != 0 )
    {
      if ( !a4 )
        return 16;
      a3 = 0;
      goto LABEL_10;
    }
    goto LABEL_24;
  }
  if ( !a4 )
  {
    if ( (a5 & 0x80) != 0 )
      return 16;
LABEL_24:
    a3 = 0;
    goto LABEL_21;
  }
  if ( (a5 & 0x80) != 0 )
  {
LABEL_10:
    v9 = *a4;
    v10 = a4[1] - v9;
    a2 += v9;
    goto LABEL_11;
  }
LABEL_21:
  LODWORD(v9) = 0;
  v10 = strlen(a2);
LABEL_11:
  v11 = sub_875840(*(_QWORD *)a1, a2, v10, 0, v8, v5, nullptr);
  if ( v11 < 0 )
  {
    if ( (unsigned int)(v11 + 23) > 0x14 )
    {
      v12 = v11 + 63;
      if ( (unsigned int)v11 < 0xFFFFFFC1 )
        return 1;
      if ( ((1LL << v12) & 0x1A8001000LL) == 0 )
      {
        result = 14;
        if ( ((1LL << v12) & 0x18001) == 0 )
        {
          result = 1;
          if ( v11 == -1 )
            return 17;
        }
        return result;
      }
    }
    return 16;
  }
  v14 = (_QWORD *)sub_876C30(v5);
  v15 = v11;
  if ( a3 < v11 )
  {
    v11 = a3;
    v15 = a3;
  }
  if ( v11 )
  {
    v16 = 0;
    do
    {
      v17 = v9 + *v14;
      if ( *v14 == -1 )
        v17 = -1;
      a4[2 * v16] = v17;
      v18 = v14[1];
      v19 = v9 + v18;
      if ( v18 == -1 )
        v19 = -1;
      v14 += 2;
      a4[2 * v16++ + 1] = v19;
    }
    while ( v16 < v15 );
    if ( !v15 )
      v15 = 1;
  }
  else
  {
    v15 = 0;
  }
  if ( v15 < a3 )
  {
    v20 = &a4[2 * a3];
    v21 = &a4[2 * v15];
    if ( ((8 * (_BYTE)a3 - 8 * (_BYTE)v15) & 8) == 0 || (*(_QWORD *)v21 = -1, v21 += 2, v20 != v21) )
    {
      do
      {
        *(_QWORD *)v21 = -1;
        v21 += 4;
        *((_QWORD *)v21 - 1) = -1;
      }
      while ( v20 != v21 );
    }
  }
  return 0;
}

