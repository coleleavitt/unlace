unsigned __int64 __fastcall sub_69C7B0(__int64 a1, __int64 ***a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v6; // rdi
  __int64 **v7; // rax
  __int64 v8; // r9
  int v9; // r11d
  int v10; // ebp
  int v11; // ebx
  char v12; // dl
  __int64 *v13; // rsi
  unsigned __int64 *v14; // rcx
  unsigned __int64 *v15; // rsi
  unsigned __int64 v16; // rdx
  __int64 v18; // r12
  __int64 v19; // rcx
  __int64 v20; // r12
  __int64 *v21; // r12
  unsigned __int64 **v22; // r12
  unsigned __int64 **v23; // r13
  __int64 v24; // rsi
  unsigned __int64 v25; // rdx
  unsigned __int64 *v26; // rsi
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // rsi

  v6 = a3;
  if ( a3 != -1 && (*(_BYTE *)(a1 + 940) & 8) != 0 )
    v6 = a3 & 0xFFFFFFFFFFFFFFFELL;
  v7 = *a2;
  v8 = (__int64)&(*a2)[13 * (_QWORD)a2[1]];
  if ( *a2 != (__int64 **)v8 )
  {
    v9 = a4 & 2;
    v10 = a4 & 0x10;
    v11 = a4 & 8;
    while ( 1 )
    {
      v12 = *((_BYTE *)v7 + 97);
      if ( v12 == 1 )
      {
        v13 = v7[1];
        if ( v13 == (__int64 *)((char *)&dword_0 + 1) )
        {
          if ( !v7[9] )
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
        if ( (a4 & 5) == 0
          || (v14 = (unsigned __int64 *)*v7, v20 = (__int64)&(*v7)[2 * (_QWORD)v13], *v7 == (__int64 *)v20) )
        {
LABEL_11:
          if ( v11 && (v14 = (unsigned __int64 *)v7[3], v26 = &v14[2 * (_QWORD)v7[4]], v26 != v14) )
          {
            while ( 1 )
            {
              v27 = *v14;
              if ( *v14 != -1 && (*(_BYTE *)(a1 + 940) & 8) != 0 )
                v27 &= ~1uLL;
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
            if ( !v10 )
              goto LABEL_7;
            v14 = (unsigned __int64 *)v7[8];
            v15 = &v14[2 * (_QWORD)v7[9]];
            if ( v15 == v14 )
              goto LABEL_7;
            while ( 1 )
            {
              v16 = *v14;
              if ( *v14 != -1 && (*(_BYTE *)(a1 + 940) & 8) != 0 )
                v16 &= ~1uLL;
              if ( v6 == v16 )
                break;
              v14 += 2;
              if ( v15 == v14 )
                goto LABEL_7;
            }
          }
          return *v14;
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
          if ( !v9 )
            goto LABEL_7;
          goto LABEL_31;
        }
        if ( (a4 & 5) == 0
          || (v14 = (unsigned __int64 *)*v7, v20 = (__int64)&(*v7)[2 * (_QWORD)v21], *v7 == (__int64 *)v20) )
        {
          if ( v12 != 2 || !v9 )
            goto LABEL_7;
LABEL_31:
          v22 = (unsigned __int64 **)v7[3];
          v23 = &v22[7 * (_QWORD)v7[4]];
          if ( v22 == v23 )
            goto LABEL_7;
          while ( 1 )
          {
            v14 = *v22;
            v24 = (__int64)&(*v22)[2 * (_QWORD)v22[1]];
            if ( (unsigned __int64 *)v24 != *v22 )
              break;
LABEL_44:
            v22 += 7;
            if ( v23 == v22 )
              goto LABEL_7;
          }
          while ( 1 )
          {
            v25 = *v14;
            if ( *v14 != -1 && (*(_BYTE *)(a1 + 940) & 8) != 0 )
              v25 &= ~1uLL;
            if ( v6 == v25 )
              return *v14;
            v14 += 2;
            if ( (unsigned __int64 *)v24 == v14 )
              goto LABEL_44;
          }
        }
      }
      v28 = v6 & 0xFFFFFFFFFFFFFFFELL;
      do
      {
        while ( 1 )
        {
          v29 = v14[1];
          if ( v29 != -1 )
          {
            if ( (*(_BYTE *)(a1 + 940) & 8) == 0 )
            {
              if ( v6 >= *v14 && v6 < v29 )
                return *v14;
              goto LABEL_58;
            }
            if ( v28 >= (*v14 & 0xFFFFFFFFFFFFFFFELL) )
              break;
          }
LABEL_58:
          v14 += 2;
          if ( (unsigned __int64 *)v20 == v14 )
            goto LABEL_64;
        }
        if ( v28 < (v29 & 0xFFFFFFFFFFFFFFFELL) )
          return *v14;
        v14 += 2;
      }
      while ( (unsigned __int64 *)v20 != v14 );
LABEL_64:
      if ( v12 == 2 )
        goto LABEL_30;
      if ( v12 == 1 )
        goto LABEL_11;
LABEL_7:
      v7 += 13;
      if ( (__int64 **)v8 == v7 )
        return 0;
    }
  }
  return 0;
}
