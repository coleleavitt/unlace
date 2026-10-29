__int64 __fastcall sub_1A008D0(__int64 a1, __int64 a2, __int64 a3, __m128 a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbp
  unsigned int v10; // r12d
  unsigned int v12; // eax
  int v13; // eax
  unsigned int v14; // edx
  __int64 v15; // rcx
  unsigned __int16 v16; // ax
  __int64 v17; // rax
  __m128i *v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rsi
  __int64 v21; // rcx
  char v22; // al
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // r13
  __int64 v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned int v32; // ebx
  unsigned int *v33; // rdi
  __int64 v34; // rsi
  __int8 v35; // bl
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r13
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __m128i *v47; // [rsp+8h] [rbp-110h]
  char v48; // [rsp+1Fh] [rbp-F9h] BYREF
  _QWORD v49[2]; // [rsp+20h] [rbp-F8h] BYREF
  __m128i v50; // [rsp+30h] [rbp-E8h] BYREF
  int v51; // [rsp+40h] [rbp-D8h]
  int v52; // [rsp+44h] [rbp-D4h]
  unsigned int v53; // [rsp+48h] [rbp-D0h]
  unsigned int v54; // [rsp+4Ch] [rbp-CCh]
  unsigned int v55; // [rsp+50h] [rbp-C8h]
  __int64 v56[4]; // [rsp+60h] [rbp-B8h] BYREF
  unsigned __int8 *v57; // [rsp+80h] [rbp-98h] BYREF
  char v58; // [rsp+D8h] [rbp-40h]
  char v59; // [rsp+E4h] [rbp-34h]

  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v6 + 16) != 13 || ((*(_WORD *)(v6 + 18) >> 3) & 0x1FF) != 0x1B2 )
  {
    sub_168B9F0((__int64)v56, (__int64 *)a1, *(_DWORD *)(a3 + 24), 0xF2Eu, 0);
    v7 = sub_15DD120((__int64)v56, a3);
    v8 = sub_168B6C0(a1);
    v9 = v8;
    if ( *(_BYTE *)(v7 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v7 + 32), *(_QWORD *)(v8 + 22712), 8u);
    }
    else if ( *(_BYTE *)(v7 + 132) )
    {
      v41 = sub_168B9E0((_QWORD *)v7);
      v42 = *(_QWORD *)(v7 + 16);
      if ( v42 )
        v42 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v42 + 32LL))(*(_QWORD *)(v7 + 16));
      v50.m128i_i64[0] = v42;
      v43 = sub_1587BC0(v41, v50.m128i_i64, v37, v38, v39, v40);
      sub_AE9DF0((unsigned __int8 **)(*v43 + 32LL * *(unsigned int *)(v7 + 128) + 8), *(_QWORD *)(v9 + 22712), 8u);
    }
    v10 = 0;
    sub_15F7200(v56);
    return v10;
  }
  v12 = sub_15D8230(a3);
  v10 = sub_15EB880(a3, *(_QWORD *)a1, v12);
  if ( !(_BYTE)v10 )
    return v10;
  v13 = *(_DWORD *)(a3 + 16);
  v14 = *(_DWORD *)(a3 + 24);
  v50.m128i_i64[0] = 0;
  v15 = *(_QWORD *)(a3 + 8);
  v52 = 0;
  v51 = v13;
  v50.m128i_i64[1] = v15;
  v53 = v14;
  v54 = v14;
  v55 = v55 & 0xFF000000 | 0x201A2;
  HIBYTE(v55) &= 0xFCu;
  v16 = *(_WORD *)(*(_QWORD *)(a3 + 72) + 8LL);
  if ( v16 == 151 )
  {
    v45 = sub_168B6C0(a1);
    v18 = sub_B260B0(v45, &v50);
LABEL_12:
    v19 = *(unsigned int *)(a1 + 16);
    v20 = *(unsigned int *)(a1 + 20);
    if ( v19 >= v20 )
    {
      if ( v20 < v19 + 1 )
      {
        v47 = v18;
        sub_2237220(a1 + 8, a1 + 24, v19 + 1, 8);
        v19 = *(unsigned int *)(a1 + 16);
        v18 = v47;
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v19) = v18;
      ++*(_DWORD *)(a1 + 16);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v19) = v18;
      *(_DWORD *)(a1 + 16) = v19 + 1;
    }
    return v10;
  }
  if ( v16 <= 0x97u )
  {
    if ( v16 == 144 )
    {
      v21 = *(unsigned __int16 *)(a3 + 56);
      v22 = *(_BYTE *)(a3 + 58);
      if ( (_WORD)v21 == 1 || (v22 & 0x20) != 0 )
      {
        v49[0] = 0;
        v23 = sub_1E5F010(*(_QWORD *)(a3 + 16LL * ((v22 & 8) != 0) + 8 * (v21 + 13LL * ((v22 & 4) != 0)) + 80), v49);
        v24 = *(_QWORD *)a1;
        v25 = v23;
        v26 = *(_QWORD *)v49[0];
        v56[1] = v49[0] + 8LL;
        v56[0] = v26;
        v27 = sub_F6CCB0(v56, a4);
        if ( !(unsigned __int8)sub_1E63CF0(v24, v27, v25, 1, 3968) )
        {
          v28 = v49[0];
          v29 = sub_168B6C0(a1);
          v18 = sub_B25CA0(v29, v28, &v50);
          goto LABEL_12;
        }
      }
      else
      {
        sub_168B9F0((__int64)v56, (__int64 *)a1, v14, 0xCAAu, 0);
        v46 = sub_15DD120((__int64)v56, a3);
        LODWORD(v49[0]) = 1;
        sub_1587D10(v46, (int *)v49);
        sub_15F7200(v56);
      }
      return 0;
    }
  }
  else
  {
    if ( v16 == 152 )
    {
      v17 = sub_168B6C0(a1);
      v18 = sub_B26180(v17, &v50);
      goto LABEL_12;
    }
    if ( v16 == 154 )
    {
      if ( *(_WORD *)(a3 + 56) && (v30 = *(_QWORD *)(a3 + 80), (v30 & 2) != 0) )
      {
        v31 = v30 & 0xFFFFFFFFFFFFFFFCLL;
        v32 = *(_DWORD *)v31;
        v33 = *(unsigned int **)(*(_QWORD *)(v31 + 8) + 16LL);
        v34 = *v33;
        v49[0] = v33 + 4;
        v49[1] = v34;
        if ( (unsigned __int8)sub_B13630((__int64)(v33 + 4), v34, &v48) )
        {
          v35 = v48;
          v36 = sub_168B6C0(a1);
          v18 = sub_B26250(v36, v35, &v50);
          goto LABEL_12;
        }
        sub_168B9F0((__int64)v56, (__int64 *)a1, v32, 0x19C0u, 0);
        if ( v58 )
        {
          sub_AE9DF0(&v57, (__int64)"ResourceClass", 1u);
        }
        else if ( v59 )
        {
          sub_19FC8D0((__int64)v56, (__int64)"ResourceClass");
        }
        sub_1682BA0((__int64)v56, (__int64)v49);
        sub_15F7200(v56);
      }
      else
      {
        sub_168B9F0((__int64)v56, (__int64 *)a1, v14, 0xC57u, 0);
        v44 = sub_15DD120((__int64)v56, a3);
        LODWORD(v49[0]) = 3;
        sub_180A710(v44, (int *)v49);
        sub_15F7200(v56);
      }
      return 0;
    }
  }
  return sub_1A00D60();
}
