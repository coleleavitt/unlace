__int64 __fastcall sub_72B0B0(__int64 a1, int a2)
{
  unsigned int v4; // eax
  unsigned int v5; // edx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // esi
  unsigned int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 result; // rax
  unsigned int v22; // eax
  unsigned int v23; // eax
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // r8
  unsigned __int8 v29; // cl
  unsigned int v30; // esi
  __int64 v31; // rax
  __int16 v32; // dx
  __int16 v33; // di
  unsigned __int16 v34; // dx
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rax
  int v40; // edx
  int v41; // r8d
  int v42; // edi
  int v43; // eax
  int v44; // edx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rdx
  bool v48; // zf
  __int64 v49; // rdx
  unsigned int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rsi
  __int64 v53; // rdx
  __int64 v54; // rdi
  __int64 v55; // rdx
  int v56; // eax
  __int64 v57; // rax
  __int64 v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // rdi
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rsi
  __int64 v70; // rdx
  __int64 v71; // rdi

  v4 = *(_DWORD *)(a1 + 180);
LABEL_2:
  if ( v4 > 0x105 )
  {
LABEL_3:
    v5 = *(_DWORD *)(a1 + 172);
    goto LABEL_4;
  }
  while ( 1 )
  {
    sub_72AD50(a1);
    v23 = *(_DWORD *)(a1 + 180);
    if ( v23 > 0x105 )
      goto LABEL_3;
    if ( !a2 )
      return 0;
    if ( !v23 )
      break;
    v5 = *(_DWORD *)(a1 + 172);
    if ( v23 > 2 )
    {
LABEL_4:
      v6 = v5 + 2;
      v7 = *(_DWORD *)(a1 + 88) & v5;
      v8 = *(_QWORD *)(a1 + 120);
      v9 = *(_DWORD *)(a1 + 140)
         & ((*(_DWORD *)(a1 + 128) << *(_DWORD *)(a1 + 144))
          ^ (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(a1 + 96) + v6));
      *(_DWORD *)(a1 + 128) = v9;
      v10 = *(unsigned __int16 *)(v8 + 2 * v9);
      *(_WORD *)(*(_QWORD *)(a1 + 112) + 2 * v7) = v10;
      *(_WORD *)(*(_QWORD *)(a1 + 120) + 2LL * *(unsigned int *)(a1 + 128)) = *(_DWORD *)(a1 + 172);
      v11 = *(_DWORD *)(a1 + 160);
      LODWORD(v9) = *(_DWORD *)(a1 + 176);
      v5 = *(_DWORD *)(a1 + 172);
      *(_DWORD *)(a1 + 160) = 2;
      *(_DWORD *)(a1 + 184) = v11;
      *(_DWORD *)(a1 + 164) = v9;
      if ( v10 && v11 < *(_DWORD *)(a1 + 192) && v5 - v10 <= *(_DWORD *)(a1 + 80) - 262 )
      {
        v50 = sub_72AA90(a1, v10);
        *(_DWORD *)(a1 + 160) = v50;
        if ( v50 > 5 )
        {
          v11 = *(_DWORD *)(a1 + 184);
          v5 = *(_DWORD *)(a1 + 172);
          goto LABEL_7;
        }
        v5 = *(_DWORD *)(a1 + 172);
        v11 = *(_DWORD *)(a1 + 184);
        if ( *(_DWORD *)(a1 + 200) == 1 || v50 == 3 && v5 - *(_DWORD *)(a1 + 176) > 0x1000 )
        {
          *(_DWORD *)(a1 + 160) = 2;
          if ( v11 > 2 )
            goto LABEL_27;
          goto LABEL_9;
        }
      }
    }
    else
    {
      v11 = *(_DWORD *)(a1 + 160);
      v24 = *(_DWORD *)(a1 + 176);
      *(_DWORD *)(a1 + 160) = 2;
      *(_DWORD *)(a1 + 184) = v11;
      *(_DWORD *)(a1 + 164) = v24;
    }
LABEL_7:
    if ( v11 > 2 && *(_DWORD *)(a1 + 160) <= v11 )
    {
LABEL_27:
      v28 = *(_QWORD *)(a1 + 5888);
      v29 = v11 - 3;
      v30 = v5 + *(_DWORD *)(a1 + 180) - 3;
      v31 = *(unsigned int *)(a1 + 5900);
      v32 = v5 - *(_WORD *)(a1 + 164);
      v33 = v32 - 1;
      v34 = v32 - 2;
      *(_DWORD *)(a1 + 5900) = v31 + 1;
      *(_BYTE *)(v28 + v31) = v33;
      v35 = *(unsigned int *)(a1 + 5900);
      v36 = *(_QWORD *)(a1 + 5888);
      *(_DWORD *)(a1 + 5900) = v35 + 1;
      *(_BYTE *)(v36 + v35) = HIBYTE(v33);
      v37 = *(unsigned int *)(a1 + 5900);
      v38 = *(_QWORD *)(a1 + 5888);
      *(_DWORD *)(a1 + 5900) = v37 + 1;
      *(_BYTE *)(v38 + v37) = v29;
      ++*(_WORD *)(a1 + 4LL * byte_23925E0[v29] + 1240);
      if ( v34 > 0xFFu )
        v39 = byte_23926E0[((v34 >> 7) + 256) & 0x3FF];
      else
        v39 = byte_23926E0[v34];
      ++*(_WORD *)(a1 + 4 * v39 + 2504);
      v40 = *(_DWORD *)(a1 + 184);
      v41 = *(_DWORD *)(a1 + 5900);
      v42 = *(_DWORD *)(a1 + 5904);
      v43 = *(_DWORD *)(a1 + 180) + 1 - v40;
      *(_DWORD *)(a1 + 184) = v40 - 2;
      v44 = *(_DWORD *)(a1 + 172);
      *(_DWORD *)(a1 + 180) = v43;
      do
      {
        while ( 1 )
        {
          *(_DWORD *)(a1 + 172) = v44 + 1;
          if ( v44 + 1 > v30 )
            break;
          v45 = *(_DWORD *)(a1 + 88) & (unsigned int)(v44 + 1);
          v46 = *(_QWORD *)(a1 + 120);
          v47 = *(_DWORD *)(a1 + 140)
              & ((*(_DWORD *)(a1 + 128) << *(_DWORD *)(a1 + 144))
               ^ (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(a1 + 96) + (unsigned int)(v44 + 3)));
          *(_DWORD *)(a1 + 128) = v47;
          *(_WORD *)(*(_QWORD *)(a1 + 112) + 2 * v45) = *(_WORD *)(v46 + 2 * v47);
          *(_WORD *)(*(_QWORD *)(a1 + 120) + 2LL * *(unsigned int *)(a1 + 128)) = *(_DWORD *)(a1 + 172);
          v44 = *(_DWORD *)(a1 + 172);
          v48 = (*(_DWORD *)(a1 + 184))-- == 1;
          if ( v48 )
            goto LABEL_33;
        }
        v48 = (*(_DWORD *)(a1 + 184))-- == 1;
        ++v44;
      }
      while ( !v48 );
LABEL_33:
      *(_DWORD *)(a1 + 168) = 0;
      v49 = (unsigned int)(v44 + 1);
      *(_DWORD *)(a1 + 160) = 2;
      *(_DWORD *)(a1 + 172) = v49;
      if ( v41 == v42 )
      {
        v51 = *(_QWORD *)(a1 + 152);
        v52 = 0;
        v53 = v49 - v51;
        if ( v51 >= 0 )
          v52 = *(_QWORD *)(a1 + 96) + (unsigned int)v51;
        sub_731F10(a1, v52, v53, 0);
        v54 = *(_QWORD *)a1;
        *(_QWORD *)(a1 + 152) = *(unsigned int *)(a1 + 172);
        sub_72B030(v54);
        if ( !*(_DWORD *)(*(_QWORD *)a1 + 32LL) )
          return 0;
      }
      v4 = *(_DWORD *)(a1 + 180);
      goto LABEL_2;
    }
LABEL_9:
    if ( *(_DWORD *)(a1 + 168) )
    {
      v12 = *(_QWORD *)(a1 + 5888);
      v13 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 96) + v5 - 1);
      v14 = *(unsigned int *)(a1 + 5900);
      *(_DWORD *)(a1 + 5900) = v14 + 1;
      *(_BYTE *)(v12 + v14) = 0;
      v15 = *(unsigned int *)(a1 + 5900);
      v16 = *(_QWORD *)(a1 + 5888);
      *(_DWORD *)(a1 + 5900) = v15 + 1;
      *(_BYTE *)(v16 + v15) = 0;
      v17 = *(unsigned int *)(a1 + 5900);
      v18 = *(_QWORD *)(a1 + 5888);
      *(_DWORD *)(a1 + 5900) = v17 + 1;
      *(_BYTE *)(v18 + v17) = v13;
      ++*(_WORD *)(a1 + 4 * v13 + 212);
      if ( *(_DWORD *)(a1 + 5900) == *(_DWORD *)(a1 + 5904) )
      {
        v25 = *(_QWORD *)(a1 + 152);
        v26 = 0;
        if ( v25 >= 0 )
          v26 = *(_QWORD *)(a1 + 96) + (unsigned int)v25;
        sub_731F10(a1, v26, *(unsigned int *)(a1 + 172) - v25, 0);
        v27 = *(_QWORD *)a1;
        *(_QWORD *)(a1 + 152) = *(unsigned int *)(a1 + 172);
        sub_72B030(v27);
      }
      v19 = *(_DWORD *)(a1 + 180);
      v20 = *(_QWORD *)a1;
      ++*(_DWORD *)(a1 + 172);
      v4 = v19 - 1;
      *(_DWORD *)(a1 + 180) = v4;
      if ( !*(_DWORD *)(v20 + 32) )
        return 0;
      goto LABEL_2;
    }
    v22 = *(_DWORD *)(a1 + 180);
    *(_DWORD *)(a1 + 168) = 1;
    *(_DWORD *)(a1 + 172) = v5 + 1;
    *(_DWORD *)(a1 + 180) = --v22;
    if ( v22 > 0x105 )
      goto LABEL_3;
  }
  v55 = *(unsigned int *)(a1 + 172);
  if ( *(_DWORD *)(a1 + 168) )
  {
    v61 = *(_QWORD *)(a1 + 5888);
    v62 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 96) + (unsigned int)(v55 - 1));
    v63 = *(unsigned int *)(a1 + 5900);
    *(_DWORD *)(a1 + 5900) = v63 + 1;
    *(_BYTE *)(v61 + v63) = 0;
    v64 = *(unsigned int *)(a1 + 5900);
    v65 = *(_QWORD *)(a1 + 5888);
    *(_DWORD *)(a1 + 5900) = v64 + 1;
    *(_BYTE *)(v65 + v64) = 0;
    v66 = *(unsigned int *)(a1 + 5900);
    v67 = *(_QWORD *)(a1 + 5888);
    *(_DWORD *)(a1 + 5900) = v66 + 1;
    *(_BYTE *)(v67 + v66) = v62;
    ++*(_WORD *)(a1 + 4 * v62 + 212);
    v55 = *(unsigned int *)(a1 + 172);
    *(_DWORD *)(a1 + 168) = 0;
  }
  v56 = 2;
  if ( (unsigned int)v55 <= 2 )
    v56 = v55;
  *(_DWORD *)(a1 + 5932) = v56;
  if ( a2 == 4 )
  {
    v68 = *(_QWORD *)(a1 + 152);
    v69 = 0;
    v70 = v55 - v68;
    if ( v68 >= 0 )
      v69 = *(_QWORD *)(a1 + 96) + (unsigned int)v68;
    sub_731F10(a1, v69, v70, 1);
    v71 = *(_QWORD *)a1;
    *(_QWORD *)(a1 + 152) = *(unsigned int *)(a1 + 172);
    sub_72B030(v71);
    return (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 32LL) != 0) + 2;
  }
  else
  {
    result = 1;
    if ( *(_DWORD *)(a1 + 5900) )
    {
      v57 = *(_QWORD *)(a1 + 152);
      v58 = 0;
      v59 = v55 - v57;
      if ( v57 >= 0 )
        v58 = *(_QWORD *)(a1 + 96) + (unsigned int)v57;
      sub_731F10(a1, v58, v59, 0);
      v60 = *(_QWORD *)a1;
      *(_QWORD *)(a1 + 152) = *(unsigned int *)(a1 + 172);
      sub_72B030(v60);
      return *(_DWORD *)(*(_QWORD *)a1 + 32LL) != 0;
    }
  }
  return result;
}

