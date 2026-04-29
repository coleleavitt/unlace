__int64 __fastcall sub_30980(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // r13
  __int16 v5; // r14
  unsigned __int64 v6; // rbp
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r15
  int v10; // r12d
  unsigned int v11; // ecx
  char v12; // cl
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v16; // rbp
  char *v17; // rax
  _QWORD *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 first_seg; // rax
  __int64 v22; // rdx
  __int128 v23; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v24; // [rsp+10h] [rbp-198h]
  __int64 v25; // [rsp+18h] [rbp-190h]
  __int64 v26; // [rsp+20h] [rbp-188h]
  char v27; // [rsp+28h] [rbp-180h] BYREF
  __int64 v28; // [rsp+38h] [rbp-170h]
  _QWORD v29[8]; // [rsp+168h] [rbp-40h] BYREF

  v2 = *(unsigned __int16 *)(a1 + 40);
  v29[0] = __readfsqword(0x28u);
  v3 = a1;
  if ( (unsigned __int16)v2 > 0x1B8u )
  {
    if ( (((_WORD)v2 - 830) & 0xFFFD) != 0 )
      return 0;
    v5 = *(_WORD *)(a1 + 62);
    v4 = *(_QWORD *)(a1 + 32);
    v6 = *(_QWORD *)(a1 + 112) + 16LL * *(_QWORD *)(a1 + 16);
    if ( (_WORD)v2 != 830 )
      goto LABEL_4;
  }
  else if ( (unsigned __int16)v2 <= 0x1B6u )
  {
    if ( (unsigned __int16)(v2 - 198) > 3u )
      return 0;
    v5 = *(_WORD *)(a1 + 62);
    v4 = *(_QWORD *)(a1 + 32);
    v6 = *(_QWORD *)(a1 + 112) + 16LL * *(_QWORD *)(a1 + 16);
    if ( (unsigned __int16)v2 > 0xC7u )
      goto LABEL_4;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 32);
    v5 = 24;
    v6 = *(_QWORD *)(a1 + 72) + 16LL * *(_QWORD *)(a1 + 16);
    if ( (_WORD)v2 != 440 )
      goto LABEL_4;
  }
  if ( *(_QWORD *)(a1 + 8LL * (int)a2 + 384) < v6 )
    return 0;
  v16 = *(unsigned __int16 *)(a1 + 42);
  v24 = -1;
  v17 = &v27;
  v23 = -1;
  v18 = v29;
  v25 = 0;
  v6 = v4 + v16;
  v26 = 0;
  do
  {
    v19 = 0;
    v20 = 0;
    *(_WORD *)v17 = 0;
    v17 += 40;
    *((_WORD *)v17 - 19) = 0;
    *((_WORD *)v17 - 18) = 0;
    *((_DWORD *)v17 - 2) = 0;
    *((_WORD *)v17 - 17) = 0;
    *((_OWORD *)v17 - 2) = 0;
    *((_QWORD *)v17 - 2) = 0;
  }
  while ( v29 != (_QWORD *)v17 );
  if ( (_WORD)v2 != 830 )
  {
    if ( (unsigned int)decode_insn(&v23, v6, v2, v29, 0, 0, 0.0) )
    {
      v6 += WORD1(v25);
      goto LABEL_17;
    }
    return 0;
  }
LABEL_17:
  a2 = v6;
  if ( (int)decode_insn(&v23, v6, v2, v18, v19, v20, 0.0) > 0 && ((_WORD)v25 == 202 || (_WORD)v25 == 115) )
    v6 = v28 + 16 * v23;
LABEL_4:
  v7 = sub_308D0((_QWORD *)a1);
  v9 = *(_QWORD *)(a1 + 888);
  v10 = v7;
  v11 = *(_DWORD *)(v9 + 120);
  if ( v11 > 5 )
    goto LABEL_32;
  if ( ((1LL << v11) & 0x16) != 0 )
    goto LABEL_6;
  if ( ((1LL << v11) & 0x29) != 0 )
  {
    a1 = *(_QWORD *)(a1 + 32);
    if ( a1 == -1 )
      first_seg = get_first_seg(-1, a2, v8);
    else
      first_seg = getseg(a1);
    if ( first_seg )
    {
      if ( *(_BYTE *)(first_seg + 43) != 2 && (unsigned int)(*(_DWORD *)(v9 + 184) - 4) > 1 )
      {
        v12 = 2;
        goto LABEL_7;
      }
LABEL_6:
      v12 = 7;
LABEL_7:
      v13 = 40LL * v10;
      *(_BYTE *)(*(_QWORD *)(v3 + 864) + v13 + 1) = 1;
      *(_WORD *)(*(_QWORD *)(v3 + 864) + v13 + 6) = v5;
      *(_BYTE *)(*(_QWORD *)(v3 + 864) + v13 + 5) = v12;
      v14 = *(_QWORD *)(v3 + 864) + 40LL * (v10 + 1);
      *(_QWORD *)v14 = 25344;
      *(_QWORD *)(v14 + 8) = 0;
      *(_QWORD *)(v14 + 16) = v4;
      *(_QWORD *)(v14 + 24) = v6;
      *(_DWORD *)(v14 + 32) = 0;
      return 1;
    }
  }
  else
  {
LABEL_32:
    sub_28E30();
  }
  sub_28E10(a1, a2, v22);
  return sub_30CA0();
}
