__int64 __fastcall sub_1CB20B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // ebp
  __int64 v9; // r13
  char v10; // r14
  __int64 v11; // rdi
  __int64 v12; // r12
  char v13; // al
  __int16 v14; // ax
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r12
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  _BYTE *v23; // r13
  int v24; // eax
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  _QWORD *v29; // rdx
  unsigned int v30; // r8d
  __int64 v31; // r15
  unsigned int v32; // eax
  int v33; // r8d
  int v34; // r8d
  bool v35; // r12
  void *v36; // rdx
  _QWORD *v37; // rdi
  __int64 v38; // rax
  __int64 v39; // r12
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // r12
  void *v45; // rax
  _QWORD *v46; // rdi
  __int64 v47; // [rsp+0h] [rbp-B8h]
  int v48; // [rsp+0h] [rbp-B8h]
  __int64 v49; // [rsp+8h] [rbp-B0h]
  __int64 v50; // [rsp+18h] [rbp-A0h]
  void *v51; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v52; // [rsp+28h] [rbp-90h]
  bool v53; // [rsp+2Ch] [rbp-8Ch]
  void *ptr; // [rsp+30h] [rbp-88h] BYREF
  __int64 v55; // [rsp+38h] [rbp-80h]
  _BYTE v56[120]; // [rsp+40h] [rbp-78h] BYREF

  v7 = a4;
  switch ( *(_DWORD *)a3 )
  {
    case 0:
    case 1:
    case 7:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
      v9 = a2;
      v10 = 0;
      v11 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1 )
      {
        v10 = 1;
        v9 = sub_F68450(v11, a2, a3, a4, a5);
      }
      v12 = sub_EEE9A0(24, *(_QWORD **)(a1 + 248), 8u);
      *(_WORD *)v12 = *(_WORD *)v12 & 0xFE00 | 0x1A;
      if ( unk_2CD7484 )
        sub_EE9B50(26);
      v13 = *(_BYTE *)(v12 + 1);
      *(_QWORD *)(v12 + 8) = v9;
      *(_QWORD *)(v12 + 16) = 0;
      *(_DWORD *)(v12 + 4) = v7;
      *(_BYTE *)(v12 + 1) = (2 * v10) | v13 & 0xF9;
      v14 = *(_WORD *)(v12 + 1) & 0xF807;
      *(_WORD *)(v12 + 1) = v14;
      *(_BYTE *)(v12 + 2) = HIBYTE(v14) & 0xF7;
      v15 = sub_B62360(v12);
      *(_BYTE *)(v12 + 1) = ((_BYTE)v15 << 6) | *(_BYTE *)(v12 + 1) & 0x3F;
      *(_BYTE *)(v12 + 2) = *(_BYTE *)(v12 + 2) & 0xF8 | ((unsigned __int8)v15 >> 2) & 7;
      v18 = sub_C09C20(*(_QWORD **)(a1 + 248), v12, (int *)a3, (unsigned int)(v15 << 6), v16, v17);
      break;
    case 2:
      v18 = sub_1CB1D20(a1, a2, a3 + 8, a4, a5, a6);
      break;
    case 3:
      v18 = sub_C0C840(*(_QWORD **)(a1 + 248), (__int64 *)(a3 + 8), 1, a2, a4);
      break;
    case 4:
      v32 = *(_DWORD *)(a3 + 16);
      v33 = (__int16)(8 * *(_WORD *)(a3 + 26)) >> 3;
      LODWORD(v55) = v32;
      v34 = -v33;
      v35 = (*(_BYTE *)(a3 + 27) & 0x20) == 0;
      if ( v32 > 0x40 )
      {
        v48 = v34;
        sub_2205510(&ptr);
        v32 = v55;
        v36 = ptr;
        v34 = v48;
      }
      else
      {
        v36 = *(void **)(a3 + 8);
      }
      v37 = *(_QWORD **)(a1 + 248);
      v51 = v36;
      v53 = v35;
      v52 = v32;
      v18 = sub_C0C700(v37, (__int64)&v51, a2, v7, v34);
      if ( v52 > 0x40 && v51 )
        operator delete[](v51);
      break;
    case 5:
      v38 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v38 + 16) != 14 )
        v38 = sub_F63050(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4);
      v39 = *(_QWORD *)(v38 + 32);
      ptr = (void *)sub_1CB1D20(a1, v39, a3 + 8, v7, a5, a6);
      v42 = sub_1CB1D20(a1, v39, a3 + 24, v7, v40, v41);
      goto LABEL_28;
    case 6:
      v43 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v43 + 16) != 14 )
        v43 = sub_F63050(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4);
      v44 = *(_QWORD *)(v43 + 32);
      v45 = (void *)sub_C0C840(*(_QWORD **)(a1 + 248), (__int64 *)(a3 + 8), 1, v44, v7);
      v46 = *(_QWORD **)(a1 + 248);
      ptr = v45;
      v42 = sub_C0C840(v46, (__int64 *)(a3 + 32), 1, v44, v7);
LABEL_28:
      v55 = v42;
      v18 = sub_EEE9A0(64, *(_QWORD **)(a1 + 248), 8u);
      sub_C0B340(v18, *(_QWORD **)(a1 + 248), v7, (__int64)&ptr, 2, v7);
      *(_QWORD *)(v18 + 8) = a2;
      break;
    case 8:
      v20 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
      v21 = (unsigned int)*(unsigned __int8 *)(v20 + 16) - 57;
      if ( (unsigned int)v21 > 1 )
        v20 = sub_F63050(v20, a2, v21, a4);
      v22 = *(_QWORD *)(v20 + 32);
      v23 = v56;
      ptr = v56;
      v47 = v22;
      v55 = 0x800000000LL;
      v24 = *(_DWORD *)(a3 + 16);
      if ( v24 )
      {
        v25 = 0;
        v49 = 56 * ((unsigned int)(v24 - 1) + 1LL);
        do
        {
          v26 = sub_1CB20B0(a1, v47, v25 + *(_QWORD *)(a3 + 8), v7);
          v27 = (unsigned int)v55;
          v28 = (unsigned int)v55 + 1LL;
          if ( v28 > HIDWORD(v55) )
          {
            v50 = v26;
            sub_2237220(&ptr, v56, v28, 8);
            v27 = (unsigned int)v55;
            v29 = ptr;
            v26 = v50;
          }
          else
          {
            v29 = ptr;
          }
          v29[v27] = v26;
          v25 += 56;
          v30 = v55 + 1;
          LODWORD(v55) = v55 + 1;
        }
        while ( v49 != v25 );
        v23 = ptr;
        v31 = v30;
      }
      else
      {
        v31 = 0;
      }
      v18 = sub_EEE9A0(64, *(_QWORD **)(a1 + 248), 8u);
      sub_C0B340(v18, *(_QWORD **)(a1 + 248), v7, (__int64)v23, v31, v7);
      *(_QWORD *)(v18 + 8) = a2;
      if ( ptr != v56 )
        free(ptr);
      break;
  }
  return v18;
}
