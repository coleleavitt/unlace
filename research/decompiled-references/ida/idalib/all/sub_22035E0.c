__int64 __fastcall sub_22035E0(__int64 a1, __int64 a2, unsigned __int8 *a3, __int64 a4, char a5)
{
  __int64 v8; // rax
  __int64 v9; // r8
  unsigned int v10; // r10d
  unsigned int v11; // eax
  unsigned __int8 *v12; // rbp
  unsigned __int8 v13; // al
  unsigned __int8 *v14; // rbx
  unsigned __int8 *v15; // r9
  unsigned __int8 *v16; // rax
  unsigned int v18; // r15d
  char v19; // di
  int v20; // edx
  unsigned __int8 *v21; // r12
  unsigned __int8 v22; // bl
  __int64 v23; // rsi
  int v24; // ecx
  unsigned __int8 *v25; // rbx
  const char *v26; // rax
  __int64 v27; // rax
  int v29; // edx
  unsigned __int8 *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned __int8 *v33; // rax
  __int64 v34; // rax
  char *v35; // rsi
  unsigned __int8 v36; // r8
  unsigned __int8 v37; // al
  int v38; // ecx
  unsigned int v39; // eax
  unsigned int v40; // eax
  int v41; // ecx
  int v42; // eax
  const char *v43; // rax
  __int64 v44; // rax
  unsigned __int8 *v45; // [rsp+0h] [rbp-C8h]
  int v46; // [rsp+0h] [rbp-C8h]
  __int64 v48; // [rsp+18h] [rbp-B0h]
  int v49; // [rsp+20h] [rbp-A8h]
  unsigned int v50; // [rsp+24h] [rbp-A4h]
  unsigned __int8 *v51; // [rsp+28h] [rbp-A0h]
  __int64 v52; // [rsp+38h] [rbp-90h] BYREF
  unsigned __int8 *v53; // [rsp+40h] [rbp-88h] BYREF
  char v54; // [rsp+48h] [rbp-80h]
  __int64 v55; // [rsp+50h] [rbp-78h] BYREF
  char v56; // [rsp+58h] [rbp-70h]
  _QWORD v57[4]; // [rsp+60h] [rbp-68h] BYREF
  __int16 v58; // [rsp+80h] [rbp-48h]

  *(_BYTE *)(a2 + 20) = *(_BYTE *)(a2 + 20) & 0xF8 | 2;
  sub_21F9860((_QWORD *)a2);
  v8 = *(_QWORD *)a2;
  v9 = a2 + 8;
  *(_DWORD *)(a2 + 16) = 0;
  v10 = 64;
  v11 = *(_DWORD *)(v8 + 8) + 64;
  if ( v11 > 0x7F )
  {
    v9 = *(_QWORD *)(a2 + 8);
    v10 = v11 & 0xFFFFFFC0;
  }
  v12 = &a3[a4];
  if ( &a3[a4] == a3 )
  {
    v14 = a3;
    goto LABEL_33;
  }
  v13 = *a3;
  v14 = a3;
  if ( *a3 == 48 )
  {
    while ( v12 != ++v14 )
    {
      v13 = *v14;
      if ( *v14 != 48 )
        goto LABEL_9;
    }
    goto LABEL_33;
  }
LABEL_9:
  if ( v13 == 46 )
  {
    v30 = v14 + 1;
    if ( a4 == 1 )
    {
      v58 = 259;
      v57[0] = "Significand has no digits";
      sub_21F8CA0(&v55, (__int64)v57);
      v31 = v55;
      v54 |= 1u;
      v53 = nullptr;
      *(_BYTE *)(a1 + 8) |= 1u;
      *(_QWORD *)a1 = v31;
      goto LABEL_21;
    }
    if ( v12 != v30 )
    {
      if ( v14[1] != 48 )
      {
LABEL_36:
        v45 = v14;
        v14 = v30;
        v54 &= ~1u;
        v53 = v30;
        goto LABEL_11;
      }
      while ( v12 != ++v30 )
      {
        if ( *v30 != 48 )
          goto LABEL_36;
      }
    }
    v14 = &a3[a4];
LABEL_33:
    v54 &= ~1u;
    v53 = v14;
LABEL_17:
    v26 = "Hex strings require an exponent";
    goto LABEL_20;
  }
  v54 &= ~1u;
  v53 = v14;
  v45 = &a3[a4];
LABEL_11:
  v15 = a3;
  v16 = v14;
  v18 = v10;
  v19 = 0;
  v20 = 0;
  v21 = v14;
  while ( 1 )
  {
    v22 = *v16;
    if ( *v16 == 46 )
    {
      if ( v12 != v45 )
      {
        v26 = "String contains multiple dots";
        goto LABEL_20;
      }
      v25 = v16 + 1;
      v45 = v16;
      goto LABEL_16;
    }
    v23 = (unsigned int)word_23E43C0[v22];
    v24 = word_23E43C0[v22];
    if ( v23 == 0xFFFFFFFFLL )
      break;
    v25 = v16 + 1;
    if ( v18 )
    {
      v18 -= 4;
      *(_QWORD *)(v9 + 8LL * (v18 >> 6)) |= v23 << v18;
    }
    else if ( !v19 )
    {
      if ( (unsigned int)v23 <= 8 )
      {
        if ( (unsigned int)(v23 - 1) <= 6 )
        {
          v56 &= ~1u;
          v29 = 1;
          LODWORD(v55) = 1;
        }
        else
        {
          if ( v12 == v25 )
            goto LABEL_43;
          v32 = v16[1];
          if ( (((_BYTE)v32 - 46) & 0xFD) == 0 )
          {
            v33 = v16 + 1;
            while ( v12 != ++v33 )
            {
              v32 = *v33;
              if ( (((_BYTE)v32 - 46) & 0xFD) != 0 )
                goto LABEL_67;
            }
LABEL_43:
            v58 = 259;
            v57[0] = "Invalid trailing hexadecimal fraction!";
            sub_21F8CA0(&v52, (__int64)v57);
            v34 = v52;
            *(_BYTE *)(a1 + 8) |= 1u;
            v56 |= 1u;
            *(_QWORD *)a1 = v34;
            v55 = 0;
            sub_22035C0(&v55);
            goto LABEL_21;
          }
LABEL_67:
          if ( word_23E43C0[v32] == -1 )
          {
            v56 &= ~1u;
            v29 = 2 * (v24 != 0);
          }
          else
          {
            v56 &= ~1u;
            v29 = v24 == 0 ? 1 : 3;
          }
          LODWORD(v55) = v29;
        }
      }
      else
      {
        v56 &= ~1u;
        v29 = 3;
        LODWORD(v55) = 3;
      }
      v51 = v15;
      v50 = v10;
      v49 = v29;
      v48 = v9;
      sub_22035C0(&v55);
      v19 = 1;
      v9 = v48;
      v20 = v49;
      v10 = v50;
      v15 = v51;
    }
LABEL_16:
    v16 = v25;
    if ( v12 == v25 )
      goto LABEL_17;
  }
  if ( (*v16 & 0xDF) != 0x50 )
  {
    v26 = "Invalid character in significand";
    goto LABEL_20;
  }
  if ( v15 == v16 )
    goto LABEL_70;
  if ( v12 == v45 )
  {
    LODWORD(v45) = (_DWORD)v16;
LABEL_48:
    if ( v16 == v21 )
      goto LABEL_63;
    v35 = (char *)(v16 + 1);
    if ( v16 + 1 != v12 )
    {
      v36 = v16[1];
      if ( ((v36 - 43) & 0xFD) != 0 )
      {
        v37 = v16[1];
        goto LABEL_53;
      }
      v35 = (char *)(v16 + 2);
      if ( v12 != v16 + 2 )
      {
        v37 = v16[2];
LABEL_53:
        v38 = (char)v37 - 48;
        if ( (unsigned int)v38 <= 9 )
        {
          while ( v12 != (unsigned __int8 *)++v35 )
          {
            v39 = *v35 - 48;
            if ( v39 > 9 )
              goto LABEL_74;
            v38 = v39 + 10 * v38;
            if ( v38 > 0x7FFF )
              goto LABEL_77;
          }
          v40 = *(_DWORD *)(*(_QWORD *)a2 + 8LL)
              - v10
              + 4 * ((_DWORD)v45 - (_DWORD)v21 - (((unsigned int)((_DWORD)v45 - (_DWORD)v21) < 0x80000000) - 1))
              - 1;
          if ( v40 + 0x8000 <= 0xFFFF )
          {
            if ( v36 == 45 )
            {
              v41 = v40 - v38;
              if ( v41 + 0x8000 >= (unsigned int)&stru_10000 )
                v41 = -32768;
            }
            else
            {
              v41 = v40 + v38;
              if ( v41 + 0x8000 >= (unsigned int)&stru_10000 )
                v41 = 0x7FFF;
            }
            goto LABEL_62;
          }
LABEL_77:
          v41 = 0x7FFF;
          if ( v36 == 45 )
            v41 = -32768;
LABEL_62:
          *(_DWORD *)(a2 + 16) = v41;
          v46 = v20;
          v56 &= ~1u;
          LODWORD(v55) = v41;
          sub_215DE50(&v55);
          v20 = v46;
LABEL_63:
          v42 = sub_21FAF10(a2, a5, v20);
          *(_BYTE *)(a1 + 8) &= ~1u;
          *(_DWORD *)a1 = v42;
          goto LABEL_21;
        }
LABEL_74:
        v43 = "Invalid character in exponent";
LABEL_75:
        v57[0] = v43;
        v58 = 259;
        sub_21F8CA0(&v52, (__int64)v57);
        v44 = v52;
        *(_BYTE *)(a1 + 8) |= 1u;
        v56 |= 1u;
        *(_QWORD *)a1 = v44;
        v55 = 0;
        sub_215DE50(&v55);
        goto LABEL_21;
      }
    }
    v43 = "Exponent has no digits";
    goto LABEL_75;
  }
  if ( v16 - v15 != 1 )
    goto LABEL_48;
LABEL_70:
  v26 = "Significand has no digits";
LABEL_20:
  v57[0] = v26;
  v58 = 259;
  sub_21F8CA0(&v55, (__int64)v57);
  v27 = v55;
  *(_BYTE *)(a1 + 8) |= 1u;
  *(_QWORD *)a1 = v27;
LABEL_21:
  sub_20CE630((__int64 *)&v53);
  return a1;
}
