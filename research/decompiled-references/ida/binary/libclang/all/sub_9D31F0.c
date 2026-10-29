__int64 __fastcall sub_9D31F0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // r13
  __int64 v6; // r12
  unsigned int v7; // ebp
  char v9; // r15
  unsigned int v10; // eax
  void *v11; // rdx
  void *v12; // rdi
  __int64 v13; // r13
  int v14; // r15d
  unsigned int v15; // eax
  int v16; // r15d
  void *v17; // rdx
  void *v18; // rdi
  __int64 v19; // r12
  int v20; // r15d
  int v21; // r15d
  __int16 v22; // ax
  int v23; // esi
  unsigned int v24; // esi
  unsigned int v25; // eax
  void *v26; // rdx
  void *v27; // rdi
  __int64 v28; // r12
  __int16 v29; // [rsp+1Eh] [rbp-7Ah] BYREF
  void *v30; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v31; // [rsp+28h] [rbp-70h]
  void *v32; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v33; // [rsp+38h] [rbp-60h]
  void *v34; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v35; // [rsp+48h] [rbp-50h]
  void *v36; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v37; // [rsp+58h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v6, 16);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v31 = v4;
  v30 = *(void **)v3;
  sub_A1A5E0(v6, 16);
  v5 = *(_QWORD *)(a1 + 184);
  LOWORD(v6) = *(_WORD *)sub_A1A5A0(v5, 8);
  sub_A1A5E0(v5, 8);
  v29 = v6;
  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    sub_92A4D0((__int64)&v36, 0xFu, v31);
    v35 = v31;
    if ( v31 > 0x40 )
      sub_2585B30(&v34);
    else
      v34 = v30;
    sub_9A31A0((__int64)&v34, &v36, (__int64)&v30);
    if ( v35 > 0x40 && v34 )
      operator delete[](v34);
    if ( v37 > 0x40 && v36 )
      operator delete[](v36);
  }
  v7 = sub_939E00(a1, a2, &v29, (__int64)&v30, 0x10u);
  if ( (_BYTE)v7 )
  {
    sub_92A4D0((__int64)&v36, 0xFu, v31);
    v9 = sub_922400((__int64)&v30, (__int64)&v36);
    if ( v37 > 0x40 && v36 )
      operator delete[](v36);
    if ( v9 != 3 )
    {
      if ( (v6 & 0x8000u) == 0LL )
      {
        v10 = v31;
        v33 = v31;
        if ( v31 > 0x40 )
        {
          sub_2585B30(&v32);
          v10 = v33;
          v35 = v33;
          if ( v33 > 0x40 )
          {
            sub_2585B30(&v34);
            v10 = v35;
LABEL_15:
            if ( v10 > 0x10 )
            {
              sub_25877E0(&v36, &v34, 16);
              v12 = v36;
              LOBYTE(v13) = (_BYTE)v36;
              if ( v37 <= 0x40 )
                goto LABEL_19;
              LOWORD(v13) = *(_WORD *)v36;
            }
            else
            {
              sub_2587D60(&v36, &v34);
              v12 = v36;
              LOBYTE(v13) = (_BYTE)v36;
              if ( v37 <= 0x40 || (v13 = *(_QWORD *)v36, !v36) )
              {
LABEL_19:
                if ( v35 > 0x40 && v34 )
                  operator delete[](v34);
                v14 = (__int16)v6 << v13;
                if ( v33 <= 0x40 )
                  goto LABEL_25;
                goto LABEL_23;
              }
            }
            operator delete[](v12);
            goto LABEL_19;
          }
          v11 = v32;
        }
        else
        {
          v11 = v30;
          v35 = v31;
          v32 = v30;
        }
        v34 = v11;
        goto LABEL_15;
      }
      LOWORD(v14) = 0;
      if ( (_WORD)v6 != 0x8000 )
      {
        v15 = v31;
        v16 = -(__int16)v6;
        v33 = v31;
        if ( v31 > 0x40 )
        {
          sub_2585B30(&v32);
          v15 = v33;
          v35 = v33;
          if ( v33 > 0x40 )
          {
            sub_2585B30(&v34);
            v15 = v35;
LABEL_38:
            if ( v15 <= 0x10 )
            {
              sub_2587D60(&v36, &v34);
              v18 = v36;
              LOBYTE(v19) = (_BYTE)v36;
              if ( v37 <= 0x40 )
                goto LABEL_42;
              v19 = *(_QWORD *)v36;
              if ( !v36 )
                goto LABEL_42;
            }
            else
            {
              sub_25877E0(&v36, &v34, 16);
              v18 = v36;
              LOBYTE(v19) = (_BYTE)v36;
              if ( v37 <= 0x40 )
                goto LABEL_42;
              LOWORD(v19) = *(_WORD *)v36;
            }
            operator delete[](v18);
LABEL_42:
            if ( v35 > 0x40 && v34 )
              operator delete[](v34);
            v20 = v16 << v19;
            if ( v33 > 0x40 && v32 )
              operator delete[](v32);
            v14 = -v20;
            goto LABEL_25;
          }
          v17 = v32;
        }
        else
        {
          v17 = v30;
          v35 = v31;
          v32 = v30;
        }
        v34 = v17;
        goto LABEL_38;
      }
LABEL_25:
      *(_WORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v14;
      goto LABEL_3;
    }
    LOWORD(v14) = 0;
    if ( (v6 & 0x8000u) != 0LL )
      goto LABEL_25;
    if ( !(_WORD)v6 )
    {
      v24 = 16;
      v21 = 0;
      goto LABEL_58;
    }
    v21 = (__int16)v6;
    v22 = SBYTE1(v6);
    if ( BYTE1(v6) )
    {
      LODWORD(v6) = (__int16)v6 >> 12;
      if ( v21 >> 12 )
      {
        v24 = 0;
        LODWORD(v6) = (unsigned __int16)v6;
        if ( (unsigned int)v21 >> 14 )
          goto LABEL_86;
        goto LABEL_87;
      }
      LOWORD(v6) = v22;
      v23 = 0;
    }
    else
    {
      if ( (int)(unsigned __int8)v6 >> 4 )
      {
        LOWORD(v6) = (__int16)v6 >> 4;
        v24 = 8;
LABEL_55:
        LODWORD(v6) = (unsigned __int16)v6;
        if ( (int)(unsigned __int16)v6 >> 2 )
        {
          LODWORD(v6) = (int)(unsigned __int16)v6 >> 2;
          goto LABEL_57;
        }
LABEL_87:
        v24 |= 2u;
LABEL_57:
        if ( (unsigned int)v6 >> 1 )
        {
LABEL_58:
          sub_92A4D0((__int64)&v36, v24, v31);
          if ( v31 > 0x40 && v30 )
            operator delete[](v30);
          v25 = v37;
          v26 = v36;
          v31 = v37;
          v30 = v36;
          v33 = v37;
          if ( v37 > 0x40 )
          {
            sub_2585B30(&v32);
            v25 = v33;
            v35 = v33;
            if ( v33 > 0x40 )
            {
              sub_2585B30(&v34);
              v25 = v35;
LABEL_64:
              if ( v25 > 0x10 )
              {
                sub_25877E0(&v36, &v34, 16);
                v27 = v36;
                if ( v37 > 0x40 )
                {
                  LOWORD(v28) = *(_WORD *)v36;
                  goto LABEL_67;
                }
              }
              else
              {
                sub_2587D60(&v36, &v34);
                v27 = v36;
                if ( v37 > 0x40 )
                {
                  v28 = *(_QWORD *)v36;
                  if ( !v36 )
                  {
LABEL_68:
                    if ( v35 > 0x40 && v34 )
                      operator delete[](v34);
                    v14 = v21 << v28;
                    if ( v33 <= 0x40 )
                      goto LABEL_25;
LABEL_23:
                    if ( v32 )
                      operator delete[](v32);
                    goto LABEL_25;
                  }
LABEL_67:
                  operator delete[](v27);
                  goto LABEL_68;
                }
              }
              LOBYTE(v28) = (_BYTE)v27;
              goto LABEL_68;
            }
            v26 = v32;
          }
          else
          {
            v32 = v36;
            v35 = v37;
          }
          v34 = v26;
          goto LABEL_64;
        }
LABEL_86:
        v24 |= 1u;
        goto LABEL_58;
      }
      v23 = 8;
    }
    v24 = v23 | 4;
    goto LABEL_55;
  }
LABEL_3:
  if ( v31 > 0x40 && v30 )
    operator delete[](v30);
  return v7;
}

