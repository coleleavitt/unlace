__int64 __fastcall sub_E8F1F0(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  char *v6; // r12
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r9
  char *v14; // r8
  _DWORD *v15; // r14
  unsigned __int64 v16; // rbx
  __int64 v17; // rbp
  __int64 v18; // rcx
  __int64 v19; // r13
  __int64 v20; // r14
  unsigned int v21; // ebp
  _QWORD **v22; // rbx
  _QWORD **v23; // r15
  void **v24; // r15
  void **v25; // r12
  unsigned int v27; // [rsp+10h] [rbp-1F8h]
  __int64 v28; // [rsp+20h] [rbp-1E8h]
  __int64 v29; // [rsp+28h] [rbp-1E0h]
  int v30; // [rsp+30h] [rbp-1D8h]
  int v31; // [rsp+34h] [rbp-1D4h]
  __int64 v32; // [rsp+38h] [rbp-1D0h]
  __int64 v33; // [rsp+40h] [rbp-1C8h]
  char *v34; // [rsp+48h] [rbp-1C0h]
  char v35[8]; // [rsp+50h] [rbp-1B8h] BYREF
  int v36; // [rsp+58h] [rbp-1B0h] BYREF
  void *v37; // [rsp+60h] [rbp-1A8h]
  int *v38; // [rsp+68h] [rbp-1A0h]
  int *v39; // [rsp+70h] [rbp-198h]
  __int64 v40; // [rsp+78h] [rbp-190h]
  void **v41; // [rsp+80h] [rbp-188h] BYREF
  __int64 v42; // [rsp+88h] [rbp-180h]
  _BYTE v43[376]; // [rsp+90h] [rbp-178h] BYREF

  v6 = v35;
  v36 = 0;
  v41 = (void **)v43;
  v42 = 0xA00000000LL;
  v38 = &v36;
  v39 = &v36;
  v37 = nullptr;
  v40 = 0;
  sub_E7C0E0(a1 + 32, (__int64)&v41);
  v7 = *(_QWORD *)(a1 + 368);
  *(_QWORD *)(a1 + 368) = 0;
  v29 = v7;
  LODWORD(v7) = *(_DWORD *)(a1 + 384);
  *(_DWORD *)(a1 + 384) = 0;
  v31 = v7;
  v8 = *(_QWORD *)(a1 + 376);
  *(_QWORD *)(a1 + 376) = 0;
  v33 = v8;
  v9 = *(_QWORD *)(a1 + 392);
  *(_QWORD *)(a1 + 392) = 0;
  v28 = v9;
  LODWORD(v9) = *(_DWORD *)(a1 + 408);
  *(_DWORD *)(a1 + 408) = 0;
  v30 = v9;
  v10 = *(_QWORD *)(a1 + 400);
  *(_QWORD *)(a1 + 400) = 0;
  v32 = v10;
  sub_E7B4E0(a1 + 544, (__int64)v35);
  sub_995540(*(_QWORD *)(a1 + 8), "?$");
  sub_E801A0((_QWORD *)a1, a2, a3, *(__int64 **)((a2 & 0xFFFFFFFFFFFFFFF8LL) + 40), v11, v12);
  if ( *a4 )
  {
    v14 = v35;
    v15 = a4 + 2;
    v16 = 0;
    v17 = *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF8LL) + 56);
    while ( 1 )
    {
      v18 = *(_QWORD *)(v17 + 8 * v16 + 24);
      v34 = v14;
      ++v16;
      sub_E8E7B0((__int64 *)a1, a2 & 0xFFFFFFFFFFFFFFF8LL, (__int64)v15, v18, (__int64)v14, v13);
      v14 = v34;
      if ( (unsigned int)*a4 <= v16 )
        break;
      v15 += 6;
      if ( (*v15 & 0x7FFFFFFF) == 9 && (a4[6 * (unsigned int)(v16 - 1) + 2] & 0x7FFFFFFF) == 9 )
      {
        sub_995540(*(_QWORD *)(a1 + 8), "$$Z");
        v14 = v34;
      }
    }
    v6 = v34;
  }
  sub_E7C0E0(a1 + 32, (__int64)&v41);
  v19 = *(_QWORD *)(a1 + 368);
  v20 = *(_QWORD *)(a1 + 392);
  v21 = *(_DWORD *)(a1 + 408);
  v27 = *(_DWORD *)(a1 + 384);
  *(_QWORD *)(a1 + 368) = v29;
  *(_QWORD *)(a1 + 376) = v33;
  *(_DWORD *)(a1 + 384) = v31;
  *(_QWORD *)(a1 + 392) = v28;
  *(_QWORD *)(a1 + 400) = v32;
  *(_DWORD *)(a1 + 408) = v30;
  sub_E7B4E0(a1 + 544, (__int64)v6);
  v22 = (_QWORD **)v37;
  if ( v37 )
  {
    do
    {
      sub_E7AAF0((__int64)v6, v22[3]);
      v23 = (_QWORD **)v22[2];
      operator delete(v22);
      v22 = v23;
    }
    while ( v23 );
  }
  v24 = v41;
  v25 = &v41[4 * (unsigned int)v42];
  if ( v41 != v25 )
  {
    do
    {
      while ( 1 )
      {
        v25 -= 4;
        if ( *v25 == v25 + 2 )
          break;
        operator delete(*v25);
        if ( v24 == v25 )
          goto LABEL_13;
      }
    }
    while ( v24 != v25 );
LABEL_13:
    v25 = v41;
  }
  if ( v25 != (void **)v43 )
    free(v25);
  operator delete(v20, 16LL * v21, 8);
  return operator delete(v19, 16LL * v27, 8);
}
