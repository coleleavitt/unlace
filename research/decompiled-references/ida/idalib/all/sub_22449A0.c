void __fastcall sub_22449A0(unsigned __int8 *a1, __int64 a2, __int64 a3)
{
  unsigned __int8 *v3; // r13
  unsigned __int8 *v5; // rbp
  unsigned __int8 v6; // bl
  unsigned __int8 *v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  _BYTE *v10; // rdx
  __int64 v11; // rax
  _BYTE *v12; // rdx
  __int64 v13; // rsi
  _BYTE *v14; // rdx
  __int64 v15; // rsi

  v3 = &a1[a2];
  if ( a1 != &a1[a2] )
  {
    v5 = a1;
    while ( 1 )
    {
      v6 = *v5;
      v7 = *(unsigned __int8 **)(a3 + 32);
      v8 = *(_QWORD *)(a3 + 24);
      if ( *v5 != 92 )
        break;
      if ( (unsigned __int64)v7 >= v8 )
      {
        v9 = sub_227BA10(a3, 92);
      }
      else
      {
        *(_QWORD *)(a3 + 32) = v7 + 1;
        *v7 = 92;
        v9 = a3;
      }
      v10 = *(_BYTE **)(v9 + 32);
      if ( (unsigned __int64)v10 >= *(_QWORD *)(v9 + 24) )
      {
        sub_227BA10(v9, 92);
LABEL_7:
        if ( v3 == ++v5 )
          return;
      }
      else
      {
        ++v5;
        *(_QWORD *)(v9 + 32) = v10 + 1;
        *v10 = 92;
        if ( v3 == v5 )
          return;
      }
    }
    if ( (unsigned __int8)(v6 - 32) > 0x5Eu || v6 == 34 )
    {
      if ( (unsigned __int64)v7 >= v8 )
      {
        v11 = sub_227BA10(a3, 92);
      }
      else
      {
        *(_QWORD *)(a3 + 32) = v7 + 1;
        *v7 = 92;
        v11 = a3;
      }
      v12 = *(_BYTE **)(v11 + 32);
      v13 = (unsigned __int8)a0123456789abcd_3[(int)v6 >> 4];
      if ( (unsigned __int64)v12 >= *(_QWORD *)(v11 + 24) )
      {
        v11 = sub_227BA10(v11, v13);
      }
      else
      {
        *(_QWORD *)(v11 + 32) = v12 + 1;
        *v12 = v13;
      }
      v14 = *(_BYTE **)(v11 + 32);
      v15 = (unsigned __int8)a0123456789abcd_3[v6 & 0xF];
      if ( (unsigned __int64)v14 >= *(_QWORD *)(v11 + 24) )
      {
        sub_227BA10(v11, v15);
      }
      else
      {
        *(_QWORD *)(v11 + 32) = v14 + 1;
        *v14 = v15;
      }
    }
    else if ( (unsigned __int64)v7 >= v8 )
    {
      sub_227BA10(a3, v6);
    }
    else
    {
      *(_QWORD *)(a3 + 32) = v7 + 1;
      *v7 = v6;
    }
    goto LABEL_7;
  }
}
