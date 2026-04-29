unsigned __int64 __fastcall sub_3E1F00(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v3; // r8
  _QWORD *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rdi
  unsigned __int8 v8; // bl
  __int64 v9; // r10
  __int64 v10; // rdx
  _QWORD *v11; // rsi
  _QWORD *v12; // rdi
  bool v13; // cf
  unsigned __int8 v14; // al
  _QWORD *v15; // rdx
  __int64 v16; // rdi
  unsigned __int64 v17; // r10
  _QWORD *v18; // rax
  __int64 v19; // rdi
  unsigned __int64 v20; // r11
  unsigned __int8 v21; // al
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  _QWORD *v24; // rax
  __int64 v25; // rdx
  _QWORD *v27; // rsi

  v3 = (unsigned __int64)a1;
  if ( a1 != a2 )
  {
    v5 = a1;
    v6 = 0;
    do
    {
LABEL_3:
      while ( (*v5 & 2) != 0 )
      {
LABEL_6:
        ++v6;
        if ( a2 == v5 )
          goto LABEL_7;
      }
      v7 = (_QWORD *)v5[2];
      if ( (*(_BYTE *)v7 & 2) == 0 )
      {
        do
        {
          v5 = v7;
          v7 = (_QWORD *)v7[1];
        }
        while ( (*(_BYTE *)v7 & 2) == 0 );
        goto LABEL_6;
      }
      v15 = (_QWORD *)(*v5 & 0xFFFFFFFFFFFFFFFCLL);
      v16 = *v15;
      if ( (*v15 & 2) == 0 )
      {
        while ( (_QWORD *)v15[2] == v5 )
        {
          v5 = v15;
          v17 = v16 & 0xFFFFFFFFFFFFFFFCLL;
          v16 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v16 & 2) != 0 )
          {
            v5 = (_QWORD *)v17;
            ++v6;
            if ( a2 != (_QWORD *)v17 )
              goto LABEL_3;
            goto LABEL_7;
          }
          v15 = (_QWORD *)v17;
        }
      }
      v5 = v15;
      ++v6;
    }
    while ( a2 != v15 );
LABEL_7:
    if ( v6 > 0 )
    {
      v8 = *(_BYTE *)(a3 + 8);
      while ( 1 )
      {
        v9 = v6 >> 1;
        if ( !(v6 >> 1) )
          break;
        v10 = v9 - 1;
        v11 = (_QWORD *)v3;
        do
        {
LABEL_11:
          while ( (*v11 & 2) != 0 )
          {
LABEL_14:
            v13 = v10-- == 0;
            if ( v13 )
              goto LABEL_15;
          }
          v12 = (_QWORD *)v11[2];
          if ( (*(_BYTE *)v12 & 2) == 0 )
          {
            do
            {
              v11 = v12;
              v12 = (_QWORD *)v12[1];
            }
            while ( (*(_BYTE *)v12 & 2) == 0 );
            goto LABEL_14;
          }
          v18 = (_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFFCLL);
          v19 = *v18;
          if ( (*v18 & 2) == 0 )
          {
            while ( (_QWORD *)v18[2] == v11 )
            {
              v11 = v18;
              v20 = v19 & 0xFFFFFFFFFFFFFFFCLL;
              v19 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v19 & 2) != 0 )
              {
                v11 = (_QWORD *)v20;
                v13 = v10-- == 0;
                if ( !v13 )
                  goto LABEL_11;
                goto LABEL_15;
              }
              v18 = (_QWORD *)v20;
            }
          }
          v11 = v18;
          v13 = v10-- == 0;
        }
        while ( !v13 );
LABEL_15:
        v14 = *((_BYTE *)v11 + 32);
        if ( v14 < v8 || v8 >= v14 && v11[3] < *(_QWORD *)a3 )
        {
          v22 = *v11;
          v3 = (unsigned __int64)v11;
          if ( (*v11 & 2) == 0 )
            goto LABEL_39;
LABEL_42:
          v6 = v6 - 1 - v9;
          if ( v6 <= 0 )
            return v3;
        }
        else
        {
          v6 >>= 1;
        }
      }
      v21 = *(_BYTE *)(v3 + 32);
      if ( v21 >= v8 && (v8 < v21 || *(_QWORD *)a3 <= *(_QWORD *)(v3 + 24)) )
        return v3;
      v22 = *(_QWORD *)v3;
      if ( (*(_QWORD *)v3 & 2) != 0 )
        return v3;
LABEL_39:
      v23 = *(_QWORD *)(v3 + 16);
      if ( (*(_BYTE *)v23 & 2) != 0 )
      {
        v24 = (_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCLL);
        v25 = *v24;
        if ( (*v24 & 2) != 0 || v3 != v24[2] )
        {
LABEL_41:
          v3 = (unsigned __int64)v24;
        }
        else
        {
          while ( 1 )
          {
            v3 = v25 & 0xFFFFFFFFFFFFFFFCLL;
            v25 = *(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v25 & 2) != 0 )
              break;
            v27 = v24;
            v24 = (_QWORD *)v3;
            if ( v27 != *(_QWORD **)(v3 + 16) )
              goto LABEL_41;
          }
        }
      }
      else
      {
        do
        {
          v3 = v23;
          v23 = *(_QWORD *)(v23 + 8);
        }
        while ( (*(_BYTE *)v23 & 2) == 0 );
      }
      goto LABEL_42;
    }
  }
  return v3;
}
