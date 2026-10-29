__int64 __fastcall sub_9C0DB0(__int64 a1, unsigned int a2)
{
  __int64 v2; // r14
  _QWORD *v3; // rax
  __int64 v4; // r13
  _QWORD *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 *v13; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *v17; // rbp
  __int64 *v18; // rbx
  __int64 v19; // rsi
  __int64 *v20; // r15
  __int64 *v21; // r14
  __int64 v22; // rsi
  __int64 v23; // [rsp+0h] [rbp-98h] BYREF
  __int64 *v24; // [rsp+8h] [rbp-90h]
  _QWORD v25[3]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v26; // [rsp+38h] [rbp-60h]
  unsigned int v27; // [rsp+40h] [rbp-58h]
  unsigned int v28; // [rsp+50h] [rbp-48h]

  sub_A1BF70(v25, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 224LL) + 8LL * a2));
  v2 = *(_QWORD *)(a1 + 184);
  v3 = (_QWORD *)sub_A1A5A0(v2, 24);
  v4 = *v3;
  v5 = v3;
  v9 = sub_2575D20(v2, 24, v6);
  if ( v4 == v9 )
    sub_257D000(&v23, v5, v7, v8);
  else
    sub_2576960(&v23, v5);
  sub_A1A5E0(v2, 24);
  v10 = v28;
  v11 = v25[0];
  if ( v28 )
    goto LABEL_8;
  v12 = *(_QWORD *)(v26 + 32);
  v10 = v27;
  if ( *(_DWORD *)(v12 + 16) != v27 && v27 )
    v12 = *(_QWORD *)(v26 + v27 + 32);
  if ( !*(_BYTE *)(v12 + 51) || (v13 = (__int64 *)(v26 + v25[0] + 72), v25[0] != v27) )
LABEL_8:
    v13 = (__int64 *)(v26 + v25[0] + 40);
  if ( *v13 == v9 )
  {
    if ( v9 == v23 )
    {
      if ( v13 == &v23 )
        goto LABEL_18;
      v20 = (__int64 *)v13[1];
      if ( v20 )
      {
        v21 = &v20[3 * *(v20 - 1)];
        if ( v20 == v21 )
        {
          v22 = 0;
        }
        else
        {
          do
          {
            v21 -= 3;
            sub_5FF3B0(v21);
          }
          while ( v20 != v21 );
          v22 = 24 * *(v20 - 1);
        }
        operator delete[](v20 - 1, v22 + 8);
      }
      v13[1] = 0;
      sub_257D000(v13, &v23, v11, v10);
      goto LABEL_12;
    }
    if ( v13 == &v23 )
      goto LABEL_13;
  }
  else
  {
    if ( v9 != v23 )
    {
      sub_2576350(v13, &v23, v25[0], v10);
      goto LABEL_12;
    }
    if ( v13 == &v23 )
      goto LABEL_18;
  }
  sub_5FF3B0(v13);
  if ( v9 != v23 )
  {
    sub_2576960(v13, &v23);
    if ( v23 != v9 )
      goto LABEL_13;
    goto LABEL_18;
  }
  sub_257D000(v13, &v23, v15, v16);
LABEL_12:
  if ( v23 != v9 )
  {
LABEL_13:
    sub_25769A0(&v23);
    goto LABEL_14;
  }
LABEL_18:
  v17 = v24;
  if ( v24 )
  {
    v18 = &v24[3 * *(v24 - 1)];
    if ( v24 == v18 )
    {
      v19 = 0;
    }
    else
    {
      do
      {
        v18 -= 3;
        sub_5FF3B0(v18);
      }
      while ( v17 != v18 );
      v19 = 24 * *(v17 - 1);
    }
    operator delete[](v17 - 1, v19 + 8);
  }
LABEL_14:
  sub_A1DB00(v25);
  return sub_A1C0C0(v25);
}

