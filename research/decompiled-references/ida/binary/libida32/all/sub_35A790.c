__int64 __fastcall sub_35A790(_QWORD **a1)
{
  void *v1; // r12
  int v2; // ecx
  __int64 v3; // rsi
  unsigned int v5; // r14d
  unsigned int v6; // eax
  _QWORD *v7; // r13
  char v8; // al
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v11; // eax
  __int64 result; // rax
  __int64 v13; // rbp
  int v14; // r15d
  __int64 bytes; // rax
  char v16; // si
  unsigned int v17; // edx
  char *v18; // rsi
  char v19; // al
  char *v20; // rdi
  bool v21; // zf
  int v22; // ebp
  int v23; // edx
  __int64 v24; // rsi
  unsigned int v25; // edx
  char v26; // al
  _QWORD *v27; // rax
  char *v28; // rax
  char *v29; // rax
  char *v30; // rax
  char *v31; // rax
  int v32; // eax
  char *v33; // rax
  char *v34; // rax
  int v35; // [rsp+10h] [rbp-78h]
  int v36; // [rsp+10h] [rbp-78h]
  int v37; // [rsp+10h] [rbp-78h]
  int v38; // [rsp+10h] [rbp-78h]
  char *v39; // [rsp+10h] [rbp-78h]
  int v40; // [rsp+10h] [rbp-78h]
  int v41; // [rsp+1Ch] [rbp-6Ch]
  int v42; // [rsp+1Ch] [rbp-6Ch]
  char v43; // [rsp+2Fh] [rbp-59h] BYREF
  _BYTE s2[24]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v45; // [rsp+48h] [rbp-40h]

  v1 = a1 + 2;
  v2 = *((_DWORD *)a1 + 17);
  v3 = *((unsigned int *)a1 + 3);
  v45 = __readfsqword(0x28u);
  v5 = *((_DWORD *)a1 + 11);
  if ( (~(_BYTE)v2 & 3) == 0 )
  {
    if ( v5 < *((_DWORD *)a1 + 12) )
    {
      v32 = sub_3BB250(**a1, v3, v5, a1 + 2, a1 + 9);
      v2 = *((_DWORD *)a1 + 17);
      v16 = *((_BYTE *)a1 + 72);
      v14 = v32;
      goto LABEL_16;
    }
    v6 = v5 * *((_DWORD *)a1 + 16);
    if ( v6 > 0x10 )
    {
      *((_BYTE *)a1 + 72) = 1;
      *((_DWORD *)a1 + 10) = 1;
      goto LABEL_21;
    }
LABEL_15:
    v13 = v6;
    v14 = 1;
    bytes = get_bytes(a1 + 2, v6, (unsigned int)v3, 0, 0);
    v2 = *((_DWORD *)a1 + 17);
    v16 = v13 == bytes;
    *((_BYTE *)a1 + 72) = v13 == bytes;
LABEL_16:
    *((_DWORD *)a1 + 10) = v14;
    if ( (v2 & 2) == 0 )
    {
      *((_DWORD *)a1 + 10) = 1;
LABEL_62:
      if ( !v16 )
        goto LABEL_33;
      goto LABEL_4;
    }
    v5 = *((_DWORD *)a1 + 11);
    if ( v16 )
    {
      v18 = *(char **)(**a1 + 1056LL);
      if ( v18 )
        goto LABEL_23;
      goto LABEL_70;
    }
    v9 = *((_DWORD *)a1 + 12);
    v17 = v5 * v14;
    if ( v5 * v14 >= v9 )
      goto LABEL_9;
    while ( 1 )
    {
LABEL_42:
      v24 = v17 + *((_DWORD *)a1 + 3);
      if ( (~(_BYTE)v2 & 3) != 0 || v5 >= v9 )
      {
        v25 = v5 * *((_DWORD *)a1 + 16);
        if ( v25 > 0x10 )
        {
          v21 = *((_BYTE *)a1 + 72) == 0;
          v43 = 1;
          if ( v21 )
            goto LABEL_9;
          v22 = 1;
LABEL_38:
          if ( memcmp(v1, s2, *((_DWORD *)a1 + 16) * v5) )
            goto LABEL_4;
          v16 = 1;
          goto LABEL_40;
        }
        v22 = 1;
        v26 = v25 == get_bytes(s2, v25, (unsigned int)v24, 0, 0);
        v43 = v26;
      }
      else
      {
        v22 = sub_3BB250(**a1, v24, v5, s2, &v43);
        v26 = v43;
      }
      v16 = *((_BYTE *)a1 + 72);
      if ( v16 != v26 )
        goto LABEL_62;
      v5 = *((_DWORD *)a1 + 11);
      if ( v26 )
        goto LABEL_38;
LABEL_40:
      v9 = *((_DWORD *)a1 + 12);
      v23 = v22 + *((_DWORD *)a1 + 10);
      *((_DWORD *)a1 + 10) = v23;
      v17 = v5 * v23;
      if ( v17 >= v9 )
        goto LABEL_62;
      v2 = *((_DWORD *)a1 + 17);
    }
  }
  v6 = v5 * *((_DWORD *)a1 + 16);
  if ( v6 <= 0x10 )
    goto LABEL_15;
  *((_BYTE *)a1 + 72) = 1;
  *((_DWORD *)a1 + 10) = 1;
  if ( (v2 & 2) == 0 )
  {
LABEL_4:
    v7 = a1[4];
    goto LABEL_5;
  }
LABEL_21:
  v18 = *(char **)(**a1 + 1056LL);
  if ( v18 )
  {
    v14 = 1;
LABEL_23:
    v19 = *v18;
    if ( *v18 )
    {
      v7 = a1[4];
      do
      {
        if ( v19 == 35 )
        {
          v20 = v18 + 1;
          if ( v18[1] == 115 )
          {
            v20 = v18 + 2;
            switch ( v5 )
            {
              case 1u:
                v30 = v18 + 2;
                goto LABEL_65;
              case 2u:
                goto LABEL_59;
              case 4u:
                goto LABEL_57;
              case 8u:
                goto LABEL_56;
              case 0x10u:
                v41 = 3;
                break;
              default:
                goto LABEL_26;
            }
            do
            {
              v35 = v2;
              v20 = strchr(v20 + 1, 44);
              if ( !v20 )
                goto LABEL_60;
              v21 = v41-- == 1;
              v2 = v35;
            }
            while ( !v21 );
LABEL_56:
            v36 = v2;
            v28 = strchr(v20 + 1, 44);
            v2 = v36;
            v20 = v28;
            if ( !v28 )
              goto LABEL_60;
LABEL_57:
            if ( ((unsigned __int16)v7 & 0x600) == 0x400 && ((unsigned int)v7 & 0xE0000000) == 0x80000000LL )
            {
              v40 = v2;
              v33 = strchr(v20 + 1, 44);
              if ( !v33 )
                goto LABEL_60;
              v34 = strchr(v33 + 1, 44);
              v2 = v40;
              v20 = v34;
              if ( !v34 )
                goto LABEL_60;
            }
            v37 = v2;
            v29 = strchr(v20 + 1, 44);
            v2 = v37;
            v20 = v29;
            if ( !v29 )
              goto LABEL_60;
LABEL_59:
            v38 = v2;
            v30 = strchr(v20 + 1, 44);
            v2 = v38;
            if ( !v30 )
              goto LABEL_60;
LABEL_65:
            v42 = v2;
            if ( v30[1] == 44 || (v39 = v30 + 1, v31 = strchr(v30 + 1, 41), v20 = v39, v2 = v42, !v31) )
            {
LABEL_60:
              *((_DWORD *)a1 + 10) = 1;
              goto LABEL_5;
            }
          }
        }
        else
        {
          v20 = v18;
        }
LABEL_26:
        v19 = v20[1];
        v18 = v20 + 1;
      }
      while ( v19 );
    }
    v9 = *((_DWORD *)a1 + 12);
    v17 = v5 * v14;
    if ( v5 * v14 < v9 )
      goto LABEL_42;
    goto LABEL_4;
  }
LABEL_70:
  *((_DWORD *)a1 + 10) = 1;
  v7 = a1[4];
LABEL_5:
  if ( ((unsigned __int16)v7 & 0x600) == 0x400
    && (((unsigned int)v7 & 0xE0000000) == 0x80000000LL || ((unsigned int)v7 & 0xF0000000) == 0x40000000)
    || ((unsigned int)v7 & 0xF00000) == 0xC00000 )
  {
    result = print_fpval(0, 0, v1, (unsigned int)(*((_DWORD *)a1 + 16) * *((_DWORD *)a1 + 11)));
    if ( !(_BYTE)result )
      return result;
  }
  else
  {
    v8 = getinf_flag(3, 32);
    v5 = *((_DWORD *)a1 + 11);
    if ( !v8 )
      goto LABEL_8;
    v27 = a1[4];
    if ( ((unsigned __int16)v27 & 0x600) == 0x400 && ((unsigned int)v27 & 0xF0000000) == 0xD0000000LL )
      goto LABEL_8;
    if ( v5 > 0x10 )
      goto LABEL_8;
    sub_358FA0(*((unsigned int *)a1 + 3), (char *)v1, v5);
  }
LABEL_33:
  v5 = *((_DWORD *)a1 + 11);
LABEL_8:
  v9 = *((_DWORD *)a1 + 12);
LABEL_9:
  v10 = v5 * *((_DWORD *)a1 + 10);
  *((_DWORD *)a1 + 2) = v10;
  if ( v9 < v10 )
  {
    v11 = v9 / v5;
    *((_DWORD *)a1 + 10) = v11;
    *((_DWORD *)a1 + 2) = v5 * v11;
  }
  return 1;
}

