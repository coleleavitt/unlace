/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A6CF0
// Address: 0x080A6CF0

//----- (080A6CF0) --------------------------------------------------------
unsigned int __usercall sub_80A6CF0@<eax>(int a1@<eax>, int *a2@<edx>, int a3@<ecx>, unsigned int a4, int a5)
{
  unsigned int v6; // eax
  bool v7; // zf
  __int64 v8; // rax
  signed __int64 v9; // rax
  int v10; // edi
  int v11; // edx
  char *v12; // eax
  int v13; // ecx
  __int64 *v14; // eax
  int v15; // eax
  char *v16; // edx
  int v17; // eax
  int v18; // ebx
  unsigned int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // ebx
  int v23; // ecx
  unsigned int v24; // eax
  _DWORD *v25; // edi
  char *v26; // edx
  int v27; // eax
  int v28; // ecx
  int v29; // edi
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  unsigned int result; // eax
  __int64 v35; // rax
  int (__cdecl *v36)(int); // eax
  int v37; // [esp+4h] [ebp-54h]
  unsigned int v38; // [esp+Ch] [ebp-4Ch]
  char v39; // [esp+13h] [ebp-45h]
  int v40; // [esp+14h] [ebp-44h]
  unsigned __int64 v41; // [esp+18h] [ebp-40h]
  int v42; // [esp+18h] [ebp-40h]
  int v43; // [esp+18h] [ebp-40h]
  __int64 src; // [esp+28h] [ebp-30h]
  char *srca; // [esp+28h] [ebp-30h]
  int srcb; // [esp+28h] [ebp-30h]
  _DWORD *srcc; // [esp+28h] [ebp-30h]
  void *ptr; // [esp+30h] [ebp-28h] BYREF
  int v50; // [esp+34h] [ebp-24h]
  unsigned int v51; // [esp+38h] [ebp-20h]
  unsigned int v52; // [esp+3Ch] [ebp-1Ch]

  v52 = __readgsdword(0x14u);
  v6 = *(_DWORD *)(a1 + 112);
  v7 = *(_DWORD *)(a1 + 116) == v6;
  *(_DWORD *)(a1 + 8) = 0;
  ptr = nullptr;
  v50 = 0;
  v51 = 0;
  v39 = v6 <= 0xFFF && v7;
  src = a3;
  sub_80CD730((int)a2, a3, 0);
  if ( (HIDWORD(src) & (unsigned int)src) == 0xFFFFFFFF )
  {
    LODWORD(v35) = sub_80CD730((int)a2, 0, 1);
    src = v35;
  }
  LODWORD(v8) = sub_80CD6E0(a2);
  v41 = v8 - src;
  if ( ((((unsigned __int64)(v8 - src) >> 32) | HIDWORD(src)) & 0x80000000) != 0LL )
  {
    v42 = 0;
LABEL_9:
    if ( sub_80697F0() != 1 )
    {
      if ( v52 == __readgsdword(0x14u) )
        sub_8069CE0(0);
LABEL_81:
      sub_80D7AB0();
    }
    if ( v42 > 0 )
      goto LABEL_11;
LABEL_18:
    if ( v39 )
      goto LABEL_19;
    goto LABEL_61;
  }
  if ( !a4 )
  {
    v42 = 0;
    if ( v39 )
    {
LABEL_19:
      v14 = *(__int64 **)(*(_DWORD *)a5 + 4);
      if ( v14 != (__int64 *)((char *)&qword_811CFF4 - 489428) && ((int (__cdecl *)(int))v14)(a5) )
        goto LABEL_57;
      v15 = *(_DWORD *)(a1 + 116);
      goto LABEL_21;
    }
LABEL_61:
    if ( *(_DWORD *)(a1 + 56) == 23126 )
    {
      v36 = *(int (__cdecl **)(int))(*(_DWORD *)a5 + 4);
      if ( (char *)v36 != (char *)((char *)&qword_811CFF4 - 489428) )
      {
        if ( v36(a5) )
          goto LABEL_57;
        v15 = 512;
LABEL_21:
        if ( (unsigned __int16)(*(_WORD *)(a1 + 148) - 10) <= 3u || *(_DWORD *)(a1 + 56) == 23126 )
          goto LABEL_22;
LABEL_64:
        if ( v42 > 0 )
        {
LABEL_24:
          v38 = 0;
          v37 = -v15;
          srcb = 0;
          while ( 1 )
          {
            v25 = (char *)ptr + 40 * srcb;
            v26 = *(char **)(a1 + 4);
            v40 = v25[5] & v37;
            v27 = *(_DWORD *)(a1 + 8);
            v28 = v27 + 1;
            if ( *(_DWORD *)(a1 + 12) < (unsigned int)(v27 + 1) )
            {
              v26 = (char *)sub_80CF920(a1 + 4, v26, v27 + 1, 0x10u);
              *(_DWORD *)(a1 + 4) = v26;
              v27 = *(_DWORD *)(a1 + 8);
              v28 = v27 + 1;
            }
            *(_DWORD *)(a1 + 8) = v28;
            v16 = &v26[16 * v27];
            *(_DWORD *)v16 = v25[3];
            v17 = *(_DWORD *)(a1 + 112);
            if ( !v17 )
              v17 = 1;
            v18 = v25[2];
            if ( !v18 )
              v18 = v25[4];
            v19 = (v17 + v18 - 1) & -v17;
            if ( v19 > v25[4] )
              v19 = v25[4];
            *((_DWORD *)v16 + 3) = v19;
            v20 = v25[3] + v19;
            if ( (unsigned __int16)(*(_WORD *)(a1 + 148) - 10) > 3u )
            {
              if ( *(_DWORD *)(a1 + 112) == 4096 || (v21 = *(_DWORD *)(a1 + 116)) == 0 )
              {
                v23 = -512;
                v22 = 511;
              }
              else
              {
                v22 = v21 - 1;
                v23 = -v21;
              }
              v20 = v23 & (v20 + v22);
            }
            *((_DWORD *)v16 + 1) = v20;
            *((_DWORD *)v16 + 2) = v40;
            if ( *(_DWORD *)(a1 + 56) == 23126 )
              *((_DWORD *)v16 + 2) = v40 - *(unsigned __int16 *)(a1 + 22) + 40;
            if ( (**(int (__cdecl ***)(int, _DWORD *, int))a5)(a5, v25, v40) )
              goto LABEL_57;
            v24 = v25[3] + v25[2];
            if ( v38 >= v24 )
              v24 = v38;
            ++srcb;
            v38 = v24;
            if ( srcb == v42 )
              goto LABEL_45;
          }
        }
LABEL_47:
        if ( !v42 || v39 )
        {
          v43 = sub_80CD6E0(a2);
          v29 = *(_DWORD *)(a1 + 136);
          if ( (unsigned __int16)(*(_WORD *)(a1 + 148) - 10) > 3u )
          {
            if ( *(_DWORD *)(a1 + 112) == 4096 || (v30 = *(_DWORD *)(a1 + 116)) == 0 )
            {
              v32 = -512;
              v31 = 511;
            }
            else
            {
              v31 = v30 - 1;
              v32 = -v30;
            }
            v29 = v32 & (v29 + v31);
          }
          srcc = *(_DWORD **)(a1 + 4);
          v33 = *(_DWORD *)(a1 + 8);
          if ( *(_DWORD *)(a1 + 12) < (unsigned int)(v33 + 1) )
          {
            srcc = sub_80CF920(a1 + 4, srcc, v33 + 1, 0x10u);
            *(_DWORD *)(a1 + 4) = srcc;
            memmove(srcc + 4, srcc, 16 * *(_DWORD *)(a1 + 8));
          }
          else
          {
            memmove(srcc + 4, srcc, 16 * v33);
          }
          srcc[1] = v29;
          *srcc = 0;
          srcc[2] = 0;
          srcc[3] = v43;
          ++*(_DWORD *)(a1 + 8);
        }
        goto LABEL_57;
      }
    }
    else if ( (unsigned __int16)(*(_WORD *)(a1 + 148) - 10) > 3u )
    {
      v15 = 512;
      goto LABEL_64;
    }
LABEL_22:
    if ( v42 > 0 )
    {
      v15 = 1;
      goto LABEL_24;
    }
    v38 = 0;
LABEL_45:
    if ( *(_DWORD *)(a1 + 56) == 23126 )
      *(_DWORD *)(a1 + 136) = v38;
    goto LABEL_47;
  }
  if ( a4 > 0x6666666 || v8 - src < 40 * a4 )
  {
    v9 = 3435973837u
       * ((unsigned int)v41
        - (((SHIDWORD(v41) >> 31) & 0xFFFFFFFC)
         + ((SHIDWORD(v41) >> 31) & 3)
         + (v41 & 0xFFFFFFF)
         + ((v41 >> 28) & 0xFFFFFFF)
         + HIBYTE(HIDWORD(v41))
         - ((((SHIDWORD(v41) >> 31) & 3) + (v41 & 0xFFFFFFF) + ((v41 >> 28) & 0xFFFFFFF) + HIBYTE(HIDWORD(v41))) / 5
          + (((3435973837u
             * (((SHIDWORD(v41) >> 31) & 3) + (v41 & 0xFFFFFFF) + ((v41 >> 28) & 0xFFFFFFF) + HIBYTE(HIDWORD(v41)))) >> 32)
           & 0xFFFFFFFC))));
    HIDWORD(v9) += -858993460
                 * (v41
                  - (((SHIDWORD(v41) >> 31) & 0xFFFFFFFC)
                   + ((SHIDWORD(v41) >> 31) & 3)
                   + (v41 & 0xFFFFFFF)
                   + ((v41 >> 28) & 0xFFFFFFF)
                   + HIBYTE(HIDWORD(v41))
                   - ((((SHIDWORD(v41) >> 31) & 3) + (v41 & 0xFFFFFFF)
                                                   + ((v41 >> 28) & 0xFFFFFFF)
                                                   + HIBYTE(HIDWORD(v41)))
                    / 5
                    + (((3435973837u
                       * (((SHIDWORD(v41) >> 31) & 3)
                        + (v41 & 0xFFFFFFF)
                        + ((v41 >> 28) & 0xFFFFFFF)
                        + HIBYTE(HIDWORD(v41)))) >> 32)
                     & 0xFFFFFFFC))))
                 - 858993459
                 * ((v41
                   - (int)(((SHIDWORD(v41) >> 31) & 0xFFFFFFFC)
                         + ((SHIDWORD(v41) >> 31) & 3)
                         + (v41 & 0xFFFFFFF)
                         + ((v41 >> 28) & 0xFFFFFFF)
                         + HIBYTE(HIDWORD(v41))
                         - ((((SHIDWORD(v41) >> 31) & 3)
                           + (v41 & 0xFFFFFFF)
                           + ((v41 >> 28) & 0xFFFFFFF)
                           + HIBYTE(HIDWORD(v41)))
                          / 5
                          + (((3435973837u
                             * (((SHIDWORD(v41) >> 31) & 3)
                              + (v41 & 0xFFFFFFF)
                              + ((v41 >> 28) & 0xFFFFFFF)
                              + HIBYTE(HIDWORD(v41)))) >> 32)
                           & 0xFFFFFFFC)))) >> 32);
    v42 = v9 / 8;
    goto LABEL_9;
  }
  v42 = a4;
LABEL_11:
  v10 = 0;
  while ( 1 )
  {
    v11 = v50;
    v12 = (char *)ptr;
    v13 = v50 + 1;
    if ( v51 < v50 + 1 )
    {
      v12 = (char *)sub_80CF920((int)&ptr, ptr, v50 + 1, 0x28u);
      v11 = v50;
      ptr = v12;
      v13 = v50 + 1;
    }
    v50 = v13;
    srca = &v12[40 * v11];
    if ( sub_80CD690((int)a2, srca, 40) != 40 )
      break;
    if ( *((_DWORD *)srca + 3) == *((_DWORD *)srca + 5) )
    {
      v39 &= *((_DWORD *)srca + 4) >= *((_DWORD *)srca + 2);
      if ( ++v10 >= v42 )
        goto LABEL_18;
    }
    else
    {
      ++v10;
      v39 = 0;
      if ( v10 >= v42 )
        goto LABEL_18;
    }
  }
LABEL_57:
  if ( ptr )
  {
    v50 = 0;
    sub_80CF780(ptr);
  }
  result = v52 - __readgsdword(0x14u);
  if ( result )
    goto LABEL_81;
  return result;
}
// 80A7231: variable 'v35' is possibly undefined
// 80A6D9F: variable 'v8' is possibly undefined
// 811CFF4: using guessed type __int64 qword_811CFF4;
