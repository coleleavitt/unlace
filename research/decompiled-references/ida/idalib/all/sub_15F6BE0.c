void __fastcall sub_15F6BE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r10
  unsigned int v7; // r8d
  _QWORD *v8; // rsi
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rsi
  unsigned __int8 *v12; // r13
  __int64 v13; // r14
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r8
  unsigned int v21; // edx
  __int64 *v22; // rsi
  __int64 v23; // r10
  void **v24; // r15
  unsigned __int64 v25; // rax
  void **v26; // r14
  void **v27; // r13
  void **v28; // rdi
  void **v29; // rdi
  void **v30; // r14
  void **v31; // r13
  int v32; // esi
  __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // r15
  void *v40; // rdi
  int v41; // ecx
  int v42; // r10d
  __m128 v43; // [rsp+20h] [rbp-98h] BYREF
  __m128 v44; // [rsp+30h] [rbp-88h] BYREF
  __int64 v45; // [rsp+40h] [rbp-78h]
  void *v46; // [rsp+50h] [rbp-68h]
  __int64 v47; // [rsp+60h] [rbp-58h] BYREF
  __int16 v48; // [rsp+70h] [rbp-48h]

  v2 = a2;
  v4 = *(_QWORD *)(a1 + 664);
  if ( a2 )
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  v5 = *(unsigned int *)(v4 + 48);
  v6 = *(_QWORD *)(v4 + 32);
  if ( !(_DWORD)v5 )
    goto LABEL_52;
  v7 = (v5 - 1) & (((unsigned int)v2 >> 9) ^ ((unsigned int)v2 >> 4));
  v8 = (_QWORD *)(v6 + 24LL * v7);
  if ( v2 != *v8 )
  {
    if ( *v8 != -4096 )
    {
      v41 = 1;
      do
      {
        v7 = (v5 - 1) & (v41 + v7);
        v8 = (_QWORD *)(v6 + 24LL * v7);
        if ( v2 == *v8 )
          goto LABEL_5;
        ++v41;
      }
      while ( *v8 != -4096 );
    }
LABEL_52:
    sub_15F6B70(&v44, (_QWORD *)(v6 + 24 * v5), (_QWORD *)(v6 + 24 * v5), v4 + 32, 1);
    v9 = v44.m128_u64[0];
    goto LABEL_6;
  }
LABEL_5:
  sub_15F6B70(&v44, v8, (_QWORD *)(v6 + 24 * v5), v4 + 32, 1);
  v9 = v44.m128_u64[0];
LABEL_6:
  while ( 1 )
  {
    v10 = *(_QWORD *)(a1 + 664);
    sub_15F6B70(
      &v44,
      (_QWORD *)(*(_QWORD *)(v10 + 32) + 24LL * *(unsigned int *)(v10 + 48)),
      (_QWORD *)(*(_QWORD *)(v10 + 32) + 24LL * *(unsigned int *)(v10 + 48)),
      v10 + 32,
      1);
    if ( v9 == v44.m128_u64[0] )
      break;
    v11 = *(_QWORD *)(a1 + 264);
    if ( *(_BYTE *)(v11 + 194) )
      break;
    sub_FC70B0((__int64)&v44, v11, *(_DWORD *)(v9 + 16), 5813);
    v12 = (unsigned __int8 *)v44.m128_u64[0];
    v13 = *(_QWORD *)(v9 + 8);
    if ( !v44.m128_u64[0] )
    {
      v34 = v44.m128_u64[1];
      v35 = *(_DWORD *)(v44.m128_u64[1] + 14976);
      if ( v35 )
      {
        v36 = (unsigned int)(v35 - 1);
        *(_DWORD *)(v44.m128_u64[1] + 14976) = v36;
        v12 = *(unsigned __int8 **)(v34 + 8 * v36 + 14848);
        v37 = *((unsigned int *)v12 + 134);
        *v12 = 0;
        v38 = *((_QWORD *)v12 + 66);
        *((_DWORD *)v12 + 106) = 0;
        v39 = v38 + (v37 << 6);
        while ( v38 != v39 )
        {
          while ( 1 )
          {
            v39 -= 64;
            v40 = *(void **)(v39 + 24);
            if ( v40 == (void *)(v39 + 40) )
              break;
            operator delete(v40);
            if ( v38 == v39 )
              goto LABEL_47;
          }
        }
LABEL_47:
        *((_DWORD *)v12 + 134) = 0;
      }
      else
      {
        v12 = (unsigned __int8 *)operator new(0x3A0u);
        *v12 = 0;
        *((_QWORD *)v12 + 12) = v12 + 112;
        *((_QWORD *)v12 + 16) = v12 + 144;
        *((_QWORD *)v12 + 20) = v12 + 176;
        *((_QWORD *)v12 + 24) = v12 + 208;
        *((_QWORD *)v12 + 28) = v12 + 240;
        *((_QWORD *)v12 + 32) = v12 + 272;
        *((_QWORD *)v12 + 36) = v12 + 304;
        *((_QWORD *)v12 + 40) = v12 + 336;
        *((_QWORD *)v12 + 44) = v12 + 368;
        *((_QWORD *)v12 + 48) = v12 + 400;
        *((_QWORD *)v12 + 52) = v12 + 432;
        *((_QWORD *)v12 + 13) = 0;
        v12[112] = 0;
        *((_QWORD *)v12 + 17) = 0;
        v12[144] = 0;
        *((_QWORD *)v12 + 21) = 0;
        v12[176] = 0;
        *((_QWORD *)v12 + 25) = 0;
        v12[208] = 0;
        *((_QWORD *)v12 + 29) = 0;
        v12[240] = 0;
        *((_QWORD *)v12 + 33) = 0;
        v12[272] = 0;
        *((_QWORD *)v12 + 37) = 0;
        v12[304] = 0;
        *((_QWORD *)v12 + 41) = 0;
        v12[336] = 0;
        *((_QWORD *)v12 + 45) = 0;
        v12[368] = 0;
        *((_QWORD *)v12 + 49) = 0;
        v12[400] = 0;
        *((_QWORD *)v12 + 53) = 0x800000000LL;
        *((_QWORD *)v12 + 66) = v12 + 544;
        *((_QWORD *)v12 + 67) = 0x600000000LL;
      }
      v44.m128_u64[0] = (unsigned __int64)v12;
    }
    v12[*v12 + 1] = 10;
    v14 = v44.m128_u64[0];
    v15 = *(unsigned __int8 *)v44.m128_u64[0];
    *(_BYTE *)v44.m128_u64[0] = v15 + 1;
    *(_QWORD *)(v14 + 8 * v15 + 16) = v13;
    v16 = *(_QWORD *)(a1 + 664);
    v17 = v16 + 32;
    v18 = *(_QWORD *)(v16 + 32);
    v19 = *(unsigned int *)(v16 + 48);
    if ( !(_DWORD)v19 )
    {
LABEL_36:
      sub_15F6B70(&v43, (_QWORD *)(v18 + 24 * v19), (_QWORD *)(v18 + 24 * v19), v17, 1);
      v9 = v43.m128_u64[0];
      goto LABEL_12;
    }
    v20 = *(_QWORD *)(v9 + 8);
    v21 = (v19 - 1) & (((unsigned int)v20 >> 9) ^ ((unsigned int)v20 >> 4));
    v22 = (__int64 *)(v18 + 24LL * v21);
    v23 = *v22;
    if ( *v22 != v20 )
    {
      v32 = 1;
      if ( v23 == -4096 )
        goto LABEL_36;
      while ( 1 )
      {
        v42 = v32 + 1;
        v21 = (v19 - 1) & (v32 + v21);
        v22 = (__int64 *)(v18 + 24LL * v21);
        if ( v20 == *v22 )
          break;
        if ( *v22 == -4096 )
          goto LABEL_36;
        v32 = v42;
      }
    }
    sub_15F6B70(&v43, v22, (_QWORD *)(v18 + 24 * v19), v17, 1);
    v9 = v43.m128_u64[0];
LABEL_12:
    if ( (_BYTE)v48 )
    {
      sub_FC7790(v45, (__int64 *)&v44, SHIBYTE(v48));
      v45 = 0;
      v48 = 0;
    }
    if ( v46 != &v47 )
      operator delete(v46);
    v24 = (void **)v44.m128_u64[0];
    if ( v44.m128_u64[0] )
    {
      v25 = v44.m128_u64[1];
      if ( v44.m128_u64[1] )
      {
        if ( v44.m128_u64[0] < v44.m128_u64[1] || v44.m128_u64[0] > v44.m128_u64[1] + 14848 )
        {
          v26 = *(void ***)(v44.m128_u64[0] + 528);
          v27 = &v26[8 * (unsigned __int64)*(unsigned int *)(v44.m128_u64[0] + 536)];
          if ( v26 != v27 )
          {
            do
            {
              while ( 1 )
              {
                v27 -= 8;
                v28 = (void **)v27[3];
                if ( v28 == v27 + 5 )
                  break;
                operator delete(v28);
                if ( v26 == v27 )
                  goto LABEL_22;
              }
            }
            while ( v26 != v27 );
LABEL_22:
            v27 = (void **)v24[66];
          }
          if ( v27 != v24 + 68 )
            free(v27);
          v29 = (void **)v24[52];
          v30 = v24 + 52;
          if ( v29 != v24 + 54 )
            free(v29);
          v31 = v24 + 12;
          do
          {
            while ( 1 )
            {
              v30 -= 4;
              if ( *v30 == v30 + 2 )
                break;
              operator delete(*v30);
              if ( v30 == v31 )
                goto LABEL_30;
            }
          }
          while ( v30 != v31 );
LABEL_30:
          operator delete(v24, 0x3A0u);
        }
        else
        {
          v33 = *(unsigned int *)(v44.m128_u64[1] + 14976);
          *(_DWORD *)(v44.m128_u64[1] + 14976) = v33 + 1;
          *(_QWORD *)(v25 + 8 * v33 + 14848) = v24;
        }
      }
    }
  }
}
