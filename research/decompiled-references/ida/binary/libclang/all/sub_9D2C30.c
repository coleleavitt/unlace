__int64 __fastcall sub_9D2C30(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // r12
  char v7; // r13
  unsigned int v8; // ebp
  char v10; // r15
  unsigned int v11; // eax
  void *v12; // rdx
  void *v13; // rdi
  __int64 v14; // r12
  int v15; // r15d
  int v16; // r15d
  unsigned int v17; // eax
  void *v18; // rdx
  void *v19; // rdi
  __int64 v20; // r12
  unsigned int v21; // esi
  unsigned int v22; // eax
  unsigned int v23; // eax
  void *v24; // rdx
  void *v25; // rdi
  char v26; // [rsp+1Fh] [rbp-79h] BYREF
  void *v27; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v28; // [rsp+28h] [rbp-70h]
  void *v29; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v30; // [rsp+38h] [rbp-60h]
  void *v31; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v32; // [rsp+48h] [rbp-50h]
  void *v33; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v34; // [rsp+58h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 184);
  v4 = sub_A1A5A0(v3, 16);
  v5 = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v4 + 8) = 0;
  v28 = v5;
  v27 = *(void **)v4;
  sub_A1A5E0(v3, 16);
  v6 = *(_QWORD *)(a1 + 184);
  v7 = *(_BYTE *)sub_A1A5A0(v6, 8);
  sub_A1A5E0(v6, 8);
  v26 = v7;
  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    sub_92A4D0((__int64)&v33, 7u, v28);
    v32 = v28;
    if ( v28 > 0x40 )
      sub_2585B30(&v31);
    else
      v31 = v27;
    sub_9A31A0((__int64)&v31, &v33, (__int64)&v27);
    if ( v32 > 0x40 && v31 )
      operator delete[](v31);
    if ( v34 > 0x40 && v33 )
      operator delete[](v33);
  }
  v8 = sub_938260(a1, a2, &v26, (__int64)&v27, 8u);
  if ( (_BYTE)v8 )
  {
    sub_92A4D0((__int64)&v33, 7u, v28);
    v10 = sub_922400((__int64)&v27, (__int64)&v33);
    if ( v34 > 0x40 && v33 )
      operator delete[](v33);
    if ( v10 != 3 )
    {
      if ( v7 >= 0 )
      {
        v11 = v28;
        v30 = v28;
        if ( v28 > 0x40 )
        {
          sub_2585B30(&v29);
          v11 = v30;
          v32 = v30;
          if ( v30 > 0x40 )
          {
            sub_2585B30(&v31);
            v11 = v32;
LABEL_15:
            if ( v11 > 8 )
            {
              sub_25877E0(&v33, &v31, 8);
              v13 = v33;
              LOBYTE(v14) = (_BYTE)v33;
              if ( v34 <= 0x40 )
              {
LABEL_19:
                if ( v32 > 0x40 && v31 )
                  operator delete[](v31);
                v15 = v7;
LABEL_23:
                v16 = v15 << v14;
                if ( v30 > 0x40 && v29 )
                  operator delete[](v29);
                goto LABEL_26;
              }
              LOBYTE(v14) = *(_BYTE *)v33;
            }
            else
            {
              sub_2587D60(&v33, &v31);
              v13 = v33;
              LOBYTE(v14) = (_BYTE)v33;
              if ( v34 <= 0x40 )
                goto LABEL_19;
              v14 = *(_QWORD *)v33;
              if ( !v33 )
                goto LABEL_19;
            }
            operator delete[](v13);
            goto LABEL_19;
          }
          v12 = v29;
        }
        else
        {
          v12 = v27;
          v32 = v28;
          v29 = v27;
        }
        v31 = v12;
        goto LABEL_15;
      }
      LOBYTE(v16) = 0;
      if ( v7 != (char)0x80 )
      {
        v17 = v28;
        v30 = v28;
        if ( v28 > 0x40 )
        {
          sub_2585B30(&v29);
          v17 = v30;
          v32 = v30;
          if ( v30 > 0x40 )
          {
            sub_2585B30(&v31);
            v17 = v32;
LABEL_39:
            if ( v17 <= 8 )
            {
              sub_2587D60(&v33, &v31);
              v19 = v33;
              LOBYTE(v20) = (_BYTE)v33;
              if ( v34 <= 0x40 )
                goto LABEL_43;
              v20 = *(_QWORD *)v33;
              if ( !v33 )
                goto LABEL_43;
            }
            else
            {
              sub_25877E0(&v33, &v31, 8);
              v19 = v33;
              LOBYTE(v20) = (_BYTE)v33;
              if ( v34 <= 0x40 )
                goto LABEL_43;
              LOBYTE(v20) = *(_BYTE *)v33;
            }
            operator delete[](v19);
LABEL_43:
            if ( v32 > 0x40 && v31 )
              operator delete[](v31);
            if ( v30 > 0x40 && v29 )
              operator delete[](v29);
            v16 = -(-v7 << v20);
            goto LABEL_26;
          }
          v18 = v29;
        }
        else
        {
          v18 = v27;
          v32 = v28;
          v29 = v27;
        }
        v31 = v18;
        goto LABEL_39;
      }
LABEL_26:
      *(_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v16;
      goto LABEL_3;
    }
    LOBYTE(v16) = 0;
    if ( v7 < 0 )
      goto LABEL_26;
    v15 = v7;
    v21 = 8;
    if ( v7 )
    {
      v22 = v7 >> 4;
      if ( v22 )
      {
        v21 = 1;
        if ( (unsigned int)v7 >> 6 )
          goto LABEL_57;
        v21 = 2;
      }
      else
      {
        v22 = v7;
        v21 = 6;
        if ( v7 >> 2 )
        {
          v22 = v7 >> 2;
          v21 = 4;
        }
      }
      if ( !(v22 >> 1) )
        v21 |= 1u;
    }
LABEL_57:
    sub_92A4D0((__int64)&v33, v21, v28);
    if ( v28 > 0x40 && v27 )
      operator delete[](v27);
    v23 = v34;
    v24 = v33;
    v28 = v34;
    v27 = v33;
    v30 = v34;
    if ( v34 > 0x40 )
    {
      sub_2585B30(&v29);
      v23 = v30;
      v32 = v30;
      if ( v30 > 0x40 )
      {
        sub_2585B30(&v31);
        v23 = v32;
LABEL_61:
        if ( v23 <= 8 )
        {
          sub_2587D60(&v33, &v31);
          v25 = v33;
          LOBYTE(v14) = (_BYTE)v33;
          if ( v34 > 0x40 )
          {
            v14 = *(_QWORD *)v33;
            if ( v33 )
              goto LABEL_64;
          }
        }
        else
        {
          sub_25877E0(&v33, &v31, 8);
          v25 = v33;
          LOBYTE(v14) = (_BYTE)v33;
          if ( v34 > 0x40 )
          {
            LOBYTE(v14) = *(_BYTE *)v33;
LABEL_64:
            operator delete[](v25);
          }
        }
        if ( v32 > 0x40 && v31 )
          operator delete[](v31);
        goto LABEL_23;
      }
      v24 = v29;
    }
    else
    {
      v29 = v33;
      v32 = v34;
    }
    v31 = v24;
    goto LABEL_61;
  }
LABEL_3:
  if ( v28 > 0x40 && v27 )
    operator delete[](v27);
  return v8;
}

