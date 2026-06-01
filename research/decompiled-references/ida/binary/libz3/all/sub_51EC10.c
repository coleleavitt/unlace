__int64 __fastcall sub_51EC10(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v4; // rax
  _OWORD *v5; // rax
  __int64 v6; // rsi
  _QWORD *v7; // rax
  _OWORD *v8; // rax
  _QWORD *v9; // r12
  char *v10; // r14
  __int64 v11; // rdx
  char *v12; // r12
  _BYTE *v13; // rdi
  char *v14; // rcx
  char *v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rbp
  _BYTE *v19; // rdi
  __int64 result; // rax
  char *v21; // rcx
  __int64 v22; // rdx
  _DWORD *v23; // rax
  char *v24; // rax
  unsigned int v27; // [rsp+14h] [rbp-204h]
  void *v28[2]; // [rsp+20h] [rbp-1F8h] BYREF
  int v29; // [rsp+30h] [rbp-1E8h]
  void *v30; // [rsp+38h] [rbp-1E0h]
  __int64 v31; // [rsp+40h] [rbp-1D8h]
  _BYTE v32[128]; // [rsp+48h] [rbp-1D0h] BYREF
  void *v33; // [rsp+C8h] [rbp-150h]
  __int64 v34; // [rsp+D0h] [rbp-148h]
  int v35; // [rsp+D8h] [rbp-140h]
  __int128 v36; // [rsp+E0h] [rbp-138h]
  __int128 v37; // [rsp+F0h] [rbp-128h]
  void *v38; // [rsp+100h] [rbp-118h] BYREF
  __int64 v39; // [rsp+108h] [rbp-110h]
  int v40; // [rsp+110h] [rbp-108h]
  void *v41; // [rsp+118h] [rbp-100h]
  __int64 v42; // [rsp+120h] [rbp-F8h]
  _BYTE v43[128]; // [rsp+128h] [rbp-F0h] BYREF
  void *v44; // [rsp+1A8h] [rbp-70h]
  __int64 v45; // [rsp+1B0h] [rbp-68h]
  int v46; // [rsp+1B8h] [rbp-60h]
  __int128 v47; // [rsp+1C0h] [rbp-58h]
  __int128 v48; // [rsp+1D0h] [rbp-48h]

  v4 = (_QWORD *)sub_186B270(0x80u);
  *v4 = 0;
  v4[2] = 0;
  v4[4] = 0;
  v4[6] = 0;
  v4[8] = 0;
  v4[10] = 0;
  v4[12] = 0;
  v4[14] = 0;
  v28[0] = v4;
  v28[1] = &byte_8;
  v29 = 0;
  v30 = v32;
  v31 = 0x1000000000LL;
  v5 = (_OWORD *)sub_186B270(0x40u);
  v6 = *(_QWORD *)(a2 + 40);
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v33 = v5;
  v34 = 8;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  sub_148BC40(v28, v6, 0xFFFFFFFFLL);
  v27 = *(_DWORD *)(a2 + 56);
  if ( v27 > 2 )
  {
    v7 = (_QWORD *)sub_186B270(0x80u);
    *v7 = 0;
    v7[2] = 0;
    v7[4] = 0;
    v7[6] = 0;
    v7[8] = 0;
    v7[10] = 0;
    v7[12] = 0;
    v7[14] = 0;
    v38 = v7;
    v39 = 8;
    v40 = 0;
    v41 = v43;
    v42 = 0x1000000000LL;
    v8 = (_OWORD *)sub_186B270(0x40u);
    v44 = v8;
    v9 = (_QWORD *)(a2 + 96);
    v46 = 0;
    *v8 = 0;
    v8[1] = 0;
    v8[2] = 0;
    v8[3] = 0;
    v45 = 8;
    v47 = 0;
    v48 = 0;
    do
      sub_148BC40(&v38, *v9++ & 0xFFFFFFFFFFFFFFF8LL, 1);
    while ( v9 != (_QWORD *)(a2 + 8LL * (v27 - 3) + 104) );
    v10 = (char *)v38;
    v11 = 16LL * (unsigned int)v39;
    v12 = (char *)v38 + v11;
    if ( v38 != (char *)v38 + v11 )
    {
      while ( *((_DWORD *)v10 + 1) != 2 )
      {
        v10 += 16;
        if ( v12 == v10 )
          goto LABEL_5;
      }
      while ( v12 != v10 )
      {
        v23 = (_DWORD *)sub_148B390(v28, *((unsigned int *)v10 + 2));
        if ( !*v23 )
          *v23 = -1;
        v24 = v10 + 16;
        if ( v12 == v10 + 16 )
          break;
        while ( 1 )
        {
          v10 = v24;
          if ( *((_DWORD *)v24 + 1) == 2 )
            break;
          v24 += 16;
          if ( v12 == v24 )
            goto LABEL_5;
        }
      }
    }
LABEL_5:
    if ( *((_QWORD *)&v48 + 1) )
      sub_186B220((void *)(*((_QWORD *)&v48 + 1) - 8LL));
    if ( (_QWORD)v48 )
      sub_186B220((void *)(v48 - 8));
    if ( *((_QWORD *)&v47 + 1) )
      sub_186B220((void *)(*((_QWORD *)&v47 + 1) - 8LL));
    if ( (_QWORD)v47 )
      sub_186B220((void *)(v47 - 8));
    if ( v44 )
      sub_186B220(v44);
    v13 = v41;
    v14 = (char *)v41 + 8 * (unsigned int)v42;
    if ( v41 != v14 )
    {
      v15 = (char *)v41;
      do
      {
        v16 = *(_QWORD *)v15;
        v15 += 8;
        *(_BYTE *)(v16 + 6) &= ~1u;
      }
      while ( v14 != v15 );
    }
    LODWORD(v42) = 0;
    if ( v13 != v43 && v13 )
      sub_186B220(v13);
    if ( v38 )
      sub_186B220(v38);
  }
  v17 = *(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL;
  v18 = *(_QWORD *)(a2 + 88) & 0xFFFFFFFFFFFFFFF8LL;
  sub_148BC40(v28, v17, 1);
  sub_148BC40(v28, v18, 1);
  sub_51EB10(a1, v17, (__int64)v28, 0, a3);
  sub_51EB10(a1, v18, (__int64)v28, *(_DWORD *)(v17 + 24), a3);
  if ( *((_QWORD *)&v37 + 1) )
    sub_186B220((void *)(*((_QWORD *)&v37 + 1) - 8LL));
  if ( (_QWORD)v37 )
    sub_186B220((void *)(v37 - 8));
  if ( *((_QWORD *)&v36 + 1) )
    sub_186B220((void *)(*((_QWORD *)&v36 + 1) - 8LL));
  if ( (_QWORD)v36 )
    sub_186B220((void *)(v36 - 8));
  if ( v33 )
    sub_186B220(v33);
  v19 = v30;
  result = (unsigned int)v31;
  v21 = (char *)v30 + 8 * (unsigned int)v31;
  if ( v30 != v21 )
  {
    result = (__int64)v30;
    do
    {
      v22 = *(_QWORD *)result;
      result += 8;
      *(_BYTE *)(v22 + 6) &= ~1u;
    }
    while ( v21 != (char *)result );
  }
  LODWORD(v31) = 0;
  if ( v19 != v32 && v19 )
    result = sub_186B220(v19);
  if ( v28[0] )
    return sub_186B220(v28[0]);
  return result;
}

