__int64 __fastcall sub_19ED540(__int64 a1, int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r12
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // r14
  __int64 v12; // r12
  unsigned __int8 *v13; // rbp
  _BYTE *v14; // rdx
  __int64 v15; // rax
  unsigned __int8 *v16; // rbp
  __int64 v17; // r13
  _BYTE *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // r14
  __int64 v25; // r12
  void *v26; // rdi
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // r13
  __int64 v31; // r15
  __int64 v32; // r13
  void *v33; // rdi
  __int64 v34[8]; // [rsp+8h] [rbp-40h] BYREF

  if ( *(_BYTE *)(a1 + 120) )
  {
    v16 = *(unsigned __int8 **)(a1 + 32);
    v17 = *a2;
    if ( !v16 )
    {
      v20 = *(_QWORD *)(a1 + 40);
      v21 = *(_DWORD *)(v20 + 14976);
      if ( v21 )
      {
        v22 = (unsigned int)(v21 - 1);
        *(_DWORD *)(v20 + 14976) = v22;
        v16 = *(unsigned __int8 **)(v20 + 8 * v22 + 14848);
        v23 = *((unsigned int *)v16 + 134);
        *v16 = 0;
        v24 = *((_QWORD *)v16 + 66);
        *((_DWORD *)v16 + 106) = 0;
        v25 = v24 + (v23 << 6);
        while ( v24 != v25 )
        {
          while ( 1 )
          {
            v25 -= 64;
            v26 = *(void **)(v25 + 24);
            if ( v26 == (void *)(v25 + 40) )
              break;
            operator delete(v26);
            if ( v24 == v25 )
              goto LABEL_15;
          }
        }
LABEL_15:
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
        *((_QWORD *)v16 + 52) = v16 + 432;
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
        *((_QWORD *)v16 + 53) = 0x800000000LL;
        *((_QWORD *)v16 + 66) = v16 + 544;
        *((_QWORD *)v16 + 67) = 0x600000000LL;
      }
      *(_QWORD *)(a1 + 32) = v16;
    }
    v16[*v16 + 1] = 2;
    v18 = *(_BYTE **)(a1 + 32);
    v19 = (unsigned __int8)*v18;
    *v18 = v19 + 1;
    *(_QWORD *)&v18[8 * v19 + 16] = v17;
  }
  else if ( *(_BYTE *)(a1 + 132) )
  {
    v8 = sub_168B9E0((_QWORD *)a1);
    v9 = *(_QWORD *)(a1 + 16);
    if ( v9 )
      v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 32LL))(*(_QWORD *)(a1 + 16));
    v34[0] = v9;
    v10 = sub_1587BC0(v8, v34, v4, v5, v6, v7);
    v11 = *a2;
    v12 = *v10 + 32LL * *(unsigned int *)(a1 + 128);
    v13 = *(unsigned __int8 **)(v12 + 8);
    if ( !v13 )
    {
      v27 = *(_QWORD *)(v12 + 16);
      v28 = *(_DWORD *)(v27 + 14976);
      if ( v28 )
      {
        v29 = (unsigned int)(v28 - 1);
        *(_DWORD *)(v27 + 14976) = v29;
        v13 = *(unsigned __int8 **)(v27 + 8 * v29 + 14848);
        v30 = *((unsigned int *)v13 + 134);
        *v13 = 0;
        v31 = *((_QWORD *)v13 + 66);
        *((_DWORD *)v13 + 106) = 0;
        v32 = v31 + (v30 << 6);
        while ( v31 != v32 )
        {
          while ( 1 )
          {
            v32 -= 64;
            v33 = *(void **)(v32 + 24);
            if ( v33 == (void *)(v32 + 40) )
              break;
            operator delete(v33);
            if ( v31 == v32 )
              goto LABEL_25;
          }
        }
LABEL_25:
        *((_DWORD *)v13 + 134) = 0;
      }
      else
      {
        v13 = (unsigned __int8 *)operator new(0x3A0u);
        *v13 = 0;
        *((_QWORD *)v13 + 12) = v13 + 112;
        *((_QWORD *)v13 + 16) = v13 + 144;
        *((_QWORD *)v13 + 20) = v13 + 176;
        *((_QWORD *)v13 + 24) = v13 + 208;
        *((_QWORD *)v13 + 28) = v13 + 240;
        *((_QWORD *)v13 + 32) = v13 + 272;
        *((_QWORD *)v13 + 36) = v13 + 304;
        *((_QWORD *)v13 + 40) = v13 + 336;
        *((_QWORD *)v13 + 44) = v13 + 368;
        *((_QWORD *)v13 + 48) = v13 + 400;
        *((_QWORD *)v13 + 52) = v13 + 432;
        *((_QWORD *)v13 + 13) = 0;
        v13[112] = 0;
        *((_QWORD *)v13 + 17) = 0;
        v13[144] = 0;
        *((_QWORD *)v13 + 21) = 0;
        v13[176] = 0;
        *((_QWORD *)v13 + 25) = 0;
        v13[208] = 0;
        *((_QWORD *)v13 + 29) = 0;
        v13[240] = 0;
        *((_QWORD *)v13 + 33) = 0;
        v13[272] = 0;
        *((_QWORD *)v13 + 37) = 0;
        v13[304] = 0;
        *((_QWORD *)v13 + 41) = 0;
        v13[336] = 0;
        *((_QWORD *)v13 + 45) = 0;
        v13[368] = 0;
        *((_QWORD *)v13 + 49) = 0;
        v13[400] = 0;
        *((_QWORD *)v13 + 53) = 0x800000000LL;
        *((_QWORD *)v13 + 66) = v13 + 544;
        *((_QWORD *)v13 + 67) = 0x600000000LL;
      }
      *(_QWORD *)(v12 + 8) = v13;
    }
    v13[*v13 + 1] = 2;
    v14 = *(_BYTE **)(v12 + 8);
    v15 = (unsigned __int8)*v14;
    *v14 = v15 + 1;
    *(_QWORD *)&v14[8 * v15 + 16] = v11;
  }
  return a1;
}
