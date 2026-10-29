__int64 __fastcall sub_95C3E0(__int64 a1, __int64 a2)
{
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  _BYTE *v10; // rdi
  __int64 v11; // r13
  int v12; // ebx
  unsigned int v13; // ebx
  int v15; // r14d
  int v16; // r13d
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 i; // rsi
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int8 **v23; // rax
  unsigned __int64 v24; // [rsp+8h] [rbp-140h]
  void *v25; // [rsp+10h] [rbp-138h] BYREF
  unsigned int v26; // [rsp+18h] [rbp-130h]
  __int64 v27[3]; // [rsp+20h] [rbp-128h] BYREF
  __int64 v28; // [rsp+38h] [rbp-110h]
  __int64 v29; // [rsp+40h] [rbp-108h]
  int v30; // [rsp+50h] [rbp-F8h]
  __int64 v31[3]; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v32; // [rsp+78h] [rbp-D0h]
  __int64 v33; // [rsp+80h] [rbp-C8h]
  int v34; // [rsp+90h] [rbp-B8h]
  _BYTE v35[24]; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+B8h] [rbp-90h]
  unsigned int v37; // [rsp+C0h] [rbp-88h]
  int v38; // [rsp+D0h] [rbp-78h]
  _BYTE v39[24]; // [rsp+D8h] [rbp-70h] BYREF
  __int64 v40; // [rsp+F0h] [rbp-58h]
  unsigned int v41; // [rsp+F8h] [rbp-50h]
  int v42; // [rsp+108h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 56);
  sub_A1C070(v27, v5);
  sub_A1A5E0(v4, 56);
  v6 = *(_QWORD *)(a1 + 184);
  v7 = sub_A1A5A0(v6, 56);
  sub_A1C070(v31, v7);
  sub_A1A5E0(v6, 56);
  sub_A1BFE0(v35, v27);
  sub_A1BFE0(v39, v31);
  if ( v38 != 2 )
  {
    if ( v38 == 1 )
    {
      v18 = v36;
    }
    else if ( v38 )
    {
      if ( v38 == 3 )
        goto LABEL_7;
      v18 = *(_QWORD *)(v36 + 32);
    }
    else
    {
      v8 = *(_QWORD *)(v36 + 32);
      if ( *(_DWORD *)(v8 + 16) == v37 || !v37 )
      {
        if ( *(_DWORD *)(v8 + 12) )
          goto LABEL_7;
LABEL_64:
        v10 = v35;
        goto LABEL_65;
      }
      v18 = *(_QWORD *)(v36 + v37 + 32);
    }
    if ( v18 && !*(_DWORD *)(v18 + 12) )
      goto LABEL_64;
  }
LABEL_7:
  if ( v42 == 2 )
    goto LABEL_13;
  if ( v42 == 1 )
  {
    v19 = v40;
    goto LABEL_49;
  }
  if ( v42 )
  {
    if ( v42 == 3 )
      goto LABEL_13;
    v19 = *(_QWORD *)(v40 + 32);
LABEL_49:
    if ( v19 )
    {
      v10 = v39;
      if ( !*(_DWORD *)(v19 + 12) )
        goto LABEL_65;
    }
LABEL_13:
    sub_A1C0C0(v39);
    sub_A1C0C0(v35);
    if ( !v34 || v34 == 2 )
    {
      if ( !v32 )
      {
LABEL_17:
        v11 = *(_QWORD *)(a1 + 184);
        v12 = sub_8E92E0((__int64)v27);
        *(_DWORD *)sub_A1A4E0(v11, 8) = v12;
LABEL_18:
        v13 = 1;
        goto LABEL_19;
      }
    }
    else if ( v34 != 3 && !(v31[0] | v33) )
    {
      goto LABEL_17;
    }
    if ( !(unsigned __int8)sub_A1CE20(v27, v31) && (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) != 0 )
    {
      v13 = 0;
      goto LABEL_19;
    }
    v15 = v34;
    if ( !v30 )
    {
      if ( v28 )
        goto LABEL_26;
      switch ( v34 )
      {
        case 0:
          if ( v32 )
            goto LABEL_26;
LABEL_76:
          *(_DWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = 0;
          goto LABEL_18;
        case 2:
          goto LABEL_75;
        case 3:
          goto LABEL_26;
      }
      goto LABEL_79;
    }
    if ( v30 == 2 )
    {
      if ( v28 )
        goto LABEL_62;
      if ( v34 )
      {
        if ( v34 == 2 )
        {
LABEL_75:
          if ( !v32 )
            goto LABEL_76;
LABEL_81:
          if ( v30 )
            goto LABEL_62;
LABEL_26:
          if ( v27[0] == 0xFFFFFFFFLL )
            v16 = sub_8E9270((__int64)v27);
          else
            v16 = sub_8E92E0((__int64)v27);
LABEL_28:
          if ( !v15 )
            goto LABEL_29;
LABEL_41:
          v17 = sub_8E55C0(v31);
LABEL_31:
          *(_DWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v16 - v17;
          goto LABEL_18;
        }
        if ( v34 != 3 )
        {
LABEL_79:
          if ( !v33 && !v31[0] )
            goto LABEL_76;
          goto LABEL_81;
        }
LABEL_62:
        v16 = sub_8E55C0(v27);
        goto LABEL_28;
      }
    }
    else
    {
      if ( v30 == 3 || v27[0] | v29 )
        goto LABEL_62;
      if ( !v34 )
      {
        if ( v32 )
        {
          v16 = sub_8E55C0(v27);
LABEL_29:
          if ( v31[0] == 0xFFFFFFFFLL )
            v17 = sub_8E9270((__int64)v31);
          else
            v17 = sub_8E92E0((__int64)v31);
          goto LABEL_31;
        }
        goto LABEL_76;
      }
      if ( v34 != 2 )
      {
        if ( v34 == 3 || v33 || v31[0] )
        {
          v16 = sub_8E55C0(v27);
          goto LABEL_41;
        }
        goto LABEL_76;
      }
    }
    if ( !v32 )
      goto LABEL_76;
    goto LABEL_62;
  }
  v9 = *(_QWORD *)(v40 + 32);
  if ( *(_DWORD *)(v9 + 16) != v41 && v41 )
  {
    v19 = *(_QWORD *)(v40 + v41 + 32);
    goto LABEL_49;
  }
  v10 = v39;
  if ( *(_DWORD *)(v9 + 12) )
    goto LABEL_13;
LABEL_65:
  for ( i = sub_8E8FB0((__int64)v10); ; i = *(_QWORD *)(v21 + 32) )
  {
    v21 = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned __int8)(*(_BYTE *)(v21 + 16) - 2) > 4u )
      break;
  }
  v22 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
  v26 = 1;
  v25 = nullptr;
  v24 = sub_6C55D0(v22, i, (__int64)&v25, 0, 0, 0);
  if ( v26 > 0x40 && v25 )
    operator delete[](v25);
  v25 = (void *)sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
  v23 = (unsigned __int8 **)sub_A2E0C0(a1, &v25, 2275, 0);
  if ( v23 )
    sub_8D69A0(v23, v24);
  v13 = 0;
  sub_A1C0C0(v39);
  sub_A1C0C0(v35);
LABEL_19:
  sub_A1C0C0(v31);
  sub_A1C0C0(v27);
  return v13;
}

