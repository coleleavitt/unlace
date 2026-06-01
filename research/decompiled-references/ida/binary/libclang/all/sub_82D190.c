__int64 __fastcall sub_82D190(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rdi
  void **v8; // rsi
  unsigned __int64 v9; // r14
  __int64 v10; // r13
  char v11; // al
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rax
  _QWORD *v15; // rbx
  unsigned __int8 *v16; // rbp
  _BYTE *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdi
  unsigned int v21; // eax
  void *v22; // rcx
  char v23; // dl
  unsigned __int64 v24; // rax
  unsigned int v25; // esi
  unsigned __int64 v26; // rax
  unsigned int v27; // r13d
  unsigned int v28; // esi
  _QWORD *v29; // rdi
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // r13
  __int64 v37; // r14
  __int64 v38; // r13
  void *v39; // rdi
  unsigned int v40; // ebx
  bool v41; // si
  unsigned __int8 v42; // [rsp+Fh] [rbp-79h]
  void *v43; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v44; // [rsp+18h] [rbp-70h]
  char v45; // [rsp+1Ch] [rbp-6Ch]
  unsigned __int64 v46; // [rsp+20h] [rbp-68h] BYREF
  void *v47; // [rsp+28h] [rbp-60h]
  unsigned int v48; // [rsp+30h] [rbp-58h]
  char v49; // [rsp+34h] [rbp-54h]

  v6 = a3 & 1;
  v7 = *(_QWORD *)a1;
  v8 = *(void ***)(a1 + 8);
  if ( (_DWORD)v6 || (v9 = a3 & 0xFFFFFFFFFFFFFFF0LL, (byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0) )
  {
    v14 = sub_A2E130(v7, v8, 2240, 0);
    v15 = (_QWORD *)v14;
    if ( v14 )
    {
      v16 = *(unsigned __int8 **)v14;
      if ( !*(_QWORD *)v14 )
      {
        v33 = *(_QWORD *)(v14 + 8);
        v34 = *(_DWORD *)(v33 + 14976);
        if ( v34 )
        {
          v35 = (unsigned int)(v34 - 1);
          *(_DWORD *)(v33 + 14976) = v35;
          v16 = *(unsigned __int8 **)(v33 + 8 * v35 + 14848);
          v36 = *((unsigned int *)v16 + 134);
          *v16 = 0;
          v37 = *((_QWORD *)v16 + 66);
          *((_DWORD *)v16 + 106) = 0;
          v38 = v37 + (v36 << 6);
          while ( v37 != v38 )
          {
            while ( 1 )
            {
              v38 -= 64;
              v39 = *(void **)(v38 + 24);
              if ( v39 == (void *)(v38 + 40) )
                break;
              operator delete(v39, *(_QWORD *)(v38 + 40) + 1LL);
              if ( v37 == v38 )
                goto LABEL_65;
            }
          }
LABEL_65:
          *((_DWORD *)v16 + 134) = 0;
        }
        else
        {
          v16 = (unsigned __int8 *)operator new(0x3A0u);
          *v16 = 0;
          *((_QWORD *)v16 + 12) = v16 + 112;
          *((_QWORD *)v16 + 16) = v16 + 144;
          *((_QWORD *)v16 + 20) = v16 + 176;
          *((_QWORD *)v16 + 24) = v16 + 208;
          *((_QWORD *)v16 + 28) = v16 + 240;
          *((_QWORD *)v16 + 32) = v16 + 272;
          *((_QWORD *)v16 + 36) = v16 + 304;
          *((_QWORD *)v16 + 40) = v16 + 336;
          *((_QWORD *)v16 + 44) = v16 + 368;
          *((_QWORD *)v16 + 48) = v16 + 400;
          *((_QWORD *)v16 + 13) = 0;
          v16[112] = 0;
          *((_QWORD *)v16 + 17) = 0;
          v16[144] = 0;
          *((_QWORD *)v16 + 21) = 0;
          v16[176] = 0;
          *((_QWORD *)v16 + 25) = 0;
          v16[208] = 0;
          *((_QWORD *)v16 + 29) = 0;
          v16[240] = 0;
          *((_QWORD *)v16 + 33) = 0;
          v16[272] = 0;
          *((_QWORD *)v16 + 37) = 0;
          v16[304] = 0;
          *((_QWORD *)v16 + 41) = 0;
          v16[336] = 0;
          *((_QWORD *)v16 + 45) = 0;
          v16[368] = 0;
          *((_QWORD *)v16 + 49) = 0;
          v16[400] = 0;
          *((_QWORD *)v16 + 52) = v16 + 432;
          *((_QWORD *)v16 + 53) = 0x800000000LL;
          *((_QWORD *)v16 + 66) = v16 + 544;
          *((_QWORD *)v16 + 67) = 0x600000000LL;
        }
        *v15 = v16;
      }
      v16[*v16 + 1] = 8;
      v17 = (_BYTE *)*v15;
      v18 = *(unsigned __int8 *)*v15;
      *v17 = v18 + 1;
      *(_QWORD *)&v17[8 * v18 + 16] = a3;
    }
    return 0;
  }
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v11 = *(_BYTE *)(v10 + 16);
  if ( v11 != 13 )
  {
    if ( v11 == 46 )
    {
      v19 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 8LL) & 0xFFFFFFFFFFFFFFF0LL));
      if ( (*(_BYTE *)(v19 + 74) & 1) == 0 && *(_QWORD *)(v19 + 128) <= 7u || *(char *)(sub_B14A40(v10) + 76) < 0 )
      {
        v7 = *(_QWORD *)a1;
        v8 = *(void ***)(a1 + 8);
        goto LABEL_5;
      }
      v20 = *(_QWORD *)(a1 + 24);
      if ( !v20 )
        goto LABEL_26;
    }
    else
    {
      if ( v11 != 10 )
        goto LABEL_5;
      v20 = *(_QWORD *)(a1 + 24);
      if ( !v20 )
        goto LABEL_29;
    }
LABEL_19:
    v21 = *(_DWORD *)(a2 + 8);
    v44 = v21;
    if ( v21 > 0x40 )
    {
      sub_2585B30(&v43);
      v20 = *(_QWORD *)(a1 + 24);
      v21 = v44;
      v22 = v43;
    }
    else
    {
      v22 = *(void **)a2;
      v43 = *(void **)a2;
    }
    v23 = *(_BYTE *)(a2 + 12);
    BYTE4(v46) &= ~1u;
    v8 = (void **)&v46;
    LODWORD(v46) = 2;
    v45 = v23;
    v44 = 0;
    v47 = v22;
    v48 = v21;
    v49 = v23;
    sub_6A01B0(v20, (__int64)&v46);
    if ( (unsigned int)v46 > 1 )
      sub_69F740((__int64)&v46);
    if ( v44 > 0x40 && v43 )
      operator delete[](v43);
LABEL_26:
    v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v12 + 16) != 13 )
      goto LABEL_29;
    LOWORD(v12) = (*(_WORD *)(v12 + 18) >> 3) & 0x1FF;
    goto LABEL_28;
  }
  LODWORD(v12) = (*(_WORD *)(v10 + 18) >> 3) & 0x1FF;
  v6 = (unsigned int)(v12 + 77);
  LOWORD(v6) = (v12 + 77) & 0x1FF;
  if ( (unsigned __int16)v6 > 0x13u )
  {
LABEL_5:
    sub_A2E130(v7, v8, 110, 0);
    return 0;
  }
  v20 = *(_QWORD *)(a1 + 24);
  if ( v20 )
    goto LABEL_19;
LABEL_28:
  if ( (_WORD)v12 == 435 )
  {
    if ( *(_DWORD *)(a1 + 16) == 3 )
    {
      sub_821DE0((_DWORD *)a2, 1);
    }
    else
    {
      v40 = *(_DWORD *)(a2 + 8);
      if ( v40 <= 0x40 )
        v41 = *(_QWORD *)a2 == 0;
      else
        v41 = v40 == (unsigned int)sub_2587400(a2);
      sub_821DE0((_DWORD *)a2, v41);
    }
    return 1;
  }
LABEL_29:
  if ( *(_BYTE *)(a2 + 12) )
    goto LABEL_45;
  v8 = (void **)*(unsigned int *)(a2 + 8);
  v6 = 1LL << ((unsigned __int8)v8 - 1);
  v24 = *(_QWORD *)a2;
  if ( (unsigned int)v8 > 0x40 )
    v24 = *(_QWORD *)(v24 + 8LL * ((unsigned int)((_DWORD)v8 - 1) >> 6));
  if ( (v24 & v6) == 0 )
  {
LABEL_45:
    if ( *(_DWORD *)(a1 + 16) != 3 )
    {
      sub_2586140(a2, v8, v6);
      return 1;
    }
    sub_25860D0(a2);
    if ( !*(_BYTE *)(a2 + 12) )
    {
      v28 = *(_DWORD *)(a2 + 8);
      v29 = *(_QWORD **)a2;
      v30 = *(_QWORD *)a2;
      if ( v28 > 0x40 )
        v30 = v29[(v28 - 1) >> 6];
      if ( (v30 & (1LL << ((unsigned __int8)v28 - 1))) != 0 )
      {
        v31 = *(_QWORD *)(a1 + 8);
        if ( (*(_BYTE *)(v31 + 3) & 1) != 0 )
        {
          LODWORD(v47) = *(_DWORD *)(a2 + 8);
          if ( v28 > 0x40 )
          {
            sub_2585B30(&v46);
            v31 = *(_QWORD *)(a1 + 8);
            v28 = (unsigned int)v47;
            v29 = (_QWORD *)v46;
          }
          v43 = v29;
          v32 = *(_QWORD *)a1;
          v44 = v28;
          v45 = 1;
          result = sub_82CA30(v32, v31, (__int64)&v43, a3);
          if ( v44 > 0x40 )
            goto LABEL_56;
          return result;
        }
      }
    }
    return 1;
  }
  if ( *(_DWORD *)(a1 + 16) == 3 )
  {
    sub_25860D0(a2);
    return 1;
  }
  sub_2586140(a2, v8, v6);
  if ( !*(_BYTE *)(a2 + 12) )
  {
    v25 = *(_DWORD *)(a2 + 8);
    v26 = *(_QWORD *)a2;
    if ( v25 > 0x40 )
      v26 = *(_QWORD *)(v26 + 8LL * ((v25 - 1) >> 6));
    if ( (v26 & (1LL << ((unsigned __int8)v25 - 1))) != 0 )
      return 1;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 3LL) & 1) == 0 )
    return 1;
  v27 = *(_DWORD *)(a2 + 8);
  sub_2587BE0(&v46, a2, v27 + 1);
  v45 = 0;
  v44 = (unsigned int)v47;
  v43 = (void *)v46;
  if ( (unsigned int)v47 > 0x40 )
    *(_QWORD *)(v46 + 8LL * (v27 >> 6)) |= 1LL << v27;
  else
    v43 = (void *)(v46 | (1LL << v27));
  result = sub_82CA30(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), (__int64)&v43, a3);
  if ( v44 > 0x40 )
  {
LABEL_56:
    if ( v43 )
    {
      v42 = result;
      operator delete[](v43);
      return v42;
    }
  }
  return result;
}

