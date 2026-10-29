__int64 __fastcall sub_18B16B0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // r15
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // ebp
  unsigned __int64 v13; // r9
  char v14; // al
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned __int64 v24; // rax
  _QWORD *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  int v37; // eax
  void **v38; // rax
  unsigned __int8 v39; // al
  unsigned int v40; // eax
  void **v41; // rbx
  void **v42; // rdi
  void **v43; // r12
  __int64 v44; // [rsp+0h] [rbp-1C8h]
  __int64 *v45; // [rsp+0h] [rbp-1C8h]
  unsigned __int8 v46; // [rsp+Fh] [rbp-1B9h]
  char v47; // [rsp+17h] [rbp-1B1h] BYREF
  unsigned __int64 v48; // [rsp+18h] [rbp-1B0h] BYREF
  unsigned __int64 v49; // [rsp+20h] [rbp-1A8h] BYREF
  void *v50[3]; // [rsp+28h] [rbp-1A0h] BYREF
  __int64 v51; // [rsp+40h] [rbp-188h]
  __int64 v52; // [rsp+48h] [rbp-180h] BYREF
  unsigned int v53; // [rsp+50h] [rbp-178h]
  void *v54[2]; // [rsp+C8h] [rbp-100h] BYREF
  int v55; // [rsp+D8h] [rbp-F0h]
  char v56; // [rsp+DCh] [rbp-ECh]
  _QWORD v57[5]; // [rsp+E0h] [rbp-E8h] BYREF
  void *ptr; // [rsp+108h] [rbp-C0h]
  __int64 v59; // [rsp+110h] [rbp-B8h]
  _DWORD v60[26]; // [rsp+118h] [rbp-B0h] BYREF
  __int64 v61; // [rsp+180h] [rbp-48h]
  __int16 v62; // [rsp+188h] [rbp-40h]
  char v63; // [rsp+18Ah] [rbp-3Eh]

  v4 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v44 = a3;
  if ( (unsigned int)*(unsigned __int8 *)(v6 + 16) - 43 > 1 )
  {
    v8 = a2;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 > 1 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    v6 = sub_F63050(v6, a2, a3, a4);
    if ( !v6 )
      goto LABEL_7;
  }
  v7 = v6;
  while ( 1 )
  {
    v8 = *(_QWORD *)(v7 + 32);
    if ( (*(_BYTE *)(v7 + 18) & 0x10) == 0 )
      break;
    while ( 1 )
    {
      v9 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
      v7 = *v9;
      v10 = (unsigned int)*(unsigned __int8 *)(*v9 + 16) - 43;
      if ( (unsigned int)v10 <= 1 )
        break;
      v11 = sub_F63050(*v9, a2, a3, v10);
      v8 = *(_QWORD *)(v11 + 32);
      if ( (*(_BYTE *)(v11 + 18) & 0x10) == 0 )
        goto LABEL_6;
    }
  }
LABEL_6:
  v4 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_7:
  v12 = 1;
  v13 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  if ( *(_QWORD *)(*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(v4[1] & 0xFFFFFFFFFFFFFFF0LL) )
    return v12;
  v14 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  LOBYTE(v12) = v14 == 33 || v14 == 42;
  if ( !(_BYTE)v12 )
    goto LABEL_37;
  if ( v6 && (!(v4[1] & 1 | v8 & 1) || v4[1] & 4 | v8 & 4) )
    return 0;
  v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v16 + 16) != 13 || ((*(_WORD *)(v16 + 18) >> 3) & 0x1FF) != 0x1E8 )
  {
    v45 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
    if ( !(unsigned __int8)sub_1BD41F0(a1, a3, v8, 0, &v47) && !(unsigned __int8)sub_1BE5710(a1, a3, v8, 0, 0) )
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v45 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42
        && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
      {
        v48 = 0;
        v20 = (_QWORD *)a1[31];
        v49 = 0;
        v21 = sub_F68450(*v45, a3, v17, v18, v19);
        v24 = sub_A725A0(v20, v21, (__int64 *)&v48, v22, v23);
        v25 = (_QWORD *)a1[31];
        v44 = v24;
        v29 = sub_F68450(*v4, v21, v26, v27, v28);
        v32 = sub_A725A0(v25, v29, (__int64 *)&v49, v30, v31);
        v33 = v48;
        v8 = v32;
        v34 = v49;
        if ( (unsigned int)v48 >> 9 == (unsigned int)v49 >> 9 )
          goto LABEL_23;
        if ( sub_F56A30((unsigned int)v49 >> 9, (unsigned int)v48 >> 9, a1[31]) )
        {
          v34 = v49;
LABEL_23:
          if ( ((v34 >> 4) & 3) != ((v33 >> 4) & 3) && (v34 & 0x30) != 0 && (v33 & 0x30) != 0
            || HIDWORD(v33) != HIDWORD(v34)
            || ((v34 >> 6) & 7) != ((v33 >> 6) & 7)
            || ((unsigned __int8)v33 & (unsigned __int8)~(_BYTE)v34 & 7) != 0
            || (v33 & 8) != 0 && (v34 & 8) == 0 )
          {
            return 0;
          }
          v4 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
          v13 = v44 & 0xFFFFFFFFFFFFFFF0LL;
          v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v35 + 16) != 13
            || ((*(_WORD *)(v35 + 18) >> 3) & 0x1FF) != 0x1B3
            || (v36 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
                v37 = *(unsigned __int8 *)(v36 + 16),
                (unsigned int)(v37 - 43) <= 1)
            || (unsigned __int8)(v37 - 25) <= 1u
            || (_BYTE)v37 == 13 && ((*(_WORD *)(v36 + 18) >> 3) & 0x1FF) == 0x1B3 )
          {
LABEL_37:
            v12 = 0;
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48
              && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48 )
            {
              v49 = 0;
              v50[2] = nullptr;
              v51 = 1;
              v50[1] = v50;
              v50[0] = v50;
              v38 = (void **)&v52;
              do
              {
                *v38 = nullptr;
                v38 += 2;
              }
              while ( v54 != v38 );
              v54[0] = v57;
              ptr = v60;
              v62 = 257;
              v54[1] = &byte_4;
              v55 = 0;
              v56 = 1;
              v57[4] = 0;
              v59 = 0x400000000LL;
              v60[24] = 0;
              v61 = 0;
              v63 = 0;
              v39 = sub_183BEE0((__int64)a1, 0, v44, v8, (__int64)&v49, v13);
              if ( !v39
                || (v46 = v39,
                    LOBYTE(v40) = sub_B65DB0(
                                    (__int64)&v49,
                                    v4[1] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v8 | (unsigned __int8)v4[1]) & 7),
                    v12 = v40,
                    (_BYTE)v40) )
              {
                v12 = 0;
              }
              else if ( !(unsigned int)sub_16643B0(a1, 0, v8, v44, (__int64)v50[0] + 16, 0, 1, 1) )
              {
                v12 = v46;
              }
              if ( ptr != v60 )
                free(ptr);
              if ( !v56 )
                free(v54[0]);
              if ( (v51 & 1) == 0 )
                operator delete(v52, 16LL * v53, 8);
              v41 = (void **)v50[0];
              if ( v50[0] != v50 )
              {
                while ( 1 )
                {
                  v42 = (void **)v41[2];
                  v43 = (void **)*v41;
                  if ( v42 == v41 + 4 )
                  {
                    operator delete(v41);
                    if ( v43 == v50 )
                      return v12;
                  }
                  else
                  {
                    free(v42);
                    operator delete(v41);
                    if ( v43 == v50 )
                      return v12;
                  }
                  v41 = v43;
                }
              }
            }
            return v12;
          }
          return v12;
        }
      }
      return 0;
    }
  }
  return v12;
}
