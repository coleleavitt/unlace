unsigned __int64 __fastcall sub_6C9050(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v3; // r12d
  unsigned __int64 v4; // rbp
  int v5; // eax
  int v6; // edx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rbx
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // r14
  char v18; // al
  __int16 v19; // ax
  int v20; // r12d
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // [rsp+0h] [rbp-108h]
  __int64 v25; // [rsp+0h] [rbp-108h]
  unsigned __int64 v26; // [rsp+8h] [rbp-100h]
  __int64 v27; // [rsp+10h] [rbp-F8h]
  unsigned __int64 v28; // [rsp+18h] [rbp-F0h]
  __int64 v29; // [rsp+20h] [rbp-E8h]
  __int64 v31; // [rsp+38h] [rbp-D0h] BYREF
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  int v33; // [rsp+48h] [rbp-C0h]
  int v34; // [rsp+4Ch] [rbp-BCh]
  __int64 v35; // [rsp+50h] [rbp-B8h] BYREF
  int v36; // [rsp+58h] [rbp-B0h]
  int v37; // [rsp+5Ch] [rbp-ACh]

  v3 = a3;
  v4 = HIDWORD(a3);
  ptr = &v35;
  v34 = 32;
  v35 = a2;
  if ( BYTE4(a3) )
  {
    v37 = a3;
    v5 = 1;
    v6 = 4;
  }
  else
  {
    v6 = 3;
    v5 = 0;
  }
  v36 = v5;
  v33 = v6;
  v31 = 0;
  v27 = a1 + 664;
  v7 = sub_25AC3A0(a1 + 664, &ptr, &v31, &off_47D07E0);
  v8 = a1;
  v9 = a2;
  v10 = (v7 - 24) & 0xFFFFFFFFFFFFFFF0LL;
  if ( !v7 )
  {
    v12 = a2 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)(a2
                                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                                      + 8LL) )
    {
      v13 = 0;
      v14 = 0;
    }
    else
    {
      v14 = sub_6C9050(a1, *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | a2 & 7, a3, 0);
      sub_25AC3A0(v27, &ptr, &v31, &off_47D07E0);
      v9 = a2;
      v12 = a2 & 0xFFFFFFFFFFFFFFF0LL;
      v8 = a1;
      v13 = v14 & 0xFFFFFFFFFFFFFFF8LL;
    }
    v15 = *(_QWORD *)(v8 + 2192);
    *(_QWORD *)(v8 + 2272) += 48LL;
    v16 = (v15 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(v8 + 2200) >= v16 + 48 && v15 )
    {
      *(_QWORD *)(v8 + 2192) = v16 + 48;
      v17 = (v15 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v29 = v9;
      v28 = v13;
      v26 = v12;
      v24 = v8;
      v23 = sub_6A76A0(v8 + 2192, 48, 4);
      v9 = v29;
      v13 = v28;
      v12 = v26;
      v8 = v24;
      v17 = v23;
      v16 = v23;
    }
    v18 = *(_BYTE *)(*(_QWORD *)v12 + 17LL);
    *(_QWORD *)v17 = v17;
    *(_QWORD *)(v17 + 24) = 0;
    v19 = v18 & 0x1E;
    *(_QWORD *)(v17 + 32) = v9;
    if ( v13 < 0x10 )
      v14 = v17 & 0xFFFFFFFFFFFFFFF0LL;
    *(_BYTE *)(v17 + 18) &= 0xF8u;
    v20 = v3 + 1;
    *(_WORD *)(v17 + 16) = (v19 << 8) | 0x625;
    if ( !(_BYTE)v4 )
      v20 = 0;
    *(_QWORD *)(v17 + 8) = v14;
    *(_DWORD *)(v17 + 20) = v20;
    v21 = *(unsigned int *)(v8 + 16);
    if ( *(unsigned int *)(v8 + 20) < (unsigned __int64)(v21 + 1) )
    {
      v25 = v8;
      sub_25D6060(v8 + 8, v8 + 24, v21 + 1, 8);
      v8 = v25;
      v21 = *(unsigned int *)(v25 + 16);
    }
    v10 = v17 & 0xFFFFFFFFFFFFFFF0LL;
    *(_QWORD *)(*(_QWORD *)(v8 + 8) + 8 * v21) = v16;
    v22 = v31;
    ++*(_DWORD *)(v8 + 16);
    sub_25AC200(v27, v17 + 24, v22, &off_47D07E0);
  }
  if ( ptr != &v35 )
    free(ptr);
  return v10;
}

