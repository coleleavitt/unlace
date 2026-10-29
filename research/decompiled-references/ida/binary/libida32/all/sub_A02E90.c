_QWORD *__fastcall sub_A02E90(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rbp
  volatile signed __int32 *v8; // rax
  __int64 v9; // rbp
  __int64 *v10; // r13
  unsigned int v11; // r14d
  unsigned int v12; // r13d
  unsigned int v13; // r12d
  unsigned int v14; // r15d
  int v15; // edx
  __int64 v16; // rbp
  __int64 v17; // rsi
  __int64 v18; // rbp
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rsi
  volatile signed __int32 *v22; // rax
  unsigned int v23; // ebp
  __int64 v24; // rbp
  volatile signed __int32 *v25; // rax
  unsigned int v26; // ebp
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // r15
  unsigned __int64 v31; // rdx
  __int64 v32; // r14
  __int64 v33; // rax
  __int64 v34; // [rsp+8h] [rbp-90h]
  __int64 v35; // [rsp+10h] [rbp-88h]
  int v36; // [rsp+1Ch] [rbp-7Ch]
  __int64 v37; // [rsp+30h] [rbp-68h]
  __int128 v38; // [rsp+40h] [rbp-58h] BYREF
  __int64 v39; // [rsp+50h] [rbp-48h] BYREF
  volatile signed __int32 *v40; // [rsp+58h] [rbp-40h]

  v2 = a1;
  sub_A01C30(a2, 8u, 3u);
  v4 = operator new(0x220u);
  *(_QWORD *)(v4 + 8) = 0x100000001LL;
  *(_QWORD *)v4 = off_2BD8AF8;
  *(_QWORD *)(v4 + 16) = v4 + 32;
  *(_QWORD *)(v4 + 24) = 0x2000000000LL;
  sub_9FC0C0(v4 + 16, 1, 1);
  sub_9FC0C0(v4 + 16, 16, 2);
  sub_9FC0C0(v4 + 16, 16, 2);
  v39 = v4 + 16;
  v40 = (volatile signed __int32 *)v4;
  sub_9FC300(a2, v4 + 16);
  v5 = *(_QWORD *)(a2 + 72);
  if ( v5 == *(_QWORD *)(a2 + 80) )
  {
    sub_9FF060(a2 + 64, (char *)v5, &v39);
    v7 = *(_QWORD *)(a2 + 72);
  }
  else
  {
    v6 = v39;
    *(_QWORD *)(v5 + 8) = 0;
    v7 = v5 + 16;
    *(_QWORD *)v5 = v6;
    v8 = v40;
    v40 = nullptr;
    *(_QWORD *)(v5 + 8) = v8;
    v39 = 0;
    *(_QWORD *)(a2 + 72) = v5 + 16;
  }
  v9 = (v7 - *(_QWORD *)(a2 + 64)) >> 4;
  if ( v40 )
    sub_4204D0(v40);
  *(_DWORD *)(a1 + 48) = 0;
  v10 = (__int64 *)(a1 + 40);
  sub_995F50(a1 + 40, 1);
  sub_995F50(a1 + 40, 0);
  sub_995F50(a1 + 40, 35);
  v34 = *(_QWORD *)(a1 + 40);
  v37 = *(unsigned int *)(a1 + 48);
  v11 = *(_DWORD *)(a1 + 48);
  v35 = *(_QWORD *)(*(_QWORD *)(a2 + 64) + 16LL * (unsigned int)(v9 - 1));
  sub_9FC180(a2, v9 + 3, *(_DWORD *)(a2 + 56));
  v36 = *(_DWORD *)(v35 + 8);
  if ( v36 )
  {
    v12 = 0;
    v13 = 0;
    v14 = v11;
    while ( 1 )
    {
      while ( 1 )
      {
        v16 = v12 + 1;
        v17 = *(_QWORD *)v35 + 16LL * v12;
        if ( (*(_BYTE *)(v17 + 8) & 1) == 0 )
          break;
        ++v13;
LABEL_13:
        ++v12;
        if ( v36 == (_DWORD)v16 )
        {
LABEL_14:
          v10 = (__int64 *)(a1 + 40);
          v2 = a1;
          goto LABEL_15;
        }
      }
      v15 = (*(_BYTE *)(v17 + 8) >> 1) & 7;
      if ( v15 == 3 )
      {
        v32 = *(_QWORD *)v35 + 16 * v16;
        LODWORD(v16) = v12 + 2;
        sub_9FC5A0(a2, v14 - v13);
        if ( v14 != v13 )
        {
          do
          {
            v33 = v13++;
            sub_A025E0(a2, v32, *(_QWORD *)(v34 + 8 * v33));
          }
          while ( v14 != v13 );
          v13 = v14;
        }
      }
      else
      {
        if ( v15 != 5 )
        {
          v31 = *(_QWORD *)(v34 + 8LL * v13++);
          sub_A025E0(a2, v17, v31);
          goto LABEL_13;
        }
        sub_A02670(a2, (const __m128i *)(v34 + 8LL * v13), v37 - v13, 1);
      }
      v12 = v16;
      if ( v36 == (_DWORD)v16 )
        goto LABEL_14;
    }
  }
LABEL_15:
  v18 = operator new(0x220u);
  *(_QWORD *)(v18 + 8) = 0x100000001LL;
  *(_QWORD *)v18 = off_2BD8AF8;
  *(_QWORD *)(v18 + 16) = v18 + 32;
  *(_QWORD *)(v18 + 24) = 0x2000000000LL;
  sub_9FC0C0(v18 + 16, 2, 1);
  sub_9FC0C0(v18 + 16, 0, 10);
  v39 = v18 + 16;
  v40 = (volatile signed __int32 *)v18;
  sub_9FC300(a2, v18 + 16);
  v19 = *(_QWORD *)(a2 + 72);
  if ( v19 == *(_QWORD *)(a2 + 80) )
  {
    sub_9FF060(a2 + 64, (char *)v19, &v39);
    v21 = *(_QWORD *)(a2 + 72);
  }
  else
  {
    v20 = v39;
    *(_QWORD *)(v19 + 8) = 0;
    v21 = v19 + 16;
    *(_QWORD *)(v21 - 16) = v20;
    v22 = v40;
    v40 = nullptr;
    *(_QWORD *)(v21 - 8) = v22;
    v39 = 0;
    *(_QWORD *)(a2 + 72) = v21;
  }
  v23 = ((v21 - *(_QWORD *)(a2 + 64)) >> 4) + 3;
  if ( v40 )
    sub_4204D0(v40);
  *(_DWORD *)(v2 + 48) = 0;
  sub_995F50((__int64)v10, 2);
  sub_A02A00(a2, v23, *(_QWORD *)(v2 + 40), *(unsigned int *)(v2 + 48), *(_QWORD *)v2, *(_QWORD *)(v2 + 8), 0);
  if ( *(_QWORD *)(v2 + 32) )
  {
    sub_9FAF50(&v38);
    v24 = v38;
    sub_9FC0C0(v38, 4, 1);
    sub_9FC0C0(v24, 16, 4);
    sub_9FC0C0(v24, 16, 4);
    v25 = *((volatile signed __int32 **)&v38 + 1);
    v39 = v38;
    v38 = 0;
    v40 = v25;
    v26 = sub_9FF250(a2, &v39);
    if ( v40 )
      sub_4204D0(v40);
    if ( *((_QWORD *)&v38 + 1) )
      sub_4204D0(*((volatile signed __int32 **)&v38 + 1));
    v27 = *(_QWORD *)(v2 + 32);
    v28 = *(_QWORD *)(v27 + 40);
    v29 = *(_QWORD *)(v27 + 32);
    *(_DWORD *)(v2 + 48) = 0;
    sub_995F50((__int64)v10, 4);
    sub_995F50((__int64)v10, v29);
    sub_995F50((__int64)v10, v28);
    sub_A02D60(a2, v26, v10);
  }
  return sub_A01810(a2);
}

