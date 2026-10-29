void __fastcall sub_13F2D60(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned __int8 *v5; // rbp
  _BOOL8 v6; // r14
  unsigned __int8 *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // r15
  __int64 v14; // r12
  void *v15; // rdi
  unsigned __int8 *v16; // [rsp+0h] [rbp-88h] BYREF
  __int64 v17; // [rsp+8h] [rbp-80h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(v2 + 48);
  if ( v3 )
  {
    if ( *(_BYTE *)(a2 + 100) && !*(_DWORD *)(a2 + 8) )
    {
      *(_BYTE *)(v3 + 905) |= 8u;
    }
    else
    {
      sub_FC70B0((__int64)&v16, *(_QWORD *)(v2 + 8), *(_DWORD *)(*(_QWORD *)a2 + 32LL), 1064);
      sub_AEA040((__int64)&v16);
    }
  }
  else
  {
    sub_FC70B0((__int64)&v16, *(_QWORD *)(v2 + 8), *(_DWORD *)(a2 + 96), 1068);
    v5 = v16;
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL) != 0;
    if ( !v16 )
    {
      v9 = v17;
      v10 = *(_DWORD *)(v17 + 14976);
      if ( v10 )
      {
        v11 = (unsigned int)(v10 - 1);
        *(_DWORD *)(v17 + 14976) = v11;
        v5 = *(unsigned __int8 **)(v9 + 8 * v11 + 14848);
        v12 = *((unsigned int *)v5 + 134);
        *v5 = 0;
        v13 = *((_QWORD *)v5 + 66);
        *((_DWORD *)v5 + 106) = 0;
        v14 = v13 + (v12 << 6);
        while ( v13 != v14 )
        {
          while ( 1 )
          {
            v14 -= 64;
            v15 = *(void **)(v14 + 24);
            if ( v15 == (void *)(v14 + 40) )
              break;
            operator delete(v15);
            if ( v13 == v14 )
              goto LABEL_15;
          }
        }
LABEL_15:
        *((_DWORD *)v5 + 134) = 0;
      }
      else
      {
        v5 = (unsigned __int8 *)operator new(0x3A0u);
        *v5 = 0;
        *((_QWORD *)v5 + 12) = v5 + 112;
        *((_QWORD *)v5 + 16) = v5 + 144;
        *((_QWORD *)v5 + 20) = v5 + 176;
        *((_QWORD *)v5 + 24) = v5 + 208;
        *((_QWORD *)v5 + 28) = v5 + 240;
        *((_QWORD *)v5 + 32) = v5 + 272;
        *((_QWORD *)v5 + 36) = v5 + 304;
        *((_QWORD *)v5 + 40) = v5 + 336;
        *((_QWORD *)v5 + 44) = v5 + 368;
        *((_QWORD *)v5 + 48) = v5 + 400;
        *((_QWORD *)v5 + 52) = v5 + 432;
        *((_QWORD *)v5 + 13) = 0;
        v5[112] = 0;
        *((_QWORD *)v5 + 17) = 0;
        v5[144] = 0;
        *((_QWORD *)v5 + 21) = 0;
        v5[176] = 0;
        *((_QWORD *)v5 + 25) = 0;
        v5[208] = 0;
        *((_QWORD *)v5 + 29) = 0;
        v5[240] = 0;
        *((_QWORD *)v5 + 33) = 0;
        v5[272] = 0;
        *((_QWORD *)v5 + 37) = 0;
        v5[304] = 0;
        *((_QWORD *)v5 + 41) = 0;
        v5[336] = 0;
        *((_QWORD *)v5 + 45) = 0;
        v5[368] = 0;
        *((_QWORD *)v5 + 49) = 0;
        v5[400] = 0;
        *((_QWORD *)v5 + 53) = 0x800000000LL;
        *((_QWORD *)v5 + 66) = v5 + 544;
        *((_QWORD *)v5 + 67) = 0x600000000LL;
      }
      v16 = v5;
    }
    v5[*v5 + 1] = 2;
    v7 = v16;
    v8 = *v16;
    *v16 = v8 + 1;
    *(_QWORD *)&v7[8 * v8 + 16] = v6;
    sub_AEA040((__int64)&v16);
    *(_BYTE *)(*(_QWORD *)(a1 + 16) + 41LL) = 1;
  }
}
