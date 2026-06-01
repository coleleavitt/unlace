__int64 __fastcall sub_93B290(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r13
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // r14
  signed int v8; // ebp
  unsigned int v9; // r12d
  char v11; // r13
  unsigned int v12; // eax
  void *v13; // rdx
  int *v14; // rdi
  int v15; // r13d
  int v16; // r13d
  unsigned int v17; // eax
  int v18; // r13d
  void *v19; // rdx
  void *v20; // rdi
  int v21; // ebp
  int v22; // r13d
  int v23; // esi
  unsigned int v24; // esi
  unsigned int v25; // eax
  void *v26; // rdx
  signed int v27; // [rsp+1Ch] [rbp-7Ch] BYREF
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
  v8 = *(_DWORD *)sub_A1A5A0(v7, 8);
  sub_A1A5E0(v7, 8);
  v27 = v8;
  if ( (*(_BYTE *)(sub_A2CB40(a1 + 48) + 47) & 0x20) != 0 )
  {
    sub_92A4D0((__int64)&v34, 0x1Fu, v29);
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
  v9 = sub_93AF90((__int64)(a1 + 48), v4, (unsigned int *)&v27, (__int64)&v28, 0x20u);
  if ( (_BYTE)v9 )
  {
    sub_92A4D0((__int64)&v34, 0x1Fu, v29);
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
            if ( v12 <= 0x20 )
            {
              sub_2587D60(&v34, &v32);
              v14 = (int *)v34;
              LOBYTE(v15) = (_BYTE)v34;
              if ( v35 <= 0x40 )
                goto LABEL_19;
LABEL_17:
              v15 = *v14;
              if ( !v14 )
                goto LABEL_19;
              goto LABEL_18;
            }
            goto LABEL_57;
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
      v16 = 0;
      if ( v8 != 0x80000000 )
      {
        v17 = v29;
        v18 = -v8;
        v31 = v29;
        if ( v29 > 0x40 )
        {
          sub_2585B30(&v30);
          v17 = v31;
          v33 = v31;
          if ( v31 > 0x40 )
          {
            sub_2585B30(&v32);
            v17 = v33;
LABEL_38:
            if ( v17 <= 0x20 )
            {
              sub_2587D60(&v34, &v32);
              v20 = v34;
              LOBYTE(v21) = (_BYTE)v34;
              if ( v35 <= 0x40 )
                goto LABEL_42;
              v21 = *(_DWORD *)v34;
              if ( !v34 )
                goto LABEL_42;
            }
            else
            {
              sub_25877E0(&v34, &v32, 32);
              v20 = v34;
              LOBYTE(v21) = (_BYTE)v34;
              if ( v35 <= 0x40 )
                goto LABEL_42;
              v21 = *(_DWORD *)v34;
            }
            operator delete[](v20);
LABEL_42:
            if ( v33 > 0x40 && v32 )
              operator delete[](v32);
            v22 = v18 << v21;
            if ( v31 > 0x40 && v30 )
              operator delete[](v30);
            v16 = -v22;
            goto LABEL_25;
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
        goto LABEL_38;
      }
LABEL_25:
      *(_DWORD *)sub_A1A4E0(a1[71], 8) = v16;
      goto LABEL_3;
    }
    v16 = 0;
    if ( v8 < 0 )
      goto LABEL_25;
    v23 = 32;
    if ( v8 )
    {
      _BitScanReverse(&v24, v8);
      v23 = v24 ^ 0x1F;
    }
    sub_92A4D0((__int64)&v34, v23, v29);
    if ( v29 > 0x40 && v28 )
      operator delete[](v28);
    v25 = v35;
    v26 = v34;
    v29 = v35;
    v28 = v34;
    v31 = v35;
    if ( v35 > 0x40 )
    {
      sub_2585B30(&v30);
      v25 = v31;
      v33 = v31;
      if ( v31 > 0x40 )
      {
        sub_2585B30(&v32);
        v25 = v33;
LABEL_56:
        if ( v25 <= 0x20 )
        {
          sub_2587D60(&v34, &v32);
          v14 = (int *)v34;
          if ( v35 > 0x40 )
            goto LABEL_17;
LABEL_61:
          LOBYTE(v15) = (_BYTE)v14;
LABEL_19:
          if ( v33 > 0x40 && v32 )
            operator delete[](v32);
          v16 = v8 << v15;
          if ( v31 > 0x40 && v30 )
            operator delete[](v30);
          goto LABEL_25;
        }
LABEL_57:
        sub_25877E0(&v34, &v32, 32);
        v14 = (int *)v34;
        if ( v35 > 0x40 )
        {
          v15 = *(_DWORD *)v34;
LABEL_18:
          operator delete[](v14);
          goto LABEL_19;
        }
        goto LABEL_61;
      }
      v26 = v30;
    }
    else
    {
      v30 = v34;
      v33 = v35;
    }
    v32 = v26;
    goto LABEL_56;
  }
LABEL_3:
  if ( v29 > 0x40 && v28 )
    operator delete[](v28);
  return v9;
}

