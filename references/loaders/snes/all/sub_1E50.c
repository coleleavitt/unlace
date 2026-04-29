unsigned __int64 __fastcall sub_1E50(__int64 a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // r14d
  int v5; // ebp
  int v6; // edx
  __m128i si128; // xmm0
  __int64 v9; // r12
  int v10; // eax
  int v11; // r14d
  unsigned __int8 v12; // r13
  char v13; // al
  int v14; // edx
  __int64 v15; // rdx
  bool v16; // al
  int v17; // eax
  char v18; // cl
  int v19; // ecx
  bool v20; // di
  bool v21; // dl
  char v22; // dl
  char v23; // dl
  bool v24; // zf
  int v25; // [rsp+8h] [rbp-1B0h]
  char v26; // [rsp+Eh] [rbp-1AAh]
  char v27; // [rsp+Fh] [rbp-1A9h]
  _QWORD v28[2]; // [rsp+10h] [rbp-1A8h] BYREF
  _QWORD v29[2]; // [rsp+20h] [rbp-198h]
  _BYTE v30[3]; // [rsp+30h] [rbp-188h] BYREF
  char v31; // [rsp+33h] [rbp-185h]
  char v32; // [rsp+35h] [rbp-183h]
  unsigned __int8 v33; // [rsp+36h] [rbp-182h]
  unsigned __int8 v34; // [rsp+3Ch] [rbp-17Ch]
  char v35; // [rsp+3Dh] [rbp-17Bh]
  _BYTE v36[21]; // [rsp+40h] [rbp-178h]
  unsigned __int8 v37; // [rsp+55h] [rbp-163h]
  char v38; // [rsp+56h] [rbp-162h]
  unsigned __int8 v39; // [rsp+57h] [rbp-161h]
  char v40; // [rsp+58h] [rbp-160h]
  char v41; // [rsp+59h] [rbp-15Fh]
  char v42; // [rsp+5Ah] [rbp-15Eh]
  char v43; // [rsp+134h] [rbp-84h]
  char v44; // [rsp+135h] [rbp-83h]
  char v45; // [rsp+136h] [rbp-82h]
  char v46; // [rsp+137h] [rbp-81h]
  char v47; // [rsp+138h] [rbp-80h]
  char v48; // [rsp+139h] [rbp-7Fh]
  char v49; // [rsp+13Ah] [rbp-7Eh]
  char v50; // [rsp+13Bh] [rbp-7Dh]
  unsigned __int64 v51; // [rsp+178h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  v3 = qlsize(a2);
  if ( v3 < 0 )
    return v51 - __readfsqword(0x28u);
  v4 = 0;
  v5 = v3;
  v6 = v3 & 0x7FFF;
  *(_BYTE *)(a1 + 9) = v6 == 512;
  if ( v6 == 512 )
  {
    v5 = v3 - 512;
    v4 = 512;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_54E0);
  *(_DWORD *)a1 = v5;
  *(_DWORD *)(a1 + 4) = 0;
  *(__m128i *)(a1 + 16) = si128;
  *(_OWORD *)(a1 + 32) = 0;
  if ( v5 <= 319 )
    goto LABEL_5;
  v9 = v4;
  qlseek(a2, v4, 0);
  qlread(a2, v30, 320);
  if ( v43 == -50 && v44 == -19 && v45 == 102 && v46 == 102 && v47 == -52 && v48 == 13 && !v49 && v50 == 11 )
  {
    *(_DWORD *)(a1 + 16) = 8;
    return v51 - __readfsqword(0x28u);
  }
  if ( v5 <= 0x7FFF )
  {
LABEL_5:
    *(_DWORD *)(a1 + 16) = 9;
    return v51 - __readfsqword(0x28u);
  }
  v10 = sub_1DD0(a2);
  *(_DWORD *)(a1 + 12) = v10;
  v25 = v10;
  qlseek(a2, v4 + v10 - 16, 0);
  qlread(a2, v30, 80);
  v11 = v37;
  v12 = v39;
  v26 = v38;
  v27 = v42;
  v13 = v41 & 0x7F;
  if ( (v40 & 7) != 0 )
  {
    v14 = 1024 << (v40 & 7);
    if ( !v39 )
      v14 = 0;
    *(_DWORD *)(a1 + 4) = v14;
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0;
  }
  *(_DWORD *)(a1 + 20) = (unsigned __int8)(v13 - 2) <= 0xAu;
  if ( (unsigned __int8)(v36[19] - 1) > 0xFDu && !v36[20] )
  {
    if ( (unsigned __int8)v11 > 0xBCu )
    {
      if ( (_BYTE)v11 != 0xFC )
        goto LABEL_22;
    }
    else if ( (v11 & 0x80u) == 0 )
    {
      if ( (_BYTE)v11 )
        goto LABEL_22;
    }
    else
    {
      v15 = 0x1000000010000011LL;
      if ( !_bittest64(&v15, (unsigned int)(v11 - 128)) )
        goto LABEL_22;
    }
    if ( v27 == 51 || v27 == -1 )
    {
      *(_DWORD *)(a1 + 24) = 9;
      *(_QWORD *)(a1 + 16) = 3;
      return v51 - __readfsqword(0x28u);
    }
  }
LABEL_22:
  qlseek(a2, v9, 0);
  qlread(a2, v28, 32);
  if ( v28[0] == 0x53204941444E4142LL && *(_QWORD *)((char *)v28 + 6) == 0x5844412D43465320LL )
  {
    if ( v29[0] == 0x205844412D434653LL && *(_QWORD *)((char *)v29 + 6) == 0x50554B4341422058LL )
      v17 = 4;
    else
      v17 = 5;
    *(_DWORD *)(a1 + 16) = v17;
    *(_QWORD *)(a1 + 20) = 0xA00000000LL;
    return v51 - __readfsqword(0x28u);
  }
  if ( *(_QWORD *)v36 == 0x4147207265707553LL && *(_QWORD *)&v36[6] == 0x32594F42454D4147LL )
  {
    *(_DWORD *)(a1 + 16) = 7;
    return v51 - __readfsqword(0x28u);
  }
  if ( *(_QWORD *)v36 == 0x4147207265707553LL && *(_QWORD *)&v36[5] == 0x594F42454D414720LL )
  {
    *(_DWORD *)(a1 + 16) = 6;
    return v51 - __readfsqword(0x28u);
  }
  if ( v30[2] == 90
    && v32 == 74
    && ((unsigned __int8)(v31 - 65) <= 0x19u || (unsigned __int8)(v31 - 48) <= 9u)
    && (v27 == 51 || !(v34 | v33)) )
  {
    *(_BYTE *)(a1 + 32) = 1;
LABEL_27:
    if ( !(*(_QWORD *)&v36[8] ^ 0x582D534220776569LL | *(_QWORD *)v36 ^ 0x76616C6C65746153LL)
      && *(_QWORD *)&v36[13] == 0x2020202020582D53LL )
    {
      *(_DWORD *)(a1 + 24) = 9;
      *(_QWORD *)(a1 + 16) = 2;
      return v51 - __readfsqword(0x28u);
    }
    *(_DWORD *)(a1 + 16) = 1;
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 24) = (v25 != 32704) + 7;
    goto LABEL_29;
  }
  if ( *(_BYTE *)(a1 + 32) )
    goto LABEL_27;
  *(_DWORD *)(a1 + 16) = 0;
  v16 = v25 == 32704 && v5 > 4198399;
  if ( v16 )
  {
    *(_DWORD *)(a1 + 24) = 2;
  }
  else
  {
    if ( (_BYTE)v11 == 50 && v25 == 32704 )
    {
      *(_DWORD *)(a1 + 24) = 2;
      if ( ((v26 - 67) & 0xFD) == 0 )
      {
LABEL_70:
        *(_BYTE *)(a1 + 37) = 1;
LABEL_71:
        v16 = 0;
        goto LABEL_72;
      }
      if ( !*(_BYTE *)(a1 + 40) )
        goto LABEL_71;
      v20 = v26 == 5;
      v21 = 0;
      goto LABEL_87;
    }
    if ( v25 == 32704 )
      *(_DWORD *)(a1 + 24) = 0;
    else
      *(_DWORD *)(a1 + 24) = 2 * (v25 != 65472) + 1;
  }
LABEL_29:
  if ( (_BYTE)v11 != 32 )
  {
    if ( (_BYTE)v11 == 35 )
    {
      if ( (unsigned __int8)(v26 - 52) <= 1u || v26 == 50 )
      {
        *(_BYTE *)(a1 + 34) = 1;
        *(_DWORD *)(a1 + 24) = 5;
LABEL_85:
        v20 = v26 == 5;
        if ( !*(_BYTE *)(a1 + 40) )
          goto LABEL_71;
        v21 = 0;
        v16 = 0;
LABEL_87:
        if ( (v11 & 0x2F) != 0x20 )
        {
          if ( (v11 & 0x2F) == 0x21 )
            *(_DWORD *)(a1 + 28) = 3;
LABEL_90:
          if ( v21 )
          {
            *(_BYTE *)(a1 + 43) = 1;
            return v51 - __readfsqword(0x28u);
          }
LABEL_72:
          if ( v26 == 37 && v16 )
          {
            *(_BYTE *)(a1 + 44) = 1;
            return v51 - __readfsqword(0x28u);
          }
          goto LABEL_34;
        }
        v22 = 0;
LABEL_99:
        v23 = v20 & v22;
        if ( v5 > 0x100000 )
        {
          *(_DWORD *)(a1 + 28) = 2;
          if ( !v23 )
            goto LABEL_102;
        }
        else
        {
          *(_DWORD *)(a1 + 28) = 1;
          if ( !v23 )
          {
LABEL_102:
            v21 = v16 && v26 == 3;
            goto LABEL_90;
          }
        }
        *(_BYTE *)(a1 + 41) = 1;
        goto LABEL_102;
      }
      goto LABEL_104;
    }
    v16 = v26 == 85 && (_BYTE)v11 == 53;
    if ( v16 )
    {
      *(_BYTE *)(a1 + 35) = 1;
LABEL_33:
      v16 = 0;
LABEL_34:
      if ( v26 == -10 && v16 )
      {
        if ( v12 <= 9u )
          *(_BYTE *)(a1 + 46) = 1;
        else
          *(_BYTE *)(a1 + 45) = 1;
      }
      else if ( v26 == -11 && v16 )
      {
        *(_BYTE *)(a1 + 47) = 1;
      }
      return v51 - __readfsqword(0x28u);
    }
    if ( (_BYTE)v11 == 50 )
    {
      if ( ((v26 - 67) & 0xFD) != 0 )
        goto LABEL_33;
      goto LABEL_70;
    }
    if ( (_BYTE)v11 == 58 )
    {
      if ( ((v26 + 11) & 0xFB) == 0 )
      {
        v24 = *(_BYTE *)(a1 + 40) == 0;
        *(_BYTE *)(a1 + 38) = 1;
        *(_BYTE *)(a1 + 36) = v26 == -7;
        *(_DWORD *)(a1 + 24) = 6;
        if ( v24 )
          return v51 - __readfsqword(0x28u);
        goto LABEL_33;
      }
      goto LABEL_85;
    }
    if ( (_BYTE)v11 != 33 )
    {
LABEL_104:
      v16 = (_BYTE)v11 == 48;
      v20 = v26 == 5;
      if ( (_BYTE)v11 == 48 && v26 == 5 )
      {
        if ( v27 == -78 )
        {
          if ( *(_BYTE *)(a1 + 40) )
            *(_DWORD *)(a1 + 28) = (v5 > 0x100000) + 1;
          *(_BYTE *)(a1 + 42) = 1;
        }
        else
        {
          *(_BYTE *)(a1 + 40) = 1;
          *(_DWORD *)(a1 + 28) = (v5 > 0x100000) + 1;
        }
        return v51 - __readfsqword(0x28u);
      }
      if ( (_BYTE)v11 != 49 )
      {
        v21 = (_BYTE)v11 == 48 && v26 == 3;
        if ( !*(_BYTE *)(a1 + 40) )
          goto LABEL_90;
        goto LABEL_87;
      }
      if ( v26 == 3 || v26 == 5 )
      {
        *(_BYTE *)(a1 + 40) = 1;
      }
      else if ( !*(_BYTE *)(a1 + 40) )
      {
        return v51 - __readfsqword(0x28u);
      }
LABEL_80:
      *(_DWORD *)(a1 + 28) = 3;
      return v51 - __readfsqword(0x28u);
    }
    goto LABEL_78;
  }
  v16 = v26 == 26 || (unsigned __int8)(v26 - 19) <= 2u;
  if ( v16 )
  {
    v18 = v35;
    *(_BYTE *)(a1 + 33) = 1;
    *(_DWORD *)(a1 + 24) = 4;
    v19 = v18 & 7;
    if ( !v19 )
    {
      *(_DWORD *)(a1 + 4) = 0;
LABEL_124:
      v20 = v26 == 5;
      if ( *(_BYTE *)(a1 + 40) )
      {
        if ( (_BYTE)v11 != 32 )
        {
          *(_DWORD *)(a1 + 28) = 3;
          goto LABEL_71;
        }
        v22 = v16;
        v16 = 0;
        goto LABEL_99;
      }
      if ( !v16 )
        return v51 - __readfsqword(0x28u);
      goto LABEL_126;
    }
    *(_DWORD *)(a1 + 4) = 1024 << v19;
LABEL_78:
    if ( v26 == 3 )
    {
      *(_BYTE *)(a1 + 40) = 1;
      if ( (_BYTE)v11 != 32 )
        goto LABEL_80;
LABEL_132:
      if ( v5 <= 0x100000 )
      {
        *(_DWORD *)(a1 + 28) = 1;
        goto LABEL_33;
      }
      *(_DWORD *)(a1 + 28) = 2;
      goto LABEL_71;
    }
    goto LABEL_124;
  }
  if ( v26 == -13 )
  {
    v22 = *(_BYTE *)(a1 + 40);
    *(_BYTE *)(a1 + 39) = 1;
    if ( !v22 )
      return v51 - __readfsqword(0x28u);
    v20 = 0;
    goto LABEL_99;
  }
  if ( v26 == 3 )
  {
    *(_BYTE *)(a1 + 40) = 1;
    goto LABEL_132;
  }
  v22 = *(_BYTE *)(a1 + 40);
  v20 = v26 == 5;
  if ( v22 )
    goto LABEL_99;
LABEL_126:
  if ( v20 )
    *(_BYTE *)(a1 + 41) = 1;
  return v51 - __readfsqword(0x28u);
}
