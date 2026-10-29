void __fastcall sub_13D2A10(int a1, unsigned __int8 a2, _BYTE *a3, __int64 a4)
{
  char v5; // al
  int v6; // ecx
  __int64 v7; // rbp
  unsigned __int8 *v8; // rbx
  unsigned __int8 *v9; // rdx
  __int64 v10; // rax
  unsigned __int8 *v11; // rbx
  unsigned __int8 *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // r15
  __int64 v21; // r13
  void *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // r14
  __int64 v26; // r13
  void *v27; // rdi
  unsigned __int8 *v28; // [rsp+0h] [rbp-88h] BYREF
  __int64 v29; // [rsp+8h] [rbp-80h]

  v5 = a3[1] & 8;
  if ( (a3[2] & 1) != 0 )
  {
    v6 = 1339;
    v7 = 0;
    if ( v5 )
      goto LABEL_5;
    goto LABEL_9;
  }
  if ( (*a3 & 0x10) == 0 || a2 )
  {
    v6 = 1217;
    v7 = 0;
    if ( v5 )
      goto LABEL_5;
LABEL_9:
    v7 = (a2 != 0) + 1LL;
    goto LABEL_5;
  }
  v6 = 1311;
  v7 = v5 == 0;
LABEL_5:
  sub_FC70B0((__int64)&v28, a4, a1, v6);
  v8 = v28;
  if ( !v28 )
  {
    v14 = v29;
    v15 = *(_DWORD *)(v29 + 14976);
    if ( v15 )
    {
      v18 = (unsigned int)(v15 - 1);
      *(_DWORD *)(v29 + 14976) = v18;
      v8 = *(unsigned __int8 **)(v14 + 8 * v18 + 14848);
      v19 = *((unsigned int *)v8 + 134);
      *v8 = 0;
      v20 = *((_QWORD *)v8 + 66);
      *((_DWORD *)v8 + 106) = 0;
      v21 = v20 + (v19 << 6);
      while ( v20 != v21 )
      {
        while ( 1 )
        {
          v21 -= 64;
          v22 = *(void **)(v21 + 24);
          if ( v22 == (void *)(v21 + 40) )
            break;
          operator delete(v22);
          if ( v20 == v21 )
            goto LABEL_21;
        }
      }
LABEL_21:
      *((_DWORD *)v8 + 134) = 0;
    }
    else
    {
      v8 = (unsigned __int8 *)operator new(0x3A0u);
      *v8 = 0;
      *((_QWORD *)v8 + 12) = v8 + 112;
      *((_QWORD *)v8 + 16) = v8 + 144;
      *((_QWORD *)v8 + 20) = v8 + 176;
      *((_QWORD *)v8 + 24) = v8 + 208;
      *((_QWORD *)v8 + 28) = v8 + 240;
      *((_QWORD *)v8 + 32) = v8 + 272;
      *((_QWORD *)v8 + 36) = v8 + 304;
      *((_QWORD *)v8 + 40) = v8 + 336;
      *((_QWORD *)v8 + 44) = v8 + 368;
      *((_QWORD *)v8 + 48) = v8 + 400;
      *((_QWORD *)v8 + 52) = v8 + 432;
      *((_QWORD *)v8 + 13) = 0;
      v8[112] = 0;
      *((_QWORD *)v8 + 17) = 0;
      v8[144] = 0;
      *((_QWORD *)v8 + 21) = 0;
      v8[176] = 0;
      *((_QWORD *)v8 + 25) = 0;
      v8[208] = 0;
      *((_QWORD *)v8 + 29) = 0;
      v8[240] = 0;
      *((_QWORD *)v8 + 33) = 0;
      v8[272] = 0;
      *((_QWORD *)v8 + 37) = 0;
      v8[304] = 0;
      *((_QWORD *)v8 + 41) = 0;
      v8[336] = 0;
      *((_QWORD *)v8 + 45) = 0;
      v8[368] = 0;
      *((_QWORD *)v8 + 49) = 0;
      v8[400] = 0;
      *((_QWORD *)v8 + 53) = 0x800000000LL;
      *((_QWORD *)v8 + 66) = v8 + 544;
      *((_QWORD *)v8 + 67) = 0x600000000LL;
    }
    v28 = v8;
  }
  v8[*v8 + 1] = 2;
  v9 = v28;
  v10 = *v28;
  *v28 = v10 + 1;
  v11 = v28;
  *(_QWORD *)&v9[8 * v10 + 16] = a2;
  if ( !v11 )
  {
    v16 = v29;
    v17 = *(_DWORD *)(v29 + 14976);
    if ( v17 )
    {
      v23 = (unsigned int)(v17 - 1);
      *(_DWORD *)(v29 + 14976) = v23;
      v11 = *(unsigned __int8 **)(v16 + 8 * v23 + 14848);
      v24 = *((unsigned int *)v11 + 134);
      *v11 = 0;
      v25 = *((_QWORD *)v11 + 66);
      *((_DWORD *)v11 + 106) = 0;
      v26 = v25 + (v24 << 6);
      while ( v25 != v26 )
      {
        while ( 1 )
        {
          v26 -= 64;
          v27 = *(void **)(v26 + 24);
          if ( v27 == (void *)(v26 + 40) )
            break;
          operator delete(v27);
          if ( v25 == v26 )
            goto LABEL_26;
        }
      }
LABEL_26:
      *((_DWORD *)v11 + 134) = 0;
    }
    else
    {
      v11 = (unsigned __int8 *)operator new(0x3A0u);
      *v11 = 0;
      *((_QWORD *)v11 + 12) = v11 + 112;
      *((_QWORD *)v11 + 16) = v11 + 144;
      *((_QWORD *)v11 + 20) = v11 + 176;
      *((_QWORD *)v11 + 24) = v11 + 208;
      *((_QWORD *)v11 + 28) = v11 + 240;
      *((_QWORD *)v11 + 32) = v11 + 272;
      *((_QWORD *)v11 + 36) = v11 + 304;
      *((_QWORD *)v11 + 40) = v11 + 336;
      *((_QWORD *)v11 + 44) = v11 + 368;
      *((_QWORD *)v11 + 48) = v11 + 400;
      *((_QWORD *)v11 + 52) = v11 + 432;
      *((_QWORD *)v11 + 13) = 0;
      v11[112] = 0;
      *((_QWORD *)v11 + 17) = 0;
      v11[144] = 0;
      *((_QWORD *)v11 + 21) = 0;
      v11[176] = 0;
      *((_QWORD *)v11 + 25) = 0;
      v11[208] = 0;
      *((_QWORD *)v11 + 29) = 0;
      v11[240] = 0;
      *((_QWORD *)v11 + 33) = 0;
      v11[272] = 0;
      *((_QWORD *)v11 + 37) = 0;
      v11[304] = 0;
      *((_QWORD *)v11 + 41) = 0;
      v11[336] = 0;
      *((_QWORD *)v11 + 45) = 0;
      v11[368] = 0;
      *((_QWORD *)v11 + 49) = 0;
      v11[400] = 0;
      *((_QWORD *)v11 + 53) = 0x800000000LL;
      *((_QWORD *)v11 + 66) = v11 + 544;
      *((_QWORD *)v11 + 67) = 0x600000000LL;
    }
    v28 = v11;
  }
  v11[*v11 + 1] = 3;
  v12 = v28;
  v13 = *v28;
  *v28 = v13 + 1;
  *(_QWORD *)&v12[8 * v13 + 16] = v7;
  sub_AEA040((__int64)&v28);
}
