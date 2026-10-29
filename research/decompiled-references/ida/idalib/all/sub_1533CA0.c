__int64 __fastcall sub_1533CA0(__int64 a1, __m128i a2)
{
  int *v2; // rbp
  unsigned int v4; // r12d
  unsigned __int8 *v5; // rbx
  unsigned __int8 *v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v10; // r13
  __int16 v11; // ax
  __int64 v12; // r14
  __int64 *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // r13
  __int64 v20; // rbp
  void *v21; // rdi
  __int64 *v22; // rdi
  unsigned __int8 *v23; // [rsp+0h] [rbp-78h] BYREF
  __int64 v24; // [rsp+8h] [rbp-70h]

  v2 = (int *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v4 = *(_DWORD *)(a1 + 40);
  if ( *(_WORD *)(a1 + 32) != 24 )
  {
    sub_1564840(&v23, a1, v2, 14);
    v5 = v23;
    if ( !v23 )
    {
      v15 = v24;
      v16 = *(_DWORD *)(v24 + 14976);
      if ( v16 )
      {
        v17 = (unsigned int)(v16 - 1);
        *(_DWORD *)(v24 + 14976) = v17;
        v5 = *(unsigned __int8 **)(v15 + 8 * v17 + 14848);
        v18 = *((unsigned int *)v5 + 134);
        *v5 = 0;
        v19 = *((_QWORD *)v5 + 66);
        *((_DWORD *)v5 + 106) = 0;
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
              goto LABEL_21;
          }
        }
LABEL_21:
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
      v23 = v5;
    }
    v5[*v5 + 1] = 4;
    v6 = v23;
    v7 = 1;
    v8 = *v23;
    *v23 = v8 + 1;
    *(_QWORD *)&v6[8 * v8 + 16] = 24;
    sub_AEA040((__int64)&v23);
    return v7;
  }
  v10 = sub_1533380(a1, 0, (unsigned int)&algn_480007[1]);
  if ( v10 == 1 )
    return 1;
  v11 = *(_WORD *)(a1 + 32);
  if ( v11 != 5 )
    goto LABEL_7;
  v12 = *(_QWORD *)(a1 + 24);
  if ( sub_1568990(a1) != v12 )
  {
    v11 = *(_WORD *)(a1 + 32);
LABEL_7:
    if ( v11 != 392 )
    {
      sub_1564840(&v23, a1, v2, 61);
      sub_AEA040((__int64)&v23);
      return 1;
    }
    v13 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v13, v2);
    v14 = sub_1533740(a1, *(_DWORD *)(a1 + 40));
    goto LABEL_12;
  }
  v22 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v22, v2);
  v14 = sub_1533400((const __m128i *)a1, *(_DWORD *)(a1 + 40), a2);
LABEL_12:
  if ( v14 != 1 )
    return sub_1C3CD10(*(_QWORD *)(a1 + 96), 0, v4, v10 & 0xFFFFFFFFFFFFFFFELL, v14 & 0xFFFFFFFFFFFFFFFELL);
  return 1;
}
