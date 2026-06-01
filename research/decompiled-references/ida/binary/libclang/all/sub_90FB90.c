__int64 __fastcall sub_90FB90(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  _QWORD *v3; // rax
  __int64 v4; // r13
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rbx
  unsigned int v11; // r12d
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 *v14; // rbx
  __int64 *v16; // rbp
  __int64 *v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // [rsp+0h] [rbp-58h] BYREF
  __int64 *v22; // [rsp+8h] [rbp-50h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = (_QWORD *)sub_A1A5A0(v2, 24);
  v4 = *v3;
  v5 = v3;
  v9 = sub_2575D20(v2, 24, v6);
  if ( v4 == v9 )
    sub_257D000(&v21, v5, v7, v8);
  else
    sub_2576960(&v21, v5);
  sub_A1A5E0(v2, 24);
  v10 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  v11 = sub_9E26A0(a1, a2, v10);
  if ( !(_BYTE)v11 )
    goto LABEL_13;
  v12 = *(_QWORD *)(v10 + 24);
  if ( *(_DWORD *)(v10 + 48)
    || v12
    && *(_DWORD *)(v10 + 32)
    && (sub_A1DB00(v10), sub_A1C490(v10), v12 = *(_QWORD *)(v10 + 24), *(_DWORD *)(v10 + 48)) )
  {
    v13 = *(_QWORD *)v10;
  }
  else
  {
    v19 = sub_8E5480(v10);
    v13 = *(_QWORD *)v10;
    if ( *(_BYTE *)(v19 + 51) )
    {
      v20 = *(unsigned int *)(v10 + 32);
      v14 = (__int64 *)(v12 + v20 + 72);
      if ( v20 == v13 )
        goto LABEL_10;
    }
  }
  v14 = (__int64 *)(v12 + v13 + 40);
LABEL_10:
  if ( v9 == *v14 )
  {
    if ( v9 == v21 )
    {
      sub_257D030(v14, &v21);
      goto LABEL_13;
    }
    if ( v14 == &v21 )
      goto LABEL_14;
  }
  else
  {
    if ( v9 != v21 )
    {
      sub_2576220(v14, &v21);
      goto LABEL_13;
    }
    if ( v14 == &v21 )
      goto LABEL_17;
  }
  sub_5FF3B0(v14);
  if ( v9 != v21 )
  {
    sub_25768A0(v14, &v21);
    if ( v9 != v21 )
      goto LABEL_14;
    goto LABEL_17;
  }
  sub_257CF50(v14, &v21);
LABEL_13:
  if ( v9 != v21 )
  {
LABEL_14:
    sub_25769A0(&v21);
    return v11;
  }
LABEL_17:
  v16 = v22;
  if ( v22 )
  {
    v17 = &v22[3 * *(v22 - 1)];
    if ( v22 == v17 )
    {
      v18 = 0;
    }
    else
    {
      do
      {
        v17 -= 3;
        sub_5FF3B0(v17);
      }
      while ( v16 != v17 );
      v18 = 24 * *(v16 - 1);
    }
    operator delete[](v16 - 1, v18 + 8);
  }
  return v11;
}

