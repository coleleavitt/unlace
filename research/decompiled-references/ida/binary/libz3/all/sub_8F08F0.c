__int64 __fastcall sub_8F08F0(_QWORD *a1, __int64 a2)
{
  char **exception; // rbp
  __int64 v3; // rax
  unsigned int v5; // r9d
  __int64 v7; // rcx
  __int64 v8; // rbx
  unsigned int v9; // r8d
  unsigned int v10; // r14d
  __int64 v11; // rdx
  char v12; // al
  int v13; // r12d
  char v14; // dl
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // r12
  __int64 v18; // rdi
  char v19; // al
  _QWORD *v20; // rax
  unsigned int v21; // edx
  __int64 v22; // rcx
  int v23; // edx
  __int64 *v24; // rcx
  __int64 v25; // rax
  _QWORD *v26; // rax
  _DWORD *v28; // rdx
  __int64 v29; // rsi
  int v30; // r12d
  char *v31; // r10
  __int64 v32; // rax
  char *v33; // rdi
  __int64 v34; // r11
  unsigned int v35; // ecx
  size_t v36; // rsi
  unsigned int *v37; // rdx
  _QWORD *v38; // rax
  int v39; // [rsp+0h] [rbp-108h]
  __int64 v40; // [rsp+0h] [rbp-108h]
  unsigned __int8 v41; // [rsp+0h] [rbp-108h]
  unsigned __int8 v42; // [rsp+0h] [rbp-108h]
  unsigned int v43; // [rsp+0h] [rbp-108h]
  unsigned int v44; // [rsp+8h] [rbp-100h]
  __int64 v45; // [rsp+10h] [rbp-F8h]
  __int64 v46; // [rsp+18h] [rbp-F0h]
  char *v47; // [rsp+18h] [rbp-F0h]
  unsigned __int8 v48; // [rsp+20h] [rbp-E8h]
  __int64 v49; // [rsp+20h] [rbp-E8h]
  unsigned __int8 v50; // [rsp+2Fh] [rbp-D9h]
  __int64 v51[4]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v52[16]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v53; // [rsp+60h] [rbp-A8h]
  int v54; // [rsp+68h] [rbp-A0h]
  __int64 v55; // [rsp+70h] [rbp-98h]
  void *v56; // [rsp+80h] [rbp-88h]
  __int64 v57; // [rsp+88h] [rbp-80h]
  _BYTE v58[120]; // [rsp+90h] [rbp-78h] BYREF

  v3 = a1[1106];
  if ( *(_BYTE *)(v3 + *(unsigned int *)(a2 + 8)) == 1 )
    return 1;
  if ( *(_BYTE *)(v3 + *(unsigned int *)(a2 + 12)) == 1 )
    return 1;
  v5 = *(_DWORD *)a2;
  v56 = v58;
  v57 = 0x1000000000LL;
  if ( v5 <= 2 )
  {
LABEL_18:
    if ( *(_DWORD *)(a1[13] + 712LL) && (_DWORD)v57 )
    {
      v14 = *(_BYTE *)(a2 + 7);
      if ( (v14 & 0x40) == 0 )
        BUG();
      v15 = a2 + 8 + 4LL * (*(_DWORD *)(a2 + 4) & 0xFFFFFF);
      if ( (v14 & 3u) - 2 < 2 )
        v15 += 4;
      v16 = (_QWORD *)((v15 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_BYTE *)(a2 + 7) & 0x20) != 0 )
        ++v16;
      if ( (*(_BYTE *)(*v16 + 8LL) & 2) != 0 )
      {
        sub_B72610(v52, a1, *v16, (unsigned int)v57, v56);
        v17 = sub_180C100(a1 + 1050, 40);
        v18 = v53;
        v19 = v52[8] & 3 | *(_BYTE *)(v17 + 8) & 0xFC;
        *(_QWORD *)(v17 + 16) = v53;
        *(_BYTE *)(v17 + 8) = v19;
        *(_QWORD *)v17 = &off_1C57678;
        *(_DWORD *)(v17 + 24) = v54;
        *(_QWORD *)(v17 + 32) = v55;
        if ( (v19 & 2) == 0 && v18 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18) )
        {
          v20 = (_QWORD *)a1[1075];
          if ( v20 )
          {
            v21 = *((_DWORD *)v20 - 1);
            if ( v21 == *((_DWORD *)v20 - 2) )
            {
              v35 = (3 * v21 + 1) >> 1;
              v36 = 8 * v35 + 8;
              if ( 8 * v21 + 8 >= (unsigned int)v36 || v21 >= v35 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_8E4EB0(v51, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v51);
                sub_233E40((__int64)v51);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v43 = (3 * v21 + 1) >> 1;
              v37 = (unsigned int *)sub_186B300(v20 - 1, v36);
              v20 = v37 + 2;
              a1[1075] = v37 + 2;
              *v37 = v43;
              LODWORD(v37) = v37[1];
              v24 = &v20[(unsigned int)v37];
              v23 = (_DWORD)v37 + 1;
            }
            else
            {
              v22 = v21;
              v23 = v21 + 1;
              v24 = &v20[v22];
            }
          }
          else
          {
            v38 = (_QWORD *)sub_186B270(0x18u);
            *v38 = 2;
            v20 = v38 + 1;
            v23 = 1;
            a1[1075] = v20;
            v24 = v20;
          }
          *v24 = v17;
          *((_DWORD *)v20 - 1) = v23;
        }
        sub_B71F80(v52);
      }
      else
      {
        v40 = *v16;
        v17 = sub_186B270(0x28u);
        sub_B72710(v17, v40, (unsigned int)v57, v56);
      }
      v25 = a2 + 8 + 4LL * (*(_DWORD *)(a2 + 4) & 0xFFFFFF);
      if ( (*(_BYTE *)(a2 + 7) & 3u) - 2 < 2 )
        v25 += 4;
      v26 = (_QWORD *)((v25 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_BYTE *)(a2 + 7) & 0x20) != 0 )
        ++v26;
      *v26 = v17;
    }
    v9 = 0;
    goto LABEL_41;
  }
  v7 = v5;
  v8 = 2;
  v9 = 0;
  v10 = 2;
  while ( 1 )
  {
    v11 = *(unsigned int *)(a2 + 4 * v8 + 8);
    v12 = *(_BYTE *)(v3 + v11);
    v13 = *(_DWORD *)(a2 + 4 * v8 + 8);
    if ( !v12 )
      goto LABEL_13;
    if ( v12 != 1 )
      break;
    v9 = 1;
LABEL_13:
    if ( v10 != (_DWORD)v8 )
    {
      *(_DWORD *)(a2 + 4 * v8 + 8) = *(_DWORD *)(a2 + 4LL * v10 + 8);
      *(_DWORD *)(a2 + 4LL * v10 + 8) = v13;
    }
    ++v8;
    ++v10;
    if ( v8 == v7 )
      goto LABEL_16;
LABEL_9:
    v3 = a1[1106];
  }
  if ( v12 == -1 )
  {
    if ( *(_DWORD *)(a1[13] + 712LL) )
    {
      v29 = (unsigned int)v57;
      v30 = v13 ^ 1;
      if ( (unsigned int)v57 >= HIDWORD(v57) )
      {
        v48 = v9;
        v39 = 2 * HIDWORD(v57);
        v46 = v7;
        v45 = *(unsigned int *)(a2 + 4 * v8 + 8);
        v44 = v5;
        v31 = (char *)sub_186B270(4LL * (unsigned int)(2 * HIDWORD(v57)));
        v32 = 0;
        v33 = (char *)v56;
        v5 = v44;
        v11 = v45;
        v29 = (unsigned int)v57;
        v34 = 4LL * (unsigned int)v57;
        v7 = v46;
        v9 = v48;
        if ( (_DWORD)v57 )
        {
          v44 = v45;
          do
          {
            *(_DWORD *)&v31[v32] = *(_DWORD *)&v33[v32];
            v32 += 4;
          }
          while ( v32 != v34 );
          v11 = v45;
        }
        if ( v33 != v58 && v33 )
        {
          v50 = v48;
          v49 = v46;
          v47 = v31;
          v45 = v11;
          v44 = v5;
          sub_186B220(v33);
          v29 = (unsigned int)v57;
          v9 = v50;
          v7 = v49;
          v31 = v47;
          v11 = v45;
          v5 = v44;
        }
        v56 = v31;
        HIDWORD(v57) = v39;
      }
      else
      {
        v31 = (char *)v56;
      }
      *(_DWORD *)&v31[4 * v29] = v30;
      LODWORD(v57) = v57 + 1;
    }
    if ( *(_DWORD *)(a1[14] + 512LL) == 6 )
    {
      v28 = (_DWORD *)(a1[1108] + 4 * v11);
      if ( *v28 )
        --*v28;
    }
  }
  if ( ++v8 != v7 )
    goto LABEL_9;
LABEL_16:
  if ( v10 < v5 )
  {
    LOBYTE(v39) = v9;
    sub_AEB810((_DWORD)a1 + 7536, a2, v10, v7, v9, v5, v39, v44, v45);
    v9 = v42;
    *(_DWORD *)a2 = v10;
    if ( !v42 )
      goto LABEL_18;
  }
  else if ( !(_BYTE)v9 )
  {
    goto LABEL_18;
  }
LABEL_41:
  if ( v56 != v58 )
  {
    if ( v56 )
    {
      v41 = v9;
      sub_186B220(v56);
      return v41;
    }
  }
  return v9;
}

