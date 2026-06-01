void __fastcall sub_1528A80(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  int v5; // r13d
  __int64 v6; // rsi
  int v7; // ecx
  int v8; // edx
  unsigned int v9; // r15d
  unsigned __int16 v10; // r12
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  __int16 v14; // ax
  int v15; // r12d
  int v16; // [rsp+Ch] [rbp-9Ch]
  unsigned __int64 v17; // [rsp+18h] [rbp-90h] BYREF
  __m128i v18; // [rsp+20h] [rbp-88h] BYREF
  int v19; // [rsp+30h] [rbp-78h]

  v5 = *(_DWORD *)a4;
  sub_14634E0(a2, (int *)a4);
  if ( *(_WORD *)(a4 + 16) != 22 )
  {
    v6 = a2[6];
    v7 = 2192;
    v8 = v5;
LABEL_3:
    sub_FC70B0((__int64)&v18, v6, v8, v7);
LABEL_4:
    sub_1520A40((unsigned __int8 **)&v18, (__int64)"vtordisp");
    sub_AEA040((__int64)&v18);
    return;
  }
  sub_14634E0(a2, (int *)a4);
  v9 = *(unsigned __int16 *)(a4 + 16);
  v10 = *(_WORD *)(a4 + 16);
  if ( sub_141A630(v10) )
    goto LABEL_25;
  if ( (_WORD)v9 == 1 )
  {
    v17 = 0;
    goto LABEL_24;
  }
  v11 = *(_QWORD *)(a4 + 8);
  if ( !v11 )
  {
LABEL_25:
    if ( v10 == 23 )
    {
      v17 = 0;
      v16 = 0;
      goto LABEL_31;
    }
    v16 = 1;
  }
  else
  {
    v12 = *(_QWORD *)(v11 + 16);
    if ( (unsigned int)*(_QWORD *)v12 != 4 )
    {
      if ( (unsigned int)*(_QWORD *)v12 == 3 && *(_WORD *)(v12 + 16) == 28528 && *(_BYTE *)(v12 + 18) == 112 )
      {
        sub_14634E0(a2, (int *)a4);
        v14 = *(_WORD *)(a4 + 16);
        v17 = 0;
        v16 = 4;
        goto LABEL_18;
      }
LABEL_10:
      v17 = 0;
      v16 = 1;
      if ( sub_141A630(v9) )
        goto LABEL_14;
      goto LABEL_11;
    }
    if ( *(_DWORD *)(v12 + 16) != 1752397168 )
      goto LABEL_10;
    sub_14634E0(a2, (int *)a4);
    if ( *(_WORD *)(a4 + 16) != 66 )
    {
      v6 = a2[6];
      v7 = 2195;
      v8 = v5;
      goto LABEL_3;
    }
    sub_14634E0(a2, (int *)a4);
    v9 = *(unsigned __int16 *)(a4 + 16);
    v16 = 3;
    v10 = *(_WORD *)(a4 + 16);
  }
  v17 = 0;
  if ( sub_141A630(v9) )
    goto LABEL_14;
  if ( v10 == 1 )
  {
LABEL_24:
    v8 = *(_DWORD *)a4;
    v6 = a2[6];
    v7 = 2207;
    goto LABEL_3;
  }
  v11 = *(_QWORD *)(a4 + 8);
LABEL_11:
  if ( v11 )
  {
    v13 = *(_QWORD *)(v11 + 16);
    if ( (unsigned int)*(_QWORD *)v13 == 3 )
    {
      if ( *(_WORD *)(v13 + 16) == 26223 && *(_BYTE *)(v13 + 18) == 102 )
      {
        sub_14634E0(a2, (int *)a4);
        v14 = *(_WORD *)(a4 + 16);
        v17 = 0;
        goto LABEL_18;
      }
    }
    else if ( (unsigned int)*(_QWORD *)v13 == 2 && *(_WORD *)(v13 + 16) == 28271 )
    {
      sub_14634E0(a2, (int *)a4);
      v14 = *(_WORD *)(a4 + 16);
      v17 = 1;
      goto LABEL_18;
    }
  }
LABEL_14:
  if ( v10 != 7 || !(unsigned __int8)sub_1463E50((__int64)a2, (int *)a4, (__int64 *)&v17) )
    goto LABEL_24;
  if ( v17 > 2 )
  {
    sub_FC70B0((__int64)&v18, a2[6], *(_DWORD *)a4, 2191);
    sub_1520C80((unsigned __int8 **)&v18, 0);
    sub_1520C80((unsigned __int8 **)&v18, 2);
    goto LABEL_4;
  }
  v14 = *(_WORD *)(a4 + 16);
LABEL_18:
  if ( v14 != 23 )
  {
    v6 = a2[6];
    v7 = 2196;
    v8 = v5;
    goto LABEL_3;
  }
LABEL_31:
  v15 = *(_DWORD *)a4;
  sub_14634E0(a2, (int *)a4);
  if ( *(_WORD *)(a4 + 16) != 2 )
  {
    v8 = *(_DWORD *)a4;
    v6 = a2[6];
    v7 = 2202;
    goto LABEL_3;
  }
  v19 = 444;
  v18.m128i_i64[0] = __PAIR64__(v15, v5);
  v18.m128i_i64[1] = (unsigned __int16)v17 | (unsigned __int64)(v16 << 16);
  sub_1479990((__int64)a2, &v18, 0);
}
