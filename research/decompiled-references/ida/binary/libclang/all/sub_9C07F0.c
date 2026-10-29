void __fastcall sub_9C07F0(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v4; // rax
  __int64 v5; // r15
  _QWORD *v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 *v12; // rbp
  __int64 *v13; // rbp
  __int64 *v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // [rsp+0h] [rbp-98h] BYREF
  __int64 *v17; // [rsp+8h] [rbp-90h]
  _QWORD v18[3]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v19; // [rsp+38h] [rbp-60h]
  unsigned int v20; // [rsp+40h] [rbp-58h]
  int v21; // [rsp+50h] [rbp-48h]

  v4 = (_QWORD *)sub_A1A5A0(a1, 24);
  v5 = *v4;
  v6 = v4;
  v10 = sub_2575D20(a1, 24, v7);
  if ( v5 == v10 )
    sub_257D000(&v16, v6, v8, v9);
  else
    sub_2576960(&v16, v6);
  sub_A1A5E0(a1, 24);
  sub_A176C0(v18, a2, a3);
  if ( v21 )
    goto LABEL_8;
  v11 = *(_QWORD *)(v19 + 32);
  if ( *(_DWORD *)(v11 + 16) != v20 && v20 )
    v11 = *(_QWORD *)(v19 + v20 + 32);
  if ( !*(_BYTE *)(v11 + 51) || (v12 = (__int64 *)(v19 + v18[0] + 72), v20 != v18[0]) )
LABEL_8:
    v12 = (__int64 *)(v19 + v18[0] + 40);
  if ( v10 == *v12 )
  {
    if ( v10 == v16 )
    {
      sub_257D030(v12, &v16);
      goto LABEL_12;
    }
  }
  else if ( v10 != v16 )
  {
    sub_2576220(v12, &v16);
    goto LABEL_12;
  }
  if ( v12 != &v16 )
  {
    sub_5FF3B0(v12);
    if ( v10 != v16 )
    {
      sub_25768A0(v12, &v16);
      sub_A1C0C0(v18);
      if ( v16 != v10 )
        goto LABEL_13;
      goto LABEL_19;
    }
    sub_257CF50(v12, &v16);
  }
LABEL_12:
  sub_A1C0C0(v18);
  if ( v16 != v10 )
  {
LABEL_13:
    sub_25769A0(&v16);
    return;
  }
LABEL_19:
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

