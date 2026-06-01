__int64 __fastcall sub_19A8E90(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128 a8)
{
  unsigned __int64 v8; // r14
  int v9; // r13d
  unsigned int v10; // ebp
  __int64 v11; // rbx
  _QWORD *v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // r12
  __int16 v15; // ax
  unsigned __int8 v16; // al
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned int v30; // eax
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned int v33; // eax
  unsigned __int64 v34; // rax
  char v35; // [rsp+0h] [rbp-F4h]
  unsigned int v36; // [rsp+0h] [rbp-F4h]
  unsigned int v37; // [rsp+4h] [rbp-F0h]
  __int64 *v38; // [rsp+4h] [rbp-F0h]
  __int64 v39; // [rsp+Ch] [rbp-E8h]
  unsigned __int64 v40; // [rsp+14h] [rbp-E0h]
  __int64 v41; // [rsp+24h] [rbp-D0h] BYREF
  __int64 v42[25]; // [rsp+2Ch] [rbp-C8h] BYREF

  if ( !a4 )
    BUG();
  v8 = a4;
  v9 = a5;
  v10 = a3;
  v11 = a2;
  if ( (*(_DWORD *)a4 & 0x10000) == 0 )
  {
    v18 = *(_QWORD *)(*(_QWORD *)(a4 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v18 + 16) == 13 && ((*(_WORD *)(v18 + 18) >> 3) & 0x1FFu) > 0x1F1 )
    {
      a2 = a4;
      v19 = sub_1907C70(a1, (_QWORD *)a4, a7, a8, a3, a4, a5, a6);
      v8 = v19 & 0xFFFFFFFFFFFFFFFELL;
      if ( v19 == 1 )
        return 1;
    }
    v39 = *(_QWORD *)(v8 + 8);
    v20 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*v20 + 16) == 48 )
    {
      v38 = sub_F60F10(*v20, a2, a3, a4, a5, a6);
      v35 = sub_1E63CF0(a1, v10, v39, 1, 3972);
      if ( v35 )
        return 1;
      sub_7052B0((__int64 *)(v38[13] + 96), v38[13], v21, v22, v23, v24);
      if ( (*(_BYTE *)(v38[16] + 1) & 4) != 0 && (*(_BYTE *)(v8 + 1) & 6) != 0 )
      {
        v33 = *(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640);
        if ( v33 <= 1 || v33 == 3 )
        {
          v34 = sub_1934250(a1, v8, *(double *)a7.m128i_i64, a8);
          if ( v34 == 1 )
            return 1;
          v40 = v34 & 0xFFFFFFFFFFFFFFFELL;
          v8 = v34 & 0xFFFFFFFFFFFFFFFELL;
        }
        else
        {
          v40 = v8;
        }
        sub_1884910(a1, v10, v38, 0, v31, v32);
        v37 = 1;
        v35 = 1;
      }
      else
      {
        v40 = v8;
        v37 = 0;
      }
    }
    else
    {
      v40 = v8;
      v37 = 0;
      v35 = 0;
    }
    sub_18C38A0(a1, v8);
    if ( v8 != 1 )
    {
      v42[0] = 0;
      v8 = v40 & 0xFFFFFFFFFFFFFFFELL;
      v27 = sub_A725A0(*(_QWORD **)(a1 + 248), v39, v42, v25, v26);
      a4 = *(_QWORD *)&byte_8[v27 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)&byte_8[v39 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)&byte_8[v39 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v39) & 7) != (a4 | ((unsigned __int8)v27 | (unsigned __int8)*(_QWORD *)&byte_8[v27 & 0xFFFFFFFFFFFFFFF0LL]) & 7) )
        v8 = sub_160A600(
               a1,
               v8,
               v27,
               5u,
               (*(_BYTE *)(v8 + 1) >> 1) & 3,
               0,
               *(double *)a7.m128i_i64,
               *(double *)a8.m128_u64,
               0)
           & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_4;
    }
    return 1;
  }
  v37 = 0;
  v35 = 0;
LABEL_4:
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 8) != 0 )
  {
    v14 = 1;
    sub_168B9F0((__int64)v42, (__int64 *)(a1 + 8), v10, 0x153Cu, 0);
    v41 = *(_QWORD *)(v8 + 8);
    sub_162B6D0((__int64)v42, &v41);
    sub_15F7200(v42);
  }
  else
  {
    v12 = *(_QWORD **)(a1 + 248);
    if ( *(_DWORD *)(a1 + 11320) <= *(_DWORD *)(a1 + 12596) )
    {
      if ( (unsigned __int8)sub_C01160(v8, (__int64)v12, v37, a4, a5) )
      {
        v36 = (v35 == 0) + 7366;
        v30 = sub_C00A40(v8, a1 + 8, v28, v36, v29);
        sub_168B9F0((__int64)v42, (__int64 *)(a1 + 8), v30, v36, 0);
        sub_15F7200(v42);
      }
      v12 = *(_QWORD **)(a1 + 248);
    }
    v13 = v11 | 1;
    v14 = sub_EEE9A0(32, v12, 8u);
    *(_WORD *)v14 = *(_WORD *)v14 & 0xFE00 | 0x60;
    if ( unk_2CD7484 )
      sub_EE9B50(96);
    v15 = *(_WORD *)(v14 + 1);
    *(_QWORD *)(v14 + 8) = v13;
    *(_DWORD *)(v14 + 24) = v10;
    *(_QWORD *)(v14 + 16) = v8 & 0xFFFFFFFFFFFFFFFBLL;
    *(_DWORD *)(v14 + 28) = v9;
    *(_WORD *)(v14 + 1) = v15 & 0xF801 | 2;
    v16 = sub_B633D0(v14);
    *(_BYTE *)(v14 + 1) = (v16 << 6) | *(_BYTE *)(v14 + 1) & 0x3F;
    *(_BYTE *)(v14 + 2) = *(_BYTE *)(v14 + 2) & 0xF8 | (v16 >> 2) & 7;
  }
  return v14;
}
