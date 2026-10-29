__int64 __fastcall sub_2202E70(__int64 a1, __int64 *a2, char *a3, __int64 a4, char a5)
{
  unsigned int v5; // ebp
  int v6; // r14d
  char *v8; // r13
  char v9; // al
  char *v10; // rbx
  char *v11; // r12
  char *v12; // r14
  char v13; // cl
  const char *v14; // rax
  _BYTE *v15; // rcx
  char v16; // di
  int v17; // ebp
  char *v18; // rsi
  unsigned int v19; // ecx
  unsigned int v20; // eax
  __int64 v21; // rdx
  unsigned __int64 v23; // rdi
  unsigned int v24; // eax
  unsigned int v25; // r12d
  void *v26; // r14
  int v27; // edi
  int v28; // edx
  int v29; // ecx
  char *v30; // r10
  unsigned __int64 v31; // rax
  int v32; // eax
  char *v33; // rsi
  int v34; // ebx
  __int64 v35; // rdx
  char v36; // al
  bool v37; // zf
  char *v38; // rcx
  char *v39; // rcx
  __int64 v40; // rax
  unsigned int v41; // ebx
  char *v43; // [rsp+8h] [rbp-B0h]
  char *v45; // [rsp+18h] [rbp-A0h]
  __int64 v46; // [rsp+28h] [rbp-90h] BYREF
  char *v47; // [rsp+30h] [rbp-88h] BYREF
  char v48; // [rsp+38h] [rbp-80h]
  __int64 v49; // [rsp+40h] [rbp-78h] BYREF
  char v50; // [rsp+48h] [rbp-70h]
  _QWORD v51[4]; // [rsp+50h] [rbp-68h] BYREF
  __int16 v52; // [rsp+70h] [rbp-48h]

  v8 = &a3[a4];
  v43 = a3;
  if ( &a3[a4] == a3 )
    goto LABEL_39;
  v9 = *a3;
  v10 = a3;
  if ( *a3 == 48 )
  {
    while ( v8 != ++v10 )
    {
      v9 = *v10;
      if ( *v10 != 48 )
        goto LABEL_7;
    }
LABEL_40:
    v48 &= ~1u;
    v11 = v10;
    v6 = 0;
    v5 = 0;
    v47 = v10;
    goto LABEL_41;
  }
LABEL_7:
  if ( v9 != 46 )
  {
    v48 &= ~1u;
    v11 = v10;
    v12 = &a3[a4];
    v47 = v10;
    goto LABEL_11;
  }
  v11 = v10 + 1;
  if ( a4 == 1 )
  {
    v51[0] = "Significand has no digits";
    v52 = 259;
    sub_21F8CA0(&v49, (__int64)v51);
    v48 |= 1u;
    v47 = nullptr;
    v46 = v49;
    goto LABEL_43;
  }
  if ( v8 == v11 )
  {
LABEL_39:
    v10 = &a3[a4];
    goto LABEL_40;
  }
  if ( v10[1] == 48 )
  {
    while ( v8 != ++v11 )
    {
      if ( *v11 != 48 )
        goto LABEL_72;
    }
    goto LABEL_39;
  }
LABEL_72:
  v12 = v10;
  v48 &= ~1u;
  v10 = v11;
  v47 = v11;
  while ( 1 )
  {
LABEL_11:
    v13 = *v10;
    if ( *v10 != 46 )
    {
      if ( (unsigned int)(v13 - 48) > 9 )
        break;
      goto LABEL_10;
    }
    if ( v8 != v12 )
    {
      v14 = "String contains multiple dots";
      goto LABEL_47;
    }
    if ( v10 + 1 == v8 )
      goto LABEL_88;
    v13 = v10[1];
    v12 = v10++;
    if ( (unsigned int)(v13 - 48) > 9 )
      break;
LABEL_10:
    if ( v8 == ++v10 )
      goto LABEL_81;
  }
  if ( v8 != v10 )
  {
    v14 = "Invalid character in significand";
    if ( (v13 & 0xDF) == 0x45 )
    {
      if ( a3 != v10 && (v8 == v12 || v10 - a3 != 1) )
      {
        v15 = v10 + 1;
        if ( v8 == v10 + 1 )
          goto LABEL_74;
        v16 = v10[1];
        if ( ((v16 - 43) & 0xFD) != 0 )
        {
          v17 = v16;
          goto LABEL_23;
        }
        v15 = v10 + 2;
        if ( v8 == v10 + 2 )
        {
LABEL_74:
          v50 &= ~1u;
          v5 = 0;
          LODWORD(v49) = 0;
          goto LABEL_75;
        }
        v17 = v10[2];
LABEL_23:
        v5 = v17 - 48;
        if ( v5 <= 9 )
        {
          v18 = v15 + 1;
          if ( v8 == v15 + 1 )
            goto LABEL_30;
          v19 = (char)v15[1] - 48;
          if ( v19 <= 9 )
          {
            v5 = v19 + 10 * v5;
            while ( v8 != ++v18 )
            {
              v20 = *v18 - 48;
              if ( v20 > 9 )
                goto LABEL_91;
              v5 = v20 + 10 * v5;
              if ( v5 > 0x5DBF )
              {
                v5 = 24000;
                break;
              }
            }
LABEL_30:
            if ( v16 == 45 )
              v5 = -v5;
            v50 &= ~1u;
            LODWORD(v49) = v5;
LABEL_75:
            v45 = a3;
            if ( v8 == v12 )
              v12 = v10;
            sub_215DE50(&v49);
            a3 = v45;
            if ( v10 != v11 )
            {
              do
LABEL_78:
                --v10;
              while ( a3 != v10 && ((*v10 - 46) & 0xFD) == 0 );
              goto LABEL_80;
            }
            v6 = 0;
LABEL_41:
            v46 = 0;
            goto LABEL_43;
          }
        }
LABEL_91:
        v52 = 259;
        v51[0] = "Invalid character in exponent";
        sub_21F8CA0(&v46, (__int64)v51);
        v50 |= 1u;
        v49 = 0;
        sub_215DE50(&v49);
LABEL_48:
        sub_20CE630((__int64 *)&v47);
        v21 = v46;
        if ( !v46 )
        {
          if ( (unsigned int)(*v11 - 48) <= 9 )
          {
            v6 = 0;
            v5 = 0;
            goto LABEL_51;
          }
LABEL_67:
          v35 = *a2;
          v36 = *((_BYTE *)a2 + 20) & 0xF8 | 3;
          v37 = *(_DWORD *)(*a2 + 20) == 2;
          *((_BYTE *)a2 + 20) = v36;
          if ( v37 )
            *((_BYTE *)a2 + 20) = v36 & 0xF7;
          v34 = 0;
          if ( !*(_BYTE *)(v35 + 24) )
            sub_21FAB90(a2, 0);
          goto LABEL_71;
        }
LABEL_44:
        *(_BYTE *)(a1 + 8) |= 1u;
        *(_QWORD *)a1 = v21;
        return a1;
      }
      v14 = "Significand has no digits";
    }
LABEL_47:
    v51[0] = v14;
    v52 = 259;
    sub_21F8CA0(&v46, (__int64)v51);
    goto LABEL_48;
  }
LABEL_81:
  if ( v10 == v11 )
  {
    v6 = 0;
    v5 = 0;
    goto LABEL_41;
  }
  if ( a3 != v10 )
  {
    v38 = v10;
    v10 = v12;
    v12 = v38;
LABEL_88:
    v39 = v10;
    v5 = 0;
    v10 = v12;
    v12 = v39;
    goto LABEL_78;
  }
  v5 = 0;
LABEL_80:
  v46 = 0;
  v5 += (_DWORD)v12 - ((v10 < v12) + (_DWORD)v10);
  v6 = v5 + (_DWORD)v10 - (_DWORD)v11 - (v10 > v12 && v12 > v11);
LABEL_43:
  sub_20CE630((__int64 *)&v47);
  v21 = v46;
  if ( v46 )
    goto LABEL_44;
  if ( v8 == v11 || (unsigned int)(*v11 - 48) > 9 )
    goto LABEL_67;
  if ( v6 > 51084 )
  {
LABEL_66:
    v34 = sub_21F9E30((__int64)a2, a5);
    goto LABEL_71;
  }
  if ( v6 < -51082 )
  {
LABEL_90:
    *((_BYTE *)a2 + 20) = *((_BYTE *)a2 + 20) & 0xF8 | 2;
    sub_21F9860(a2);
    v34 = sub_21FAF10((__int64)a2, a5, 1);
    goto LABEL_71;
  }
LABEL_51:
  if ( 28738 * (v6 + 1) <= 8651 * (*(_DWORD *)(*a2 + 4) - *(_DWORD *)(*a2 + 8)) )
    goto LABEL_90;
  if ( 42039 * (v6 - 1) >= 12655 * *(_DWORD *)*a2 )
    goto LABEL_66;
  v23 = 16;
  v24 = 196 * ((int)v10 - (int)v11 + 1) / 0x3Bu + 64;
  if ( v24 > 0x7F )
    v23 = 8LL * ((v24 >> 6) + 1);
  v25 = 0;
  v26 = (void *)operator new[](v23);
  while ( 2 )
  {
    while ( 2 )
    {
      v27 = 19;
      v28 = 1;
      v29 = 0;
      v30 = v43;
LABEL_60:
      v32 = *v30;
      v33 = v30 + 1;
      if ( *v30 != 46 )
      {
LABEL_57:
        v31 = (unsigned int)(v32 - 48);
        if ( v31 > 9 )
        {
          operator delete[](v26);
          v51[0] = "Invalid character in significand";
          v52 = 259;
          sub_21F8CA0(&v49, (__int64)v51);
          v40 = v49;
          *(_BYTE *)(a1 + 8) |= 1u;
          *(_QWORD *)a1 = v40;
          return a1;
        }
        v28 *= 10;
        v29 = v31 + 10 * v29;
        if ( v33 > v10 )
        {
          v41 = v25 + 1;
          sub_2209A70((_DWORD)v26, (_DWORD)v26, v28, v29, v25, v25 + 1, 0);
          if ( !*((_QWORD *)v26 + v25) )
            v41 = v25;
          goto LABEL_100;
        }
        v30 = v33;
        if ( !--v27 )
        {
          v43 = v33;
          sub_2209A70((_DWORD)v26, (_DWORD)v26, v28, v29, v25, v25 + 1, 0);
          if ( *((_QWORD *)v26 + v25) )
            ++v25;
          continue;
        }
        goto LABEL_60;
      }
      break;
    }
    if ( v8 != v33 )
    {
      v32 = v30[1];
      v33 = v30 + 2;
      goto LABEL_57;
    }
    sub_2209A70((_DWORD)v26, (_DWORD)v26, v28, v29, v25, v25 + 1, 0);
    if ( *((_QWORD *)v26 + v25) )
      ++v25;
    if ( v8 <= v10 )
    {
      v43 = v8;
      continue;
    }
    break;
  }
  v41 = v25;
LABEL_100:
  *((_BYTE *)a2 + 20) = *((_BYTE *)a2 + 20) & 0xF8 | 2;
  v34 = sub_21FE520(a2, (__int64)v26, v41, v5, a5);
  operator delete[](v26);
LABEL_71:
  *(_BYTE *)(a1 + 8) &= ~1u;
  *(_DWORD *)a1 = v34;
  return a1;
}
