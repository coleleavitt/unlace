unsigned __int64 __fastcall sub_EAE4B0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 result; // rax
  char v9; // r12
  char v10; // bp
  __int64 v11; // rax
  bool v12; // r14
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // al
  _BYTE *v17; // rdx
  char v18; // cl
  char v19; // cl
  unsigned int v20; // r15d
  int v21; // r10d
  _DWORD *v22; // rax
  unsigned int v23; // r15d
  __int64 v24; // rax
  bool v25; // r8
  unsigned __int8 *i; // rdx
  __int16 v27; // cx
  char v28; // r9
  bool v29; // cc
  __int64 v30; // rax
  char v31; // cl
  int v32; // eax
  unsigned __int64 v33; // r11
  __int64 v34; // rax
  char v35; // dl
  __int64 *v36; // rdi
  __int64 v37; // rcx
  _DWORD *v38; // rax
  _DWORD *v39; // rdx
  char v40; // [rsp+8h] [rbp-60h]
  unsigned int v41; // [rsp+8h] [rbp-60h]
  _QWORD *v42; // [rsp+8h] [rbp-60h]
  char v43; // [rsp+8h] [rbp-60h]
  char v44; // [rsp+10h] [rbp-58h]
  unsigned __int8 v45; // [rsp+10h] [rbp-58h]
  char v46; // [rsp+10h] [rbp-58h]
  char v47; // [rsp+10h] [rbp-58h]
  int v48; // [rsp+14h] [rbp-54h]
  char v49; // [rsp+14h] [rbp-54h]
  char v50; // [rsp+1Bh] [rbp-4Dh]
  int v51; // [rsp+1Ch] [rbp-4Ch]
  _BYTE v52[57]; // [rsp+2Fh] [rbp-39h] BYREF

  result = HIDWORD(a3);
  *(_QWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 32) &= 0x1Cu;
  if ( (_DWORD)a3 == HIDWORD(a3)
    || (v9 = a5,
        v10 = a5,
        v11 = sub_EAE110((_DWORD *)a1, a2, a3, a4, a5, a6),
        v12 = 0,
        *(_BYTE *)(a1 + 32) |= 1u,
        *(_QWORD *)(a1 + 8) = v11,
        *(_QWORD *)(a1 + 16) = v13,
        (result = *(_QWORD *)(a1 + 16)) == 0) )
  {
    *(_BYTE *)(a1 + 32) &= 0xE3u;
    return result;
  }
  v14 = *(unsigned __int8 *)(a4 + 24);
  LOBYTE(v15) = 0;
  if ( result < (unsigned __int64)((_BYTE)v14 == 0) + 2 )
    goto LABEL_4;
  v17 = *(_BYTE **)(a1 + 8);
  if ( *v17 != 47 )
    goto LABEL_4;
  v18 = v17[1];
  if ( v18 == 47 )
  {
    if ( result == 2 )
      goto LABEL_43;
    v31 = v17[2];
    if ( v31 == 47 )
    {
      LOBYTE(v15) = 3;
      goto LABEL_51;
    }
    if ( v31 != 33 )
    {
LABEL_43:
      v15 = 1;
      goto LABEL_17;
    }
    LOBYTE(v15) = 4;
LABEL_51:
    if ( result > 3 )
      v12 = v17[3] == 60;
    goto LABEL_4;
  }
  if ( v18 != 42 || v17[result - 2] != 42 || v17[result - 1] != 47 )
    goto LABEL_4;
  v19 = v17[2];
  if ( v19 == 42 )
  {
    LOBYTE(v15) = 5;
    goto LABEL_51;
  }
  v15 = 2;
  if ( v19 == 33 )
  {
    LOBYTE(v15) = 6;
    goto LABEL_51;
  }
LABEL_17:
  if ( (_BYTE)v14 )
  {
    v20 = *(_DWORD *)a1 & 0x7FFFFFFF;
    if ( v20 < *(_DWORD *)(a2 + 476) || v20 >= *(_DWORD *)(a2 + 480) )
    {
      v45 = v14;
      v41 = v15;
      v32 = sub_FF9850(a2);
      v14 = v45;
      v15 = v41;
      v21 = v32;
    }
    else
    {
      v21 = *(_DWORD *)(a2 + 472);
    }
    v52[0] = 0;
    if ( (unsigned int)(v21 + 1) > 1 )
    {
      if ( v21 >= 0 )
      {
        v22 = (_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL * (unsigned int)v21);
LABEL_24:
        v40 = v14;
        if ( v22 )
        {
          v23 = v20 - (*v22 & 0x7FFFFFFF);
          if ( v23 )
          {
            v44 = v15;
            v52[0] = 0;
            v24 = sub_FFC570(a2, (unsigned int)v21, v52);
            LOBYTE(v15) = v44;
            if ( !v52[0] )
            {
              v25 = v40;
              for ( i = (unsigned __int8 *)(v24 + v23 - 1); ; --i )
              {
                v27 = *(_WORD *)&byte_23ED5E0[2 * *i];
                if ( (v27 & 2) != 0 )
                  break;
                if ( (v27 & 5) == 0 )
                  goto LABEL_33;
                if ( (unsigned __int8 *)v24 == i )
                  break;
              }
            }
            v25 = (*(_BYTE *)(a1 + 32) & 0x40) != 0;
LABEL_33:
            *(_BYTE *)(a1 + 32) = (v25 << 6) | *(_BYTE *)(a1 + 32) & 0xBF;
          }
        }
        goto LABEL_4;
      }
      v33 = (unsigned int)(-2 - v21);
      v34 = *(_QWORD *)(*(_QWORD *)(a2 + 320) + 8LL * ((unsigned int)(-2 - v21) >> 6));
      if ( _bittest64(&v34, v33) )
      {
        v42 = (_QWORD *)(*(_QWORD *)(a2 + 272) + 8 * ((unsigned __int64)(int)v33 >> 5));
        if ( *v42 )
        {
          v22 = (_DWORD *)(*v42 + 24LL * ((-2 - (_BYTE)v21) & 0x1F));
          goto LABEL_24;
        }
        v36 = (__int64 *)(*(_QWORD *)(a2 + 288) & 0xFFFFFFFFFFFFFFF8LL);
        v37 = *v36;
        v36[10] += 768;
        v38 = (_DWORD *)((v37 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v36[1] >= (unsigned __int64)(v38 + 192) && v37 )
        {
          *v36 = (__int64)(v38 + 192);
        }
        else
        {
          v51 = v21;
          v50 = v14;
          v49 = v15;
          v47 = -2 - v21;
          v38 = (_DWORD *)sub_962430((__int64)v36, 768, 768, 3, v14, v15);
          v21 = v51;
          LOBYTE(v14) = v50;
          LOBYTE(v15) = v49;
          LOBYTE(v33) = v47;
        }
        v39 = v38 + 192;
        *v42 = v38;
        do
        {
          *v38 = 0;
          v38 += 6;
          *((_OWORD *)v38 - 1) = 0;
          *((_QWORD *)v38 - 1) = 0;
        }
        while ( v38 != v39 );
        v35 = v52[0];
        v22 = (_DWORD *)(*v42 + 24 * (v33 & 0x1F));
      }
      else
      {
        v48 = v21;
        v46 = v14;
        v43 = v15;
        v22 = (_DWORD *)sub_FFBBF0(a2, (unsigned int)v33, v52);
        v35 = v52[0];
        LOBYTE(v15) = v43;
        LOBYTE(v14) = v46;
        v21 = v48;
      }
      if ( !v35 )
        goto LABEL_24;
    }
  }
LABEL_4:
  if ( v9 )
  {
    v16 = *(_BYTE *)(a1 + 32) | 0x1C;
    *(_BYTE *)(a1 + 32) = v16;
    if ( (v16 & 0x40) == 0 )
    {
      v10 = 0;
      if ( *(_QWORD *)(a1 + 16) > 3u )
        v10 = *(_BYTE *)(*(_QWORD *)(a1 + 8) + 3LL) == 60;
    }
    *(_BYTE *)(a1 + 32) = ((v10 & 1) << 6) | *(_BYTE *)(a1 + 32) & 0xBF;
    return (unsigned __int8)(v10 & 1) << 6;
  }
  else
  {
    v28 = (4 * v15) | *(_BYTE *)(a1 + 32) & 0xE3;
    v29 = *(_QWORD *)(a1 + 16) <= 2u;
    *(_BYTE *)(a1 + 32) = (((v28 & 0x40) != 0 || v12) << 6) | v28 & 0xBF;
    if ( !v29 )
    {
      v30 = *(_QWORD *)(a1 + 8);
      if ( *(_WORD *)v30 == 12079 && *(_BYTE *)(v30 + 2) == 60 )
      {
        v10 = 1;
      }
      else if ( *(_WORD *)v30 == 10799 && *(_BYTE *)(v30 + 2) == 60 )
      {
        v10 = 1;
      }
    }
    result = *(_BYTE *)(a1 + 32) & 0x7F;
    *(_BYTE *)(a1 + 32) = result | (v10 << 7);
  }
  return result;
}

