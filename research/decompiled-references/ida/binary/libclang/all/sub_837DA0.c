__int64 __fastcall sub_837DA0(__int64 a1, unsigned int a2, char *a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rdi
  unsigned __int8 **v11; // r12
  __int64 v12; // rax
  _QWORD *v13; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int8 **v17; // r12
  unsigned __int8 *v18; // r13
  _BOOL8 v19; // rdx
  unsigned __int8 *v20; // rcx
  __int64 v21; // rax
  unsigned __int8 *v22; // r13
  unsigned __int8 *v23; // rdx
  __int64 v24; // rax
  unsigned __int64 *v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int8 *v28; // rdx
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // r14
  __int64 v32; // r15
  __int64 v33; // r14
  void *v34; // rdi
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // r14
  void *v41; // rdi
  _BOOL8 v42; // [rsp+0h] [rbp-48h]
  _BOOL8 v43; // [rsp+0h] [rbp-48h]
  __int64 v44; // [rsp+8h] [rbp-40h]

  v8 = a4;
  if ( *(_BYTE *)(a1 + 962) && !a4 && (a3[84] & 3) != 0 )
    return 0;
  if ( a3[28] < 0 )
    goto LABEL_25;
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 2160LL) + 1LL) >= 0 && (a3[28] & 0x7Fu) - 33 <= 3 )
  {
    v15 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a3 + 32LL))(a3);
    if ( (*(_BYTE *)(v15 + 82) & 0xC) != 0 || (unsigned int)sub_7A5910(v15) )
      sub_A2E050(a1, a2, 2303, 0);
  }
  if ( !v8 )
  {
    v8 = (__int64)a3;
    if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x10) != 0 )
    {
LABEL_12:
      if ( (*(_BYTE *)(v8 + 28) & 0x7F) == 0x24 )
      {
        if ( (*(_BYTE *)(v8 + 87) & 0x20) != 0 )
        {
          v9 = *(_QWORD *)(v8 + 184);
          if ( (*(_BYTE *)(v9 + 84) & 3) != 0 || (v8 = *(_QWORD *)(v8 + 184), (*(_BYTE *)(v9 + 87) & 0x20) != 0) )
          {
            v10 = 0;
            v11 = (unsigned __int8 **)sub_A2E1A0(a1, a2, 2218, 1);
            if ( (*(_BYTE *)(v8 + 87) & 0x20) != 0 )
              v10 = *(_QWORD *)(v8 + 184);
            v12 = *(_QWORD *)(sub_79A2E0(v10 + 72) + 16);
            v13 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
            if ( (v12 & 4) != 0 )
              v13 = (_QWORD *)*v13;
            if ( v13 )
              v13 -= 8;
            if ( v11 )
              sub_8356A0(v11, (__int64)v13, 0xAu);
LABEL_34:
            sub_A2DD70(a1, *(unsigned int *)(v8 + 24), 105);
            return 0;
          }
        }
        else
        {
          v9 = v8;
        }
      }
      else
      {
        v9 = 0;
      }
      v16 = sub_A2E1A0(a1, a2, 2217, 1);
      v17 = (unsigned __int8 **)v16;
      if ( v16 )
      {
        v18 = *(unsigned __int8 **)v16;
        v19 = (*(_BYTE *)(v8 + 84) & 3) != 0;
        if ( !*(_QWORD *)v16 )
        {
          v35 = *(_QWORD *)(v16 + 8);
          v36 = *(_DWORD *)(v35 + 14976);
          if ( v36 )
          {
            v37 = (unsigned int)(v36 - 1);
            *(_DWORD *)(v35 + 14976) = v37;
            v18 = *(unsigned __int8 **)(v35 + 8 * v37 + 14848);
            v38 = *((unsigned int *)v18 + 134);
            *v18 = 0;
            v39 = *((_QWORD *)v18 + 66);
            *((_DWORD *)v18 + 106) = 0;
            v40 = v39 + (v38 << 6);
            v44 = v39;
            while ( v44 != v40 )
            {
              v40 -= 64;
              v41 = *(void **)(v40 + 24);
              if ( v41 != (void *)(v40 + 40) )
              {
                v42 = v19;
                operator delete(v41, *(_QWORD *)(v40 + 40) + 1LL);
                v19 = v42;
              }
            }
            *((_DWORD *)v18 + 134) = 0;
          }
          else
          {
            v43 = (*(_BYTE *)(v8 + 84) & 3) != 0;
            v18 = (unsigned __int8 *)operator new(0x3A0u);
            *v18 = 0;
            *((_QWORD *)v18 + 12) = v18 + 112;
            *((_QWORD *)v18 + 16) = v18 + 144;
            *((_QWORD *)v18 + 20) = v18 + 176;
            *((_QWORD *)v18 + 24) = v18 + 208;
            *((_QWORD *)v18 + 28) = v18 + 240;
            *((_QWORD *)v18 + 32) = v18 + 272;
            *((_QWORD *)v18 + 36) = v18 + 304;
            *((_QWORD *)v18 + 40) = v18 + 336;
            *((_QWORD *)v18 + 44) = v18 + 368;
            *((_QWORD *)v18 + 48) = v18 + 400;
            *((_QWORD *)v18 + 13) = 0;
            v18[112] = 0;
            *((_QWORD *)v18 + 17) = 0;
            v18[144] = 0;
            *((_QWORD *)v18 + 21) = 0;
            v18[176] = 0;
            *((_QWORD *)v18 + 25) = 0;
            v18[208] = 0;
            *((_QWORD *)v18 + 29) = 0;
            v18[240] = 0;
            *((_QWORD *)v18 + 33) = 0;
            v18[272] = 0;
            *((_QWORD *)v18 + 37) = 0;
            v18[304] = 0;
            *((_QWORD *)v18 + 41) = 0;
            v18[336] = 0;
            *((_QWORD *)v18 + 45) = 0;
            v18[368] = 0;
            *((_QWORD *)v18 + 49) = 0;
            v18[400] = 0;
            *((_QWORD *)v18 + 52) = v18 + 432;
            v19 = v43;
            *((_QWORD *)v18 + 53) = 0x800000000LL;
            *((_QWORD *)v18 + 66) = v18 + 544;
            *((_QWORD *)v18 + 67) = 0x600000000LL;
          }
          *v17 = v18;
        }
        v18[*v18 + 1] = 2;
        v20 = *v17;
        v21 = **v17;
        *v20 = v21 + 1;
        *(_QWORD *)&v20[8 * v21 + 16] = v19;
        sub_823450(v17, v9 != 0);
        v22 = *v17;
        if ( !*v17 )
        {
          v28 = v17[1];
          v29 = *((_DWORD *)v28 + 3744);
          if ( v29 )
          {
            v30 = (unsigned int)(v29 - 1);
            *((_DWORD *)v28 + 3744) = v30;
            v22 = *(unsigned __int8 **)&v28[8 * v30 + 14848];
            v31 = *((unsigned int *)v22 + 134);
            *v22 = 0;
            v32 = *((_QWORD *)v22 + 66);
            *((_DWORD *)v22 + 106) = 0;
            v33 = v32 + (v31 << 6);
            while ( v32 != v33 )
            {
              while ( 1 )
              {
                v33 -= 64;
                v34 = *(void **)(v33 + 24);
                if ( v34 == (void *)(v33 + 40) )
                  break;
                operator delete(v34, *(_QWORD *)(v33 + 40) + 1LL);
                if ( v32 == v33 )
                  goto LABEL_56;
              }
            }
LABEL_56:
            *((_DWORD *)v22 + 134) = 0;
          }
          else
          {
            v22 = (unsigned __int8 *)operator new(0x3A0u);
            *v22 = 0;
            *((_QWORD *)v22 + 12) = v22 + 112;
            *((_QWORD *)v22 + 16) = v22 + 144;
            *((_QWORD *)v22 + 20) = v22 + 176;
            *((_QWORD *)v22 + 24) = v22 + 208;
            *((_QWORD *)v22 + 28) = v22 + 240;
            *((_QWORD *)v22 + 32) = v22 + 272;
            *((_QWORD *)v22 + 36) = v22 + 304;
            *((_QWORD *)v22 + 40) = v22 + 336;
            *((_QWORD *)v22 + 44) = v22 + 368;
            *((_QWORD *)v22 + 48) = v22 + 400;
            *((_QWORD *)v22 + 13) = 0;
            v22[112] = 0;
            *((_QWORD *)v22 + 17) = 0;
            v22[144] = 0;
            *((_QWORD *)v22 + 21) = 0;
            v22[176] = 0;
            *((_QWORD *)v22 + 25) = 0;
            v22[208] = 0;
            *((_QWORD *)v22 + 29) = 0;
            v22[240] = 0;
            *((_QWORD *)v22 + 33) = 0;
            v22[272] = 0;
            *((_QWORD *)v22 + 37) = 0;
            v22[304] = 0;
            *((_QWORD *)v22 + 41) = 0;
            v22[336] = 0;
            *((_QWORD *)v22 + 45) = 0;
            v22[368] = 0;
            *((_QWORD *)v22 + 49) = 0;
            v22[400] = 0;
            *((_QWORD *)v22 + 52) = v22 + 432;
            *((_QWORD *)v22 + 53) = 0x800000000LL;
            *((_QWORD *)v22 + 66) = v22 + 544;
            *((_QWORD *)v22 + 67) = 0x600000000LL;
          }
          *v17 = v22;
        }
        v22[*v22 + 1] = 10;
        v23 = *v17;
        v24 = **v17;
        *v23 = v24 + 1;
        *(_QWORD *)&v23[8 * v24 + 16] = v8;
      }
      goto LABEL_34;
    }
LABEL_25:
    sub_A2E1A0(a1, a2, 110, 0);
    return 0;
  }
  if ( *(char *)(v8 + 28) < 0 )
    goto LABEL_25;
  if ( !a5 )
    goto LABEL_11;
  if ( (*(_BYTE *)(v8 + 84) & 3) != 0 )
    return 1;
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 32) + 248LL) || (*(_BYTE *)(v8 + 29) & 1) == 0 )
  {
LABEL_11:
    if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x10) != 0 )
      goto LABEL_12;
    goto LABEL_25;
  }
  v25 = sub_79A2B0(v8);
  v26 = *v25;
  v27 = *v25 + 8LL * *((unsigned int *)v25 + 2);
  if ( v26 < v27 )
  {
    while ( *(_WORD *)(*(_QWORD *)v26 + 32LL) != 239 )
    {
      v26 += 8LL;
      if ( v27 == v26 )
        goto LABEL_11;
    }
  }
  else
  {
    if ( v26 == v27 )
      goto LABEL_11;
    while ( *(_WORD *)(*(_QWORD *)v27 + 32LL) != 239 )
    {
      v27 += 8LL;
      if ( v26 == v27 )
        goto LABEL_11;
    }
  }
  if ( v26 == v27 )
    goto LABEL_11;
  return 1;
}

