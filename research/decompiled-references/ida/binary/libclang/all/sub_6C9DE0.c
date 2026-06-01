unsigned __int64 __fastcall sub_6C9DE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        void *a5,
        __int64 a6,
        int a7)
{
  int v7; // r10d
  int v8; // r11d
  int v10; // r9d
  __int64 v12; // rbp
  __int64 v13; // r14
  __int64 v14; // rax
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  int v26; // [rsp+0h] [rbp-110h]
  int v27; // [rsp+0h] [rbp-110h]
  int v28; // [rsp+0h] [rbp-110h]
  int v29[2]; // [rsp+0h] [rbp-110h]
  int v30; // [rsp+8h] [rbp-108h]
  int v31; // [rsp+8h] [rbp-108h]
  int v32; // [rsp+8h] [rbp-108h]
  int v33; // [rsp+8h] [rbp-108h]
  int v34; // [rsp+10h] [rbp-100h]
  int v35; // [rsp+10h] [rbp-100h]
  int v36; // [rsp+10h] [rbp-100h]
  __int64 v37; // [rsp+28h] [rbp-E8h]
  int v38; // [rsp+30h] [rbp-E0h]
  __int64 v39; // [rsp+40h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+48h] [rbp-C8h] BYREF
  _BYTE v41[184]; // [rsp+58h] [rbp-B8h] BYREF

  v7 = a2;
  v8 = a3;
  v10 = a4;
  v12 = 8 * a6 + 64;
  if ( a7 == -1 || !a4 )
  {
    v37 = a2 & 7;
    v19 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | v37;
    ptr[1] = (void *)0x2000000000LL;
    v30 = a4;
    v26 = a3;
    ptr[0] = v41;
    sub_B14850(ptr, a1, v19, a3, a4);
    v39 = 0;
    v20 = sub_25AC3A0(a1 + 456, ptr, &v39, off_47D0720);
    v8 = v26;
    v10 = v30;
    v21 = v20;
    v7 = a2;
    v22 = v20 - 24;
    if ( !v21 )
    {
      v24 = *(_QWORD *)(a1 + 2192);
      *(_QWORD *)(a1 + 2272) += v12;
      v25 = (v24 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      if ( *(_QWORD *)(a1 + 2200) >= v25 + v12 && v24 )
      {
        *(_QWORD *)(a1 + 2192) = v25 + v12;
      }
      else
      {
        v25 = sub_6A76A0(a1 + 2192, 8 * a6 + 64, 4);
        v8 = v26;
        v7 = a2;
        v10 = v30;
      }
      v38 = v7;
      v33 = v8;
      v36 = v10;
      *(_QWORD *)v29 = v25;
      sub_B14780(v25, a1, 0, *(_DWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | v37, v8, v10, a5, a6);
      sub_25AC200(a1 + 456, *(_QWORD *)v29 + 24LL, v39, off_47D0720);
      v7 = v38;
      v10 = v36;
      v8 = v33;
      v22 = v29[0];
    }
    LODWORD(v13) = v22 & 0xFFFFFFF0;
    if ( ptr[0] != v41 )
    {
      v34 = v8;
      v31 = v7;
      v27 = v10;
      free(ptr[0]);
      v8 = v34;
      v7 = v31;
      v10 = v27;
    }
  }
  else
  {
    v13 = *(_QWORD *)&byte_8[*((_QWORD *)a5 + a7) & 0xFFFFFFFFFFFFFFF0LL] | *((_QWORD *)a5 + a7) & 7LL;
  }
  v14 = *(_QWORD *)(a1 + 2192);
  *(_QWORD *)(a1 + 2272) += v12;
  v15 = (v14 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( *(_QWORD *)(a1 + 2200) >= v15 + v12 && v14 )
  {
    *(_QWORD *)(a1 + 2192) = v15 + v12;
    v16 = (v14 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v35 = v8;
    v32 = v7;
    v28 = v10;
    v23 = sub_6A76A0(a1 + 2192, 8 * a6 + 64, 4);
    v8 = v35;
    v7 = v32;
    v10 = v28;
    v16 = v23;
    v15 = v23;
  }
  sub_B14780(v16, a1, v13, v7, v8, v10, a5, a6);
  v17 = *(unsigned int *)(a1 + 16);
  if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v17 + 1) )
  {
    sub_25D6060(a1 + 8, a1 + 24, v17 + 1, 8);
    v17 = *(unsigned int *)(a1 + 16);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v17) = v15;
  ++*(_DWORD *)(a1 + 16);
  return v16 & 0xFFFFFFFFFFFFFFF0LL;
}

