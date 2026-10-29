void __fastcall sub_1CE3EF0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r14
  __int64 v4; // rbx
  unsigned int v5; // r15d
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // r13
  __int64 v11; // rcx
  void **v12; // r12
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rdi
  bool v15; // r14
  __int64 v16; // rsi
  __int64 *v17; // rdx
  _QWORD *v18; // rax
  __int64 *v19; // r13
  __int64 *v20; // r15
  int v21; // r12d
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r15
  __int64 v28; // rax
  _QWORD *v29; // rax
  unsigned int v30; // [rsp+Ch] [rbp-DCh]
  void *v31; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v32; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v33[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v35; // [rsp+40h] [rbp-A8h] BYREF
  char v36; // [rsp+98h] [rbp-50h]
  unsigned int v37; // [rsp+A0h] [rbp-48h]
  char v38; // [rsp+A4h] [rbp-44h]

  v2 = a2;
  v4 = *(_QWORD *)(a2 + 56);
  sub_1504FB0((__int64 *)&v31, *(_DWORD *)(v4 + 20) & 0x1FFFFFFF, 0);
  v5 = 0;
  sub_1D3B500(*(_QWORD *)(a1 + 248), a2, &v31);
  if ( (*(_DWORD *)(v4 + 20) & 0x1FFFFFFF) != 0 )
  {
    do
    {
      v10 = *(_QWORD *)(v4 + 8LL * v5 + 24);
      if ( sub_B8BED0(v10) || (a2 = v10, sub_1A434F0(a1, v10, 0, v11, v8, v9)) )
      {
        if ( ((unsigned __int8)v31 & 1) != 0 )
        {
          v7 = (unsigned __int64)v31 >> 58 << 57;
          v6 = ~(-1LL << ((unsigned __int64)v31 >> 58));
          v31 = (void *)(2 * (v7 | v6 & (v6 & ((unsigned __int64)v31 >> 1) | (1LL << v5))) + 1);
        }
        else
        {
          a2 = *(_QWORD *)v31;
          v7 = v5;
          v6 = v5 >> 6;
          *(_QWORD *)(*(_QWORD *)v31 + 8 * v6) |= 1LL << v5;
        }
      }
      ++v5;
    }
    while ( (*(_DWORD *)(v4 + 20) & 0x1FFFFFFF) != v5 );
  }
  v12 = (void **)v31;
  if ( ((unsigned __int8)v31 & 1) == 0 )
  {
    v30 = *((_DWORD *)v31 + 16);
    v16 = v30 >> 6;
    if ( v30 >> 6 )
    {
      v17 = *(__int64 **)v31;
      if ( **(_QWORD **)v31 != -1 )
      {
LABEL_27:
        v19 = &v17[*((unsigned int *)v31 + 2)];
        if ( v19 != v17 )
        {
          v20 = v17;
          v21 = 0;
          do
          {
            v22 = *v20++;
            v21 += __popcountdi2(v22, v16, v17, v7, v8, v9);
          }
          while ( v19 != v20 );
          v30 -= v21;
        }
        goto LABEL_13;
      }
      v18 = v17 + 1;
      v7 = (unsigned __int64)&v17[(unsigned int)(v16 - 1) + 1];
      while ( v18 != (_QWORD *)v7 )
      {
        if ( *v18++ != -1 )
          goto LABEL_27;
      }
    }
    v7 = v30 & 0x3F;
    if ( (v30 & 0x3F) == 0
      || (v17 = *(__int64 **)v31,
          v16 = (unsigned int)v16,
          *(_QWORD *)(*(_QWORD *)v31 + 8LL * (unsigned int)v16) == (1LL << v7) - 1) )
    {
LABEL_16:
      if ( v12 )
      {
        if ( *v12 != v12 + 2 )
          free(*v12);
        operator delete(v12, 0x48u);
      }
      return;
    }
    goto LABEL_27;
  }
  v14 = ((unsigned __int64)v31 >> 1) & ~(-1LL << ((unsigned __int64)v31 >> 58));
  if ( v14 == (1LL << ((unsigned __int64)v31 >> 58)) - 1 )
    return;
  v13 = (unsigned __int64)v31 >> 58;
  v30 = v13 - __popcountdi2(v14, a2, v6, (unsigned __int64)v31 >> 58, v8, v9);
LABEL_13:
  sub_168B9F0((__int64)v33, (__int64 *)(a1 + 8), *(_DWORD *)(v2 + 24), 0xE26u, 0);
  v15 = v30 > 1;
  if ( v36 )
  {
    sub_AE9DF0(&v35, v15, 2u);
  }
  else if ( v38 )
  {
    v27 = sub_168B9E0(v33);
    v28 = v34;
    if ( v34 )
      v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 32LL))(v34);
    v32 = v28;
    v29 = sub_1587BC0(v27, &v32, v23, v24, v25, v26);
    sub_AE9DF0((unsigned __int8 **)(*v29 + 32LL * v37 + 8), v15, 2u);
  }
  sub_15F7200(v33);
  sub_1CC1A40(a1, v4, (unsigned __int64 *)&v31);
  v12 = (void **)v31;
  if ( ((unsigned __int8)v31 & 1) == 0 )
    goto LABEL_16;
}
