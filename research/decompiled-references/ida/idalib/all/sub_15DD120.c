__int64 __fastcall sub_15DD120(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // r13
  unsigned __int8 *v11; // rbp
  _BYTE *v12; // rdx
  __int64 v13; // rax
  unsigned __int8 *v14; // rbp
  _BYTE *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // r14
  __int64 v22; // r13
  void *v23; // rdi
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // r15
  __int64 v29; // r14
  void *v30; // rdi
  __int64 v31[8]; // [rsp+8h] [rbp-40h] BYREF

  if ( *(_BYTE *)(a1 + 120) )
  {
    v14 = *(unsigned __int8 **)(a1 + 32);
    if ( !v14 )
    {
      v17 = *(_QWORD *)(a1 + 40);
      v18 = *(_DWORD *)(v17 + 14976);
      if ( v18 )
      {
        v19 = (unsigned int)(v18 - 1);
        *(_DWORD *)(v17 + 14976) = v19;
        v14 = *(unsigned __int8 **)(v17 + 8 * v19 + 14848);
        v20 = *((unsigned int *)v14 + 134);
        *v14 = 0;
        v21 = *((_QWORD *)v14 + 66);
        *((_DWORD *)v14 + 106) = 0;
        v22 = v21 + (v20 << 6);
        while ( v21 != v22 )
        {
          while ( 1 )
          {
            v22 -= 64;
            v23 = *(void **)(v22 + 24);
            if ( v23 == (void *)(v22 + 40) )
              break;
            operator delete(v23);
            if ( v21 == v22 )
              goto LABEL_15;
          }
        }
LABEL_15:
        *((_DWORD *)v14 + 134) = 0;
      }
      else
      {
        v14 = (unsigned __int8 *)operator new(0x3A0u);
        *v14 = 0;
        *((_QWORD *)v14 + 12) = v14 + 112;
        *((_QWORD *)v14 + 16) = v14 + 144;
        *((_QWORD *)v14 + 20) = v14 + 176;
        *((_QWORD *)v14 + 24) = v14 + 208;
        *((_QWORD *)v14 + 28) = v14 + 240;
        *((_QWORD *)v14 + 32) = v14 + 272;
        *((_QWORD *)v14 + 36) = v14 + 304;
        *((_QWORD *)v14 + 40) = v14 + 336;
        *((_QWORD *)v14 + 44) = v14 + 368;
        *((_QWORD *)v14 + 48) = v14 + 400;
        *((_QWORD *)v14 + 52) = v14 + 432;
        *((_QWORD *)v14 + 13) = 0;
        v14[112] = 0;
        *((_QWORD *)v14 + 17) = 0;
        v14[144] = 0;
        *((_QWORD *)v14 + 21) = 0;
        v14[176] = 0;
        *((_QWORD *)v14 + 25) = 0;
        v14[208] = 0;
        *((_QWORD *)v14 + 29) = 0;
        v14[240] = 0;
        *((_QWORD *)v14 + 33) = 0;
        v14[272] = 0;
        *((_QWORD *)v14 + 37) = 0;
        v14[304] = 0;
        *((_QWORD *)v14 + 41) = 0;
        v14[336] = 0;
        *((_QWORD *)v14 + 45) = 0;
        v14[368] = 0;
        *((_QWORD *)v14 + 49) = 0;
        v14[400] = 0;
        *((_QWORD *)v14 + 53) = 0x800000000LL;
        *((_QWORD *)v14 + 66) = v14 + 544;
        *((_QWORD *)v14 + 67) = 0x600000000LL;
      }
      *(_QWORD *)(a1 + 32) = v14;
    }
    v14[*v14 + 1] = 16;
    v15 = *(_BYTE **)(a1 + 32);
    v16 = (unsigned __int8)*v15;
    *v15 = v16 + 1;
    *(_QWORD *)&v15[8 * v16 + 16] = a2;
  }
  else if ( *(_BYTE *)(a1 + 132) )
  {
    v6 = sub_168B9E0(a1);
    v9 = *(_QWORD *)(a1 + 16);
    if ( v9 )
      v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 32LL))(*(_QWORD *)(a1 + 16));
    v31[0] = v9;
    v10 = *sub_1587BC0(v6, v31, v4, v5, v7, v8) + 32LL * *(unsigned int *)(a1 + 128);
    v11 = *(unsigned __int8 **)(v10 + 8);
    if ( !v11 )
    {
      v24 = *(_QWORD *)(v10 + 16);
      v25 = *(_DWORD *)(v24 + 14976);
      if ( v25 )
      {
        v26 = (unsigned int)(v25 - 1);
        *(_DWORD *)(v24 + 14976) = v26;
        v11 = *(unsigned __int8 **)(v24 + 8 * v26 + 14848);
        v27 = *((unsigned int *)v11 + 134);
        *v11 = 0;
        v28 = *((_QWORD *)v11 + 66);
        *((_DWORD *)v11 + 106) = 0;
        v29 = v28 + (v27 << 6);
        while ( v28 != v29 )
        {
          while ( 1 )
          {
            v29 -= 64;
            v30 = *(void **)(v29 + 24);
            if ( v30 == (void *)(v29 + 40) )
              break;
            operator delete(v30);
            if ( v28 == v29 )
              goto LABEL_25;
          }
        }
LABEL_25:
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
      *(_QWORD *)(v10 + 8) = v11;
    }
    v11[*v11 + 1] = 16;
    v12 = *(_BYTE **)(v10 + 8);
    v13 = (unsigned __int8)*v12;
    *v12 = v13 + 1;
    *(_QWORD *)&v12[8 * v13 + 16] = a2;
  }
  return a1;
}
