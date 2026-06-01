__int64 __fastcall sub_82AC80(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned int v8; // edx
  _QWORD *v9; // rax
  unsigned int v10; // ecx
  _QWORD *v11; // r14
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // rax
  unsigned __int8 **v16; // r12
  unsigned __int8 *v17; // r13
  unsigned __int8 *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r14
  unsigned __int8 *v21; // rbx
  unsigned __int8 *v22; // rdx
  __int64 v23; // rax
  unsigned __int8 *v24; // rdx
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rbp
  __int64 v28; // r13
  __int64 v29; // rbp
  void *v30; // rdi
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // r14
  __int64 v35; // r15
  __int64 v36; // r14
  void *v37; // rdi

  v6 = *(_QWORD *)(a1[2] & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(unsigned __int8 *)(v7 + 16) - 2;
  if ( (unsigned int)*(unsigned __int8 *)(v6 + 16) - 2 <= 1 )
  {
    v9 = *(_QWORD **)(v6 + 40);
    if ( (*(_BYTE *)(v6 + 19) & 2) != 0 )
    {
      if ( *((_DWORD *)v9 + 2) <= 0x40u )
        v9 = (_QWORD *)*v9;
      else
        v9 = *(_QWORD **)*v9;
    }
    v10 = (unsigned int)v9;
    LODWORD(v9) = 1;
    if ( v8 > 1 || (v9 = *(_QWORD **)(v7 + 40), (*(_BYTE *)(v7 + 19) & 2) == 0) )
    {
LABEL_9:
      if ( (unsigned int)v9 < v10 )
        goto LABEL_12;
      goto LABEL_10;
    }
LABEL_7:
    if ( *((_DWORD *)v9 + 2) <= 0x40u )
      v9 = (_QWORD *)*v9;
    else
      v9 = *(_QWORD **)*v9;
    goto LABEL_9;
  }
  v10 = 1;
  if ( v8 <= 1 )
  {
    v9 = *(_QWORD **)(v7 + 40);
    if ( (*(_BYTE *)(v7 + 19) & 2) == 0 )
      goto LABEL_9;
    goto LABEL_7;
  }
LABEL_10:
  v11 = *(_QWORD **)(*a1 + 16LL);
  v12 = sub_6CB5B0(v11, a1[2]);
  v13 = sub_6CB5B0(*(_QWORD **)(*a1 + 16LL), a3);
  result = sub_6DA930(v11, v13, v12);
  if ( (_BYTE)result )
  {
    a1[4] = a2;
    return result;
  }
LABEL_12:
  v15 = sub_A2E130(*a1, a1[1], 2265, 0);
  v16 = (unsigned __int8 **)v15;
  if ( v15 )
  {
    v17 = *(unsigned __int8 **)v15;
    if ( !*(_QWORD *)v15 )
    {
      v31 = *(_QWORD *)(v15 + 8);
      v32 = *(_DWORD *)(v31 + 14976);
      if ( v32 )
      {
        v33 = (unsigned int)(v32 - 1);
        *(_DWORD *)(v31 + 14976) = v33;
        v17 = *(unsigned __int8 **)(v31 + 8 * v33 + 14848);
        v34 = *((unsigned int *)v17 + 134);
        *v17 = 0;
        v35 = *((_QWORD *)v17 + 66);
        *((_DWORD *)v17 + 106) = 0;
        v36 = v35 + (v34 << 6);
        while ( v35 != v36 )
        {
          while ( 1 )
          {
            v36 -= 64;
            v37 = *(void **)(v36 + 24);
            if ( v37 == (void *)(v36 + 40) )
              break;
            operator delete(v37, *(_QWORD *)(v36 + 40) + 1LL);
            if ( v35 == v36 )
              goto LABEL_34;
          }
        }
LABEL_34:
        *((_DWORD *)v17 + 134) = 0;
      }
      else
      {
        v17 = (unsigned __int8 *)operator new(0x3A0u);
        *v17 = 0;
        *((_QWORD *)v17 + 12) = v17 + 112;
        *((_QWORD *)v17 + 16) = v17 + 144;
        *((_QWORD *)v17 + 20) = v17 + 176;
        *((_QWORD *)v17 + 24) = v17 + 208;
        *((_QWORD *)v17 + 28) = v17 + 240;
        *((_QWORD *)v17 + 32) = v17 + 272;
        *((_QWORD *)v17 + 36) = v17 + 304;
        *((_QWORD *)v17 + 40) = v17 + 336;
        *((_QWORD *)v17 + 44) = v17 + 368;
        *((_QWORD *)v17 + 48) = v17 + 400;
        *((_QWORD *)v17 + 13) = 0;
        v17[112] = 0;
        *((_QWORD *)v17 + 17) = 0;
        v17[144] = 0;
        *((_QWORD *)v17 + 21) = 0;
        v17[176] = 0;
        *((_QWORD *)v17 + 25) = 0;
        v17[208] = 0;
        *((_QWORD *)v17 + 29) = 0;
        v17[240] = 0;
        *((_QWORD *)v17 + 33) = 0;
        v17[272] = 0;
        *((_QWORD *)v17 + 37) = 0;
        v17[304] = 0;
        *((_QWORD *)v17 + 41) = 0;
        v17[336] = 0;
        *((_QWORD *)v17 + 45) = 0;
        v17[368] = 0;
        *((_QWORD *)v17 + 49) = 0;
        v17[400] = 0;
        *((_QWORD *)v17 + 52) = v17 + 432;
        *((_QWORD *)v17 + 53) = 0x800000000LL;
        *((_QWORD *)v17 + 66) = v17 + 544;
        *((_QWORD *)v17 + 67) = 0x600000000LL;
      }
      *v16 = v17;
    }
    v17[*v17 + 1] = 8;
    v18 = *v16;
    v19 = **v16;
    *v18 = v19 + 1;
    *(_QWORD *)&v18[8 * v19 + 16] = a3;
    v20 = a1[2];
    v21 = *v16;
    if ( !*v16 )
    {
      v24 = v16[1];
      v25 = *((_DWORD *)v24 + 3744);
      if ( v25 )
      {
        v26 = (unsigned int)(v25 - 1);
        *((_DWORD *)v24 + 3744) = v26;
        v21 = *(unsigned __int8 **)&v24[8 * v26 + 14848];
        v27 = *((unsigned int *)v21 + 134);
        *v21 = 0;
        v28 = *((_QWORD *)v21 + 66);
        *((_DWORD *)v21 + 106) = 0;
        v29 = v28 + (v27 << 6);
        while ( v28 != v29 )
        {
          while ( 1 )
          {
            v29 -= 64;
            v30 = *(void **)(v29 + 24);
            if ( v30 == (void *)(v29 + 40) )
              break;
            operator delete(v30, *(_QWORD *)(v29 + 40) + 1LL);
            if ( v28 == v29 )
              goto LABEL_27;
          }
        }
LABEL_27:
        *((_DWORD *)v21 + 134) = 0;
      }
      else
      {
        v21 = (unsigned __int8 *)operator new(0x3A0u);
        *v21 = 0;
        *((_QWORD *)v21 + 12) = v21 + 112;
        *((_QWORD *)v21 + 16) = v21 + 144;
        *((_QWORD *)v21 + 20) = v21 + 176;
        *((_QWORD *)v21 + 24) = v21 + 208;
        *((_QWORD *)v21 + 28) = v21 + 240;
        *((_QWORD *)v21 + 32) = v21 + 272;
        *((_QWORD *)v21 + 36) = v21 + 304;
        *((_QWORD *)v21 + 40) = v21 + 336;
        *((_QWORD *)v21 + 44) = v21 + 368;
        *((_QWORD *)v21 + 48) = v21 + 400;
        *((_QWORD *)v21 + 13) = 0;
        v21[112] = 0;
        *((_QWORD *)v21 + 17) = 0;
        v21[144] = 0;
        *((_QWORD *)v21 + 21) = 0;
        v21[176] = 0;
        *((_QWORD *)v21 + 25) = 0;
        v21[208] = 0;
        *((_QWORD *)v21 + 29) = 0;
        v21[240] = 0;
        *((_QWORD *)v21 + 33) = 0;
        v21[272] = 0;
        *((_QWORD *)v21 + 37) = 0;
        v21[304] = 0;
        *((_QWORD *)v21 + 41) = 0;
        v21[336] = 0;
        *((_QWORD *)v21 + 45) = 0;
        v21[368] = 0;
        *((_QWORD *)v21 + 49) = 0;
        v21[400] = 0;
        *((_QWORD *)v21 + 52) = v21 + 432;
        *((_QWORD *)v21 + 53) = 0x800000000LL;
        *((_QWORD *)v21 + 66) = v21 + 544;
        *((_QWORD *)v21 + 67) = 0x600000000LL;
      }
      *v16 = v21;
    }
    v21[*v21 + 1] = 8;
    v22 = *v16;
    v23 = **v16;
    *v22 = v23 + 1;
    *(_QWORD *)&v22[8 * v23 + 16] = v20;
  }
  return 0;
}

