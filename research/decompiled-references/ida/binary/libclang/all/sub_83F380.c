__int64 __fastcall sub_83F380(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned int v9; // r12d
  __int64 v10; // r14
  char v11; // al
  __int64 v13; // rax
  _QWORD *v14; // rbx
  unsigned __int8 *v15; // r12
  _BYTE *v16; // rdx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r12
  int v22; // ecx
  __int64 v23; // rsi
  __int64 v24; // rdi
  unsigned int v25; // eax
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // r13
  __int64 v30; // r14
  __int64 v31; // r13
  void *v32; // rdi
  __int64 v33; // [rsp+8h] [rbp-80h]
  void *v34; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v35; // [rsp+18h] [rbp-70h]
  void *v36; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v37; // [rsp+38h] [rbp-50h]
  char v38; // [rsp+3Ch] [rbp-4Ch]

  v6 = a3 & 1;
  v7 = *(_QWORD *)a1;
  v8 = *(_QWORD *)(a1 + 8);
  if ( (_DWORD)v6 || (v9 = byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 1, (byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0) )
  {
    v13 = sub_A2E130(v7, v8, 2240, 0);
    v14 = (_QWORD *)v13;
    if ( v13 )
    {
      v15 = *(unsigned __int8 **)v13;
      if ( !*(_QWORD *)v13 )
      {
        v26 = *(_QWORD *)(v13 + 8);
        v27 = *(_DWORD *)(v26 + 14976);
        if ( v27 )
        {
          v28 = (unsigned int)(v27 - 1);
          *(_DWORD *)(v26 + 14976) = v28;
          v15 = *(unsigned __int8 **)(v26 + 8 * v28 + 14848);
          v29 = *((unsigned int *)v15 + 134);
          v30 = *((_QWORD *)v15 + 66);
          *v15 = 0;
          *((_DWORD *)v15 + 106) = 0;
          v31 = v30 + (v29 << 6);
          while ( v30 != v31 )
          {
            while ( 1 )
            {
              v31 -= 64;
              v32 = *(void **)(v31 + 24);
              if ( v32 == (void *)(v31 + 40) )
                break;
              operator delete(v32, *(_QWORD *)(v31 + 40) + 1LL);
              if ( v30 == v31 )
                goto LABEL_37;
            }
          }
LABEL_37:
          *((_DWORD *)v15 + 134) = 0;
        }
        else
        {
          v15 = (unsigned __int8 *)operator new(0x3A0u);
          *v15 = 0;
          *((_QWORD *)v15 + 12) = v15 + 112;
          *((_QWORD *)v15 + 16) = v15 + 144;
          *((_QWORD *)v15 + 20) = v15 + 176;
          *((_QWORD *)v15 + 24) = v15 + 208;
          *((_QWORD *)v15 + 28) = v15 + 240;
          *((_QWORD *)v15 + 32) = v15 + 272;
          *((_QWORD *)v15 + 36) = v15 + 304;
          *((_QWORD *)v15 + 40) = v15 + 336;
          *((_QWORD *)v15 + 44) = v15 + 368;
          *((_QWORD *)v15 + 48) = v15 + 400;
          *((_QWORD *)v15 + 13) = 0;
          v15[112] = 0;
          *((_QWORD *)v15 + 17) = 0;
          v15[144] = 0;
          *((_QWORD *)v15 + 21) = 0;
          v15[176] = 0;
          *((_QWORD *)v15 + 25) = 0;
          v15[208] = 0;
          *((_QWORD *)v15 + 29) = 0;
          v15[240] = 0;
          *((_QWORD *)v15 + 33) = 0;
          v15[272] = 0;
          *((_QWORD *)v15 + 37) = 0;
          v15[304] = 0;
          *((_QWORD *)v15 + 41) = 0;
          v15[336] = 0;
          *((_QWORD *)v15 + 45) = 0;
          v15[368] = 0;
          *((_QWORD *)v15 + 49) = 0;
          v15[400] = 0;
          *((_QWORD *)v15 + 52) = v15 + 432;
          *((_QWORD *)v15 + 53) = 0x800000000LL;
          *((_QWORD *)v15 + 66) = v15 + 544;
          *((_QWORD *)v15 + 67) = 0x600000000LL;
        }
        *v14 = v15;
      }
      v15[*v15 + 1] = 8;
      v16 = (_BYTE *)*v14;
      v17 = *(unsigned __int8 *)*v14;
      *v16 = v17 + 1;
      *(_QWORD *)&v16[8 * v17 + 16] = a3;
    }
    return 0;
  }
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v11 = *(_BYTE *)(v10 + 16);
  switch ( v11 )
  {
    case 13:
      if ( (((*(_WORD *)(v10 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
      {
LABEL_5:
        sub_A2E130(v7, v8, 110, 0);
        return 0;
      }
      break;
    case 46:
      v19 = sub_B14A40(v10);
      if ( (*(_BYTE *)(v19 + 74) & 1) == 0 && *(_QWORD *)(v19 + 128) <= 7u )
      {
        v7 = *(_QWORD *)a1;
        v8 = *(_QWORD *)(a1 + 8);
        goto LABEL_5;
      }
      v20 = sub_B14A40(v10);
      v7 = *(_QWORD *)a1;
      if ( *(char *)(v20 + 76) < 0 )
      {
        v8 = *(_QWORD *)(a1 + 8);
        goto LABEL_5;
      }
      break;
    case 10:
      break;
    default:
      goto LABEL_5;
  }
  v18 = **(_DWORD **)(a1 + 32);
  if ( v18 == 2 )
  {
    sub_8260F0((__int64)&v34, *(_QWORD *)(v7 + 16), *(_QWORD *)(a1 + 16), a2);
    v21 = *(_QWORD *)(a1 + 32);
    v37 = *(_DWORD *)(v21 + 16);
    if ( v37 > 0x40 )
      sub_2585B30(&v36);
    else
      v36 = *(void **)(v21 + 8);
    v22 = *(_DWORD *)(a1 + 24);
    v23 = *(_QWORD *)(a1 + 8);
    v24 = *(_QWORD *)a1;
    v38 = *(_BYTE *)(v21 + 20);
    LOBYTE(v25) = sub_83E020(v24, v23, (__int64)&v34, v22, (__int64)&v36, (__int64)&v34);
    v9 = v25;
    if ( v37 > 0x40 && v36 )
      operator delete[](v36);
    if ( (_BYTE)v9 )
    {
      sub_8260F0((__int64)&v36, *(_QWORD *)(*(_QWORD *)a1 + 16LL), a3, (__int64)&v34);
      if ( *(_DWORD *)(a2 + 8) > 0x40u && *(_QWORD *)a2 )
        operator delete[](*(void **)a2);
      *(_QWORD *)a2 = v36;
      *(_DWORD *)(a2 + 8) = v37;
      *(_BYTE *)(a2 + 12) = v38;
    }
    if ( v35 > 0x40 && v34 )
      operator delete[](v34);
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 8);
    if ( v18 != 3 )
      goto LABEL_5;
    if ( (*(_BYTE *)(v8 + 3) & 2) == 0 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 2160LL);
      sub_C8DF90(v7);
    }
    v33 = sub_2575D00(v7, v8, v6);
    sub_2580BE0(&v36, 0.0);
    sub_257EDC0(&v34, &v36, v33);
    sub_25769A0(&v36);
    if ( (unsigned __int8)sub_834DF0(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), a2, *(_QWORD *)(a1 + 16), &v34)
      && (unsigned __int8)sub_82E1B0(
                            *(_QWORD *)a1,
                            *(_QWORD *)(a1 + 8),
                            &v34,
                            *(_DWORD *)(a1 + 24),
                            (_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL)) )
    {
      v9 = sub_839180(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), &v34, a3, a2);
    }
    sub_5FF3B0((__int64 *)&v34);
  }
  return v9;
}

