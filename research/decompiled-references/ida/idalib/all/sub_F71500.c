void __fastcall sub_F71500(unsigned __int64 *a1, __int64 a2, __int64 a3, char a4)
{
  char v6; // r13
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  _BYTE *v12; // rax
  __int64 v13; // rdx
  _BYTE *v14; // rax
  const char *v15; // rsi
  unsigned __int64 v16; // rax
  char v17; // dl
  _BYTE *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _BYTE *v21; // rax
  _BYTE *v22; // rax
  int v23; // ecx
  _BYTE *v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  int v27; // [rsp+Ch] [rbp-6Ch]
  int v28; // [rsp+Ch] [rbp-6Ch]
  int v29; // [rsp+1Ch] [rbp-5Ch] BYREF
  void *v30; // [rsp+20h] [rbp-58h] BYREF
  __int64 v31; // [rsp+28h] [rbp-50h]
  __int64 v32; // [rsp+30h] [rbp-48h] BYREF

  v6 = a4;
  v8 = *a1;
  if ( (*a1 & 7) != 0 )
  {
    sub_F6EE50(a2, *(_BYTE *)a1 & 7, (*(_BYTE *)(a3 + 3) & 4) != 0);
    v9 = *a1;
    if ( (*a1 & 8) == 0 )
      goto LABEL_4;
    v21 = *(_BYTE **)(a2 + 32);
    if ( *(_QWORD *)(a2 + 24) <= (unsigned __int64)v21 )
    {
      sub_227BA10(a2, 32);
    }
    else
    {
      *(_QWORD *)(a2 + 32) = v21 + 1;
      *v21 = 32;
    }
LABEL_3:
    sub_995540(a2, "__unaligned");
    v9 = *a1;
LABEL_4:
    sub_F71300(&v30, (unsigned int)v9 >> 9);
    if ( !v31 )
    {
LABEL_5:
      v10 = *a1;
      v11 = (*a1 >> 4) & 3;
      if ( ((*a1 >> 4) & 3) == 0 )
        goto LABEL_10;
      v12 = *(_BYTE **)(a2 + 32);
      if ( (unsigned __int64)v12 >= *(_QWORD *)(a2 + 24) )
      {
        v27 = (*a1 >> 4) & 3;
        sub_227BA10(a2, 32);
        LODWORD(v11) = v27;
      }
      else
      {
        *(_QWORD *)(a2 + 32) = v12 + 1;
        *v12 = 32;
      }
LABEL_8:
      if ( (_DWORD)v11 == 1 )
      {
        sub_995540(a2, "__weak");
        v10 = *a1;
        v13 = (*a1 >> 6) & 7;
        if ( ((*a1 >> 6) & 7) == 0 )
        {
LABEL_20:
          v16 = HIDWORD(v10);
          v29 = v16;
          if ( !v16 )
          {
LABEL_21:
            v17 = 1;
LABEL_22:
            v6 = a4 & v17;
            goto LABEL_23;
          }
          goto LABEL_37;
        }
        if ( (_DWORD)v13 != 2 || (*(_BYTE *)(a3 + 2) & 8) == 0 )
        {
LABEL_12:
          v14 = *(_BYTE **)(a2 + 32);
          if ( (unsigned __int64)v14 >= *(_QWORD *)(a2 + 24) )
          {
            v28 = v13;
            sub_227BA10(a2, 32);
            LODWORD(v13) = v28;
          }
          else
          {
            *(_QWORD *)(a2 + 32) = v14 + 1;
            *v14 = 32;
          }
          if ( (_DWORD)v13 != 2 )
          {
LABEL_15:
            if ( (unsigned int)v13 <= 2 )
            {
              v15 = "__unsafe_unretained";
              if ( (_DWORD)v13 != 1 )
                goto LABEL_19;
            }
            else if ( (_DWORD)v13 == 3 )
            {
              v15 = "__weak";
            }
            else
            {
              v15 = "__autoreleasing";
              if ( (_DWORD)v13 != 4 )
              {
LABEL_19:
                v10 = *a1;
                goto LABEL_20;
              }
            }
LABEL_18:
            sub_995540(a2, v15);
            goto LABEL_19;
          }
          if ( (*(_BYTE *)(a3 + 2) & 8) != 0 )
          {
            v29 = *((_DWORD *)a1 + 1);
            if ( !v29 )
              goto LABEL_21;
            goto LABEL_37;
          }
LABEL_67:
          v15 = "__strong";
          goto LABEL_18;
        }
        goto LABEL_55;
      }
      sub_995540(a2, "__strong");
      v10 = *a1;
LABEL_10:
      v13 = (v10 >> 6) & 7;
      if ( ((v10 >> 6) & 7) == 0 )
        goto LABEL_20;
      if ( (_DWORD)v13 != 2 )
        goto LABEL_12;
      if ( (*(_BYTE *)(a3 + 2) & 8) == 0 )
      {
        LODWORD(v13) = 2;
        goto LABEL_12;
      }
LABEL_55:
      v17 = 1;
      goto LABEL_56;
    }
    v24 = *(_BYTE **)(a2 + 32);
    if ( (unsigned __int64)v24 < *(_QWORD *)(a2 + 24) )
    {
      *(_QWORD *)(a2 + 32) = v24 + 1;
      *v24 = 32;
      if ( *(_DWORD *)a1 <= 0x31FFu )
        goto LABEL_44;
      goto LABEL_31;
    }
    sub_227BA10(a2, 32);
LABEL_30:
    if ( *(_DWORD *)a1 <= 0x31FFu )
    {
LABEL_44:
      sub_227BF10(a2, v30, v31);
      goto LABEL_5;
    }
LABEL_31:
    v19 = sub_995540(a2, "__attribute__((address_space(");
    v20 = sub_227BF10(v19, v30, v31);
    sub_995540(v20, ")))");
    goto LABEL_5;
  }
  if ( (v8 & 8) != 0 )
    goto LABEL_3;
  sub_F71300(&v30, (unsigned int)v8 >> 9);
  if ( v31 )
    goto LABEL_30;
  v10 = *a1;
  v11 = (*a1 >> 4) & 3;
  if ( ((*a1 >> 4) & 3) != 0 )
    goto LABEL_8;
  v13 = (v10 >> 6) & 7;
  if ( ((v10 >> 6) & 7) == 0 )
  {
    v26 = HIDWORD(v10);
    v23 = v26;
    v29 = v26;
    if ( !v26 )
    {
      v17 = 0;
      goto LABEL_22;
    }
    goto LABEL_40;
  }
  if ( (_DWORD)v13 != 2 )
    goto LABEL_15;
  v17 = 0;
  if ( (*(_BYTE *)(a3 + 2) & 8) == 0 )
    goto LABEL_67;
LABEL_56:
  v25 = HIDWORD(v10);
  v23 = v25;
  v29 = v25;
  if ( !v25 )
    goto LABEL_22;
  if ( v17 )
  {
LABEL_37:
    v22 = *(_BYTE **)(a2 + 32);
    if ( (unsigned __int64)v22 >= *(_QWORD *)(a2 + 24) )
    {
      sub_227BA10(a2, 32);
    }
    else
    {
      *(_QWORD *)(a2 + 32) = v22 + 1;
      *v22 = 32;
    }
    v23 = v29;
  }
LABEL_40:
  if ( v23 )
    sub_F6EBE0(&v29, a2);
LABEL_23:
  if ( v6 )
  {
    v18 = *(_BYTE **)(a2 + 32);
    if ( (unsigned __int64)v18 >= *(_QWORD *)(a2 + 24) )
    {
      sub_227BA10(a2, 32);
    }
    else
    {
      *(_QWORD *)(a2 + 32) = v18 + 1;
      *v18 = 32;
    }
  }
  if ( v30 != &v32 )
    operator delete(v30);
}
