__int64 __fastcall sub_18DFF20(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r12
  __int64 v9; // rax
  _QWORD *v10; // rax
  unsigned __int8 *v11; // rbp
  __int64 v12; // r13
  _BYTE *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // r14
  __int64 v20; // r12
  void *v21; // rdi
  __int64 v22[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( *(_BYTE *)(a1 + 120) )
  {
    v11 = *(unsigned __int8 **)(a1 + 32);
    v12 = *a2;
    if ( !v11 )
    {
      v15 = *(_QWORD *)(a1 + 40);
      v16 = *(_DWORD *)(v15 + 14976);
      if ( v16 )
      {
        v17 = (unsigned int)(v16 - 1);
        *(_DWORD *)(v15 + 14976) = v17;
        v11 = *(unsigned __int8 **)(v15 + 8 * v17 + 14848);
        v18 = *((unsigned int *)v11 + 134);
        *v11 = 0;
        v19 = *((_QWORD *)v11 + 66);
        *((_DWORD *)v11 + 106) = 0;
        v20 = v19 + (v18 << 6);
        while ( v19 != v20 )
        {
          while ( 1 )
          {
            v20 -= 64;
            v21 = *(void **)(v20 + 24);
            if ( v21 == (void *)(v20 + 40) )
              break;
            operator delete(v21);
            if ( v19 == v20 )
              goto LABEL_14;
          }
        }
LABEL_14:
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
      *(_QWORD *)(a1 + 32) = v11;
    }
    v11[*v11 + 1] = 10;
    v13 = *(_BYTE **)(a1 + 32);
    v14 = (unsigned __int8)*v13;
    *v13 = v14 + 1;
    *(_QWORD *)&v13[8 * v14 + 16] = v12;
    return a1;
  }
  else if ( *(_BYTE *)(a1 + 132) )
  {
    v8 = sub_168B9E0((_QWORD *)a1);
    v9 = *(_QWORD *)(a1 + 16);
    if ( v9 )
      v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 32LL))(*(_QWORD *)(a1 + 16));
    v22[0] = v9;
    v10 = sub_1587BC0(v8, v22, v4, v5, v6, v7);
    sub_AE9DF0((unsigned __int8 **)(*v10 + 32LL * *(unsigned int *)(a1 + 128) + 8), *a2, 0xAu);
    return a1;
  }
  else
  {
    return a1;
  }
}
