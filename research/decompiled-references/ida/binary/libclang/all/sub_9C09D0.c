void __fastcall sub_9C09D0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // r14
  _QWORD *v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 *v13; // r13
  __int64 *v14; // rbp
  __int64 *v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // [rsp+0h] [rbp-98h] BYREF
  __int64 *v18; // [rsp+8h] [rbp-90h]
  _QWORD v19[3]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v20; // [rsp+38h] [rbp-60h]
  unsigned int v21; // [rsp+40h] [rbp-58h]
  int v22; // [rsp+50h] [rbp-48h]

  v4 = a3;
  v5 = (_QWORD *)sub_A1A5A0(a1, 24);
  v6 = *v5;
  v7 = v5;
  v11 = sub_2575D20(a1, 24, v8);
  if ( v6 == v11 )
    sub_257D000(&v17, v7, v9, v10);
  else
    sub_2576960(&v17, v7);
  sub_A1A5E0(a1, 24);
  sub_A176A0(v19, a2, (unsigned int)v4);
  if ( v22 )
    goto LABEL_8;
  v12 = *(_QWORD *)(v20 + 32);
  if ( *(_DWORD *)(v12 + 16) != v21 && v21 )
    v12 = *(_QWORD *)(v20 + v21 + 32);
  if ( !*(_BYTE *)(v12 + 51) || (v13 = (__int64 *)(v20 + v19[0] + 72), v19[0] != v21) )
LABEL_8:
    v13 = (__int64 *)(v20 + v19[0] + 40);
  sub_A1C0C0(v19);
  if ( v11 == *v13 )
  {
    if ( v11 == v17 )
    {
      sub_257D030(v13, &v17);
      goto LABEL_12;
    }
  }
  else if ( v11 != v17 )
  {
    sub_2576220(v13, &v17);
    goto LABEL_12;
  }
  if ( v13 != &v17 )
  {
    sub_5FF3B0(v13);
    if ( v11 == v17 )
      sub_257CF50(v13, &v17);
    else
      sub_25768A0(v13, &v17);
  }
LABEL_12:
  *(_BYTE *)(*(_QWORD *)(a2 + 176) + v4 + 4) |= 2u;
  if ( v17 == v11 )
  {
    v14 = v18;
    if ( v18 )
    {
      v15 = &v18[3 * *(v18 - 1)];
      if ( v18 == v15 )
      {
        v16 = 0;
      }
      else
      {
        do
        {
          v15 -= 3;
          sub_5FF3B0(v15);
        }
        while ( v14 != v15 );
        v16 = 24 * *(v14 - 1);
      }
      operator delete[](v14 - 1, v16 + 8);
    }
  }
  else
  {
    sub_25769A0(&v17);
  }
}

