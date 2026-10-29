__int64 __fastcall sub_9385A0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r13
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rbp
  char v8; // r14
  unsigned int v9; // r12d
  char v11; // r13
  unsigned int v12; // eax
  void *v13; // rdx
  void *v14; // rdi
  __int64 v15; // rbp
  int v16; // r13d
  int v17; // r13d
  unsigned int v18; // eax
  void *v19; // rdx
  void *v20; // rdi
  __int64 v21; // rbp
  unsigned int v22; // esi
  unsigned int v23; // eax
  unsigned int v24; // eax
  void *v25; // rdx
  void *v26; // rdi
  char v27; // [rsp+1Fh] [rbp-79h] BYREF
  void *v28; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v29; // [rsp+28h] [rbp-70h]
  void *v30; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v31; // [rsp+38h] [rbp-60h]
  void *v32; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v33; // [rsp+48h] [rbp-50h]
  void *v34; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v35; // [rsp+58h] [rbp-40h]

  a1[100] = a2;
  v3 = a1[71];
  v4 = a1[99];
  v5 = sub_A1A5A0(v3, 16);
  v6 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = 0;
  v29 = v6;
  v28 = *(void **)v5;
  sub_A1A5E0(v3, 16);
  v7 = a1[71];
  v8 = *(_BYTE *)sub_A1A5A0(v7, 8);
  sub_A1A5E0(v7, 8);
  v27 = v8;
  if ( (*(_BYTE *)(sub_A2CB40(a1 + 48) + 47) & 0x20) != 0 )
  {
    sub_92A4D0((__int64)&v34, 7u, v29);
    v33 = v29;
    if ( v29 > 0x40 )
      sub_2585B30(&v32);
    else
      v32 = v28;
    sub_8CC450((__int64)&v32, &v34, (__int64)&v28);
    if ( v33 > 0x40 && v32 )
      operator delete[](v32);
    if ( v35 > 0x40 && v34 )
      operator delete[](v34);
  }
  v9 = sub_938260((__int64)(a1 + 48), v4, &v27, (__int64)&v28, 8u);
  if ( (_BYTE)v9 )
  {
    sub_92A4D0((__int64)&v34, 7u, v29);
    v11 = sub_922400((__int64)&v28, (__int64)&v34);
    if ( v35 > 0x40 && v34 )
      operator delete[](v34);
    if ( v11 != 3 )
    {
      if ( v8 >= 0 )
      {
        v12 = v29;
        v31 = v29;
        if ( v29 > 0x40 )
        {
          sub_2585B30(&v30);
          v12 = v31;
          v33 = v31;
          if ( v31 > 0x40 )
          {
            sub_2585B30(&v32);
            v12 = v33;
LABEL_15:
            if ( v12 > 8 )
            {
              sub_25877E0(&v34, &v32, 8);
              v14 = v34;
              LOBYTE(v15) = (_BYTE)v34;
              if ( v35 <= 0x40 )
              {
LABEL_19:
                if ( v33 > 0x40 && v32 )
                  operator delete[](v32);
                v16 = v8;
LABEL_23:
                v17 = v16 << v15;
                if ( v31 > 0x40 && v30 )
                  operator delete[](v30);
                goto LABEL_26;
              }
              LOBYTE(v15) = *(_BYTE *)v34;
            }
            else
            {
              sub_2587D60(&v34, &v32);
              v14 = v34;
              LOBYTE(v15) = (_BYTE)v34;
              if ( v35 <= 0x40 )
                goto LABEL_19;
              v15 = *(_QWORD *)v34;
              if ( !v34 )
                goto LABEL_19;
            }
            operator delete[](v14);
            goto LABEL_19;
          }
          v13 = v30;
        }
        else
        {
          v13 = v28;
          v33 = v29;
          v30 = v28;
        }
        v32 = v13;
        goto LABEL_15;
      }
      LOBYTE(v17) = 0;
      if ( v8 != (char)0x80 )
      {
        v18 = v29;
        v31 = v29;
        if ( v29 > 0x40 )
        {
          sub_2585B30(&v30);
          v18 = v31;
          v33 = v31;
          if ( v31 > 0x40 )
          {
            sub_2585B30(&v32);
            v18 = v33;
LABEL_39:
            if ( v18 <= 8 )
            {
              sub_2587D60(&v34, &v32);
              v20 = v34;
              LOBYTE(v21) = (_BYTE)v34;
              if ( v35 <= 0x40 )
                goto LABEL_43;
              v21 = *(_QWORD *)v34;
              if ( !v34 )
                goto LABEL_43;
            }
            else
            {
              sub_25877E0(&v34, &v32, 8);
              v20 = v34;
              LOBYTE(v21) = (_BYTE)v34;
              if ( v35 <= 0x40 )
                goto LABEL_43;
              LOBYTE(v21) = *(_BYTE *)v34;
            }
            operator delete[](v20);
LABEL_43:
            if ( v33 > 0x40 && v32 )
              operator delete[](v32);
            if ( v31 > 0x40 && v30 )
              operator delete[](v30);
            v17 = -(-v8 << v21);
            goto LABEL_26;
          }
          v19 = v30;
        }
        else
        {
          v19 = v28;
          v33 = v29;
          v30 = v28;
        }
        v32 = v19;
        goto LABEL_39;
      }
LABEL_26:
      *(_BYTE *)sub_A1A4E0(a1[71], 8) = v17;
      goto LABEL_3;
    }
    LOBYTE(v17) = 0;
    if ( v8 < 0 )
      goto LABEL_26;
    v16 = v8;
    v22 = 8;
    if ( v8 )
    {
      v23 = v8 >> 4;
      if ( v23 )
      {
        v22 = 1;
        if ( (unsigned int)v8 >> 6 )
          goto LABEL_57;
        v22 = 2;
      }
      else
      {
        v23 = v8;
        v22 = 6;
        if ( v8 >> 2 )
        {
          v23 = v8 >> 2;
          v22 = 4;
        }
      }
      if ( !(v23 >> 1) )
        v22 |= 1u;
    }
LABEL_57:
    sub_92A4D0((__int64)&v34, v22, v29);
    if ( v29 > 0x40 && v28 )
      operator delete[](v28);
    v24 = v35;
    v25 = v34;
    v29 = v35;
    v28 = v34;
    v31 = v35;
    if ( v35 > 0x40 )
    {
      sub_2585B30(&v30);
      v24 = v31;
      v33 = v31;
      if ( v31 > 0x40 )
      {
        sub_2585B30(&v32);
        v24 = v33;
LABEL_61:
        if ( v24 <= 8 )
        {
          sub_2587D60(&v34, &v32);
          v26 = v34;
          LOBYTE(v15) = (_BYTE)v34;
          if ( v35 > 0x40 )
          {
            v15 = *(_QWORD *)v34;
            if ( v34 )
              goto LABEL_64;
          }
        }
        else
        {
          sub_25877E0(&v34, &v32, 8);
          v26 = v34;
          LOBYTE(v15) = (_BYTE)v34;
          if ( v35 > 0x40 )
          {
            LOBYTE(v15) = *(_BYTE *)v34;
LABEL_64:
            operator delete[](v26);
          }
        }
        if ( v33 > 0x40 && v32 )
          operator delete[](v32);
        goto LABEL_23;
      }
      v25 = v30;
    }
    else
    {
      v30 = v34;
      v33 = v35;
    }
    v32 = v25;
    goto LABEL_61;
  }
LABEL_3:
  if ( v29 > 0x40 && v28 )
    operator delete[](v28);
  return v9;
}

