__int64 __fastcall sub_74BBA0(__int64 a1, int a2)
{
  __int16 v4; // dx
  unsigned __int8 v5; // al
  __int64 v6; // rcx
  __int64 v7; // rsi
  char v8; // di^1
  unsigned __int16 v9; // dx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned int v13; // edx
  int v14; // edi
  _BOOL4 v15; // r8d
  unsigned int v16; // esi
  __int64 v17; // r9
  int v18; // ecx
  unsigned int v19; // eax
  __int64 v20; // rsi
  int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned int v27; // esi
  unsigned int v28; // eax
  __int64 v29; // rcx
  int v30; // esi
  _BYTE *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 result; // rax
  unsigned int v41; // eax
  unsigned int v42; // esi
  __int64 v43; // rdx
  int v44; // edi
  __int64 v45; // rax
  __int64 v46; // rdx
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // rdi

  while ( 1 )
  {
    if ( *(_DWORD *)(a1 + 180) > 0x105u || (sub_74B220(a1), v41 = *(_DWORD *)(a1 + 180), v41 > 0x105) )
    {
      LODWORD(v22) = *(_DWORD *)(a1 + 172);
      goto LABEL_9;
    }
    if ( !a2 )
      return 0;
    v22 = *(unsigned int *)(a1 + 172);
    if ( !v41 )
      break;
    if ( v41 <= 2 )
      goto LABEL_22;
LABEL_9:
    v23 = (unsigned int)(v22 + 2);
    v24 = *(_DWORD *)(a1 + 88) & (unsigned int)v22;
    v25 = *(_QWORD *)(a1 + 120);
    v26 = *(_DWORD *)(a1 + 140)
        & ((*(_DWORD *)(a1 + 128) << *(_DWORD *)(a1 + 144))
         ^ (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(a1 + 96) + v23));
    *(_DWORD *)(a1 + 128) = v26;
    v27 = *(unsigned __int16 *)(v25 + 2 * v26);
    *(_WORD *)(*(_QWORD *)(a1 + 112) + 2 * v24) = v27;
    *(_WORD *)(*(_QWORD *)(a1 + 120) + 2LL * *(unsigned int *)(a1 + 128)) = *(_DWORD *)(a1 + 172);
    if ( v27 )
    {
      v22 = *(unsigned int *)(a1 + 172);
      if ( *(_DWORD *)(a1 + 172) - v27 <= *(_DWORD *)(a1 + 80) - 262 )
      {
        v28 = sub_74AF60(a1, v27);
        v22 = *(unsigned int *)(a1 + 172);
        *(_DWORD *)(a1 + 160) = v28;
        goto LABEL_11;
      }
LABEL_22:
      v28 = *(_DWORD *)(a1 + 160);
      goto LABEL_11;
    }
    v28 = *(_DWORD *)(a1 + 160);
    v22 = *(unsigned int *)(a1 + 172);
LABEL_11:
    v29 = *(unsigned int *)(a1 + 5900);
    v30 = v29 + 1;
    v31 = (_BYTE *)(*(_QWORD *)(a1 + 5888) + v29);
    if ( v28 > 2 )
    {
      v4 = v22 - *(_WORD *)(a1 + 176);
      *(_DWORD *)(a1 + 5900) = v30;
      v5 = v28 - 3;
      *v31 = v4;
      v6 = *(unsigned int *)(a1 + 5900);
      v7 = *(_QWORD *)(a1 + 5888);
      *(_DWORD *)(a1 + 5900) = v6 + 1;
      v8 = HIBYTE(v4);
      v9 = v4 - 1;
      *(_BYTE *)(v7 + v6) = v8;
      v10 = *(unsigned int *)(a1 + 5900);
      v11 = *(_QWORD *)(a1 + 5888);
      *(_DWORD *)(a1 + 5900) = v10 + 1;
      *(_BYTE *)(v11 + v10) = v5;
      ++*(_WORD *)(a1 + 4LL * byte_23B6740[v5] + 1240);
      if ( v9 > 0xFFu )
        v12 = byte_23B6840[((v9 >> 7) + 256) & 0x3FF];
      else
        v12 = byte_23B6840[v9];
      ++*(_WORD *)(a1 + 4 * v12 + 2504);
      v13 = *(_DWORD *)(a1 + 160);
      v14 = *(_DWORD *)(a1 + 172);
      v15 = *(_DWORD *)(a1 + 5900) == *(_DWORD *)(a1 + 5904);
      v16 = *(_DWORD *)(a1 + 180) - v13;
      v17 = *(_QWORD *)(a1 + 96);
      v18 = *(_DWORD *)(a1 + 144);
      *(_DWORD *)(a1 + 180) = v16;
      v19 = *(_DWORD *)(a1 + 140);
      if ( v13 <= *(_DWORD *)(a1 + 192) && v16 > 2 )
      {
        *(_DWORD *)(a1 + 160) = v13 - 1;
        while ( 1 )
        {
          v42 = v14 + 1;
          v43 = (unsigned int)(v14 + 3);
          v44 = *(_DWORD *)(a1 + 128);
          *(_DWORD *)(a1 + 172) = v42;
          v45 = ((v44 << v18) ^ *(unsigned __int8 *)(v17 + v43)) & v19;
          v46 = *(_QWORD *)(a1 + 120);
          *(_DWORD *)(a1 + 128) = v45;
          *(_WORD *)(*(_QWORD *)(a1 + 112) + 2LL * (*(_DWORD *)(a1 + 88) & v42)) = *(_WORD *)(v46 + 2 * v45);
          *(_WORD *)(*(_QWORD *)(a1 + 120) + 2LL * *(unsigned int *)(a1 + 128)) = *(_DWORD *)(a1 + 172);
          if ( (*(_DWORD *)(a1 + 160))-- == 1 )
            break;
          v14 = *(_DWORD *)(a1 + 172);
          v18 = *(_DWORD *)(a1 + 144);
          v17 = *(_QWORD *)(a1 + 96);
          v19 = *(_DWORD *)(a1 + 140);
        }
        goto LABEL_13;
      }
      *(_DWORD *)(a1 + 160) = 0;
      v20 = v13 + v14;
      v21 = v20;
      *(_DWORD *)(a1 + 172) = v20;
      LODWORD(v20) = *(unsigned __int8 *)(v17 + v20);
      *(_DWORD *)(a1 + 128) = v20;
      *(_DWORD *)(a1 + 128) = v19 & (((_DWORD)v20 << v18) ^ *(unsigned __int8 *)(v17 + (unsigned int)(v21 + 1)));
      if ( v15 )
      {
LABEL_14:
        v37 = *(_QWORD *)(a1 + 152);
        v38 = 0;
        if ( v37 >= 0 )
          v38 = *(_QWORD *)(a1 + 96) + (unsigned int)v37;
        sub_7523E0(a1, v38, *(unsigned int *)(a1 + 172) - v37, 0);
        v39 = *(_QWORD *)a1;
        *(_QWORD *)(a1 + 152) = *(unsigned int *)(a1 + 172);
        sub_74B500(v39);
        if ( !*(_DWORD *)(*(_QWORD *)a1 + 32LL) )
          return 0;
      }
    }
    else
    {
      v32 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 96) + v22);
      *(_DWORD *)(a1 + 5900) = v30;
      *v31 = 0;
      v33 = *(unsigned int *)(a1 + 5900);
      v34 = *(_QWORD *)(a1 + 5888);
      *(_DWORD *)(a1 + 5900) = v33 + 1;
      *(_BYTE *)(v34 + v33) = 0;
      v35 = *(unsigned int *)(a1 + 5900);
      v36 = *(_QWORD *)(a1 + 5888);
      *(_DWORD *)(a1 + 5900) = v35 + 1;
      *(_BYTE *)(v36 + v35) = v32;
      ++*(_WORD *)(a1 + 4 * v32 + 212);
      v15 = *(_DWORD *)(a1 + 5900) == *(_DWORD *)(a1 + 5904);
      --*(_DWORD *)(a1 + 180);
LABEL_13:
      ++*(_DWORD *)(a1 + 172);
      if ( v15 )
        goto LABEL_14;
    }
  }
  v48 = 2;
  if ( (unsigned int)v22 <= 2 )
    v48 = *(_DWORD *)(a1 + 172);
  *(_DWORD *)(a1 + 5932) = v48;
  if ( a2 == 4 )
  {
    v53 = *(_QWORD *)(a1 + 152);
    v54 = 0;
    v55 = v22 - v53;
    if ( v53 >= 0 )
      v54 = *(_QWORD *)(a1 + 96) + (unsigned int)v53;
    sub_7523E0(a1, v54, v55, 1);
    v56 = *(_QWORD *)a1;
    *(_QWORD *)(a1 + 152) = *(unsigned int *)(a1 + 172);
    sub_74B500(v56);
    return (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 32LL) != 0) + 2;
  }
  else
  {
    result = 1;
    if ( *(_DWORD *)(a1 + 5900) )
    {
      v49 = *(_QWORD *)(a1 + 152);
      v50 = 0;
      v51 = v22 - v49;
      if ( v49 >= 0 )
        v50 = *(_QWORD *)(a1 + 96) + (unsigned int)v49;
      sub_7523E0(a1, v50, v51, 0);
      v52 = *(_QWORD *)a1;
      *(_QWORD *)(a1 + 152) = *(unsigned int *)(a1 + 172);
      sub_74B500(v52);
      return *(_DWORD *)(*(_QWORD *)a1 + 32LL) != 0;
    }
  }
  return result;
}
