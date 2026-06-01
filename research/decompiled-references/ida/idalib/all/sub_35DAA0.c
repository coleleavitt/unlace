__int64 __fastcall sub_35DAA0(_QWORD **a1)
{
  void *v1; // r12
  int v2; // ecx
  _QWORD *v3; // rsi
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rbp
  _QWORD *v7; // r15
  char v8; // al
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 result; // rax
  __int64 bytes; // rax
  bool v14; // zf
  __int64 v15; // rbp
  char v16; // si
  unsigned __int64 v17; // rdx
  char *v18; // rsi
  char v19; // al
  char *v20; // rdi
  __int64 v21; // rbp
  _QWORD *v22; // rdx
  char *v23; // rsi
  __int64 v24; // rdx
  char v25; // al
  _QWORD *v26; // rax
  char *v27; // rax
  char *v28; // rax
  char *v29; // rax
  char *v30; // rax
  __int64 v31; // rax
  char *v32; // rax
  char *v33; // rax
  int v34; // [rsp+0h] [rbp-78h]
  int v35; // [rsp+0h] [rbp-78h]
  int v36; // [rsp+0h] [rbp-78h]
  int v37; // [rsp+0h] [rbp-78h]
  char *v38; // [rsp+0h] [rbp-78h]
  int v39; // [rsp+0h] [rbp-78h]
  int v40; // [rsp+Ch] [rbp-6Ch]
  int v41; // [rsp+Ch] [rbp-6Ch]
  char v42; // [rsp+1Fh] [rbp-59h] BYREF
  _BYTE s2[24]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v44; // [rsp+38h] [rbp-40h]

  v1 = a1 + 3;
  v2 = *((_DWORD *)a1 + 21);
  v3 = a1[2];
  v44 = __readfsqword(0x28u);
  v5 = (unsigned __int64)a1[7];
  if ( (~(_BYTE)v2 & 3) == 0 )
  {
    if ( v5 < (unsigned __int64)a1[8] )
    {
      v31 = sub_3C01C0(**a1, v3, a1[7], a1 + 3, a1 + 11);
      v2 = *((_DWORD *)a1 + 21);
      v16 = *((_BYTE *)a1 + 88);
      v15 = v31;
      goto LABEL_16;
    }
    v6 = v5 * *((int *)a1 + 20);
    if ( v6 > 0x10 )
    {
      *((_BYTE *)a1 + 88) = 1;
      a1[6] = (_QWORD *)(&dword_0 + 1);
      goto LABEL_21;
    }
LABEL_15:
    bytes = get_bytes(a1 + 3, v6, v3, 0, 0);
    v2 = *((_DWORD *)a1 + 21);
    v14 = bytes == v6;
    v15 = 1;
    v16 = v14;
    *((_BYTE *)a1 + 88) = v14;
LABEL_16:
    a1[6] = (_QWORD *)v15;
    if ( (v2 & 2) == 0 )
    {
      a1[6] = (_QWORD *)(&dword_0 + 1);
LABEL_62:
      if ( !v16 )
        goto LABEL_33;
      goto LABEL_4;
    }
    v5 = (unsigned __int64)a1[7];
    if ( v16 )
    {
      v18 = *(char **)(**a1 + 1224LL);
      if ( v18 )
        goto LABEL_23;
      goto LABEL_70;
    }
    v9 = (unsigned __int64)a1[8];
    v17 = v5 * v15;
    if ( v5 * v15 >= v9 )
      goto LABEL_9;
    while ( 1 )
    {
LABEL_42:
      v23 = (char *)a1[2] + v17;
      if ( (~(_BYTE)v2 & 3) != 0 || v5 >= v9 )
      {
        v24 = *((int *)a1 + 20);
        if ( v5 * v24 > 0x10 )
        {
          v14 = *((_BYTE *)a1 + 88) == 0;
          v42 = 1;
          if ( v14 )
            goto LABEL_9;
          v21 = 1;
          goto LABEL_38;
        }
        v21 = 1;
        v25 = get_bytes(s2, v5 * v24, v23, 0, 0) == v5 * v24;
        v42 = v25;
      }
      else
      {
        v21 = sub_3C01C0(**a1, v23, v5, s2, &v42);
        v25 = v42;
      }
      v16 = *((_BYTE *)a1 + 88);
      if ( v16 != v25 )
        goto LABEL_62;
      v5 = (unsigned __int64)a1[7];
      if ( v25 )
      {
        v24 = *((int *)a1 + 20);
LABEL_38:
        if ( memcmp(v1, s2, v5 * v24) )
          goto LABEL_4;
        v16 = 1;
      }
      v9 = (unsigned __int64)a1[8];
      v22 = (_QWORD *)((char *)a1[6] + v21);
      a1[6] = v22;
      v17 = v5 * (_QWORD)v22;
      if ( v17 >= v9 )
        goto LABEL_62;
      v2 = *((_DWORD *)a1 + 21);
    }
  }
  v6 = v5 * *((int *)a1 + 20);
  if ( v6 <= 0x10 )
    goto LABEL_15;
  *((_BYTE *)a1 + 88) = 1;
  a1[6] = (_QWORD *)(&dword_0 + 1);
  if ( (v2 & 2) == 0 )
  {
LABEL_4:
    v7 = a1[5];
    goto LABEL_5;
  }
LABEL_21:
  v18 = *(char **)(**a1 + 1224LL);
  if ( v18 )
  {
    v15 = 1;
LABEL_23:
    v19 = *v18;
    if ( *v18 )
    {
      v7 = a1[5];
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
              case 1uLL:
                v29 = v18 + 2;
                goto LABEL_65;
              case 2uLL:
                goto LABEL_59;
              case 4uLL:
                goto LABEL_57;
              case 8uLL:
                goto LABEL_56;
              case 0x10uLL:
                v40 = 3;
                break;
              default:
                goto LABEL_26;
            }
            do
            {
              v34 = v2;
              v20 = strchr(v20 + 1, 44);
              if ( !v20 )
                goto LABEL_60;
              v14 = v40-- == 1;
              v2 = v34;
            }
            while ( !v14 );
LABEL_56:
            v35 = v2;
            v27 = strchr(v20 + 1, 44);
            v2 = v35;
            v20 = v27;
            if ( !v27 )
              goto LABEL_60;
LABEL_57:
            if ( ((unsigned __int16)v7 & 0x600) == 0x400 && ((unsigned int)v7 & 0xE0000000) == 0x80000000LL )
            {
              v39 = v2;
              v32 = strchr(v20 + 1, 44);
              if ( !v32 )
                goto LABEL_60;
              v33 = strchr(v32 + 1, 44);
              v2 = v39;
              v20 = v33;
              if ( !v33 )
                goto LABEL_60;
            }
            v36 = v2;
            v28 = strchr(v20 + 1, 44);
            v2 = v36;
            v20 = v28;
            if ( !v28 )
              goto LABEL_60;
LABEL_59:
            v37 = v2;
            v29 = strchr(v20 + 1, 44);
            v2 = v37;
            if ( !v29 )
              goto LABEL_60;
LABEL_65:
            v41 = v2;
            if ( v29[1] == 44 || (v38 = v29 + 1, v30 = strchr(v29 + 1, 41), v20 = v38, v2 = v41, !v30) )
            {
LABEL_60:
              a1[6] = (_QWORD *)(&dword_0 + 1);
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
    v9 = (unsigned __int64)a1[8];
    v17 = v5 * v15;
    if ( v5 * v15 < v9 )
      goto LABEL_42;
    goto LABEL_4;
  }
LABEL_70:
  a1[6] = (_QWORD *)(&dword_0 + 1);
  v7 = a1[5];
LABEL_5:
  if ( ((unsigned __int16)v7 & 0x600) == 0x400
    && (((unsigned int)v7 & 0xE0000000) == 0x80000000LL || ((unsigned int)v7 & 0xF0000000) == 0x40000000)
    || ((unsigned int)v7 & 0xF00000) == 0xC00000 )
  {
    result = print_fpval(0, 0, v1, (unsigned int)(*((_DWORD *)a1 + 14) * *((_DWORD *)a1 + 20)));
    if ( !(_BYTE)result )
      return result;
  }
  else
  {
    v8 = getinf_flag(3, 32);
    v5 = (unsigned __int64)a1[7];
    if ( !v8 )
      goto LABEL_8;
    v26 = a1[5];
    if ( ((unsigned __int16)v26 & 0x600) == 0x400 && ((unsigned int)v26 & 0xF0000000) == 0xD0000000LL )
      goto LABEL_8;
    if ( v5 > 0x10 )
      goto LABEL_8;
    sub_35C3D0((__int64)a1[2], (char *)v1, (unsigned __int64)a1[7]);
  }
LABEL_33:
  v5 = (unsigned __int64)a1[7];
LABEL_8:
  v9 = (unsigned __int64)a1[8];
LABEL_9:
  v10 = v5 * (_QWORD)a1[6];
  a1[1] = (_QWORD *)v10;
  if ( v9 < v10 )
  {
    v11 = v9 / v5;
    a1[6] = (_QWORD *)v11;
    a1[1] = (_QWORD *)(v5 * v11);
  }
  return 1;
}
