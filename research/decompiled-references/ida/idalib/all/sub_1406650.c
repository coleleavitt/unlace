__int64 __fastcall sub_1406650(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r12
  _BYTE *v5; // rbx
  __int64 v6; // rdx
  _BYTE *v7; // rax
  _BYTE *v8; // rsi
  _BYTE *v9; // rdi
  __int64 v10; // rdx
  _BYTE *v11; // rax
  _BYTE *v12; // rax
  _BYTE *v13; // rdi
  size_t v14; // rdx
  size_t v15; // rdx

  v4 = 0x8E38E38E38E38E39LL * ((a2 - a1) >> 3);
  if ( a2 - a1 > 0 )
  {
    v5 = (_BYTE *)(a2 - 56);
    do
    {
      v12 = *((_BYTE **)v5 - 2);
      a3 -= 72;
      v13 = *(_BYTE **)a3;
      if ( v12 == v5 )
      {
        v14 = *((_QWORD *)v5 - 1);
        if ( v14 )
        {
          if ( v14 == 1 )
            *v13 = *v5;
          else
            memcpy(v13, v5, v14);
          v13 = *(_BYTE **)a3;
          v14 = *((_QWORD *)v5 - 1);
        }
        *(_QWORD *)(a3 + 8) = v14;
        v13[v14] = 0;
      }
      else
      {
        if ( v13 == (_BYTE *)(a3 + 16) )
        {
          *(_QWORD *)a3 = v12;
          *(_QWORD *)(a3 + 8) = *((_QWORD *)v5 - 1);
          *(_QWORD *)(a3 + 16) = *(_QWORD *)v5;
        }
        else
        {
          *(_QWORD *)a3 = v12;
          v6 = *(_QWORD *)(a3 + 16);
          *(_QWORD *)(a3 + 8) = *((_QWORD *)v5 - 1);
          *(_QWORD *)(a3 + 16) = *(_QWORD *)v5;
          if ( v13 )
          {
            *((_QWORD *)v5 - 2) = v13;
            *(_QWORD *)v5 = v6;
            goto LABEL_6;
          }
        }
        *((_QWORD *)v5 - 2) = v5;
      }
LABEL_6:
      v7 = *((_BYTE **)v5 - 2);
      *((_QWORD *)v5 - 1) = 0;
      *v7 = 0;
      v8 = *((_BYTE **)v5 + 2);
      v9 = *(_BYTE **)(a3 + 32);
      if ( v8 == v5 + 32 )
      {
        v15 = *((_QWORD *)v5 + 3);
        if ( v15 )
        {
          if ( v15 == 1 )
            *v9 = v5[32];
          else
            memcpy(v9, v8, v15);
          v9 = *(_BYTE **)(a3 + 32);
          v15 = *((_QWORD *)v5 + 3);
        }
        *(_QWORD *)(a3 + 40) = v15;
        v9[v15] = 0;
        goto LABEL_10;
      }
      if ( v9 == (_BYTE *)(a3 + 48) )
      {
        *(_QWORD *)(a3 + 32) = v8;
        *(_QWORD *)(a3 + 40) = *((_QWORD *)v5 + 3);
        *(_QWORD *)(a3 + 48) = *((_QWORD *)v5 + 4);
LABEL_23:
        *((_QWORD *)v5 + 2) = v5 + 32;
        goto LABEL_10;
      }
      *(_QWORD *)(a3 + 32) = v8;
      v10 = *(_QWORD *)(a3 + 48);
      *(_QWORD *)(a3 + 40) = *((_QWORD *)v5 + 3);
      *(_QWORD *)(a3 + 48) = *((_QWORD *)v5 + 4);
      if ( !v9 )
        goto LABEL_23;
      *((_QWORD *)v5 + 2) = v9;
      *((_QWORD *)v5 + 4) = v10;
LABEL_10:
      v11 = *((_BYTE **)v5 + 2);
      *((_QWORD *)v5 + 3) = 0;
      v5 -= 72;
      *v11 = 0;
      *(_QWORD *)(a3 + 64) = *((_QWORD *)v5 + 15);
      --v4;
    }
    while ( v4 );
  }
  return a3;
}
