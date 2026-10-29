unsigned __int64 __fastcall sub_19D0DD0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // r13
  __int16 v4; // ax
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // r12
  _WORD *v8; // rax
  char v9; // r13
  __int64 v10; // r14
  unsigned __int64 v11; // rbx
  char v12; // al
  unsigned __int8 v13; // al
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int16 v19; // ax
  unsigned __int64 v20; // r12
  unsigned int v21; // edx
  int v22; // r9d
  _BOOL8 v23; // rcx
  __int64 v24; // r10
  __int64 v25; // r11
  unsigned __int64 v26; // rax
  __int64 v27; // r11
  __int64 v28; // r12
  __int64 v29; // r13
  unsigned __int64 v30; // rbp
  __int64 v31; // rbx
  int v32; // r14d
  __int64 v33; // rcx
  __int64 v34; // r8
  unsigned __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  _QWORD *v39; // rdx
  unsigned int v40; // eax
  _QWORD *v41; // [rsp+18h] [rbp-C0h]
  __int64 v42; // [rsp+30h] [rbp-A8h]
  __int64 v43; // [rsp+30h] [rbp-A8h]
  __int64 v44; // [rsp+38h] [rbp-A0h]
  void *v45; // [rsp+40h] [rbp-98h] BYREF
  __int64 v46; // [rsp+48h] [rbp-90h]
  _BYTE v47[32]; // [rsp+50h] [rbp-88h] BYREF
  void *ptr; // [rsp+70h] [rbp-68h] BYREF
  __int64 v49; // [rsp+78h] [rbp-60h]
  _BYTE v50[88]; // [rsp+80h] [rbp-58h] BYREF

  v2 = a2;
  v3 = (_QWORD *)sub_168B6C0(a1);
  v4 = *(_WORD *)a2 & 0x1FF;
  switch ( v4 )
  {
    case 20:
      v5 = sub_19D0DD0(a1);
      v6 = *(_QWORD *)(a2 + 16);
      v7 = v5;
      v8 = (_WORD *)sub_EEE9A0(32, v3, 8u);
      v9 = *(_BYTE *)(v7 + 1);
      v10 = *(_QWORD *)(v7 + 8);
      v11 = (unsigned __int64)v8;
      *v8 = *v8 & 0xFE00 | 0x14;
      if ( unk_2CD7484 )
        sub_EE9B50(20);
      v12 = *(_BYTE *)(v11 + 1);
      *(_BYTE *)(v11 + 2) &= 0xF0u;
      *(_QWORD *)(v11 + 8) = v10;
      *(_QWORD *)(v11 + 16) = v6;
      *(_QWORD *)(v11 + 24) = v7;
      *(_BYTE *)(v11 + 1) = v9 & 0x3E | v12 & 1;
      v13 = sub_B62400(v11);
      *(_BYTE *)(v11 + 1) = (v13 << 6) | *(_BYTE *)(v11 + 1) & 0x3F;
      *(_BYTE *)(v11 + 2) = *(_BYTE *)(v11 + 2) & 0xF8 | (v13 >> 2) & 7;
      break;
    case 4:
      v15 = sub_19D0DD0(a1);
      v16 = *(unsigned int *)(*(_QWORD *)a1 + 1952LL);
      v17 = *(unsigned int *)(*(_QWORD *)a1 + 1956LL);
      if ( __PAIR64__(v17, v16) == *(_QWORD *)(*(_QWORD *)a1 + 1944LL) )
      {
        v17 = 0;
        v16 = 0;
      }
      return sub_C09D40(
               v3,
               v15,
               12,
               *(_QWORD *)(v15 + 8),
               (*(_BYTE *)(v15 + 1) >> 1) & 3,
               (*(_BYTE *)(v15 + 1) >> 3) & 7,
               *(_DWORD *)(a2 + 4),
               0,
               (v17 << 32) | v16);
    case 57:
      v18 = 0;
      v19 = *(_WORD *)(a2 + 16) & 0x7FFF;
      v46 = 0x400000000LL;
      v20 = v19;
      v49 = 0x400000000LL;
      v21 = 0;
      v45 = v47;
      ptr = v50;
      if ( v19 > 4uLL )
      {
        sub_2237220(&v45, v47, v19, 8);
        if ( v20 > HIDWORD(v49) )
          sub_2237220(&ptr, v50, v20, 8);
        v18 = (unsigned int)v49;
        v19 = *(_WORD *)(a2 + 16) & 0x7FFF;
        v21 = v49;
        v20 = v19;
      }
      v22 = (*(_DWORD *)(a2 + 16) >> 15) & 0x7FFF;
      v23 = (*(_BYTE *)(a2 + 19) & 0x40) != 0;
      v24 = a2 + 8 * v23 + 32;
      v25 = 8LL * (unsigned __int16)(((*(_BYTE *)(a2 + 19) & 0x40) != 0) + v19)
          + 8LL * ((*(_BYTE *)(a2 + 19) & 0x40) == 0)
          + 32;
      v26 = v24 + 8 * v20;
      v27 = a2 + v25;
      if ( v24 == v26 )
      {
        v40 = v46;
      }
      else
      {
        v41 = v3;
        v28 = 0;
        v29 = a2 + 8 * v23 + 32;
        v30 = (v26 - v24 - 8) >> 3;
        v31 = v27;
        v32 = (*(_DWORD *)(a2 + 16) >> 15) & 0x7FFF;
        while ( 1 )
        {
          v33 = v21;
          v34 = *(_QWORD *)(v31 + 8 * v28);
          v35 = v21 + 1LL;
          v36 = *(_QWORD *)(v29 + 8 * v28);
          if ( v35 > HIDWORD(v49) )
          {
            v44 = *(_QWORD *)(v31 + 8 * v28);
            v43 = *(_QWORD *)(v29 + 8 * v28);
            sub_2237220(&ptr, v50, v35, 8);
            v33 = (unsigned int)v49;
            v34 = v44;
            v36 = v43;
          }
          *((_QWORD *)ptr + v33) = v34;
          LODWORD(v49) = v49 + 1;
          if ( v32 == (_DWORD)v28 )
            v36 = sub_19D0DD0(a1);
          v37 = (unsigned int)v46;
          v38 = (unsigned int)v46 + 1LL;
          if ( v38 > HIDWORD(v46) )
          {
            v42 = v36;
            sub_2237220(&v45, v47, v38, 8);
            v37 = (unsigned int)v46;
            v39 = v45;
            v36 = v42;
          }
          else
          {
            v39 = v45;
          }
          v39[v37] = v36;
          v40 = v46 + 1;
          LODWORD(v46) = v46 + 1;
          if ( v30 == v28 )
            break;
          v21 = v49;
          ++v28;
        }
        v2 = a2;
        v3 = v41;
        v18 = (unsigned int)v49;
        v22 = (*(_DWORD *)(a2 + 16) >> 15) & 0x7FFF;
      }
      v11 = sub_C0ADB0(
              v3,
              *(_DWORD *)(v2 + 4),
              *(_QWORD *)(v2 + 32),
              ptr,
              v18,
              *(unsigned int *)(v2 + 20),
              v45,
              v40,
              *(_DWORD *)(v2 + 24),
              (*(_DWORD *)v2 & 0x4000) != 0,
              v22);
      if ( ptr != v50 )
        free(ptr);
      if ( v45 != v47 )
        free(v45);
      break;
    default:
      return *(_QWORD *)(a2 + 16);
  }
  return v11;
}
