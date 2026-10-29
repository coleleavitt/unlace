__int64 __fastcall sub_7579F0(_QWORD *a1, unsigned int a2, int a3, unsigned __int8 a4, unsigned __int8 a5)
{
  __int64 v8; // rbx
  unsigned int v9; // r15d
  int v10; // ecx
  void (*v11)(); // rax
  _QWORD *v13; // r14
  void *v14; // rdi
  _QWORD *v15; // r14
  void *v16; // rdi
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rcx
  bool v21; // zf
  char v22; // [rsp+7h] [rbp-71h]
  __int64 v24; // [rsp+18h] [rbp-60h]
  unsigned int v25; // [rsp+34h] [rbp-44h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v8 = a1[6] + 176LL * a2;
  v9 = *(_DWORD *)(v8 + 164);
  v22 = (a3 & v9) != 0;
  if ( a4 == v22 )
  {
    v11 = *(void (**)())(*a1 + 160LL);
    if ( v11 == nullsub_220 )
      return v26 - __readfsqword(0x28u);
    goto LABEL_8;
  }
  v10 = v9 & ~a3;
  if ( a4 )
    v10 = a3 | v9;
  *(_DWORD *)(v8 + 164) = v10;
  if ( a3 != 4 )
  {
    *(_DWORD *)(v8 + 164) = v10 | 1;
    v11 = *(void (**)())(*a1 + 160LL);
    if ( v11 == nullsub_220 )
      return v26 - __readfsqword(0x28u);
    goto LABEL_8;
  }
  v13 = *(_QWORD **)(v8 + 120);
  while ( v13 )
  {
    v14 = v13;
    v13 = (_QWORD *)*v13;
    operator delete(v14, 0x10u);
  }
  memset(*(void **)(v8 + 104), 0, 8LL * *(_QWORD *)(v8 + 112));
  v15 = *(_QWORD **)(v8 + 64);
  *(_QWORD *)(v8 + 128) = 0;
  *(_QWORD *)(v8 + 120) = 0;
  while ( v15 )
  {
    v16 = v15;
    v15 = (_QWORD *)*v15;
    operator delete(v16, 0x10u);
  }
  memset(*(void **)(v8 + 48), 0, 8LL * *(_QWORD *)(v8 + 56));
  v17 = *(_DWORD *)(v8 + 164);
  *(_QWORD *)(v8 + 72) = 0;
  *(_QWORD *)(v8 + 64) = 0;
  if ( (v17 & 4) == 0 )
  {
    v18 = *(_QWORD *)(v8 + 24);
    v19 = v18 + 5LL * *(_QWORD *)(v8 + 32);
    if ( v18 != v19 )
    {
      v20 = *(_QWORD *)(v8 + 24);
      do
      {
        v21 = *(_BYTE *)(v20 + 4) == 0;
        v24 = v20;
        v25 = *(_DWORD *)v20;
        if ( v21 )
          sub_753C70((__int64 *)(v8 + 48), &v25);
        else
          sub_753C70((__int64 *)(v8 + 104), &v25);
        v20 = v24 + 5;
      }
      while ( v19 != v24 + 5 );
      v17 = *(_DWORD *)(v8 + 164);
    }
  }
  *(_DWORD *)(v8 + 164) = v17 | 1;
  v11 = *(void (**)())(*a1 + 160LL);
  if ( v11 != nullsub_220 )
LABEL_8:
    ((void (__fastcall *)(_QWORD *, _QWORD, _QWORD))v11)(a1, a2, v9);
  if ( ((a3 == 4) & (a5 ^ 1)) == 0 || v22 == a4 )
    return v26 - __readfsqword(0x28u);
  sub_396090(0x5Au, a1[4], a2, a4);
  return sub_754740((__int64)a1, 90, a2, a4);
}

