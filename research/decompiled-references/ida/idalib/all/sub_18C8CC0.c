__int64 __fastcall sub_18C8CC0(_QWORD *a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // r13
  unsigned __int8 v12; // dl
  int v13; // eax
  __int64 v14; // r14
  size_t v15; // rax
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // r12d
  _QWORD *v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned int *v32; // rax
  __int64 v33; // rsi
  __int64 *v34; // rsi
  unsigned int v35; // ecx
  unsigned __int64 v37; // rax
  int v38; // edi
  int v39; // esi
  unsigned __int64 v40; // rax
  char v41; // al
  _QWORD *v42; // [rsp+8h] [rbp-1A0h]
  _QWORD *v43; // [rsp+8h] [rbp-1A0h]
  _QWORD *v44; // [rsp+8h] [rbp-1A0h]
  __int64 v45; // [rsp+10h] [rbp-198h] BYREF
  void *ptr; // [rsp+18h] [rbp-190h]
  __int64 v47; // [rsp+20h] [rbp-188h]
  _BYTE v48[64]; // [rsp+28h] [rbp-180h] BYREF
  void *v49[2]; // [rsp+68h] [rbp-140h]
  __int64 v50; // [rsp+78h] [rbp-130h]
  _QWORD *v51; // [rsp+80h] [rbp-128h]
  __int64 v52; // [rsp+88h] [rbp-120h]
  unsigned int v53; // [rsp+90h] [rbp-118h]
  __int64 v54; // [rsp+98h] [rbp-110h] BYREF
  __int128 v55; // [rsp+A0h] [rbp-108h]
  __int64 v56; // [rsp+B0h] [rbp-F8h]
  __int64 v57; // [rsp+C0h] [rbp-E8h] BYREF
  _QWORD *v58; // [rsp+C8h] [rbp-E0h]
  __int64 v59; // [rsp+D0h] [rbp-D8h]
  _OWORD v60[5]; // [rsp+D8h] [rbp-D0h] BYREF
  __int64 v61; // [rsp+128h] [rbp-80h]
  _QWORD *v62; // [rsp+130h] [rbp-78h]
  __int64 v63; // [rsp+138h] [rbp-70h]
  unsigned int v64; // [rsp+140h] [rbp-68h]
  __int64 v65; // [rsp+148h] [rbp-60h] BYREF
  __int128 v66; // [rsp+150h] [rbp-58h]
  __int64 v67; // [rsp+160h] [rbp-48h]

  v4 = sub_183D350((__int64)a1);
  if ( !v4 )
  {
LABEL_54:
    v34 = a1 + 1;
    v35 = 5031;
    goto LABEL_32;
  }
  v5 = v4;
  v6 = sub_6F3470(a1[30] + 552LL, "source_location", 0xFu);
  ptr = v48;
  v47 = 0x800000000LL;
  *(_OWORD *)v49 = 0;
  v52 = v6;
  v45 = 0;
  v50 = 0;
  v51 = a1;
  v53 = a2;
  sub_B85890(&v54, v6);
  v55 = 0;
  v56 = 0x101010000LL;
  sub_1A395A0(&v45);
  if ( (unsigned __int8)sub_1A48440(a1, &v45, v5 + 48, 0) && (_DWORD)v45 == 2 )
  {
    v11 = *(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF8LL;
    v12 = *(_BYTE *)(v11 + 28) & 0x7F;
    v13 = v12;
    v8 = (unsigned int)v12 - 53;
    if ( (unsigned int)v8 <= 1 || (v7 = (v12 + 52) & 0x7F, (unsigned __int8)v7 <= 1u) )
    {
      v11 = sub_B72ED0(*(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF8LL);
      v13 = *(_BYTE *)(v11 + 28) & 0x7F;
    }
    if ( (unsigned int)(v13 - 58) > 3 )
    {
      v17 = 0;
      if ( !BYTE3(v56) )
        goto LABEL_17;
      goto LABEL_36;
    }
    v14 = a1[30] + 552LL;
    v15 = j__strlen("__impl");
    v16 = sub_6F3470(v14, "__impl", v15);
    v58 = v60;
    v59 = 0x800000000LL;
    v60[4] = 0;
    v63 = v16;
    v57 = 0;
    v61 = 0;
    v62 = a1;
    v64 = a2;
    sub_B85890(&v65, v16);
    v67 = 0x101010000LL;
    v66 = 0;
    sub_1A395A0(&v57);
    if ( ((*(_QWORD *)(v11 + 72) & 0x10000LL) != 0 || (*(_QWORD *)(v11 + 72) & 0x20000LL) != 0)
      && (unsigned __int8)sub_1A48440(a1, &v57, v11 + 64, 0)
      && (_DWORD)v57 == 2
      && (v17 = sub_16C47B0(*v58 & 0xFFFFFFFFFFFFFFF8LL), (*(_BYTE *)(v17 + 28) & 0x7Fu) - 59 <= 2) )
    {
      sub_169D230((__int64)&v57);
    }
    else
    {
      v17 = 0;
      sub_169D230((__int64)&v57);
    }
    if ( !BYTE3(v56) )
    {
LABEL_15:
      if ( !BYTE4(v56) || (_DWORD)v45 != 5 )
        goto LABEL_17;
LABEL_64:
      sub_1A445B0(v51, &v45);
      goto LABEL_17;
    }
  }
  else
  {
    v17 = 0;
    if ( !BYTE3(v56) )
      goto LABEL_15;
  }
  if ( (_DWORD)v45 == 5 )
  {
    if ( !BYTE4(v56) )
      goto LABEL_17;
    goto LABEL_64;
  }
LABEL_36:
  if ( v49[1] && (*(_BYTE *)(v51[29] + 46LL) & 0x20) != 0 )
  {
    sub_1663B80(v51, (__int64)&v45);
    goto LABEL_15;
  }
LABEL_17:
  if ( v49[0] )
    sub_1A39780(v49[0]);
  if ( ptr != v48 )
    free(ptr);
  if ( !v17 || (*(_BYTE *)(v17 + 74) & 1) == 0 )
    goto LABEL_54;
  if ( *(_BYTE *)(v17 + 73) >> 5 != 2 )
  {
    sub_7052B0((__int64 *)(*(_QWORD *)(v17 + 104) + 96LL), *(_QWORD *)(v17 + 104), v7, v8, v9, v10);
    if ( (*(_BYTE *)(*(_QWORD *)(v17 + 128) + 1LL) & 0x10) != 0 )
    {
      v22 = *(_QWORD *)(v17 + 104);
      sub_7052B0((__int64 *)(v22 + 96), v22, v18, v19, v20, v21);
      v27 = *(_DWORD *)(*(_QWORD *)(v17 + 128) + 16LL);
      if ( !v27 )
      {
        v28 = (_QWORD *)sub_B7E900(v17, v22, v23, v24, v25, v26);
        if ( v28 )
        {
          while ( 1 )
          {
            v30 = v28[5];
            if ( (v30 & 7) != 0 )
              goto LABEL_31;
            v31 = v30 & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v31 )
              goto LABEL_31;
            v32 = *(unsigned int **)(v31 + 16);
            v33 = *v32;
            if ( v33 == 12 )
              break;
            if ( v33 == 16 )
            {
              v42 = v28;
              if ( *((_QWORD *)v32 + 2) ^ 0x74636E75665F4D5FLL | *((_QWORD *)v32 + 3) ^ 0x656D616E5F6E6F69LL )
                goto LABEL_31;
              goto LABEL_41;
            }
            if ( v33 == 7 )
            {
              if ( v32[4] == 1818185055 && *((_WORD *)v32 + 10) == 28265 && *((_BYTE *)v32 + 22) == 101 )
              {
                v43 = v28;
                v41 = sub_9EC890(*(_QWORD *)(v28[6] & 0xFFFFFFFFFFFFFFF0LL), 7, 0x74636E75665F4D5FLL, (__int64)v28, v29);
                v28 = v43;
                if ( !v41 )
                  goto LABEL_53;
LABEL_42:
                v38 = v27 + 1;
                v39 = v27 + 1;
                goto LABEL_44;
              }
              goto LABEL_31;
            }
            if ( v33 != 9 || *((_QWORD *)v32 + 2) != 0x6D756C6F635F4D5FLL || *((_BYTE *)v32 + 24) != 110 )
              goto LABEL_31;
            v44 = v28;
            if ( !sub_9EC890(
                    *(_QWORD *)(v28[6] & 0xFFFFFFFFFFFFFFF0LL),
                    0x6D756C6F635F4D5FLL,
                    0x74636E75665F4D5FLL,
                    (__int64)v28,
                    v29) )
              goto LABEL_53;
            v38 = v27 + 1;
            v28 = v44;
            v39 = v27 + 1;
            do
            {
LABEL_44:
              v40 = v28[1] & 0xFFFFFFFFFFFFFFF8LL;
              v28 = (_QWORD *)v40;
              if ( !v40 )
                goto LABEL_45;
            }
            while ( (*(_BYTE *)(v40 + 28) & 0x7Fu) - 49 > 2 );
            v27 = v38;
          }
          if ( *((_QWORD *)v32 + 2) != 0x5F656C69665F4D5FLL || v32[6] != 1701667182 )
            goto LABEL_31;
          v42 = v28;
LABEL_41:
          v37 = sub_A70010(a1[31], *(_QWORD *)(a1[31] + 18648LL) | 1LL);
          v28 = v42;
          if ( v37 == v42[6] )
            goto LABEL_42;
LABEL_53:
          v39 = v27;
LABEL_45:
          if ( v39 == 4 )
            return v17;
        }
      }
    }
  }
LABEL_31:
  v34 = a1 + 1;
  v35 = 5030;
LABEL_32:
  v17 = 0;
  sub_168B9F0((__int64)&v57, v34, a2, v35, 0);
  sub_15F7200(&v57);
  return v17;
}
