__int64 *__fastcall sub_79E7C0(__int64 a1, unsigned int a2)
{
  __int64 v2; // r12
  char v4; // cl
  unsigned __int64 v5; // rdx
  __int64 *v6; // rbp
  unsigned int v7; // r13d
  __int64 *v8; // rax
  __int64 v9; // r12
  __int64 v10; // rcx
  __int64 *v11; // r8
  __int64 *v12; // r12
  __int64 *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r10
  int v16; // edi
  int v17; // r15d
  __int64 *v18; // r14
  __int64 v19; // rcx
  __int64 *v20; // rdx
  __int64 v21; // r11
  __int64 v22; // rax
  signed __int64 v23; // r10
  _BYTE *v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 *result; // rax
  char *v29; // rbp
  bool v30; // zf
  _QWORD *v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdi
  int v36; // r8d
  int v37; // r11d
  __int64 *v38; // r10
  __int64 v39; // rsi
  __int64 *v40; // rcx
  __int64 v41; // r9
  __int64 v42; // rdx
  int v43; // edi
  int v44; // ecx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  _QWORD v50[2]; // [rsp+10h] [rbp-78h] BYREF
  char v51; // [rsp+20h] [rbp-68h] BYREF

  LODWORD(v2) = a2;
  v4 = *(_BYTE *)a1 & 1;
  if ( a2 <= 4 )
  {
    if ( !v4 )
    {
      v8 = *(__int64 **)(a1 + 8);
      v7 = *(_DWORD *)(a1 + 16);
      *(_BYTE *)a1 |= 1u;
      LODWORD(v2) = v7;
      v6 = v8;
LABEL_8:
      v9 = 2LL * (unsigned int)v2;
      v10 = *(_QWORD *)a1 & 1LL;
      v11 = &v6[2 * v7];
      *(_QWORD *)a1 = v10;
      if ( v10 )
      {
        v8 = (__int64 *)(a1 + 8);
        v9 = 8;
      }
      v12 = &v8[v9];
      if ( v8 != v12 )
      {
        if ( (((_BYTE)v12 - (_BYTE)v8) & 0x10) == 0 || (*v8 = -1, v8 += 2, v12 != v8) )
        {
          do
          {
            *v8 = -1;
            v8 += 4;
            *(v8 - 2) = -1;
          }
          while ( v12 != v8 );
        }
      }
      v13 = v6;
      if ( v11 == v6 )
        return (__int64 *)operator delete();
      while ( 1 )
      {
LABEL_17:
        v14 = *v13;
        if ( (unsigned __int64)*v13 > 0xFFFFFFFFFFFFFFFDLL )
          goto LABEL_16;
        if ( (*(_BYTE *)a1 & 1) != 0 )
        {
          v15 = a1 + 8;
          v16 = 3;
        }
        else
        {
          v43 = *(_DWORD *)(a1 + 16);
          v15 = *(_QWORD *)(a1 + 8);
          if ( !v43 )
          {
            *(_QWORD *)&dword_0 = *v13;
            BUG();
          }
          v16 = v43 - 1;
        }
        v17 = 1;
        v18 = nullptr;
        LODWORD(v19) = v16 & (((unsigned int)v14 >> 9) ^ ((unsigned int)v14 >> 4));
        v20 = (__int64 *)(v15 + 16LL * (unsigned int)v19);
        v21 = *v20;
        if ( *v20 != v14 )
        {
          while ( v21 != -1 )
          {
            if ( v21 == -2 && !v18 )
              v18 = v20;
            v19 = v16 & (unsigned int)(v19 + v17);
            v20 = (__int64 *)(v15 + 16 * v19);
            v21 = *v20;
            if ( v14 == *v20 )
              goto LABEL_21;
            ++v17;
          }
          if ( v18 )
            v20 = v18;
        }
LABEL_21:
        *v20 = *v13;
        v22 = v13[1];
        v13[1] = v22 & 1;
        v20[1] = v22;
        *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
        v23 = v13[1] & 0xFFFFFFFFFFFFFFFCLL;
        if ( (unsigned __int64)v23 <= 7 )
          goto LABEL_16;
        v24 = (_BYTE *)(v13[1] & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v13[1] & 4) == 0 )
          break;
        if ( ((v23 >> 2) & 1) == 0 )
          v24 = nullptr;
        v25 = *(_QWORD *)v24;
        if ( (*(_BYTE *)(*(_QWORD *)v24 + 28LL) & 0x7F) != 0 )
          goto LABEL_57;
LABEL_24:
        v26 = *(_QWORD *)(v25 + 88);
        while ( (v23 & 4) != 0 )
        {
          v27 = v23 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v23 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
            break;
          v23 = *(_QWORD *)(v27 + 8);
          *(_QWORD *)(v27 + 8) = *(_QWORD *)(v26 + 17336) | 4LL;
          *(_QWORD *)(v26 + 17336) = v27;
          if ( !v23 )
          {
            v13 += 2;
            if ( v11 != v13 )
              goto LABEL_17;
            return (__int64 *)operator delete();
          }
        }
LABEL_16:
        v13 += 2;
        if ( v11 == v13 )
          return (__int64 *)operator delete();
      }
      v25 = v13[1] & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v24[28] & 0x7F) == 0 )
        goto LABEL_24;
LABEL_57:
      v25 = sub_793320(v25);
      goto LABEL_24;
    }
  }
  else
  {
    v5 = (a2 - 1)
       | ((unsigned __int64)(a2 - 1) >> 1)
       | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
       | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1) | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)) >> 4);
    v2 = (v5 | (v5 >> 8) | ((v5 | (v5 >> 8)) >> 16)) + 1;
    if ( (unsigned int)v2 < 0x40 )
      LODWORD(v2) = 64;
    if ( !v4 )
    {
      v6 = *(__int64 **)(a1 + 8);
      v7 = *(_DWORD *)(a1 + 16);
      v8 = (__int64 *)sub_25CC9C0(16LL * (unsigned int)v2, 8);
      *(_DWORD *)(a1 + 16) = v2;
      *(_QWORD *)(a1 + 8) = v8;
      goto LABEL_8;
    }
  }
  v29 = (char *)v50;
  if ( *(_QWORD *)(a1 + 8) <= 0xFFFFFFFFFFFFFFFDLL )
  {
    v29 = &v51;
    v50[0] = *(_QWORD *)(a1 + 8);
    v49 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 16) = v49 & 1;
    v50[1] = v49;
  }
  if ( *(_QWORD *)(a1 + 24) > 0xFFFFFFFFFFFFFFFDLL )
  {
    if ( *(_QWORD *)(a1 + 40) > 0xFFFFFFFFFFFFFFFDLL )
      goto LABEL_34;
LABEL_80:
    v29 += 16;
    *((_QWORD *)v29 - 2) = *(_QWORD *)(a1 + 40);
    v47 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 48) = v47 & 1;
    *((_QWORD *)v29 - 1) = v47;
    if ( *(_QWORD *)(a1 + 56) > 0xFFFFFFFFFFFFFFFDLL )
      goto LABEL_35;
    goto LABEL_81;
  }
  v29 += 16;
  *((_QWORD *)v29 - 2) = *(_QWORD *)(a1 + 24);
  v46 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = v46 & 1;
  *((_QWORD *)v29 - 1) = v46;
  if ( *(_QWORD *)(a1 + 40) <= 0xFFFFFFFFFFFFFFFDLL )
    goto LABEL_80;
LABEL_34:
  if ( *(_QWORD *)(a1 + 56) > 0xFFFFFFFFFFFFFFFDLL )
    goto LABEL_35;
LABEL_81:
  v29 += 16;
  *((_QWORD *)v29 - 2) = *(_QWORD *)(a1 + 56);
  v48 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = v48 & 1;
  *((_QWORD *)v29 - 1) = v48;
LABEL_35:
  if ( (unsigned int)v2 > 4 )
  {
    *(_BYTE *)a1 &= ~1u;
    v45 = sub_25CC9C0(16LL * (unsigned int)v2, 8);
    *(_DWORD *)(a1 + 16) = v2;
    *(_QWORD *)(a1 + 8) = v45;
  }
  v30 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v30 )
  {
    v31 = *(_QWORD **)(a1 + 8);
    v32 = 2LL * *(unsigned int *)(a1 + 16);
  }
  else
  {
    v31 = (_QWORD *)(a1 + 8);
    v32 = 8;
  }
  v33 = &v31[v32];
  if ( v31 != v33 )
  {
    if ( (((_BYTE)v33 - (_BYTE)v31) & 0x10) == 0 || (*v31 = -1, v31 += 2, v33 != v31) )
    {
      do
      {
        *v31 = -1;
        v31 += 4;
        *(v31 - 2) = -1;
      }
      while ( v33 != v31 );
    }
  }
  for ( result = v50; v29 != (char *)result; *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1 )
  {
    while ( 1 )
    {
      v34 = *result;
      if ( (unsigned __int64)*result <= 0xFFFFFFFFFFFFFFFDLL )
        break;
      result += 2;
      if ( v29 == (char *)result )
        return result;
    }
    if ( (*(_BYTE *)a1 & 1) != 0 )
    {
      v35 = a1 + 8;
      v36 = 3;
    }
    else
    {
      v44 = *(_DWORD *)(a1 + 16);
      v35 = *(_QWORD *)(a1 + 8);
      if ( !v44 )
      {
        *(_QWORD *)&dword_0 = *result;
        BUG();
      }
      v36 = v44 - 1;
    }
    v37 = 1;
    v38 = nullptr;
    LODWORD(v39) = v36 & (((unsigned int)v34 >> 9) ^ ((unsigned int)v34 >> 4));
    v40 = (__int64 *)(v35 + 16LL * (unsigned int)v39);
    v41 = *v40;
    if ( v34 != *v40 )
    {
      while ( v41 != -1 )
      {
        if ( v41 == -2 && !v38 )
          v38 = v40;
        v39 = v36 & (unsigned int)(v39 + v37);
        v40 = (__int64 *)(v35 + 16 * v39);
        v41 = *v40;
        if ( v34 == *v40 )
          goto LABEL_50;
        ++v37;
      }
      if ( v38 )
        v40 = v38;
    }
LABEL_50:
    *v40 = *result;
    v42 = result[1];
    result[1] = v42 & 1;
    result += 2;
    v40[1] = v42;
  }
  return result;
}

