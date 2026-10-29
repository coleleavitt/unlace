__int64 __fastcall sub_9D3810(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // r13
  signed int v7; // r12d
  unsigned int v8; // ebp
  char v10; // r15
  unsigned int v11; // eax
  void *v12; // rdx
  int *v13; // rdi
  int v14; // r13d
  int v15; // r15d
  unsigned int v16; // eax
  int v17; // r15d
  void *v18; // rdx
  void *v19; // rdi
  int v20; // r12d
  int v21; // r15d
  int v22; // esi
  unsigned int v23; // esi
  unsigned int v24; // eax
  void *v25; // rdx
  signed int v26; // [rsp+1Ch] [rbp-7Ch] BYREF
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
  v7 = *(_DWORD *)sub_A1A5A0(v6, 8);
  sub_A1A5E0(v6, 8);
  v26 = v7;
  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    sub_92A4D0((__int64)&v33, 0x1Fu, v28);
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
  v8 = sub_93AF90(a1, a2, (unsigned int *)&v26, (__int64)&v27, 0x20u);
  if ( (_BYTE)v8 )
  {
    sub_92A4D0((__int64)&v33, 0x1Fu, v28);
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
            if ( v11 <= 0x20 )
            {
              sub_2587D60(&v33, &v31);
              v13 = (int *)v33;
              LOBYTE(v14) = (_BYTE)v33;
              if ( v34 <= 0x40 )
                goto LABEL_19;
LABEL_17:
              v14 = *v13;
              if ( !v13 )
                goto LABEL_19;
              goto LABEL_18;
            }
            goto LABEL_57;
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
      v15 = 0;
      if ( v7 != 0x80000000 )
      {
        v16 = v28;
        v17 = -v7;
        v30 = v28;
        if ( v28 > 0x40 )
        {
          sub_2585B30(&v29);
          v16 = v30;
          v32 = v30;
          if ( v30 > 0x40 )
          {
            sub_2585B30(&v31);
            v16 = v32;
LABEL_38:
            if ( v16 <= 0x20 )
            {
              sub_2587D60(&v33, &v31);
              v19 = v33;
              LOBYTE(v20) = (_BYTE)v33;
              if ( v34 <= 0x40 )
                goto LABEL_42;
              v20 = *(_DWORD *)v33;
              if ( !v33 )
                goto LABEL_42;
            }
            else
            {
              sub_25877E0(&v33, &v31, 32);
              v19 = v33;
              LOBYTE(v20) = (_BYTE)v33;
              if ( v34 <= 0x40 )
                goto LABEL_42;
              v20 = *(_DWORD *)v33;
            }
            operator delete[](v19);
LABEL_42:
            if ( v32 > 0x40 && v31 )
              operator delete[](v31);
            v21 = v17 << v20;
            if ( v30 > 0x40 && v29 )
              operator delete[](v29);
            v15 = -v21;
            goto LABEL_25;
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
        goto LABEL_38;
      }
LABEL_25:
      *(_DWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v15;
      goto LABEL_3;
    }
    v15 = 0;
    if ( v7 < 0 )
      goto LABEL_25;
    v22 = 32;
    if ( v7 )
    {
      _BitScanReverse(&v23, v7);
      v22 = v23 ^ 0x1F;
    }
    sub_92A4D0((__int64)&v33, v22, v28);
    if ( v28 > 0x40 && v27 )
      operator delete[](v27);
    v24 = v34;
    v25 = v33;
    v28 = v34;
    v27 = v33;
    v30 = v34;
    if ( v34 > 0x40 )
    {
      sub_2585B30(&v29);
      v24 = v30;
      v32 = v30;
      if ( v30 > 0x40 )
      {
        sub_2585B30(&v31);
        v24 = v32;
LABEL_56:
        if ( v24 <= 0x20 )
        {
          sub_2587D60(&v33, &v31);
          v13 = (int *)v33;
          if ( v34 > 0x40 )
            goto LABEL_17;
LABEL_61:
          LOBYTE(v14) = (_BYTE)v13;
LABEL_19:
          if ( v32 > 0x40 && v31 )
            operator delete[](v31);
          v15 = v7 << v14;
          if ( v30 > 0x40 && v29 )
            operator delete[](v29);
          goto LABEL_25;
        }
LABEL_57:
        sub_25877E0(&v33, &v31, 32);
        v13 = (int *)v33;
        if ( v34 > 0x40 )
        {
          v14 = *(_DWORD *)v33;
LABEL_18:
          operator delete[](v13);
          goto LABEL_19;
        }
        goto LABEL_61;
      }
      v25 = v29;
    }
    else
    {
      v29 = v33;
      v32 = v34;
    }
    v31 = v25;
    goto LABEL_56;
  }
LABEL_3:
  if ( v28 > 0x40 && v27 )
    operator delete[](v27);
  return v8;
}

