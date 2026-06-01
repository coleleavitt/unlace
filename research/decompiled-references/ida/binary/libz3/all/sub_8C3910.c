void __fastcall sub_8C3910(__int64 a1, unsigned int a2)
{
  _QWORD *v4; // r13
  _QWORD *v5; // rax
  __int64 v6; // rax
  unsigned int v7; // ebp
  size_t v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdi
  _DWORD *v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rsi
  char v16; // r8
  __int64 v17; // rcx
  char v18; // r8
  __int64 v19; // rcx
  char v20; // r8
  __int64 v21; // rcx
  char v22; // r8
  char v23; // r8
  __int64 v24; // rcx
  char v25; // r8
  __int64 v26; // rcx
  char v27; // r8
  __int64 v28; // rcx
  char v29; // r8
  char v30; // r8
  __int64 v31; // rcx
  char v32; // r8
  __int64 v33; // rcx
  char v34; // r8
  __int64 v35; // rcx
  char v36; // r8
  __int64 v37; // rcx
  char v38; // r8
  __int64 v39; // rcx
  char v40; // r8
  __int64 v41; // rcx
  __int64 v42; // rdi
  unsigned int v43; // esi
  __int64 v44; // rax
  _QWORD *v45; // rax
  char **exception; // rbx
  __int64 v47; // rdx
  __int64 v48[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = *(_QWORD **)(a1 + 1592);
  if ( v4 )
    goto LABEL_5;
  v42 = a1 + 1472;
  v43 = 0;
  do
  {
    sub_48E580(v42, v43);
    v4 = *(_QWORD **)(a1 + 1592);
    if ( v4 )
    {
      v6 = *((unsigned int *)v4 - 1);
      if ( (_DWORD)v6 == *((_DWORD *)v4 - 2) )
      {
        v7 = (unsigned int)(3 * v6 + 1) >> 1;
        v8 = 232 * v7 + 8;
        if ( 232 * (int)v6 + 8 >= (unsigned int)v8 || (unsigned int)v6 >= v7 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_12D192(v48, "Overflow encountered when expanding vector", v47);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v48);
          sub_233E40((__int64)v48);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v9 = sub_186B270(v8);
        v10 = *(_QWORD *)(a1 + 1592);
        v11 = (_DWORD *)v9;
        v4 = (_QWORD *)(v9 + 8);
        if ( v10 )
        {
          v12 = *(unsigned int *)(v10 - 4);
          v13 = v9 + 8;
          *(_DWORD *)(v9 + 4) = v12;
          v14 = v10;
          v15 = v10 + 232 * v12;
          if ( v10 != v15 )
          {
            do
            {
              *(_DWORD *)v13 = *(_DWORD *)v14;
              v16 = *(_BYTE *)(v14 + 12);
              *(_DWORD *)(v13 + 8) = *(_DWORD *)(v14 + 8);
              *(_BYTE *)(v13 + 12) = v16 & 3 | *(_BYTE *)(v13 + 12) & 0xFC;
              v17 = *(_QWORD *)(v14 + 16);
              *(_QWORD *)(v14 + 16) = 0;
              *(_QWORD *)(v13 + 16) = v17;
              v18 = *(_BYTE *)(v14 + 28);
              *(_DWORD *)(v13 + 24) = *(_DWORD *)(v14 + 24);
              *(_BYTE *)(v13 + 28) = v18 & 3 | *(_BYTE *)(v13 + 28) & 0xFC;
              v19 = *(_QWORD *)(v14 + 32);
              *(_QWORD *)(v14 + 32) = 0;
              *(_QWORD *)(v13 + 32) = v19;
              v20 = *(_BYTE *)(v14 + 44);
              *(_DWORD *)(v13 + 40) = *(_DWORD *)(v14 + 40);
              *(_BYTE *)(v13 + 44) = v20 & 3 | *(_BYTE *)(v13 + 44) & 0xFC;
              v21 = *(_QWORD *)(v14 + 48);
              *(_QWORD *)(v14 + 48) = 0;
              *(_QWORD *)(v13 + 48) = v21;
              v22 = *(_BYTE *)(v14 + 60);
              *(_DWORD *)(v13 + 56) = *(_DWORD *)(v14 + 56);
              *(_BYTE *)(v13 + 60) = v22 & 3 | *(_BYTE *)(v13 + 60) & 0xFC;
              *(_QWORD *)(v13 + 64) = *(_QWORD *)(v14 + 64);
              LODWORD(v21) = *(_DWORD *)(v14 + 72);
              *(_QWORD *)(v14 + 64) = 0;
              v23 = *(_BYTE *)(v14 + 76);
              *(_DWORD *)(v13 + 72) = v21;
              *(_BYTE *)(v13 + 76) = v23 & 3 | *(_BYTE *)(v13 + 76) & 0xFC;
              v24 = *(_QWORD *)(v14 + 80);
              *(_QWORD *)(v14 + 80) = 0;
              *(_QWORD *)(v13 + 80) = v24;
              v25 = *(_BYTE *)(v14 + 92);
              *(_DWORD *)(v13 + 88) = *(_DWORD *)(v14 + 88);
              *(_BYTE *)(v13 + 92) = v25 & 3 | *(_BYTE *)(v13 + 92) & 0xFC;
              v26 = *(_QWORD *)(v14 + 96);
              *(_QWORD *)(v14 + 96) = 0;
              *(_QWORD *)(v13 + 96) = v26;
              v27 = *(_BYTE *)(v14 + 108);
              *(_DWORD *)(v13 + 104) = *(_DWORD *)(v14 + 104);
              *(_BYTE *)(v13 + 108) = v27 & 3 | *(_BYTE *)(v13 + 108) & 0xFC;
              v28 = *(_QWORD *)(v14 + 112);
              *(_QWORD *)(v14 + 112) = 0;
              *(_QWORD *)(v13 + 112) = v28;
              v29 = *(_BYTE *)(v14 + 124);
              *(_DWORD *)(v13 + 120) = *(_DWORD *)(v14 + 120);
              *(_BYTE *)(v13 + 124) = v29 & 3 | *(_BYTE *)(v13 + 124) & 0xFC;
              *(_QWORD *)(v13 + 128) = *(_QWORD *)(v14 + 128);
              *(_QWORD *)(v14 + 128) = 0;
              v30 = *(_BYTE *)(v14 + 140);
              *(_DWORD *)(v13 + 136) = *(_DWORD *)(v14 + 136);
              *(_BYTE *)(v13 + 140) = v30 & 3 | *(_BYTE *)(v13 + 140) & 0xFC;
              v31 = *(_QWORD *)(v14 + 144);
              *(_QWORD *)(v14 + 144) = 0;
              *(_QWORD *)(v13 + 144) = v31;
              v32 = *(_BYTE *)(v14 + 156);
              *(_DWORD *)(v13 + 152) = *(_DWORD *)(v14 + 152);
              *(_BYTE *)(v13 + 156) = v32 & 3 | *(_BYTE *)(v13 + 156) & 0xFC;
              v33 = *(_QWORD *)(v14 + 160);
              *(_QWORD *)(v14 + 160) = 0;
              *(_QWORD *)(v13 + 160) = v33;
              v34 = *(_BYTE *)(v14 + 172);
              *(_DWORD *)(v13 + 168) = *(_DWORD *)(v14 + 168);
              LOBYTE(v33) = v34 & 3 | *(_BYTE *)(v13 + 172) & 0xFC;
              v14 += 232;
              v13 += 232;
              *(_BYTE *)(v13 - 60) = v33;
              v35 = *(_QWORD *)(v14 - 56);
              *(_QWORD *)(v14 - 56) = 0;
              *(_QWORD *)(v13 - 56) = v35;
              v36 = *(_BYTE *)(v14 - 44);
              *(_DWORD *)(v13 - 48) = *(_DWORD *)(v14 - 48);
              *(_BYTE *)(v13 - 44) = v36 & 3 | *(_BYTE *)(v13 - 44) & 0xFC;
              v37 = *(_QWORD *)(v14 - 40);
              *(_QWORD *)(v14 - 40) = 0;
              *(_QWORD *)(v13 - 40) = v37;
              v38 = *(_BYTE *)(v14 - 28);
              *(_DWORD *)(v13 - 32) = *(_DWORD *)(v14 - 32);
              *(_BYTE *)(v13 - 28) = v38 & 3 | *(_BYTE *)(v13 - 28) & 0xFC;
              v39 = *(_QWORD *)(v14 - 24);
              *(_QWORD *)(v14 - 24) = 0;
              *(_QWORD *)(v13 - 24) = v39;
              v40 = *(_BYTE *)(v14 - 12);
              *(_DWORD *)(v13 - 16) = *(_DWORD *)(v14 - 16);
              *(_BYTE *)(v13 - 12) = v40 & 3 | *(_BYTE *)(v13 - 12) & 0xFC;
              v41 = *(_QWORD *)(v14 - 8);
              *(_QWORD *)(v14 - 8) = 0;
              *(_QWORD *)(v13 - 8) = v41;
            }
            while ( v15 != v14 );
          }
          sub_186B220((void *)(v10 - 8));
          v5 = &v4[29 * (unsigned int)v11[1]];
        }
        else
        {
          *(_DWORD *)(v9 + 4) = 0;
          v5 = (_QWORD *)(v9 + 8);
        }
        *(_QWORD *)(a1 + 1592) = v4;
        *v11 = v7;
      }
      else
      {
        v5 = &v4[29 * v6];
      }
    }
    else
    {
      v45 = (_QWORD *)sub_186B270(0x1D8u);
      v4 = v45 + 1;
      *v45 = 2;
      *(_QWORD *)(a1 + 1592) = v45 + 1;
      v5 = v45 + 1;
    }
    *v5 = 0;
    v5[1] = 0;
    v5[2] = 0;
    v5[3] = 1;
    v5[4] = 0;
    v5[5] = 0;
    v5[6] = 0;
    v5[7] = 1;
    v5[8] = 0;
    v5[9] = 0;
    v5[10] = 0;
    v5[11] = 1;
    v5[12] = 0;
    v5[13] = 0;
    v5[14] = 0;
    v5[15] = 1;
    v5[16] = 0;
    v5[17] = 0;
    v5[18] = 0;
    v5[19] = 1;
    v5[20] = 0;
    v5[21] = 0;
    v5[22] = 0;
    v5[23] = 1;
    v5[24] = 0;
    v5[25] = 0;
    v5[26] = 0;
    v5[27] = 1;
    v5[28] = 0;
    ++*((_DWORD *)v4 - 1);
LABEL_5:
    v43 = *((_DWORD *)v4 - 1);
    v42 = a1 + 1472;
  }
  while ( a2 >= v43 );
  v44 = *(_QWORD *)(a1 + 1584);
  if ( !v44 || a2 >= *(_DWORD *)(v44 - 4) )
    sub_8C3430((_QWORD *)(a1 + 1584), 2 * a2 + 1, 0);
}

