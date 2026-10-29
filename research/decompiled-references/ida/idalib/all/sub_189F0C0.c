void __fastcall sub_189F0C0(__int64 *a1, __int64 a2, __int64 a3, unsigned __int8 a4, __m128 a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r13
  unsigned int v13; // r14d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rsi
  unsigned int v20; // r14d
  unsigned int v21; // ecx
  __int64 *v22; // r14
  __int64 *v23; // r15
  __int64 *v24; // r13
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // r12d
  __int64 *v28; // r13
  _BOOL4 v29; // r15d
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 *v32; // [rsp+0h] [rbp-E8h]
  _BOOL4 v34; // [rsp+18h] [rbp-D0h] BYREF
  int v35; // [rsp+1Ch] [rbp-CCh] BYREF
  _BYTE v36[200]; // [rsp+20h] [rbp-C8h] BYREF

  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 107) & 4) == 0
    || (v12 = *a1,
        v13 = sub_BA8080(a2, a2, v8, v9, v10, v11),
        v18 = sub_BA8080(a3, a2, v14, v15, v16, v17),
        v13 == (_DWORD)v18) )
  {
LABEL_8:
    sub_189E290(*a1, (__int64 *)a2, a3, a4, 0, 1);
    v22 = *(__int64 **)(a2 + 96);
    v23 = *(__int64 **)(a3 + 96);
    v24 = &v22[*(unsigned int *)(a2 + 104)];
    v32 = &v23[*(unsigned int *)(a3 + 104)];
    while ( v22 != v24 && v32 != v23 )
    {
      v25 = *v22;
      v26 = *v23;
      ++v22;
      ++v23;
      sub_189E7F0(*a1, (__int64 *)a2, v25, v26, a4, 0, a5, 1);
    }
    if ( ((*(_QWORD *)(a3 + 56) & 0x40000LL) != 0) != ((*(_QWORD *)(a2 + 56) & 0x40000LL) != 0) )
    {
      sub_168B9F0((__int64)v36, a1, *(_DWORD *)(a2 + 24), 0x1A30u, 0);
      sub_15F7200(v36);
      sub_168B9F0((__int64)v36, a1, *(_DWORD *)(a3 + 24), 0x70u, 0);
      sub_15F7200(v36);
    }
  }
  else if ( *(char *)(a2 + 28) >= 0 )
  {
    v19 = a3;
    if ( *(char *)(a3 + 28) >= 0 )
    {
      if ( (_DWORD)v18 )
      {
        v19 = a2;
        v20 = 5784;
        v21 = 3029;
      }
      else
      {
        v18 = v13;
        v21 = 3022;
        v20 = 5782;
      }
      switch ( v18 )
      {
        case 2LL:
        case 4LL:
          v27 = 1;
          break;
        case 3LL:
          v27 = 2;
          break;
        case 5LL:
          v27 = 3;
          break;
        case 6LL:
        case 7LL:
        case 8LL:
        case 9LL:
        case 10LL:
        case 11LL:
        case 12LL:
        case 13LL:
        case 14LL:
          goto LABEL_8;
        default:
          v27 = 0;
          break;
      }
      v28 = (__int64 *)(v12 + 8);
      v29 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 80) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                 & 0xFFFFFFFFFFFFFFF0LL)
                     + 16LL) == 34;
      sub_168B9F0((__int64)v36, v28, *(_DWORD *)(a2 + 24), v21, 0);
      v35 = v27;
      v30 = sub_1587D10((__int64)v36, &v35);
      v34 = v29;
      sub_1587D10(v30, (int *)&v34);
      sub_15F7200(v36);
      sub_168B9F0((__int64)v36, v28, *(_DWORD *)(a3 + 24), v20, 0);
      v35 = v27;
      v31 = sub_1587D10((__int64)v36, &v35);
      v34 = v29;
      sub_1587D10(v31, (int *)&v34);
      sub_15F7200(v36);
    }
  }
}
