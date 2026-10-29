__int64 __fastcall sub_E6B4B0(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
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
  _QWORD **v19; // rbx
  _QWORD **v20; // r15
  void **v21; // r15
  void **v22; // r12
  __int64 v24; // [rsp+20h] [rbp-1E8h]
  __int64 v25; // [rsp+28h] [rbp-1E0h]
  int v26; // [rsp+30h] [rbp-1D8h]
  int v27; // [rsp+34h] [rbp-1D4h]
  __int64 v28; // [rsp+38h] [rbp-1D0h]
  __int64 v29; // [rsp+40h] [rbp-1C8h]
  char *v30; // [rsp+48h] [rbp-1C0h]
  char v31[8]; // [rsp+50h] [rbp-1B8h] BYREF
  int v32; // [rsp+58h] [rbp-1B0h] BYREF
  void *v33; // [rsp+60h] [rbp-1A8h]
  int *v34; // [rsp+68h] [rbp-1A0h]
  int *v35; // [rsp+70h] [rbp-198h]
  __int64 v36; // [rsp+78h] [rbp-190h]
  void **v37; // [rsp+80h] [rbp-188h] BYREF
  __int64 v38; // [rsp+88h] [rbp-180h]
  _BYTE v39[376]; // [rsp+90h] [rbp-178h] BYREF

  v6 = v31;
  v32 = 0;
  v37 = (void **)v39;
  v38 = 0xA00000000LL;
  v34 = &v32;
  v35 = &v32;
  v33 = nullptr;
  v36 = 0;
  sub_E583A0(a1 + 32, (__int64)&v37);
  v7 = *(_QWORD *)(a1 + 368);
  *(_QWORD *)(a1 + 368) = 0;
  v25 = v7;
  LODWORD(v7) = *(_DWORD *)(a1 + 384);
  *(_DWORD *)(a1 + 384) = 0;
  v27 = v7;
  v8 = *(_QWORD *)(a1 + 376);
  *(_QWORD *)(a1 + 376) = 0;
  v29 = v8;
  v9 = *(_QWORD *)(a1 + 392);
  *(_QWORD *)(a1 + 392) = 0;
  v24 = v9;
  LODWORD(v9) = *(_DWORD *)(a1 + 408);
  *(_DWORD *)(a1 + 408) = 0;
  v26 = v9;
  v10 = *(_QWORD *)(a1 + 400);
  *(_QWORD *)(a1 + 400) = 0;
  v28 = v10;
  sub_E577A0(a1 + 544, (__int64)v31);
  sub_971800(*(_QWORD *)(a1 + 8), "?$");
  sub_E5C460((_QWORD *)a1, a2, a3, *(__int64 **)((a2 & 0xFFFFFFFFFFFFFFF8LL) + 40), v11, v12);
  if ( *a4 )
  {
    v14 = v31;
    v15 = a4 + 2;
    v16 = 0;
    v17 = *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF8LL) + 56);
    while ( 1 )
    {
      v18 = *(_QWORD *)(v17 + 8 * v16 + 24);
      v30 = v14;
      ++v16;
      sub_E6AA70((__int64 *)a1, a2 & 0xFFFFFFFFFFFFFFF8LL, (__int64)v15, v18, (__int64)v14, v13);
      v14 = v30;
      if ( (unsigned int)*a4 <= v16 )
        break;
      v15 += 6;
      if ( (*v15 & 0x7FFFFFFF) == 9 && (a4[6 * (unsigned int)(v16 - 1) + 2] & 0x7FFFFFFF) == 9 )
      {
        sub_971800(*(_QWORD *)(a1 + 8), "$$Z");
        v14 = v30;
      }
    }
    v6 = v30;
  }
  sub_E583A0(a1 + 32, (__int64)&v37);
  *(_QWORD *)(a1 + 368) = v25;
  *(_QWORD *)(a1 + 376) = v29;
  *(_DWORD *)(a1 + 384) = v27;
  *(_QWORD *)(a1 + 392) = v24;
  *(_QWORD *)(a1 + 400) = v28;
  *(_DWORD *)(a1 + 408) = v26;
  sub_E577A0(a1 + 544, (__int64)v6);
  v19 = (_QWORD **)v33;
  if ( v33 )
  {
    do
    {
      sub_E56DB0((__int64)v6, v19[3]);
      v20 = (_QWORD **)v19[2];
      operator delete(v19);
      v19 = v20;
    }
    while ( v20 );
  }
  v21 = v37;
  v22 = &v37[4 * (unsigned int)v38];
  if ( v37 != v22 )
  {
    do
    {
      while ( 1 )
      {
        v22 -= 4;
        if ( *v22 == v22 + 2 )
          break;
        operator delete(*v22);
        if ( v21 == v22 )
          goto LABEL_13;
      }
    }
    while ( v21 != v22 );
LABEL_13:
    v22 = v37;
  }
  if ( v22 != (void **)v39 )
    free(v22);
  operator delete();
  return operator delete();
}

