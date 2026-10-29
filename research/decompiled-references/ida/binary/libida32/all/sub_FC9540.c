void __fastcall sub_FC9540(__int64 a1, unsigned __int8 **a2, unsigned __int8 **a3)
{
  unsigned __int64 v3; // r13
  unsigned __int8 **v4; // rbp
  _BYTE *v6; // rax
  _BYTE *v7; // rdi
  size_t v8; // r15
  unsigned __int8 *v9; // r14
  __int64 v10; // rdx
  _BYTE *v11; // rax
  unsigned __int8 *v12; // rdx

  if ( a3 != a2 )
  {
    v3 = (unsigned __int64)&a2[((unsigned __int64)((char *)a3 - (char *)a2 - 40) >> 3) + 5];
    v4 = a2;
    v6 = *(_BYTE **)(a1 + 24);
    v7 = *(_BYTE **)(a1 + 32);
LABEL_3:
    v8 = (size_t)v4[1];
    v9 = *v4;
    if ( !v8 )
      goto LABEL_5;
    while ( 1 )
    {
      v10 = *v9;
      if ( (byte_23ED5E0[2 * v10] & 0xE0) == 0 )
        goto LABEL_5;
      if ( v9 != &v9[v8] )
        break;
LABEL_22:
      if ( v8 > v6 - v7 )
      {
        sub_22581D0(a1, v9, v8);
        goto LABEL_9;
      }
      memcpy(v7, v9, v8);
      v4 += 5;
      *(_QWORD *)(a1 + 32) += v8;
      if ( v4 == (unsigned __int8 **)v3 )
        return;
LABEL_10:
      v6 = *(_BYTE **)(a1 + 24);
      v7 = *(_BYTE **)(a1 + 32);
      if ( a2 == v4 )
        goto LABEL_3;
      if ( v6 == v7 )
      {
        sub_22581D0(a1, ".", 1);
        v7 = *(_BYTE **)(a1 + 32);
      }
      else
      {
        *v7 = 46;
        v7 = (_BYTE *)(*(_QWORD *)(a1 + 32) + 1LL);
        *(_QWORD *)(a1 + 32) = v7;
      }
      v8 = (size_t)v4[1];
      v6 = *(_BYTE **)(a1 + 24);
      v9 = *v4;
      if ( !v8 )
        goto LABEL_5;
    }
    if ( byte_23D3460[v10] )
    {
      v12 = v9;
      do
      {
        if ( &v9[v8] == ++v12 )
          goto LABEL_22;
      }
      while ( byte_23D3460[*v12] );
      if ( v6 <= v7 )
        goto LABEL_21;
    }
    else
    {
LABEL_5:
      if ( v6 <= v7 )
      {
LABEL_21:
        sub_2257CD0(a1, 34);
LABEL_7:
        sub_2257D50(a1, v9, v8, 0);
        v11 = *(_BYTE **)(a1 + 32);
        if ( (unsigned __int64)v11 >= *(_QWORD *)(a1 + 24) )
        {
          sub_2257CD0(a1, 34);
        }
        else
        {
          *(_QWORD *)(a1 + 32) = v11 + 1;
          *v11 = 34;
        }
LABEL_9:
        v4 += 5;
        if ( v4 == (unsigned __int8 **)v3 )
          return;
        goto LABEL_10;
      }
    }
    *(_QWORD *)(a1 + 32) = v7 + 1;
    *v7 = 34;
    goto LABEL_7;
  }
}

