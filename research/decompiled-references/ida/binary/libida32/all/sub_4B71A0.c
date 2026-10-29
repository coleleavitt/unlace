__int64 __fastcall sub_4B71A0(_QWORD *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // eax
  char v5; // al
  char v6; // r15
  char v7; // r13
  char v8; // r12
  char v9; // r14
  unsigned __int64 v10; // rax
  char v11; // cl
  char v12; // al
  char v13; // [rsp+0h] [rbp-60h]
  char v14; // [rsp+0h] [rbp-60h]
  char v15; // [rsp+0h] [rbp-60h]
  void *v16; // [rsp+8h] [rbp-58h] BYREF
  __int128 v17; // [rsp+10h] [rbp-50h]
  unsigned __int64 v18; // [rsp+20h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v2 = a2;
  v17 = 0;
  v16 = nullptr;
  v3 = ea2node(a2);
  if ( netnode_get_name(v3, &v16) <= 0 || (unsigned __int8)sub_7366B0(v16) )
    goto LABEL_3;
  v5 = sub_614FB0(*a1, 39);
  v6 = v5 & 2;
  v7 = v5 & 8;
  v8 = v5 & 1;
  v9 = v5 & 4;
  if ( (v5 & 0xA) == 0 )
  {
    if ( !v8 )
    {
      if ( (v5 & 5) == 0 )
        goto LABEL_3;
      v10 = sub_3B9AA0((__int64)a1, a2, 4);
      v11 = 0;
      goto LABEL_11;
    }
    v14 = sub_3C0CC0((__int64)a1, a2);
    v10 = sub_3B9AA0((__int64)a1, a2, 4);
    v11 = v14;
LABEL_26:
    if ( !v7 )
    {
LABEL_11:
      if ( !v9 )
      {
        if ( !v8 || (v11 & 4) != 0 )
          goto LABEL_3;
        goto LABEL_14;
      }
      if ( (~BYTE1(v10) & 0xC0) == 0 )
        goto LABEL_34;
      if ( !v8 )
        goto LABEL_3;
LABEL_43:
      if ( (v11 & 4) != 0 )
        goto LABEL_3;
LABEL_38:
      if ( !v7 )
      {
LABEL_39:
        if ( (v11 & 8) == 0 )
          goto LABEL_34;
LABEL_3:
        v2 = 0;
        goto LABEL_4;
      }
      goto LABEL_34;
    }
    if ( (v11 & 8) != 0 )
      goto LABEL_34;
    if ( !v9 )
    {
      if ( !v8 || (v11 & 4) != 0 )
        goto LABEL_3;
      goto LABEL_24;
    }
    goto LABEL_35;
  }
  v13 = v5;
  v12 = sub_3C0CC0((__int64)a1, a2);
  v11 = v12;
  if ( (v13 & 5) == 0 )
  {
    if ( !v6 )
    {
      if ( !v7 || (v12 & 8) == 0 )
        goto LABEL_3;
      goto LABEL_34;
    }
    if ( (v12 & 4) != 0 )
      goto LABEL_34;
    if ( !v7 )
      goto LABEL_3;
    BYTE1(v10) = 0;
    goto LABEL_21;
  }
  v15 = v12;
  v10 = sub_3B9AA0((__int64)a1, a2, 4);
  v11 = v15;
  if ( !v6 )
    goto LABEL_26;
  if ( (v15 & 4) != 0 )
    goto LABEL_34;
  if ( v7 )
  {
LABEL_21:
    if ( (v11 & 8) != 0 )
      goto LABEL_34;
    if ( !v9 )
    {
      if ( !v8 )
        goto LABEL_3;
LABEL_24:
      LOBYTE(v2) = (~BYTE1(v10) & 0xC0) != 0;
      goto LABEL_4;
    }
LABEL_35:
    if ( (~BYTE1(v10) & 0xC0) == 0 )
      goto LABEL_34;
    if ( !v8 )
      goto LABEL_3;
    if ( v6 )
      goto LABEL_38;
    goto LABEL_43;
  }
  if ( !v9 )
  {
    if ( !v8 )
      goto LABEL_3;
LABEL_14:
    if ( (v11 & 8) != 0 )
      goto LABEL_3;
    goto LABEL_24;
  }
  if ( (~BYTE1(v10) & 0xC0) != 0 )
  {
    if ( !v8 )
      goto LABEL_3;
    goto LABEL_39;
  }
LABEL_34:
  v2 = 1;
LABEL_4:
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16);
  }
  return v2;
}

