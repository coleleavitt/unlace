__int64 __fastcall sub_970ED0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbp
  __int16 v4; // ax
  __int64 v5; // rax
  void *v6; // rcx
  __int64 v7; // r12
  unsigned __int64 v8; // rdx
  unsigned __int8 v9; // al
  bool v10; // cc
  unsigned __int64 v11; // rbp
  unsigned int v12; // edx
  __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned int v17; // eax
  void *v18; // rax
  unsigned __int64 v19; // rax
  int v20; // esi
  unsigned __int64 v21; // rax
  unsigned int v22; // edx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  void *v25; // [rsp+0h] [rbp-48h] BYREF
  int v26; // [rsp+8h] [rbp-40h]
  unsigned __int64 v27; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v28; // [rsp+18h] [rbp-30h]

  v3 = sub_BD7CB0(a3);
  v4 = *(_WORD *)v3 & 0x1FF;
  if ( v4 == 4 )
  {
    v5 = sub_BD7CB0(*(_QWORD *)(v3 + 16));
    if ( (*(_WORD *)v5 & 0x1FF) == 0x34 )
    {
      v6 = *(void **)(v5 + 16);
      v7 = *(unsigned int *)(v5 + 24);
      v8 = (unsigned __int64)(v7 + 63) >> 6;
      if ( v8 > 1 )
      {
        sub_21E18D0(&v25, (unsigned int)v7, v8, v6);
        LODWORD(v7) = v26;
      }
      else
      {
        v26 = *(_DWORD *)(v5 + 24);
        if ( (unsigned int)v7 <= 0x40 )
        {
          v25 = v6;
          v9 = *(_BYTE *)(v3 + 2) >> 3;
          v10 = v9 <= 7u;
          if ( v9 != 7 )
          {
LABEL_6:
            if ( !v10 )
            {
              if ( v9 != 8 )
              {
                if ( v9 == 9 )
                {
                  if ( (unsigned int)v7 <= 0x40 )
                    LOBYTE(v11) = v25 == nullptr;
                  else
                    LOBYTE(v11) = (unsigned int)sub_21E2A40(&v25) == (_DWORD)v7;
                  v11 = (unsigned __int8)v11;
                  v12 = sub_A73FE0(*a2, *(_QWORD *)(*(_QWORD *)(*a2 + 18720LL) & 0xFFFFFFFFFFFFFFF0LL));
                  v28 = v12;
                  if ( v12 > 0x40 )
                  {
                    sub_21E1730(&v27, (unsigned __int8)v11, 0);
                    v12 = v28;
                    v11 = v27;
                  }
                  *(_DWORD *)(a1 + 8) = v12;
                  LODWORD(v7) = v26;
                  *(_QWORD *)a1 = v11;
                  *(_BYTE *)(a1 + 16) = 1;
                  goto LABEL_37;
                }
                goto LABEL_36;
              }
              v28 = v7;
              if ( (unsigned int)v7 > 0x40 )
              {
                sub_21E17D0(&v27);
                LODWORD(v7) = v28;
                if ( v28 > 0x40 )
                {
                  sub_21E2280(&v27, &v25);
                  v21 = v27;
                  v22 = v28;
                  LODWORD(v7) = v26;
LABEL_35:
                  *(_DWORD *)(a1 + 8) = v22;
                  *(_QWORD *)a1 = v21;
                  *(_BYTE *)(a1 + 16) = 1;
                  goto LABEL_37;
                }
                v19 = v27;
                v20 = v26;
              }
              else
              {
                v19 = (unsigned __int64)v25;
                v20 = v7;
              }
              v21 = (0xFFFFFFFFFFFFFFFFLL >> -(char)v7) & ~v19;
              if ( !(_DWORD)v7 )
                v21 = 0;
              v22 = v7;
              LODWORD(v7) = v20;
              goto LABEL_35;
            }
            if ( v9 != 6 )
            {
LABEL_36:
              *(_BYTE *)(a1 + 16) = 0;
LABEL_37:
              if ( (unsigned int)v7 > 0x40 )
              {
                if ( v25 )
                  operator delete[](v25);
              }
              return a1;
            }
            v18 = v25;
            *(_DWORD *)(a1 + 8) = v7;
            *(_BYTE *)(a1 + 16) = 1;
            *(_QWORD *)a1 = v18;
            return a1;
          }
          v28 = v7;
          goto LABEL_42;
        }
        sub_21E1730(&v25, v6, 0);
        LODWORD(v7) = v26;
      }
      v9 = *(_BYTE *)(v3 + 2) >> 3;
      v10 = v9 <= 7u;
      if ( v9 != 7 )
        goto LABEL_6;
      v28 = v7;
      if ( (unsigned int)v7 > 0x40 )
      {
        sub_21E17D0(&v27);
        LODWORD(v7) = v28;
        if ( v28 > 0x40 )
        {
          sub_21E2280(&v27, &v25);
LABEL_26:
          sub_21E1BC0(&v27);
          v17 = v28;
          *(_BYTE *)(a1 + 16) = 1;
          LODWORD(v7) = v26;
          *(_DWORD *)(a1 + 8) = v17;
          *(_QWORD *)a1 = v27;
          goto LABEL_37;
        }
        v23 = v27;
LABEL_43:
        v24 = (0xFFFFFFFFFFFFFFFFLL >> -(char)v7) & ~v23;
        if ( !(_DWORD)v7 )
          v24 = 0;
        v27 = v24;
        goto LABEL_26;
      }
LABEL_42:
      v23 = (unsigned __int64)v25;
      goto LABEL_43;
    }
LABEL_14:
    *(_BYTE *)(a1 + 16) = 0;
    return a1;
  }
  if ( v4 != 52 )
    goto LABEL_14;
  v14 = *(unsigned int *)(v3 + 24);
  v15 = (unsigned __int64)(v14 + 63) >> 6;
  if ( v15 > 1 )
  {
    sub_21E18D0(&v27, v14, v15, *(_QWORD *)(v3 + 16));
    LODWORD(v14) = v28;
    v16 = v27;
  }
  else
  {
    v16 = *(_QWORD *)(v3 + 16);
    v28 = *(_DWORD *)(v3 + 24);
    if ( (unsigned int)v14 > 0x40 )
    {
      sub_21E1730(&v27, v16, 0);
      LODWORD(v14) = v28;
      v16 = v27;
    }
  }
  *(_QWORD *)a1 = v16;
  *(_DWORD *)(a1 + 8) = v14;
  *(_BYTE *)(a1 + 16) = 1;
  return a1;
}

