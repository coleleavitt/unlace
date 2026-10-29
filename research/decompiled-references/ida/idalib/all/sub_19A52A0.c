unsigned __int64 __fastcall sub_19A52A0(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned int v10; // eax
  char v11; // dl
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v16; // rax
  char v17; // bl
  unsigned int *v18; // [rsp+0h] [rbp-1B8h] BYREF
  int v19; // [rsp+8h] [rbp-1B0h]
  void *v20[2]; // [rsp+10h] [rbp-1A8h] BYREF
  _BYTE v21[32]; // [rsp+20h] [rbp-198h] BYREF
  void *v22[2]; // [rsp+40h] [rbp-178h] BYREF
  _QWORD v23[14]; // [rsp+50h] [rbp-168h] BYREF
  __int128 v24; // [rsp+C0h] [rbp-F8h] BYREF
  void *v25; // [rsp+D0h] [rbp-E8h]
  __int64 v26; // [rsp+D8h] [rbp-E0h]
  _BYTE v27[96]; // [rsp+E0h] [rbp-D8h] BYREF
  __int16 v28; // [rsp+140h] [rbp-78h]
  void *ptr; // [rsp+148h] [rbp-70h]
  __int64 v30; // [rsp+150h] [rbp-68h]
  _BYTE v31[96]; // [rsp+158h] [rbp-60h] BYREF

  v24 = 0;
  v26 = 0x400000000LL;
  v25 = v27;
  v28 = 0;
  ptr = v31;
  v30 = 0x400000000LL;
  if ( (*a2 & 0x8000) != 0 )
  {
LABEL_2:
    v7 = *(_QWORD **)(a1 + 248);
    v8 = v7[294];
    v7[304] += 48LL;
    v9 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v7[295] >= v9 + 48 && v8 )
      v7[294] = v9 + 48;
    else
      v9 = sub_986170((__int64)(v7 + 294), 48, 48, 3, a5, a6);
    v10 = *a2;
    v11 = v28;
    v12 = *(_QWORD **)(a1 + 248);
    *(_DWORD *)v9 = 3;
    *(_QWORD *)(v9 + 8) = a2;
    v13 = 4 * (v11 & 1u);
    *(_BYTE *)(v9 + 4) = v13 | (2 * ((v10 & 0x4000) != 0)) & 0xFB | ((v10 & 0x8000u) != 0) | *(_BYTE *)(v9 + 4) & 0xF8;
    v14 = sub_A55A00(v12, (__int64)&v24, v13, 2 * ((v10 >> 14) & 1), a5, a6);
    *(_BYTE *)(v9 + 24) = 0;
    *(_QWORD *)(v9 + 16) = v14;
    *(_QWORD *)(v9 + 32) = 0;
    *(_QWORD *)(v9 + 40) = 0;
    goto LABEL_6;
  }
  v16 = sub_EEC8C0((unsigned __int64)a2, (__int64)a2, 0.0);
  v22[0] = v23;
  v22[1] = (void *)0x400000000LL;
  v20[1] = (void *)0x400000000LL;
  v23[12] = 0;
  v18 = a2;
  v19 = 0;
  v20[0] = v21;
  v17 = sub_1750770(a1, 0, (__int64)&v18, 1u, (__int64)v20, (__int64)v22, 0.0, v16, (__int64)&v24);
  if ( v20[0] != v21 )
    free(v20[0]);
  if ( !v17 )
  {
    if ( v22[0] != v23 )
      free(v22[0]);
    goto LABEL_2;
  }
  v9 = 0;
  if ( v22[0] != v23 )
    free(v22[0]);
LABEL_6:
  if ( ptr != v31 )
    free(ptr);
  if ( v25 != v27 )
    free(v25);
  return v9;
}
