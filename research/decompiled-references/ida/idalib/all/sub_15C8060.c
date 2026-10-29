__int64 __fastcall sub_15C8060(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // r14
  unsigned int v17; // eax
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // r14
  __int64 v20; // rax
  unsigned __int64 *v21; // rax
  __int64 *v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 *v27; // rax
  __int64 v28; // rcx
  unsigned __int64 *v29; // rax
  __int64 *v30; // rdx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  char v34; // cl
  unsigned __int64 v35; // r15
  unsigned __int8 v36; // dl
  __int64 v37; // r15
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rbp
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned __int64 v43; // rbp
  _QWORD *v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rax
  unsigned __int64 v47; // rdi
  int v48; // eax
  unsigned __int64 v49; // rax
  __int64 *v50; // rax
  unsigned __int8 v51; // al
  unsigned __int64 v52; // rdi
  __int64 *v53; // rax
  __int64 v54; // rcx
  char v55; // al
  unsigned __int64 v56; // rdi
  unsigned __int8 v57; // cl

  result = *(_BYTE *)(a2 + 28) & 0x7F;
  v9 = (unsigned int)(unsigned __int8)result - 40;
  if ( (unsigned int)v9 <= 6 )
  {
    v10 = (*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) << 28 >> 31) & 0x18B2;
    if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
      goto LABEL_3;
    v22 = sub_B8C3D0(a2, a2, (unsigned __int8)result, v9, a5, a6);
    v25 = *v22;
    v26 = *v22 + 8LL * *((unsigned int *)v22 + 2);
    if ( *v22 < v26 )
    {
      v50 = (__int64 *)*v22;
      while ( 1 )
      {
        v25 = *v50;
        if ( *(_WORD *)(*v50 + 36) == 148 )
          break;
        if ( (__int64 *)v26 == ++v50 )
          goto LABEL_30;
      }
      if ( (__int64 *)v26 == v50 )
      {
LABEL_30:
        if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
        {
          v29 = sub_B8C3D0(a2, a2, v25, v26, v23, v24);
          v30 = (__int64 *)*v29;
          v31 = *v29 + 8LL * *((unsigned int *)v29 + 2);
          if ( *v29 >= v31 )
          {
            if ( v30 != (__int64 *)v31 )
            {
              if ( *(_WORD *)(*(_QWORD *)v31 + 36LL) == 174 )
              {
LABEL_100:
                v16 = 5947;
                v10 = 6301;
                goto LABEL_18;
              }
              v53 = (__int64 *)(v31 + 8);
              while ( v30 != v53 )
              {
                v54 = *v53++;
                if ( *(_WORD *)(v54 + 36) == 174 )
                  goto LABEL_100;
              }
            }
          }
          else
          {
            v32 = *v29;
            while ( *(_WORD *)(*(_QWORD *)v32 + 36LL) != 174 )
            {
              v32 += 8LL;
              if ( v31 == v32 )
                goto LABEL_3;
            }
            if ( v31 != v32 )
              goto LABEL_100;
          }
        }
LABEL_3:
        v11 = *(unsigned __int8 *)(a2 + 96);
        v12 = *(_BYTE *)(a2 + 96) & 7;
        if ( !(_BYTE)v12 )
        {
          v13 = *(_QWORD *)&byte_8[*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL];
          if ( (v13 & 8) != 0 )
          {
            v12 = v13 & 0xFFFFFFFFFFFFFFF0LL;
            if ( (*(_DWORD *)((char *)&qword_18 + (v13 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v13 & 7)) >> 9 == 3 )
              goto LABEL_10;
          }
          if ( ((*(_BYTE *)(a2 + 28) + 85) & 0x7D) != 0 )
          {
            v14 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
              v14 = *(_QWORD *)(v14 + 8);
            v15 = *(_BYTE *)(sub_B8EAA0(v14) + 8) & 0x7F;
            if ( !v15 || v15 == 24 )
              goto LABEL_10;
            if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B )
            {
              v12 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
              if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
                v12 = *(_QWORD *)v12;
              if ( ((*(_BYTE *)(v12 + 8) + 70) & 0x7Fu) <= 3 )
                goto LABEL_10;
            }
            LOBYTE(v11) = *(_BYTE *)(a2 + 96);
          }
          v11 &= 0x18u;
          if ( (_DWORD)v11 )
          {
LABEL_10:
            v16 = 0;
            goto LABEL_38;
          }
LABEL_13:
          v17 = sub_F65A30(*(_QWORD *)(a2 + 48), a2, v12, v11);
          if ( v17 == 2 )
          {
            v16 = 5955;
            v10 = 6312;
            goto LABEL_18;
          }
          if ( v17 <= 2 )
          {
            v16 = 5951;
            if ( v17 != 1 )
              v16 = 0;
LABEL_38:
            v33 = sub_B73640(a2);
            v34 = *(_BYTE *)(a2 + 96);
            v35 = v33;
            v36 = v34 & 7;
            if ( (v34 & 7) == 0 )
            {
              v46 = *(_QWORD *)&byte_8[*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL];
              if ( (v46 & 8) != 0
                && (*(_DWORD *)((char *)&qword_18 + (v46 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v46 & 7)) >> 9 == 3 )
              {
                goto LABEL_71;
              }
              if ( ((*(_BYTE *)(a2 + 28) + 85) & 0x7D) != 0 )
              {
                v47 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
                if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
                  v47 = *(_QWORD *)(v47 + 8);
                v48 = *(_BYTE *)(sub_B8EAA0(v47) + 8) & 0x7F;
                if ( v48 == 24 || !v48 )
                  goto LABEL_71;
                if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B )
                {
                  v49 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
                    v49 = *(_QWORD *)v49;
                  if ( ((*(_BYTE *)(v49 + 8) + 70) & 0x7Fu) <= 3 )
                    goto LABEL_71;
                }
                v34 = *(_BYTE *)(a2 + 96);
              }
              if ( (v34 & 0x18) == 0 )
                goto LABEL_41;
LABEL_71:
              if ( !((unsigned int)v10 | (unsigned int)v16) )
              {
LABEL_21:
                result = (*(_BYTE *)(a2 + 28) & 0x7Fu) - 40;
                if ( (unsigned int)result <= 6 )
                {
                  result = sub_B73640(a2);
                  if ( result )
                    return sub_15C8760(a1, result, a3);
                }
                return result;
              }
LABEL_18:
              v18 = (unsigned int)*a3 | (unsigned __int64)(v10 << 32);
              v19 = ((unsigned __int64)*(unsigned int *)(a2 + 24) << 32) | v16;
              v20 = *(unsigned int *)(a1 + 24);
              if ( v20 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 28) )
              {
                sub_2237220(a1 + 16, a1 + 32, v20 + 1, 16);
                v20 = *(unsigned int *)(a1 + 24);
              }
              v21 = (unsigned __int64 *)(*(_QWORD *)(a1 + 16) + 16 * v20);
              *v21 = v18;
              v21[1] = v19;
              LODWORD(v21) = *(_DWORD *)(a1 + 24);
              *(_DWORD *)(a1 + 24) = (_DWORD)v21 + 1;
              *a3 = (_DWORD)v21;
              goto LABEL_21;
            }
            if ( v36 != 5 )
            {
LABEL_40:
              if ( v36 > 3u )
              {
LABEL_41:
                if ( v35 && (*(_DWORD *)v35 & 0x40000) == 0 )
                {
                  if ( (*(_WORD *)v35 & 0x1FFu) - 113 <= 1
                    && (v37 = *(_QWORD *)(v35 + 16), *(char *)(v37 + 82) < 0)
                    && sub_B98FC0(v37, a2)
                    && ((*(_BYTE *)(a2 + 96) >> 5) & 3) == 1 )
                  {
                    v10 = 6321;
                    if ( !(_DWORD)v16 )
                    {
                      v40 = *(_QWORD *)(sub_B8C1B0(v37 + 72) + 16);
                      if ( (v40 & 4) != 0 )
                        v43 = *(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF8LL);
                      else
                        v43 = v40 & 0xFFFFFFFFFFFFFFF8LL;
                      if ( !v43 )
                        BUG();
                      sub_7052B0((__int64 *)(*(_QWORD *)(v43 + 40) + 96LL), *(_QWORD *)(v43 + 40), v38, v39, v41, v42);
                      if ( (*(_BYTE *)(*(_QWORD *)(v43 + 64) + 1LL) & 1) != 0 )
                        goto LABEL_21;
                      v10 = 6320;
                    }
                  }
                  else
                  {
                    v10 = 6319;
                  }
                  goto LABEL_18;
                }
                goto LABEL_71;
              }
              goto LABEL_71;
            }
            v55 = *(_BYTE *)(a2 + 28) & 0x7F;
            if ( v55 != 46 && v55 != 40 )
              goto LABEL_122;
            v56 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
              v56 = *(_QWORD *)(v56 + 8);
            if ( !v56 )
            {
LABEL_122:
              if ( v55 == 43 )
                goto LABEL_41;
              goto LABEL_71;
            }
            v57 = *(_BYTE *)(sub_B8EAA0(v56) + 8) & 0x7F;
            if ( v57 > 0x12u )
            {
              if ( ((v57 + 94) & 0x7Fu) > 5 )
              {
LABEL_118:
                if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B )
                  goto LABEL_71;
              }
            }
            else if ( ((1LL << v57) & 0x40182) == 0 )
            {
              goto LABEL_118;
            }
            v36 = *(_BYTE *)(a2 + 96) & 7;
            goto LABEL_40;
          }
          if ( v17 == 3 )
          {
            v16 = 5958;
            v10 = 6315;
            goto LABEL_18;
          }
          if ( v17 == 4 )
          {
            v16 = 5951;
            v10 = 6307;
            goto LABEL_18;
          }
          goto LABEL_10;
        }
        if ( (unsigned __int8)v12 != 5 )
        {
LABEL_12:
          if ( (unsigned __int8)v12 <= 3u )
            goto LABEL_10;
          goto LABEL_13;
        }
        v51 = *(_BYTE *)(a2 + 28) & 0x7F;
        v12 = v51;
        if ( v51 != 40 && v51 != 46 )
          goto LABEL_120;
        v52 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        v12 = *(_QWORD *)(a2 + 16) & 4LL;
        if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
          v52 = *(_QWORD *)(v52 + 8);
        if ( !v52 )
        {
LABEL_120:
          if ( v51 != 43 )
            goto LABEL_10;
          goto LABEL_13;
        }
        v11 = *(_BYTE *)(sub_B8EAA0(v52) + 8) & 0x7F;
        if ( (unsigned __int8)v11 > 0x12u )
        {
          v11 = ((_BYTE)v11 + 94) & 0x7F;
          if ( (unsigned __int8)v11 > 5u )
          {
LABEL_88:
            if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B )
              goto LABEL_10;
          }
        }
        else if ( ((1LL << v11) & 0x40182) == 0 )
        {
          goto LABEL_88;
        }
        v12 = *(_BYTE *)(a2 + 96) & 7;
        goto LABEL_12;
      }
    }
    else
    {
      if ( v25 == v26 )
        goto LABEL_30;
      if ( *(_WORD *)(*(_QWORD *)v26 + 36LL) != 148 )
      {
        v27 = (__int64 *)(v26 + 8);
        do
        {
          v26 = (unsigned __int64)v27;
          if ( (__int64 *)v25 == v27 )
            goto LABEL_30;
          v28 = *v27++;
        }
        while ( *(_WORD *)(v28 + 36) != 148 );
      }
    }
    v16 = 5942;
    v10 = 6300;
    goto LABEL_18;
  }
  if ( (unsigned int)(unsigned __int8)result - 64 <= 2 )
  {
    v44 = (_QWORD *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
    v45 = (*(_QWORD *)(a2 + 80) & 4) != 0 ? v44[1] : *v44;
    if ( (*(_BYTE *)(*(_QWORD *)(v45 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 8) != 0 )
    {
      v16 = 0;
      v10 = (unsigned int)((_BYTE)result == 64) + 6323;
      goto LABEL_18;
    }
  }
  return result;
}
