__int64 __fastcall sub_1ABD0(__int64 a1, __int16 a2, const void *a3, size_t a4)
{
  unsigned __int64 v6; // rax
  _QWORD *v7; // r12
  __int64 v8; // r13
  __int64 v9; // rdx
  char *v10; // rax
  unsigned __int64 v11; // rax
  _QWORD *v12; // r12
  void *v13; // r8
  unsigned __int64 v14; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r15
  _QWORD *v18; // rax
  char *v19; // r15
  char *v20; // r8
  char *v21; // rax
  unsigned __int64 v22; // rbx
  size_t v23; // rbx
  _QWORD *v24; // rax

  v6 = sub_C400(*(_QWORD **)(a1 + 40), a2);
  v7 = *(_QWORD **)(a1 + 40);
  v8 = v6;
  v9 = v7[1];
  if ( !v9 || (v10 = (char *)(v9 + 5), (unsigned __int64)(v9 + 5) > v7[2]) )
  {
    v16 = 2LL * v7[4];
    if ( v16 < 6 )
      v16 = 6;
    v7[4] = v16;
    v17 = v16 + 8;
    v18 = malloc(v16 + 8);
    v19 = (char *)v18 + v17;
    *v18 = v7[3];
    v9 = (__int64)(v18 + 1);
    v7[3] = v18;
    v10 = (char *)v18 + 13;
    v7[2] = v19;
  }
  v7[1] = v10;
  *(_DWORD *)v9 = 1718187859;
  *(_BYTE *)(v9 + 4) = 116;
  v11 = sub_C510(v7, 143, v9, 5);
  sub_C080(v8, v11, v7);
  v12 = *(_QWORD **)(a1 + 40);
  v13 = nullptr;
  if ( a4 )
  {
    v20 = (char *)v12[1];
    if ( !v20 || (v21 = &v20[a4], (unsigned __int64)&v20[a4] > v12[2]) )
    {
      v22 = 2LL * v12[4];
      if ( v22 < a4 + 1 )
        v22 = a4 + 1;
      v12[4] = v22;
      v23 = v22 + 8;
      v24 = malloc(v23);
      v20 = (char *)(v24 + 1);
      *v24 = v12[3];
      v12[3] = v24;
      v12[2] = (char *)v24 + v23;
      v21 = (char *)v24 + a4 + 8;
    }
    v12[1] = v21;
    v13 = memmove(v20, a3, a4);
  }
  v14 = sub_C510(v12, 98, (__int64)v13, a4);
  sub_C080(v8, v14, v12);
  return v8;
}
