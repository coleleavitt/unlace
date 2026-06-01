__int64 __fastcall sub_9F0ED0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rbp
  unsigned int v5; // r14d
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int8 **v14; // rax
  __int64 *v15; // rbp
  __int64 v16; // rax
  __int64 v17; // [rsp+8h] [rbp-B0h] BYREF
  _QWORD v18[3]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+28h] [rbp-90h]
  __int64 v20; // [rsp+30h] [rbp-88h]
  int v21; // [rsp+40h] [rbp-78h]
  __int64 v22; // [rsp+50h] [rbp-68h] BYREF
  __int128 v23; // [rsp+58h] [rbp-60h]
  __int64 v24; // [rsp+68h] [rbp-50h]
  __int64 v25; // [rsp+70h] [rbp-48h]
  char v26; // [rsp+78h] [rbp-40h]
  int v27; // [rsp+80h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 56);
  sub_A1C070(v18, v3);
  sub_A1A5E0(v2, 56);
  if ( v21 )
  {
    if ( v21 == 2 )
    {
      if ( !v19 )
        goto LABEL_10;
      if ( v18[0] == 0xFFFFFFFFLL )
        goto LABEL_20;
      v24 = v19;
      v7 = *(_QWORD *)(a1 + 184);
      v22 = 0;
      v27 = 2;
      v25 = 0;
      v26 = 1;
      v23 = 0;
    }
    else
    {
      if ( v21 == 3 )
      {
        if ( v18[0] != 0xFFFFFFFFLL )
        {
          v5 = v20;
          v7 = *(_QWORD *)(a1 + 184);
          if ( (_DWORD)v20 == -1 )
            BUG();
          goto LABEL_35;
        }
        goto LABEL_20;
      }
      if ( !(v18[0] | v20) )
      {
LABEL_10:
        v8 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
        sub_A1BFE0(v8, v18);
LABEL_11:
        v9 = 1;
        goto LABEL_12;
      }
      if ( v18[0] == 0xFFFFFFFFLL )
        goto LABEL_20;
      v7 = *(_QWORD *)(a1 + 184);
      if ( v21 != 1 )
      {
        v5 = v20;
LABEL_31:
        if ( v5 == -1 )
        {
          v4 = v19;
LABEL_33:
          sub_A1C030(&v22, v4, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v4 + 32) + 12LL));
          goto LABEL_18;
        }
LABEL_35:
        v4 = v19;
        goto LABEL_15;
      }
      v22 = 0;
      v27 = 1;
      v25 = v20;
      v24 = v19;
      v23 = 0;
    }
LABEL_18:
    v13 = sub_A1A4E0(v7, 56);
    sub_A1C070(v13, &v22);
    sub_A1C0C0(&v22);
    goto LABEL_11;
  }
  v4 = v19;
  if ( !v19 )
    goto LABEL_10;
  if ( v18[0] != 0xFFFFFFFFLL )
  {
    v5 = v20;
    if ( *(_DWORD *)(*(_QWORD *)(v19 + 32) + 16LL) != (_DWORD)v20 )
    {
      v6 = sub_8E5480((__int64)v18);
      if ( !v5 )
      {
        v7 = *(_QWORD *)(a1 + 184);
LABEL_15:
        v11 = sub_8E5480((__int64)v18);
        v12 = 32;
        if ( *(_QWORD *)(v11 + 32) )
          v12 = 16;
        sub_A1C030(&v22, v4, v5, v12 + v5);
        goto LABEL_18;
      }
      if ( *(_DWORD *)(v6 + 12) == -1 )
      {
        v22 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
        v9 = 0;
        sub_A2E0C0(a1, &v22, 2297, 0);
        goto LABEL_12;
      }
      v7 = *(_QWORD *)(a1 + 184);
      if ( v5 != -1 )
        goto LABEL_15;
      goto LABEL_33;
    }
    v7 = *(_QWORD *)(a1 + 184);
    goto LABEL_31;
  }
LABEL_20:
  v17 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
  v14 = (unsigned __int8 **)sub_A2E0C0(a1, &v17, 2264, 0);
  v15 = (__int64 *)v14;
  if ( v14 )
  {
    sub_9B5410(v14, 3);
    v9 = 0;
    v16 = sub_A1A2D0(*(_QWORD *)(a1 + 200), a2);
    LOBYTE(v23) = 1;
    v22 = v16;
    sub_839C90(v15, &v22);
  }
  else
  {
    v9 = 0;
    sub_A1A2D0(*(_QWORD *)(a1 + 200), a2);
  }
LABEL_12:
  sub_A1C0C0(v18);
  return v9;
}

