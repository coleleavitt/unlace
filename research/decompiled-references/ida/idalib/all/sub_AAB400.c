char __fastcall sub_AAB400(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // r13
  unsigned __int64 v6; // r12
  __int64 v7; // rbx
  char v8; // al
  __int64 v9; // rbp
  char result; // al
  __int64 v11; // rax
  __int64 v12; // r13
  char v13; // al
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  bool v18; // al
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+8h] [rbp-40h]
  __int64 v22; // [rsp+8h] [rbp-40h]
  __int64 v23; // [rsp+8h] [rbp-40h]
  __int64 v24; // [rsp+8h] [rbp-40h]

  v5 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  v7 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(_BYTE *)(v7 + 16);
  if ( v8 == 34 )
  {
    v9 = *(_QWORD *)v6;
    if ( *(_BYTE *)(*(_QWORD *)v6 + 16LL) == 34 )
      return sub_AABC90(a1, v7, v9);
    goto LABEL_6;
  }
  a4 = *(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(a4 + 16) == 34 )
  {
    v22 = a3;
    v15 = sub_F63050(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4);
    v9 = *(_QWORD *)v6;
    a3 = v22;
    v7 = v15;
    if ( *(_BYTE *)(*(_QWORD *)v6 + 16LL) == 34 )
      goto LABEL_8;
    goto LABEL_6;
  }
  v9 = *(_QWORD *)v6;
  if ( *(_BYTE *)(*(_QWORD *)v6 + 16LL) != 34 )
  {
    v7 = 0;
LABEL_6:
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 )
    {
      v12 = *v5;
      v9 = 0;
      v13 = *(_BYTE *)(v12 + 16);
      goto LABEL_11;
    }
    v21 = a3;
    v11 = sub_F63050(v9, a2, a3, a4);
    a3 = v21;
    v9 = v11;
LABEL_8:
    if ( v7 && v9 )
      return sub_AABC90(a1, v7, v9);
    v12 = *v5;
    v13 = *(_BYTE *)(v12 + 16);
LABEL_11:
    if ( v13 == 11 )
    {
      v14 = *(_QWORD *)v6;
      if ( *(_BYTE *)(v14 + 16) == 11 )
        return (sub_AA91B0(a1, a2, a3, 1, 0, 0) & 0xFFFFFFFFFFFFFFF0LL) != 0;
LABEL_30:
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 11 )
      {
        v14 = 0;
        goto LABEL_23;
      }
      goto LABEL_31;
    }
LABEL_19:
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 11 )
    {
      v23 = a3;
      v16 = sub_F63050(v12, a2, a3, a4);
      v14 = *(_QWORD *)v6;
      a3 = v23;
      v12 = v16;
      if ( *(_BYTE *)(v14 + 16) == 11 )
      {
LABEL_21:
        if ( v12 && v14 )
          return (sub_AA91B0(a1, a2, a3, 1, 0, 0) & 0xFFFFFFFFFFFFFFF0LL) != 0;
LABEL_23:
        if ( v7 )
        {
          v17 = sub_A5E7C0(v7, a2, a3, a4, a5);
          a3 = *(unsigned __int8 *)(v17 + 19);
          LOBYTE(a3) = (unsigned __int8)a3 >> 2;
          if ( !(_BYTE)a3 )
          {
            v18 = sub_A56B40(v17);
            LOBYTE(a3) = v14 != 0;
            result = v14 != 0 && v18;
            if ( result )
              return result;
          }
        }
        goto LABEL_26;
      }
    }
    else
    {
      v14 = *(_QWORD *)v6;
      v12 = 0;
      if ( *(_BYTE *)(v14 + 16) == 11 )
        goto LABEL_23;
    }
    goto LABEL_30;
  }
  if ( v8 != 11 )
  {
    v12 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
    v7 = 0;
    goto LABEL_19;
  }
  v12 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = 0;
  v14 = *(_QWORD *)v6;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 11 )
  {
LABEL_31:
    v24 = a3;
    v20 = sub_F63050(v14, a2, a3, a4);
    a3 = v24;
    v14 = v20;
    goto LABEL_21;
  }
LABEL_26:
  if ( !v9 )
    return 0;
  v19 = sub_A5E7C0(v9, a2, a3, a4, a5);
  if ( *(_BYTE *)(v19 + 19) >> 2 )
    return 0;
  else
    return (v12 != 0) & sub_A56B40(v19);
}
