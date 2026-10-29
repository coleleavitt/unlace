void __fastcall sub_1404AF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rax
  __int64 v8; // rdx
  unsigned __int8 *v10; // rbx
  _BOOL8 v11; // r14
  _BYTE *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rbp
  unsigned int v15; // esi
  __int64 v16; // rax
  unsigned int v17; // ecx
  _BYTE *v18; // rbx
  __int64 v19; // rdi
  _BYTE *v20; // rbp
  __int64 v21; // rdi
  _QWORD *v22; // rdi
  __int64 v23; // rdx
  _BYTE *v24; // rsi
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // r12
  __int64 v29; // r15
  __int64 v30; // r12
  void *v31; // rdi
  __int64 v32; // rax
  _BYTE *v33; // rsi
  __m128i *v34; // rbp
  _QWORD *v35; // rdi
  __int64 v36; // rdx
  _BYTE *v37; // rdi
  int v38; // r12d
  int v39; // r10d
  int v40; // ecx
  __int64 v41; // rcx
  bool v42; // zf
  __int64 v43; // [rsp+8h] [rbp-90h] BYREF
  _BYTE *v44; // [rsp+10h] [rbp-88h] BYREF
  __int64 v45; // [rsp+18h] [rbp-80h]

  v7 = *(__int64 **)(a1 + 8);
  v8 = v7[6];
  if ( !v8 )
  {
    v14 = v7[2];
    v15 = *(_DWORD *)(v14 + 512);
    v16 = *(_QWORD *)(v7[4] + 8);
    v43 = v16;
    if ( v15 )
    {
      a6 = v15 - 1;
      a5 = *(_QWORD *)(v14 + 496);
      v17 = a6 & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
      v18 = (_BYTE *)(a5 + 104LL * v17);
      v19 = *(_QWORD *)v18;
      if ( v16 == *(_QWORD *)v18 )
        goto LABEL_6;
      v39 = 1;
      if ( v19 != -4096 )
      {
        while ( 1 )
        {
          if ( !v8 && v19 == -8192 )
            v8 = (__int64)v18;
          v17 = a6 & (v39 + v17);
          v18 = (_BYTE *)(a5 + 104LL * v17);
          v19 = *(_QWORD *)v18;
          if ( v16 == *(_QWORD *)v18 )
            break;
          if ( v19 == -4096 )
          {
            if ( v8 )
              v18 = (_BYTE *)v8;
            goto LABEL_20;
          }
          ++v39;
        }
LABEL_6:
        v20 = v18 + 8;
        v21 = *((unsigned int *)v18 + 8);
        if ( *((_DWORD *)v18 + 9) <= (unsigned int)v21 )
        {
          v32 = sub_2237400(v18 + 24, v18 + 40, 0, 32, &v44);
          v33 = *(_BYTE **)(a2 + 8);
          v34 = (__m128i *)v32;
          v35 = (_QWORD *)(v32 + 32LL * *((unsigned int *)v18 + 8));
          v36 = (__int64)&v33[*(_QWORD *)(a2 + 16)];
          *v35 = v35 + 2;
          sub_13F28B0(v35, v33, v36);
          sub_10E9550((__int64)(v18 + 24), v34);
          v37 = *((_BYTE **)v18 + 3);
          v38 = (int)v44;
          if ( v18 + 40 != v37 )
            free(v37);
          *((_QWORD *)v18 + 3) = v34;
          *((_DWORD *)v18 + 9) = v38;
          ++*((_DWORD *)v18 + 8);
          return;
        }
LABEL_7:
        v22 = (_QWORD *)(*((_QWORD *)v20 + 2) + 32 * v21);
        v23 = *(_QWORD *)(a2 + 16);
        v24 = *(_BYTE **)(a2 + 8);
        *v22 = v22 + 2;
        sub_13F28B0(v22, v24, (__int64)&v24[v23]);
        ++*((_DWORD *)v20 + 6);
        return;
      }
LABEL_20:
      v40 = *(_DWORD *)(v14 + 504);
      v44 = v18;
      v8 = (unsigned int)(v40 + 1);
      a4 = 3 * v15;
      if ( 4 * (int)v8 < (unsigned int)a4 )
      {
        v41 = v15 - *(_DWORD *)(v14 + 508) - (unsigned int)v8;
        if ( (unsigned int)v41 <= v15 >> 3 )
        {
          sub_14044D0((__int64 *)(v14 + 496), v15, v8, v41, a5, a6);
          sub_13F8140((__int64 *)(v14 + 496), &v43, &v44);
          v16 = v43;
          v18 = v44;
          LODWORD(v8) = *(_DWORD *)(v14 + 504) + 1;
        }
        goto LABEL_23;
      }
    }
    else
    {
      v44 = nullptr;
    }
    sub_14044D0((__int64 *)(v14 + 496), 2 * v15, v8, a4, a5, a6);
    sub_13F8140((__int64 *)(v14 + 496), &v43, &v44);
    v16 = v43;
    v18 = v44;
    LODWORD(v8) = *(_DWORD *)(v14 + 504) + 1;
LABEL_23:
    v42 = *(_QWORD *)v18 == -4096;
    *(_DWORD *)(v14 + 504) = v8;
    if ( !v42 )
      --*(_DWORD *)(v14 + 508);
    *(_QWORD *)v18 = v16;
    v20 = v18 + 8;
    v21 = 0;
    *((_QWORD *)v18 + 3) = v18 + 40;
    v18[8] &= ~1u;
    v18[12] &= 0xF0u;
    *((_DWORD *)v18 + 4) = 0;
    *((_QWORD *)v18 + 4) = 0x200000000LL;
    goto LABEL_7;
  }
  sub_FC70B0((__int64)&v44, v7[1], *(_DWORD *)a2, 1068);
  v10 = v44;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL) != 0;
  if ( !v44 )
  {
    v25 = v45;
    v26 = *(_DWORD *)(v45 + 14976);
    if ( v26 )
    {
      v27 = (unsigned int)(v26 - 1);
      *(_DWORD *)(v45 + 14976) = v27;
      v10 = *(unsigned __int8 **)(v25 + 8 * v27 + 14848);
      v28 = *((unsigned int *)v10 + 134);
      *v10 = 0;
      v29 = *((_QWORD *)v10 + 66);
      *((_DWORD *)v10 + 106) = 0;
      v30 = v29 + (v28 << 6);
      while ( v29 != v30 )
      {
        while ( 1 )
        {
          v30 -= 64;
          v31 = *(void **)(v30 + 24);
          if ( v31 == (void *)(v30 + 40) )
            break;
          operator delete(v31);
          if ( v29 == v30 )
            goto LABEL_13;
        }
      }
LABEL_13:
      *((_DWORD *)v10 + 134) = 0;
    }
    else
    {
      v10 = (unsigned __int8 *)operator new(0x3A0u);
      *v10 = 0;
      *((_QWORD *)v10 + 12) = v10 + 112;
      *((_QWORD *)v10 + 16) = v10 + 144;
      *((_QWORD *)v10 + 20) = v10 + 176;
      *((_QWORD *)v10 + 24) = v10 + 208;
      *((_QWORD *)v10 + 28) = v10 + 240;
      *((_QWORD *)v10 + 32) = v10 + 272;
      *((_QWORD *)v10 + 36) = v10 + 304;
      *((_QWORD *)v10 + 40) = v10 + 336;
      *((_QWORD *)v10 + 44) = v10 + 368;
      *((_QWORD *)v10 + 48) = v10 + 400;
      *((_QWORD *)v10 + 52) = v10 + 432;
      *((_QWORD *)v10 + 13) = 0;
      v10[112] = 0;
      *((_QWORD *)v10 + 17) = 0;
      v10[144] = 0;
      *((_QWORD *)v10 + 21) = 0;
      v10[176] = 0;
      *((_QWORD *)v10 + 25) = 0;
      v10[208] = 0;
      *((_QWORD *)v10 + 29) = 0;
      v10[240] = 0;
      *((_QWORD *)v10 + 33) = 0;
      v10[272] = 0;
      *((_QWORD *)v10 + 37) = 0;
      v10[304] = 0;
      *((_QWORD *)v10 + 41) = 0;
      v10[336] = 0;
      *((_QWORD *)v10 + 45) = 0;
      v10[368] = 0;
      *((_QWORD *)v10 + 49) = 0;
      v10[400] = 0;
      *((_QWORD *)v10 + 53) = 0x800000000LL;
      *((_QWORD *)v10 + 66) = v10 + 544;
      *((_QWORD *)v10 + 67) = 0x600000000LL;
    }
    v44 = v10;
  }
  v10[*v10 + 1] = 2;
  v12 = v44;
  v13 = (unsigned __int8)*v44;
  *v44 = v13 + 1;
  *(_QWORD *)&v12[8 * v13 + 16] = v11;
  sub_AEA040((__int64)&v44);
  *(_BYTE *)(*(_QWORD *)(a1 + 8) + 41LL) = 1;
}
