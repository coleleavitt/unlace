__int64 __fastcall sub_4F0D00(volatile signed __int32 **a1, _QWORD *a2, double a3, __m128 a4)
{
  volatile signed __int32 *v4; // rax
  volatile signed __int32 *v6; // r12
  volatile signed __int32 *v7; // r13
  volatile signed __int32 *v8; // rax
  unsigned __int64 v9; // rdi
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbx
  unsigned __int8 *v13; // rbp
  __int64 v14; // rax
  unsigned __int64 v15; // rsi
  unsigned __int8 v16; // r15
  _QWORD *v17; // rdx
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  _QWORD *v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rbp
  __int64 v25; // r13
  void *v26; // rdi
  __int64 v27; // rsi
  __int64 v29; // rsi
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // r8
  char v34; // r15
  __int64 v35; // r8
  unsigned __int64 v36; // rdi
  _QWORD *v37; // rax
  unsigned __int8 v38; // cl
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rcx
  void *v41; // rdi
  char *v42; // rsi
  __int64 v43; // rcx
  unsigned __int64 v44; // [rsp+8h] [rbp-50h]
  _QWORD *v45; // [rsp+8h] [rbp-50h]

  v4 = *a1;
  if ( !*a1 )
  {
    v7 = nullptr;
    v6 = nullptr;
LABEL_7:
    v8 = (volatile signed __int32 *)sub_4F0480(v7, a3, a4);
    *a1 = v8;
    v7 = v8;
    goto LABEL_8;
  }
  v6 = nullptr;
  if ( *v4 > 1u )
  {
    v6 = *a1;
    if ( *v4 != -1 )
      _InterlockedAdd(v4, 1u);
  }
  v7 = *a1;
  if ( !*a1 || *v7 > 1u )
    goto LABEL_7;
LABEL_8:
  v9 = *((_QWORD *)v7 + 2);
  if ( !v9 )
  {
    v15 = *((_QWORD *)v7 + 1);
    goto LABEL_33;
  }
  v10 = *((_QWORD *)v7 + 4);
  v11 = (v9 - 1)
      & (((0xD6E8FEB86659FD93LL
         * (((0xD6E8FEB86659FD93LL * (*a2 ^ *((_QWORD *)v7 + 3) ^ ((*a2 ^ *((_QWORD *)v7 + 3)) >> 32))) >> 32)
          ^ (0xD6E8FEB86659FD93LL * (*a2 ^ *((_QWORD *)v7 + 3) ^ ((*a2 ^ *((_QWORD *)v7 + 3)) >> 32))))) >> 32)
       ^ (0xD6E8FEB86659FD93LL
        * (((0xD6E8FEB86659FD93LL * (*a2 ^ *((_QWORD *)v7 + 3) ^ ((*a2 ^ *((_QWORD *)v7 + 3)) >> 32))) >> 32)
         ^ (0xD6E8FEB86659FD93LL * (*a2 ^ *((_QWORD *)v7 + 3) ^ ((*a2 ^ *((_QWORD *)v7 + 3)) >> 32))))));
  v12 = v11 & 0x7F;
  v13 = (unsigned __int8 *)(v10 + 144 * (v11 >> 7));
LABEL_10:
  v14 = v13[v12];
  if ( v14 == 255 )
  {
LABEL_16:
    v15 = *((_QWORD *)v7 + 1);
    if ( v15 < v9 >> 1 )
    {
LABEL_17:
      v16 = v13[137];
      if ( v16 == v13[136] )
      {
        if ( v16 )
        {
          if ( v16 == 48 )
          {
            v34 = 80;
            v36 = 1280;
            v35 = 80;
          }
          else
          {
            v33 = v16;
            v34 = v16 + 16;
            v35 = v33 + 16;
            v36 = 16 * v35;
          }
        }
        else
        {
          v34 = 48;
          v36 = 768;
          v35 = 48;
        }
        v44 = v35;
        v37 = (_QWORD *)operator new[](v36);
        v38 = v13[136];
        v17 = v37;
        v39 = 0;
        if ( !v38
          || (v42 = *((char **)v13 + 16),
              v39 = v38,
              v43 = 16LL * v38,
              *v17 = *(_QWORD *)v42,
              v17[(unsigned __int64)v43 / 8 - 1] = *(_QWORD *)&v42[v43 - 8],
              qmemcpy(
                (void *)((unsigned __int64)(v17 + 1) & 0xFFFFFFFFFFFFFFF8LL),
                (const void *)(v42 - ((char *)v17 - ((unsigned __int64)(v17 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
                8LL * (((unsigned int)v17 - (((_DWORD)v17 + 8) & 0xFFFFFFF8) + (unsigned int)v43) >> 3)),
              v39 < v44) )
        {
          do
          {
            v40 = v39++;
            LOBYTE(v17[2 * v40]) = v39;
          }
          while ( v39 < v44 );
        }
        v41 = *((void **)v13 + 16);
        if ( v41 )
        {
          v45 = v17;
          operator delete[](v41);
          v17 = v45;
        }
        v13[136] = v34;
        v16 = v13[137];
        *((_QWORD *)v13 + 16) = v17;
      }
      else
      {
        v17 = *((_QWORD **)v13 + 16);
      }
      v13[137] = v17[2 * v16];
      v13[v12] = v16;
      v18 = *((_QWORD *)v7 + 4);
      ++*((_QWORD *)v7 + 1);
      v19 = v12 & 0x7F;
      v20 = 144 * ((v12 | (0x1C71C71C71C71C80LL * ((__int64)&v13[-v18] >> 4))) >> 7);
      v21 = (_QWORD *)(*(_QWORD *)(v20 + v18 + 128) + 16LL * *(unsigned __int8 *)(v20 + v18 + v19));
      *v21 = *a2;
      v21[1] = -1;
      v10 = *((_QWORD *)v7 + 4);
      goto LABEL_20;
    }
LABEL_33:
    sub_4F0860(v7, v15 + 1);
    v29 = *((_QWORD *)v7 + 4);
    v30 = *((_QWORD *)v7 + 2);
    v31 = (v30 - 1)
        & (((0xD6E8FEB86659FD93LL
           * (((0xD6E8FEB86659FD93LL * (*a2 ^ *((_QWORD *)v7 + 3) ^ ((*a2 ^ *((_QWORD *)v7 + 3)) >> 32))) >> 32)
            ^ (0xD6E8FEB86659FD93LL * (*a2 ^ *((_QWORD *)v7 + 3) ^ ((*a2 ^ *((_QWORD *)v7 + 3)) >> 32))))) >> 32)
         ^ (0xD6E8FEB86659FD93LL
          * (((0xD6E8FEB86659FD93LL * (*a2 ^ *((_QWORD *)v7 + 3) ^ ((*a2 ^ *((_QWORD *)v7 + 3)) >> 32))) >> 32)
           ^ (0xD6E8FEB86659FD93LL * (*a2 ^ *((_QWORD *)v7 + 3) ^ ((*a2 ^ *((_QWORD *)v7 + 3)) >> 32))))));
    v12 = v31 & 0x7F;
    v13 = (unsigned __int8 *)(v29 + 144 * (v31 >> 7));
    while ( 1 )
    {
      v32 = v13[v12];
      if ( v32 == 255 || *a2 == *(_QWORD *)(*((_QWORD *)v13 + 16) + 16 * v32) )
        break;
      if ( ++v12 == 128 )
      {
        v13 += 144;
        v12 = 0;
        if ( 0x8E38E38E38E38E39LL * ((__int64)&v13[-v29] >> 4) == v30 >> 7 )
          v13 = *((unsigned __int8 **)v7 + 4);
      }
    }
    goto LABEL_17;
  }
  while ( *a2 != *(_QWORD *)(*((_QWORD *)v13 + 16) + 16 * v14) )
  {
    if ( ++v12 != 128 )
      goto LABEL_10;
    v13 += 144;
    v12 = 0;
    if ( 0x8E38E38E38E38E39LL * ((__int64)&v13[-v10] >> 4) == v9 >> 7 )
      v13 = *((unsigned __int8 **)v7 + 4);
    v14 = *v13;
    if ( v14 == 255 )
      goto LABEL_16;
  }
  v19 = v12 & 0x7F;
  v20 = 144 * ((v12 | (0x1C71C71C71C71C80LL * ((__int64)&v13[-v10] >> 4))) >> 7);
LABEL_20:
  v22 = *(_QWORD *)(v20 + v10 + 128) + 16LL * *(unsigned __int8 *)(v20 + v10 + v19) + 8;
  if ( v6 && *v6 != -1 && !_InterlockedSub(v6, 1u) )
  {
    v23 = *((_QWORD *)v6 + 4);
    if ( v23 )
    {
      v24 = v23 + 144LL * *(_QWORD *)(v23 - 8);
      if ( v23 == v24 )
      {
        v27 = 0;
      }
      else
      {
        do
        {
          v25 = v24;
          v26 = *(void **)(v24 - 16);
          v24 -= 144;
          if ( v26 )
            operator delete[](v26);
        }
        while ( *((_QWORD *)v6 + 4) != v24 );
        v27 = 144LL * *(_QWORD *)(v25 - 152);
      }
      operator delete[]((void *)(v24 - 8), v27 + 8);
    }
    operator delete((void *)v6, 0x28u);
  }
  return v22;
}
