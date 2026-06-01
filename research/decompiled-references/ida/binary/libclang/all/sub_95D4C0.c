__int64 __fastcall sub_95D4C0(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  void **v9; // rdi
  __int64 v10; // r13
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  unsigned int v13; // ebx
  void *v15; // rax
  int v16; // r14d
  void *v17; // rax
  void *v18; // rax
  __int64 v19; // rax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned __int64 i; // rsi
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int8 **v25; // rax
  unsigned __int64 v27; // [rsp+8h] [rbp-140h]
  void *v28; // [rsp+10h] [rbp-138h] BYREF
  unsigned int v29; // [rsp+18h] [rbp-130h]
  __int64 v30[3]; // [rsp+20h] [rbp-128h] BYREF
  __int64 v31; // [rsp+38h] [rbp-110h]
  __int64 v32; // [rsp+40h] [rbp-108h]
  int v33; // [rsp+50h] [rbp-F8h]
  __int64 v34[3]; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v35; // [rsp+78h] [rbp-D0h]
  __int64 v36; // [rsp+80h] [rbp-C8h]
  int v37; // [rsp+90h] [rbp-B8h]
  void *v38; // [rsp+A0h] [rbp-A8h] BYREF
  unsigned int v39; // [rsp+A8h] [rbp-A0h]
  int v40; // [rsp+D0h] [rbp-78h]
  _BYTE v41[48]; // [rsp+D8h] [rbp-70h] BYREF
  int v42; // [rsp+108h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 184);
  v4 = sub_A1A5A0(v3, 56);
  sub_A1C070(v30, v4);
  sub_A1A5E0(v3, 56);
  v5 = *(_QWORD *)(a1 + 184);
  v6 = sub_A1A5A0(v5, 56);
  sub_A1C070(v34, v6);
  sub_A1A5E0(v5, 56);
  sub_A1BFE0(&v38, v30);
  sub_A1BFE0(v41, v34);
  if ( v40 == 2 || (v7 = sub_8E5480((__int64)&v38)) == 0 || *(_DWORD *)(v7 + 12) )
  {
    if ( v42 == 2 || (v8 = sub_8E5480((__int64)v41)) == 0 || (v9 = (void **)v41, *(_DWORD *)(v8 + 12)) )
    {
      sub_A1C0C0(v41);
      sub_A1C0C0(&v38);
      if ( !v37 || v37 == 2 )
      {
        if ( !v35 )
        {
LABEL_11:
          v10 = *(_QWORD *)(a1 + 184);
          v11 = sub_8E92E0((__int64)v30);
          v12 = sub_A1A4E0(v10, 16);
          *(_DWORD *)(v12 + 8) = 0;
          *(_QWORD *)v12 = v11;
LABEL_12:
          v13 = 1;
          goto LABEL_13;
        }
      }
      else if ( v37 != 3 && !(v34[0] | v36) )
      {
        goto LABEL_11;
      }
      if ( !(unsigned __int8)sub_A1CE20(v30, v34) && (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) != 0 )
      {
        v13 = 0;
        goto LABEL_13;
      }
      if ( !v33 )
      {
        if ( v31 )
          goto LABEL_18;
        v16 = v37;
        if ( !v37 )
        {
          if ( !v35 )
            goto LABEL_43;
LABEL_18:
          if ( v30[0] == 0xFFFFFFFFLL )
          {
            v21 = sub_8E9270((__int64)v30);
            sub_92A4D0((__int64)&v28, v21, 0);
            v16 = v37;
          }
          else
          {
            v15 = (void *)sub_8E92E0((__int64)v30);
            v29 = 0;
            v16 = v37;
            v28 = v15;
          }
LABEL_20:
          if ( !v16 )
            goto LABEL_21;
LABEL_38:
          v18 = (void *)sub_8E55C0(v34);
          v39 = 0;
          v38 = v18;
LABEL_23:
          sub_8CCD90(a1, (__int64)&v28, (__int64)&v38);
          if ( v39 > 0x40 && v38 )
            operator delete[](v38);
          if ( v29 > 0x40 && v28 )
            operator delete[](v28);
          goto LABEL_12;
        }
        if ( v37 != 2 )
        {
          if ( v37 == 3 )
            goto LABEL_18;
LABEL_53:
          if ( !v36 && !v34[0] )
            goto LABEL_43;
          goto LABEL_54;
        }
        goto LABEL_66;
      }
      v16 = v37;
      if ( v33 == 2 )
      {
        if ( v31 )
          goto LABEL_48;
        if ( v37 )
        {
          if ( v37 != 2 )
          {
            if ( v37 == 3 )
              goto LABEL_48;
            goto LABEL_53;
          }
LABEL_66:
          v16 = 2;
          if ( !v35 )
            goto LABEL_43;
LABEL_54:
          if ( !v33 )
            goto LABEL_18;
LABEL_48:
          v29 = 0;
          v28 = (void *)sub_8E55C0(v30);
          goto LABEL_20;
        }
      }
      else
      {
        if ( v33 == 3 || v30[0] | v32 )
          goto LABEL_48;
        if ( !v37 )
        {
          if ( v35 )
          {
            v29 = 0;
            v28 = (void *)sub_8E55C0(v30);
LABEL_21:
            if ( v34[0] == 0xFFFFFFFFLL )
            {
              v20 = sub_8E9270((__int64)v34);
              sub_92A4D0((__int64)&v38, v20, 0);
            }
            else
            {
              v17 = (void *)sub_8E92E0((__int64)v34);
              v39 = 0;
              v38 = v17;
            }
            goto LABEL_23;
          }
          goto LABEL_43;
        }
        if ( v37 != 2 )
        {
          if ( v37 == 3 || v36 || v34[0] )
          {
            v29 = 0;
            v28 = (void *)sub_8E55C0(v30);
            goto LABEL_38;
          }
LABEL_43:
          v19 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 16);
          *(_DWORD *)(v19 + 8) = 3;
          *(_QWORD *)v19 = 7;
          goto LABEL_12;
        }
      }
      if ( !v35 )
        goto LABEL_43;
      goto LABEL_48;
    }
  }
  else
  {
    v9 = &v38;
  }
  for ( i = sub_8E8FB0((__int64)v9); ; i = *(_QWORD *)(v23 + 32) )
  {
    v23 = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned __int8)(*(_BYTE *)(v23 + 16) - 2) > 4u )
      break;
  }
  v24 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
  v29 = 1;
  v28 = nullptr;
  v27 = sub_6C55D0(v24, i, (__int64)&v28, 0, 0, 0);
  if ( v29 > 0x40 && v28 )
    operator delete[](v28);
  v28 = (void *)sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
  v25 = (unsigned __int8 **)sub_A2E0C0(a1, &v28, 2275, 0);
  if ( v25 )
    sub_8D69A0(v25, v27);
  v13 = 0;
  sub_A1C0C0(v41);
  sub_A1C0C0(&v38);
LABEL_13:
  sub_A1C0C0(v34);
  sub_A1C0C0(v30);
  return v13;
}

