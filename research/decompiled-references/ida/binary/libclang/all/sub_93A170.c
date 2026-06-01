__int64 __fastcall sub_93A170(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // r14
  __int64 v7; // rbp
  unsigned int v8; // r12d
  char v10; // r13
  unsigned int v11; // eax
  void *v12; // rdx
  void *v13; // rdi
  __int64 v14; // r14
  int v15; // r13d
  unsigned int v16; // eax
  int v17; // r13d
  void *v18; // rdx
  void *v19; // rdi
  __int64 v20; // rbp
  int v21; // r13d
  int v22; // r13d
  __int16 v23; // ax
  int v24; // esi
  unsigned int v25; // esi
  unsigned int v26; // eax
  void *v27; // rdx
  void *v28; // rdi
  __int64 v29; // rbp
  __int16 v30; // [rsp+1Eh] [rbp-7Ah] BYREF
  void *v31; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v32; // [rsp+28h] [rbp-70h]
  void *v33; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v34; // [rsp+38h] [rbp-60h]
  void *v35; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v36; // [rsp+48h] [rbp-50h]
  void *v37; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v38; // [rsp+58h] [rbp-40h]

  a1[100] = a2;
  v7 = a1[71];
  v3 = a1[99];
  v4 = sub_A1A5A0(v7, 16);
  v5 = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v4 + 8) = 0;
  v32 = v5;
  v31 = *(void **)v4;
  sub_A1A5E0(v7, 16);
  v6 = a1[71];
  LOWORD(v7) = *(_WORD *)sub_A1A5A0(v6, 8);
  sub_A1A5E0(v6, 8);
  v30 = v7;
  if ( (*(_BYTE *)(sub_A2CB40(a1 + 48) + 47) & 0x20) != 0 )
  {
    sub_92A4D0((__int64)&v37, 0xFu, v32);
    v36 = v32;
    if ( v32 > 0x40 )
      sub_2585B30(&v35);
    else
      v35 = v31;
    sub_8CC450((__int64)&v35, &v37, (__int64)&v31);
    if ( v36 > 0x40 && v35 )
      operator delete[](v35);
    if ( v38 > 0x40 && v37 )
      operator delete[](v37);
  }
  v8 = sub_939E00((__int64)(a1 + 48), v3, &v30, (__int64)&v31, 0x10u);
  if ( (_BYTE)v8 )
  {
    sub_92A4D0((__int64)&v37, 0xFu, v32);
    v10 = sub_922400((__int64)&v31, (__int64)&v37);
    if ( v38 > 0x40 && v37 )
      operator delete[](v37);
    if ( v10 != 3 )
    {
      if ( (v7 & 0x8000u) == 0LL )
      {
        v11 = v32;
        v34 = v32;
        if ( v32 > 0x40 )
        {
          sub_2585B30(&v33);
          v11 = v34;
          v36 = v34;
          if ( v34 > 0x40 )
          {
            sub_2585B30(&v35);
            v11 = v36;
LABEL_15:
            if ( v11 > 0x10 )
            {
              sub_25877E0(&v37, &v35, 16);
              v13 = v37;
              LOBYTE(v14) = (_BYTE)v37;
              if ( v38 <= 0x40 )
                goto LABEL_19;
              LOWORD(v14) = *(_WORD *)v37;
            }
            else
            {
              sub_2587D60(&v37, &v35);
              v13 = v37;
              LOBYTE(v14) = (_BYTE)v37;
              if ( v38 <= 0x40 || (v14 = *(_QWORD *)v37, !v37) )
              {
LABEL_19:
                if ( v36 > 0x40 && v35 )
                  operator delete[](v35);
                v15 = (__int16)v7 << v14;
                if ( v34 <= 0x40 )
                  goto LABEL_25;
                goto LABEL_23;
              }
            }
            operator delete[](v13);
            goto LABEL_19;
          }
          v12 = v33;
        }
        else
        {
          v12 = v31;
          v36 = v32;
          v33 = v31;
        }
        v35 = v12;
        goto LABEL_15;
      }
      LOWORD(v15) = 0;
      if ( (_WORD)v7 != 0x8000 )
      {
        v16 = v32;
        v17 = -(__int16)v7;
        v34 = v32;
        if ( v32 > 0x40 )
        {
          sub_2585B30(&v33);
          v16 = v34;
          v36 = v34;
          if ( v34 > 0x40 )
          {
            sub_2585B30(&v35);
            v16 = v36;
LABEL_38:
            if ( v16 <= 0x10 )
            {
              sub_2587D60(&v37, &v35);
              v19 = v37;
              LOBYTE(v20) = (_BYTE)v37;
              if ( v38 <= 0x40 )
                goto LABEL_42;
              v20 = *(_QWORD *)v37;
              if ( !v37 )
                goto LABEL_42;
            }
            else
            {
              sub_25877E0(&v37, &v35, 16);
              v19 = v37;
              LOBYTE(v20) = (_BYTE)v37;
              if ( v38 <= 0x40 )
                goto LABEL_42;
              LOWORD(v20) = *(_WORD *)v37;
            }
            operator delete[](v19);
LABEL_42:
            if ( v36 > 0x40 && v35 )
              operator delete[](v35);
            v21 = v17 << v20;
            if ( v34 > 0x40 && v33 )
              operator delete[](v33);
            v15 = -v21;
            goto LABEL_25;
          }
          v18 = v33;
        }
        else
        {
          v18 = v31;
          v36 = v32;
          v33 = v31;
        }
        v35 = v18;
        goto LABEL_38;
      }
LABEL_25:
      *(_WORD *)sub_A1A4E0(a1[71], 8) = v15;
      goto LABEL_3;
    }
    LOWORD(v15) = 0;
    if ( (v7 & 0x8000u) != 0LL )
      goto LABEL_25;
    if ( !(_WORD)v7 )
    {
      v25 = 16;
      v22 = 0;
      goto LABEL_58;
    }
    v22 = (__int16)v7;
    v23 = SBYTE1(v7);
    if ( BYTE1(v7) )
    {
      LODWORD(v7) = (__int16)v7 >> 12;
      if ( v22 >> 12 )
      {
        v25 = 0;
        LODWORD(v7) = (unsigned __int16)v7;
        if ( (unsigned int)v22 >> 14 )
          goto LABEL_86;
        goto LABEL_87;
      }
      LOWORD(v7) = v23;
      v24 = 0;
    }
    else
    {
      if ( (int)(unsigned __int8)v7 >> 4 )
      {
        LOWORD(v7) = (__int16)v7 >> 4;
        v25 = 8;
LABEL_55:
        LODWORD(v7) = (unsigned __int16)v7;
        if ( (int)(unsigned __int16)v7 >> 2 )
        {
          LODWORD(v7) = (int)(unsigned __int16)v7 >> 2;
          goto LABEL_57;
        }
LABEL_87:
        v25 |= 2u;
LABEL_57:
        if ( (unsigned int)v7 >> 1 )
        {
LABEL_58:
          sub_92A4D0((__int64)&v37, v25, v32);
          if ( v32 > 0x40 && v31 )
            operator delete[](v31);
          v26 = v38;
          v27 = v37;
          v32 = v38;
          v31 = v37;
          v34 = v38;
          if ( v38 > 0x40 )
          {
            sub_2585B30(&v33);
            v26 = v34;
            v36 = v34;
            if ( v34 > 0x40 )
            {
              sub_2585B30(&v35);
              v26 = v36;
LABEL_64:
              if ( v26 > 0x10 )
              {
                sub_25877E0(&v37, &v35, 16);
                v28 = v37;
                if ( v38 > 0x40 )
                {
                  LOWORD(v29) = *(_WORD *)v37;
                  goto LABEL_67;
                }
              }
              else
              {
                sub_2587D60(&v37, &v35);
                v28 = v37;
                if ( v38 > 0x40 )
                {
                  v29 = *(_QWORD *)v37;
                  if ( !v37 )
                  {
LABEL_68:
                    if ( v36 > 0x40 && v35 )
                      operator delete[](v35);
                    v15 = v22 << v29;
                    if ( v34 <= 0x40 )
                      goto LABEL_25;
LABEL_23:
                    if ( v33 )
                      operator delete[](v33);
                    goto LABEL_25;
                  }
LABEL_67:
                  operator delete[](v28);
                  goto LABEL_68;
                }
              }
              LOBYTE(v29) = (_BYTE)v28;
              goto LABEL_68;
            }
            v27 = v33;
          }
          else
          {
            v33 = v37;
            v36 = v38;
          }
          v35 = v27;
          goto LABEL_64;
        }
LABEL_86:
        v25 |= 1u;
        goto LABEL_58;
      }
      v24 = 8;
    }
    v25 = v24 | 4;
    goto LABEL_55;
  }
LABEL_3:
  if ( v32 > 0x40 && v31 )
    operator delete[](v31);
  return v8;
}

