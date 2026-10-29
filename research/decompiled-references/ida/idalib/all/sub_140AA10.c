__int64 __fastcall sub_140AA10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned __int64 v5; // r12
  _BYTE *v6; // rbx
  __int64 v7; // rax
  _BYTE *v8; // rsi
  _BYTE *v9; // rdi
  __int64 v10; // rdx
  _BYTE *v11; // r13
  _BYTE *v12; // rdi
  size_t v13; // rdx
  size_t v14; // rdx

  v3 = a2 - a1;
  v5 = 0x8E38E38E38E38E39LL * (v3 >> 3);
  if ( v3 > 0 )
  {
    v6 = (_BYTE *)(a1 + 16);
    do
    {
      v11 = *((_BYTE **)v6 - 2);
      v12 = *(_BYTE **)a3;
      if ( v6 == v11 )
      {
        v13 = *((_QWORD *)v6 - 1);
        if ( v13 )
        {
          if ( v13 == 1 )
            *v12 = *v6;
          else
            memcpy(v12, v6, v13);
          v13 = *((_QWORD *)v6 - 1);
          v12 = *(_BYTE **)a3;
        }
        *(_QWORD *)(a3 + 8) = v13;
        v12[v13] = 0;
        v12 = *((_BYTE **)v11 - 2);
      }
      else
      {
        if ( v12 == (_BYTE *)(a3 + 16) )
        {
          *(_QWORD *)a3 = v11;
          *(_QWORD *)(a3 + 8) = *((_QWORD *)v6 - 1);
          *(_QWORD *)(a3 + 16) = *(_QWORD *)v6;
        }
        else
        {
          *(_QWORD *)a3 = v11;
          v7 = *(_QWORD *)(a3 + 16);
          *(_QWORD *)(a3 + 8) = *((_QWORD *)v6 - 1);
          *(_QWORD *)(a3 + 16) = *(_QWORD *)v6;
          if ( v12 )
          {
            *((_QWORD *)v6 - 2) = v12;
            *(_QWORD *)v6 = v7;
            goto LABEL_6;
          }
        }
        *((_QWORD *)v6 - 2) = v6;
        v12 = v6;
      }
LABEL_6:
      *((_QWORD *)v6 - 1) = 0;
      *v12 = 0;
      v8 = *((_BYTE **)v6 + 2);
      v9 = *(_BYTE **)(a3 + 32);
      if ( v8 == v6 + 32 )
      {
        v14 = *((_QWORD *)v6 + 3);
        if ( v14 )
        {
          if ( v14 == 1 )
            *v9 = v6[32];
          else
            memcpy(v9, v8, v14);
          v14 = *((_QWORD *)v6 + 3);
          v9 = *(_BYTE **)(a3 + 32);
        }
        *(_QWORD *)(a3 + 40) = v14;
        v9[v14] = 0;
        v9 = *((_BYTE **)v6 + 2);
        goto LABEL_10;
      }
      if ( v9 == (_BYTE *)(a3 + 48) )
      {
        *(_QWORD *)(a3 + 32) = v8;
        *(_QWORD *)(a3 + 40) = *((_QWORD *)v6 + 3);
        *(_QWORD *)(a3 + 48) = *((_QWORD *)v6 + 4);
LABEL_23:
        *((_QWORD *)v6 + 2) = v6 + 32;
        v9 = v6 + 32;
        goto LABEL_10;
      }
      *(_QWORD *)(a3 + 32) = v8;
      v10 = *(_QWORD *)(a3 + 48);
      *(_QWORD *)(a3 + 40) = *((_QWORD *)v6 + 3);
      *(_QWORD *)(a3 + 48) = *((_QWORD *)v6 + 4);
      if ( !v9 )
        goto LABEL_23;
      *((_QWORD *)v6 + 2) = v9;
      *((_QWORD *)v6 + 4) = v10;
LABEL_10:
      *((_QWORD *)v6 + 3) = 0;
      a3 += 72;
      v6 += 72;
      *v9 = 0;
      *(_QWORD *)(a3 - 8) = *((_QWORD *)v6 - 3);
      --v5;
    }
    while ( v5 );
  }
  return a3;
}
