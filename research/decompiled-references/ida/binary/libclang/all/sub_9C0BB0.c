void __fastcall sub_9C0BB0(__int64 a1, int a2)
{
  __int64 v2; // r15
  _QWORD *v3; // rax
  __int64 v4; // r12
  _QWORD *v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 *v12; // r13
  __int64 *v13; // rbp
  __int64 *v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // [rsp+0h] [rbp-98h] BYREF
  __int64 *v17; // [rsp+8h] [rbp-90h]
  _QWORD v18[3]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v19; // [rsp+38h] [rbp-60h]
  unsigned int v20; // [rsp+40h] [rbp-58h]
  int v21; // [rsp+50h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = (_QWORD *)sub_A1A5A0(v2, 24);
  v4 = *v3;
  v5 = v3;
  v9 = sub_2575D20(v2, 24, v6);
  if ( v4 == v9 )
    sub_257D000(&v16, v5, v7, v8);
  else
    sub_2576960(&v16, v5);
  sub_A1A5E0(v2, 24);
  v10 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  sub_A1C030(v18, *(_QWORD *)(v10 + 24), (unsigned int)(a2 + *(_DWORD *)v10), (unsigned int)(a2 + *(_DWORD *)v10));
  if ( v21 )
    goto LABEL_8;
  v11 = *(_QWORD *)(v19 + 32);
  if ( *(_DWORD *)(v11 + 16) != v20 && v20 )
    v11 = *(_QWORD *)(v19 + v20 + 32);
  if ( !*(_BYTE *)(v11 + 51) || (v12 = (__int64 *)(v19 + v18[0] + 72), v20 != v18[0]) )
LABEL_8:
    v12 = (__int64 *)(v19 + v18[0] + 40);
  if ( *v12 == v9 )
  {
    if ( v9 == v16 )
    {
      sub_257D030(v12, &v16);
      goto LABEL_12;
    }
  }
  else if ( v9 != v16 )
  {
    sub_2576220(v12, &v16);
    goto LABEL_12;
  }
  if ( v12 != &v16 )
  {
    sub_5FF3B0(v12);
    if ( v9 == v16 )
      sub_257CF50(v12, &v16);
    else
      sub_25768A0(v12, &v16);
  }
LABEL_12:
  sub_A1C490(v18);
  sub_A1DB00(v18);
  sub_A1C0C0(v18);
  if ( v16 == v9 )
  {
    v13 = v17;
    if ( v17 )
    {
      v14 = &v17[3 * *(v17 - 1)];
      if ( v17 == v14 )
      {
        v15 = 0;
      }
      else
      {
        do
        {
          v14 -= 3;
          sub_5FF3B0(v14);
        }
        while ( v13 != v14 );
        v15 = 24 * *(v13 - 1);
      }
      operator delete[](v13 - 1, v15 + 8);
    }
  }
  else
  {
    sub_25769A0(&v16);
  }
}

