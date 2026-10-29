__int64 __fastcall sub_95DA40(__int64 a1, __int64 a2)
{
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  void **v10; // rdi
  __int64 v11; // rax
  unsigned int v12; // ebx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  int v16; // edx
  int v17; // ecx
  __int64 v18; // rax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned __int64 i; // rsi
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int8 **v24; // rax
  unsigned __int64 v25; // [rsp+8h] [rbp-140h]
  void *v26; // [rsp+10h] [rbp-138h] BYREF
  unsigned int v27; // [rsp+18h] [rbp-130h]
  _QWORD v28[3]; // [rsp+20h] [rbp-128h] BYREF
  __int64 v29; // [rsp+38h] [rbp-110h]
  __int64 v30; // [rsp+40h] [rbp-108h]
  int v31; // [rsp+50h] [rbp-F8h]
  _QWORD v32[3]; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v33; // [rsp+78h] [rbp-D0h]
  __int64 v34; // [rsp+80h] [rbp-C8h]
  int v35; // [rsp+90h] [rbp-B8h]
  void *v36; // [rsp+A0h] [rbp-A8h] BYREF
  unsigned int v37; // [rsp+A8h] [rbp-A0h]
  int v38; // [rsp+D0h] [rbp-78h]
  _BYTE v39[48]; // [rsp+D8h] [rbp-70h] BYREF
  int v40; // [rsp+108h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 56);
  sub_A1C070(v28, v5);
  sub_A1A5E0(v4, 56);
  v6 = *(_QWORD *)(a1 + 184);
  v7 = sub_A1A5A0(v6, 56);
  sub_A1C070(v32, v7);
  sub_A1A5E0(v6, 56);
  sub_A1BFE0(&v36, v28);
  sub_A1BFE0(v39, v32);
  if ( v38 == 2 || (v8 = sub_8E5480((__int64)&v36)) == 0 || *(_DWORD *)(v8 + 12) )
  {
    if ( v40 == 2 || (v9 = sub_8E5480((__int64)v39)) == 0 || (v10 = (void **)v39, *(_DWORD *)(v9 + 12)) )
    {
      sub_A1C0C0(v39);
      sub_A1C0C0(&v36);
      if ( !v35 || v35 == 2 )
      {
        if ( !v33 )
        {
LABEL_11:
          v11 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 16);
          *(_DWORD *)(v11 + 8) = 0;
          *(_QWORD *)v11 = 0;
LABEL_12:
          v12 = 1;
          goto LABEL_13;
        }
      }
      else if ( v35 != 3 && !(v32[0] | v34) )
      {
        goto LABEL_11;
      }
      if ( !(unsigned __int8)sub_A1CE20(v28, v32) && (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) != 0 )
      {
        v12 = 0;
        goto LABEL_13;
      }
      if ( !v31 )
      {
        if ( v29 )
          goto LABEL_18;
        v16 = v35;
        if ( !v35 )
        {
          if ( !v33 )
            goto LABEL_37;
LABEL_18:
          if ( v28[0] == 0xFFFFFFFFLL )
          {
            v20 = sub_8E9270((__int64)v28);
            sub_92DD40((__int64)&v26, v20, 0);
          }
          else
          {
            v14 = sub_8E92E0((__int64)v28);
            sub_9251F0((__int64)&v26, v14, 0);
          }
          if ( !v35 )
            goto LABEL_21;
LABEL_49:
          v37 = 0;
          v36 = nullptr;
LABEL_23:
          v12 = sub_935370(a1, a2, v27, (__int64)&v26, (__int64)&v36);
          if ( v37 > 0x40 && v36 )
            operator delete[](v36);
          if ( v27 > 0x40 && v26 )
            operator delete[](v26);
          goto LABEL_13;
        }
        if ( v35 != 2 )
        {
          if ( v35 == 3 )
            goto LABEL_18;
          goto LABEL_54;
        }
LABEL_67:
        if ( !v33 )
          goto LABEL_37;
        goto LABEL_55;
      }
      v16 = v35;
      v17 = v35;
      if ( v31 == 2 )
      {
        if ( v29 )
          goto LABEL_48;
        if ( v35 )
        {
          if ( v35 == 2 )
            goto LABEL_67;
          if ( v35 != 3 )
          {
LABEL_54:
            if ( !v34 && !v32[0] )
              goto LABEL_37;
LABEL_55:
            if ( !v31 )
              goto LABEL_18;
            v17 = v16;
            goto LABEL_48;
          }
LABEL_47:
          v17 = v35;
          goto LABEL_48;
        }
      }
      else
      {
        if ( v31 == 3 || v28[0] | v30 )
          goto LABEL_48;
        if ( !v35 )
        {
          if ( v33 )
          {
            v27 = 0;
            v26 = nullptr;
            goto LABEL_21;
          }
LABEL_37:
          v18 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 16);
          *(_DWORD *)(v18 + 8) = 3;
          *(_QWORD *)v18 = 7;
          goto LABEL_12;
        }
        if ( v35 != 2 )
        {
          if ( v35 == 3 || v34 )
          {
            v27 = 0;
            v26 = nullptr;
            goto LABEL_49;
          }
          if ( !v32[0] )
            goto LABEL_37;
          goto LABEL_47;
        }
      }
      if ( !v33 )
        goto LABEL_37;
      v17 = v35;
LABEL_48:
      v27 = 0;
      v26 = nullptr;
      if ( v17 )
        goto LABEL_49;
LABEL_21:
      if ( v32[0] == 0xFFFFFFFFLL )
      {
        v19 = sub_8E9270((__int64)v32);
        sub_92DD40((__int64)&v36, v19, 0);
      }
      else
      {
        v15 = sub_8E92E0((__int64)v32);
        sub_9251F0((__int64)&v36, v15, 0);
      }
      goto LABEL_23;
    }
  }
  else
  {
    v10 = &v36;
  }
  for ( i = sub_8E8FB0((__int64)v10); ; i = *(_QWORD *)(v22 + 32) )
  {
    v22 = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned __int8)(*(_BYTE *)(v22 + 16) - 2) > 4u )
      break;
  }
  v23 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
  v27 = 1;
  v26 = nullptr;
  v25 = sub_6C55D0(v23, i, (__int64)&v26, 0, 0, 0);
  if ( v27 > 0x40 && v26 )
    operator delete[](v26);
  v26 = (void *)sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
  v24 = (unsigned __int8 **)sub_A2E0C0(a1, &v26, 2275, 0);
  if ( v24 )
    sub_8D69A0(v24, v25);
  v12 = 0;
  sub_A1C0C0(v39);
  sub_A1C0C0(&v36);
LABEL_13:
  sub_A1C0C0(v32);
  sub_A1C0C0(v28);
  return v12;
}

