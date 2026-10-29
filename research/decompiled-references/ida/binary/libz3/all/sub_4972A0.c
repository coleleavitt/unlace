__int64 __fastcall sub_4972A0(_QWORD *src, _BYTE *a2, char *a3, char *a4, _QWORD *a5)
{
  _DWORD *v7; // rdx
  _DWORD *v8; // rax
  __int16 v9; // cx
  _DWORD *v10; // r9
  _DWORD *v11; // rcx
  _DWORD *v12; // r9
  _DWORD *v13; // rcx
  signed __int64 v14; // rsi
  signed __int64 v15; // r12
  _QWORD *v16; // r8
  _DWORD *v18; // r10
  _DWORD *v19; // rcx
  _DWORD *v20; // rcx

  if ( src != (_QWORD *)a2 )
  {
    while ( 1 )
    {
      if ( a3 == a4 )
        goto LABEL_16;
      v7 = (_DWORD *)*src;
      v8 = *(_DWORD **)a3;
      if ( *src == *(_QWORD *)a3 )
        goto LABEL_3;
      v9 = *((_WORD *)v7 + 2);
      if ( *((_WORD *)v8 + 2) )
        break;
      v10 = *(_DWORD **)(*((_QWORD *)v8 + 2) + 24LL);
      if ( !v10 || *v10 != 5 || v10[1] != 9 || v8[6] != 2 )
        break;
      v18 = *((_DWORD **)v8 + 4);
      v12 = *((_DWORD **)v8 + 5);
      if ( v9 )
        goto LABEL_35;
      v19 = *(_DWORD **)(*((_QWORD *)v7 + 2) + 24LL);
      if ( !v19 )
        goto LABEL_29;
      if ( *v19 != 5 )
        goto LABEL_35;
      if ( v19[1] != 9 )
      {
LABEL_29:
        if ( v7 != v12 )
        {
          v13 = (_DWORD *)*src;
          goto LABEL_13;
        }
LABEL_36:
        if ( !v18 )
          goto LABEL_14;
        goto LABEL_3;
      }
      if ( v7[6] == 2 )
      {
        v13 = *((_DWORD **)v7 + 5);
        if ( v12 != v13 )
          goto LABEL_13;
        if ( !v18 )
          goto LABEL_14;
        v20 = *((_DWORD **)v7 + 4);
        if ( v20 && *v18 < *v20 )
        {
          a3 += 8;
          goto LABEL_15;
        }
LABEL_3:
        ++src;
        *a5++ = v7;
        if ( src == (_QWORD *)a2 )
          goto LABEL_16;
      }
      else
      {
LABEL_35:
        v13 = (_DWORD *)*src;
        if ( v7 == v12 )
          goto LABEL_36;
LABEL_13:
        if ( *v12 >= *v13 )
          goto LABEL_3;
LABEL_14:
        a3 += 8;
LABEL_15:
        *a5++ = v8;
        if ( src == (_QWORD *)a2 )
          goto LABEL_16;
      }
    }
    if ( !v9 && (v11 = *(_DWORD **)(*((_QWORD *)v7 + 2) + 24LL)) != nullptr && *v11 == 5 && v11[1] == 9 )
    {
      v12 = *(_DWORD **)a3;
      v13 = (_DWORD *)*src;
      if ( v7[6] == 2 )
      {
        v13 = *((_DWORD **)v7 + 5);
        if ( v8 == v13 )
          goto LABEL_14;
      }
    }
    else
    {
      v12 = *(_DWORD **)a3;
      v13 = (_DWORD *)*src;
    }
    goto LABEL_13;
  }
LABEL_16:
  v14 = a2 - (_BYTE *)src;
  if ( v14 <= 8 )
  {
    if ( v14 == 8 )
      *a5 = *src;
  }
  else
  {
    a5 = memmove(a5, src, v14);
  }
  v15 = a4 - a3;
  v16 = (_QWORD *)((char *)a5 + v14);
  if ( v15 <= 8 )
  {
    if ( v15 == 8 )
      *v16 = *(_QWORD *)a3;
  }
  else
  {
    v16 = memmove(v16, a3, v15);
  }
  return (__int64)v16 + v15;
}

