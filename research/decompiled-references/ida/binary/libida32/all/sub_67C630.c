__int64 __fastcall sub_67C630(__int64 a1, int ***a2, unsigned int a3, char a4)
{
  unsigned int v6; // edi
  int **v7; // rax
  __int64 v8; // rsi
  int v9; // r11d
  int v10; // r10d
  int v11; // ebx
  char v12; // dl
  int *v13; // rbp
  unsigned int *v14; // rcx
  unsigned int *v15; // r12
  unsigned int v16; // edx
  int v18; // r12d
  int v19; // ecx
  __int64 v20; // r12
  int *v21; // rbp
  unsigned int **v22; // r13
  unsigned int **v23; // r14
  __int64 v24; // r12
  unsigned int v25; // edx
  unsigned int *v26; // r12
  unsigned int v27; // edx
  unsigned int v28; // r14d
  unsigned int v29; // ebp

  v6 = a3;
  if ( a3 != -1 && (*(_BYTE *)(a1 + 772) & 8) != 0 )
    v6 = a3 & 0xFFFFFFFE;
  v7 = *a2;
  v8 = (__int64)&(*a2)[12 * (_QWORD)a2[1]];
  if ( v7 != (int **)v8 )
  {
    v9 = a4 & 8;
    v10 = a4 & 2;
    v11 = a4 & 0x10;
    while ( 1 )
    {
      v12 = *((_BYTE *)v7 + 89);
      if ( v12 == 1 )
      {
        v13 = v7[1];
        if ( v13 == (int *)((char *)&dword_0 + 1) )
        {
          if ( !v7[8] )
          {
            v18 = **v7;
            if ( v18 != -1 )
            {
              v19 = (*v7)[1];
              if ( v19 != -1 && v19 != v18 )
                goto LABEL_7;
            }
          }
        }
        else if ( !v13 )
        {
          goto LABEL_11;
        }
        if ( (a4 & 5) == 0 || (v14 = (unsigned int *)*v7, v20 = (__int64)&(*v7)[2 * (_QWORD)v13], *v7 == (int *)v20) )
        {
LABEL_11:
          if ( v9 && (v14 = (unsigned int *)v7[3], v26 = &v14[2 * (_QWORD)v7[4]], v26 != v14) )
          {
            while ( 1 )
            {
              v27 = *v14;
              if ( *v14 != -1 && (*(_BYTE *)(a1 + 772) & 8) != 0 )
                v27 &= ~1u;
              if ( v6 == v27 )
                break;
              v14 += 2;
              if ( v26 == v14 )
                goto LABEL_12;
            }
          }
          else
          {
LABEL_12:
            if ( !v11 )
              goto LABEL_7;
            v14 = (unsigned int *)v7[7];
            v15 = &v14[2 * (_QWORD)v7[8]];
            if ( v15 == v14 )
              goto LABEL_7;
            while ( 1 )
            {
              v16 = *v14;
              if ( *v14 != -1 && (*(_BYTE *)(a1 + 772) & 8) != 0 )
                v16 &= ~1u;
              if ( v6 == v16 )
                break;
              v14 += 2;
              if ( v15 == v14 )
                goto LABEL_7;
            }
          }
          return *(_QWORD *)v14;
        }
      }
      else
      {
        if ( !v12 )
          goto LABEL_7;
        v21 = v7[1];
        if ( !v21 )
        {
          if ( v12 != 2 )
            goto LABEL_7;
LABEL_30:
          if ( !v10 )
            goto LABEL_7;
          goto LABEL_31;
        }
        if ( (a4 & 5) == 0 || (v14 = (unsigned int *)*v7, v20 = (__int64)&(*v7)[2 * (_QWORD)v21], *v7 == (int *)v20) )
        {
          if ( v12 != 2 || !v10 )
            goto LABEL_7;
LABEL_31:
          v22 = (unsigned int **)v7[3];
          v23 = &v22[5 * (_QWORD)v7[4]];
          if ( v22 == v23 )
            goto LABEL_7;
          while ( 1 )
          {
            v14 = *v22;
            v24 = (__int64)&(*v22)[2 * (_QWORD)v22[1]];
            if ( (unsigned int *)v24 != *v22 )
              break;
LABEL_44:
            v22 += 5;
            if ( v23 == v22 )
              goto LABEL_7;
          }
          while ( 1 )
          {
            v25 = *v14;
            if ( *v14 != -1 && (*(_BYTE *)(a1 + 772) & 8) != 0 )
              v25 &= ~1u;
            if ( v6 == v25 )
              return *(_QWORD *)v14;
            v14 += 2;
            if ( (unsigned int *)v24 == v14 )
              goto LABEL_44;
          }
        }
      }
      v28 = v6 & 0xFFFFFFFE;
      do
      {
        while ( 1 )
        {
          v29 = v14[1];
          if ( v29 != -1 )
          {
            if ( (*(_BYTE *)(a1 + 772) & 8) == 0 )
            {
              if ( v6 >= *v14 && v6 < v29 )
                return *(_QWORD *)v14;
              goto LABEL_58;
            }
            if ( v28 >= (*v14 & 0xFFFFFFFE) )
              break;
          }
LABEL_58:
          v14 += 2;
          if ( (unsigned int *)v20 == v14 )
            goto LABEL_64;
        }
        if ( v28 < (v29 & 0xFFFFFFFE) )
          return *(_QWORD *)v14;
        v14 += 2;
      }
      while ( (unsigned int *)v20 != v14 );
LABEL_64:
      if ( v12 == 2 )
        goto LABEL_30;
      if ( v12 == 1 )
        goto LABEL_11;
LABEL_7:
      v7 += 12;
      if ( (int **)v8 == v7 )
        return 0;
    }
  }
  return 0;
}

