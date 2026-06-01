char __fastcall Z3_query_constructor(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, __int64 *a5, __int64 a6)
{
  __int64 v8; // rbp
  char v9; // r14
  __int64 v11; // r13
  __int64 v12; // rax
  _QWORD *v13; // r15
  __int64 v14; // rbp
  __int64 v15; // r13
  __int64 v16; // r14
  __int64 v17; // rbp
  __int64 v19; // [rsp+8h] [rbp-80h]
  __int64 v21; // [rsp+10h] [rbp-78h]
  _QWORD *v22; // [rsp+18h] [rbp-70h]
  __int64 *v23; // [rsp+20h] [rbp-68h]
  char v24; // [rsp+2Bh] [rbp-5Dh]
  int v25; // [rsp+2Ch] [rbp-5Ch]
  _BYTE v26[88]; // [rsp+30h] [rbp-58h] BYREF

  v8 = a3;
  v9 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v24 = v9;
  if ( v9 )
  {
    sub_295900(a1, a2, a3);
    v19 = a6;
    v25 = v8;
    v23 = a5;
    v22 = a4;
  }
  else
  {
    v19 = 0;
    v25 = 0;
    v23 = nullptr;
    v22 = nullptr;
  }
  *(_DWORD *)(a1 + 1520) = 0;
  sub_24FC40(a1);
  if ( a2 && (sub_15F01E0(v26, *(_QWORD *)(a1 + 232)), (v11 = *(_QWORD *)(a2 + 48)) != 0) )
  {
    if ( a4 )
    {
      sub_251EF0(a1, v11);
      *a4 = v11;
    }
    if ( a5 )
    {
      v21 = sub_15F0A30(v26, v11);
      sub_251EF0(a1, v21);
      *a5 = v21;
    }
    v12 = sub_15FB1F0(v26, v11);
    v13 = (_QWORD *)v12;
    if ( (_DWORD)v8 )
    {
      v14 = 8 * v8;
      v15 = 0;
      do
      {
        v16 = *(_QWORD *)(*v13 + v15);
        LOBYTE(v12) = sub_251EF0(a1, v16);
        *(_QWORD *)(a6 + v15) = v16;
        v15 += 8;
      }
      while ( v14 != v15 );
    }
    if ( v24 )
    {
      if ( v22 )
        v22 = (_QWORD *)*v22;
      sub_2BB6A0(v22, 3);
      if ( v23 )
        v23 = (__int64 *)*v23;
      sub_2BB6A0(v23, 4);
      v17 = 0;
      if ( v25 )
      {
        do
        {
          sub_2BB770(*(_QWORD *)(v19 + 8 * v17), 5, (unsigned int)v17);
          ++v17;
        }
        while ( v25 != v17 );
      }
      goto LABEL_19;
    }
  }
  else
  {
    LOBYTE(v12) = sub_24EA30(a1, 3, 0);
    if ( v24 )
    {
LABEL_19:
      LOBYTE(v12) = byte_1C7EBA0;
      byte_1C7EBA0 = 1;
    }
  }
  return v12;
}

