void __fastcall sub_72D980(_QWORD *a1)
{
  void (__fastcall *v2)(_QWORD *, _QWORD *, __int64); // rax
  void (__fastcall *v3)(_QWORD *, _QWORD *, __int64); // rax
  void (__fastcall *v4)(_QWORD *, _QWORD *, __int64); // rax
  void (__fastcall *v5)(_QWORD *, _QWORD *, __int64); // rax
  void (__fastcall *v6)(_QWORD *, _QWORD *, __int64); // rax
  void (__fastcall *v7)(_QWORD *, _QWORD *, __int64); // rax
  void (__fastcall *v8)(_QWORD *, _QWORD *, __int64); // rax
  void (__fastcall *v9)(_QWORD *, _QWORD *, __int64); // rax
  void (__fastcall *v10)(_QWORD *, _QWORD *, __int64); // rax
  void (__fastcall *v11)(_QWORD *, _QWORD *, __int64); // rax
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 *v14; // rbx
  __int64 v15; // rax
  __int64 *v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rdi
  bool v19; // zf
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 *v22; // rbx
  __int64 *v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rdi
  _QWORD *v26; // rdi
  _QWORD *v27; // rdi

  *a1 = &off_1C53B28;
  v2 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[153];
  if ( v2 )
    v2(a1 + 151, a1 + 151, 3);
  v3 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[148];
  if ( v3 )
    v3(a1 + 146, a1 + 146, 3);
  v4 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[144];
  if ( v4 )
    v4(a1 + 142, a1 + 142, 3);
  v5 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[140];
  if ( v5 )
    v5(a1 + 138, a1 + 138, 3);
  v6 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[136];
  if ( v6 )
    v6(a1 + 134, a1 + 134, 3);
  v7 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[132];
  if ( v7 )
    v7(a1 + 130, a1 + 130, 3);
  v8 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[128];
  if ( v8 )
    v8(a1 + 126, a1 + 126, 3);
  v9 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[124];
  if ( v9 )
    v9(a1 + 122, a1 + 122, 3);
  v10 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[120];
  if ( v10 )
    v10(a1 + 118, a1 + 118, 3);
  v11 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[116];
  if ( v11 )
    v11(a1 + 114, a1 + 114, 3);
  v12 = a1[103];
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = a1[102];
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = (__int64 *)a1[101];
  if ( v14 )
  {
    v15 = *((unsigned int *)v14 - 1);
    if ( (_DWORD)v15 )
    {
      v16 = &v14[4 * v15];
      do
      {
        v20 = v14[2];
        if ( v20 )
        {
          v21 = v14[3];
          v19 = (*(_DWORD *)(v20 + 8))-- == 1;
          if ( v19 )
            sub_15D7BC0(v21, v20);
        }
        v17 = *v14;
        if ( *v14 )
        {
          v18 = v14[1];
          v19 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v19 )
            sub_15D7BC0(v18, v17);
        }
        v14 += 4;
      }
      while ( v14 != v16 );
      v14 = (__int64 *)a1[101];
    }
    sub_186B220(v14 - 1);
  }
  v22 = (__int64 *)a1[100];
  if ( v22 )
  {
    v23 = &v22[*((unsigned int *)v22 - 1)];
    if ( v22 >= v23 )
      goto LABEL_45;
    do
    {
      while ( 1 )
      {
        v24 = *v22;
        if ( *v22 )
        {
          v25 = a1[99];
          v19 = (*(_DWORD *)(v24 + 8))-- == 1;
          if ( v19 )
            break;
        }
        if ( ++v22 >= v23 )
          goto LABEL_44;
      }
      sub_15D7BC0(v25, v24);
      ++v22;
    }
    while ( v22 < v23 );
LABEL_44:
    v22 = (__int64 *)a1[100];
    if ( v22 )
LABEL_45:
      sub_186B220(v22 - 1);
  }
  sub_18572D0(a1 + 98);
  v26 = (_QWORD *)a1[20];
  if ( v26 != a1 + 22 )
    operator delete(v26, a1[22] + 1LL);
  v27 = (_QWORD *)a1[16];
  if ( v27 != a1 + 18 )
    operator delete(v27, a1[18] + 1LL);
  operator delete(a1, 0x4D8u);
}

