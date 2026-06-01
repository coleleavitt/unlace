__int64 __fastcall sub_1534560(__int64 a1, __m128i a2)
{
  int *v2; // rbp
  __int16 v4; // ax
  unsigned int v5; // r12d
  unsigned __int8 *v6; // rbx
  unsigned __int8 *v7; // rdx
  __int64 v8; // rax
  __int64 *v10; // rdi
  unsigned int v11; // ebp
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 *v16; // rdi
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rbp
  __int64 v21; // r13
  __int64 v22; // rbp
  void *v23; // rdi
  unsigned __int8 *v24; // [rsp+0h] [rbp-78h] BYREF
  __int64 v25; // [rsp+8h] [rbp-70h]

  v2 = (int *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v4 = *(_WORD *)(a1 + 32);
  v5 = *(_DWORD *)(a1 + 40);
  if ( v4 == 5 )
  {
    v14 = sub_1A5C7E0(*(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 24), *(unsigned int *)(a1 + 16), 0);
    v15 = sub_1C36B30(*(_QWORD *)(a1 + 96), v5, *(unsigned int *)(a1 + 16), v14);
    v16 = *(__int64 **)(a1 + 8);
    v13 = v15;
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v16, v2);
    return v13;
  }
  if ( v4 == 31 )
  {
    sub_1564840(&v24, a1, v2, 1990);
    sub_AEA040((__int64)&v24);
    v10 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v10, v2);
    v11 = *(_DWORD *)(a1 + 40);
    v12 = sub_14BFC10((const __m128i *)a1, 0, a2);
    if ( v12 == 1 )
    {
      LOWORD(v24) = 63;
      sub_15680D0(a1, &v24, 1, 2);
      return 1;
    }
    return sub_1C36C00(*(_QWORD *)(a1 + 96), v5, v11, v12 & 0xFFFFFFFFFFFFFFFELL);
  }
  sub_1564840(&v24, a1, v2, 14);
  v6 = v24;
  if ( !v24 )
  {
    v17 = v25;
    v18 = *(_DWORD *)(v25 + 14976);
    if ( v18 )
    {
      v19 = (unsigned int)(v18 - 1);
      *(_DWORD *)(v25 + 14976) = v19;
      v6 = *(unsigned __int8 **)(v17 + 8 * v19 + 14848);
      v20 = *((unsigned int *)v6 + 134);
      *v6 = 0;
      v21 = *((_QWORD *)v6 + 66);
      *((_DWORD *)v6 + 106) = 0;
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
      *((_DWORD *)v6 + 134) = 0;
    }
    else
    {
      v6 = (unsigned __int8 *)operator new(0x3A0u);
      *v6 = 0;
      *((_QWORD *)v6 + 12) = v6 + 112;
      *((_QWORD *)v6 + 16) = v6 + 144;
      *((_QWORD *)v6 + 20) = v6 + 176;
      *((_QWORD *)v6 + 24) = v6 + 208;
      *((_QWORD *)v6 + 28) = v6 + 240;
      *((_QWORD *)v6 + 32) = v6 + 272;
      *((_QWORD *)v6 + 36) = v6 + 304;
      *((_QWORD *)v6 + 40) = v6 + 336;
      *((_QWORD *)v6 + 44) = v6 + 368;
      *((_QWORD *)v6 + 48) = v6 + 400;
      *((_QWORD *)v6 + 52) = v6 + 432;
      *((_QWORD *)v6 + 13) = 0;
      v6[112] = 0;
      *((_QWORD *)v6 + 17) = 0;
      v6[144] = 0;
      *((_QWORD *)v6 + 21) = 0;
      v6[176] = 0;
      *((_QWORD *)v6 + 25) = 0;
      v6[208] = 0;
      *((_QWORD *)v6 + 29) = 0;
      v6[240] = 0;
      *((_QWORD *)v6 + 33) = 0;
      v6[272] = 0;
      *((_QWORD *)v6 + 37) = 0;
      v6[304] = 0;
      *((_QWORD *)v6 + 41) = 0;
      v6[336] = 0;
      *((_QWORD *)v6 + 45) = 0;
      v6[368] = 0;
      *((_QWORD *)v6 + 49) = 0;
      v6[400] = 0;
      *((_QWORD *)v6 + 53) = 0x800000000LL;
      *((_QWORD *)v6 + 66) = v6 + 544;
      *((_QWORD *)v6 + 67) = 0x600000000LL;
    }
    v24 = v6;
  }
  v6[*v6 + 1] = 4;
  v7 = v24;
  v8 = *v24;
  *v24 = v8 + 1;
  *(_QWORD *)&v7[8 * v8 + 16] = 5;
  sub_AEA040((__int64)&v24);
  return 1;
}
