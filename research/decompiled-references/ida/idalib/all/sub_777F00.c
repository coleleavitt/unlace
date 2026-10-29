__int64 __fastcall sub_777F00(_QWORD *a1, __int64 a2, int a3, unsigned __int8 a4, unsigned __int8 a5)
{
  __int64 v7; // rbx
  unsigned int v8; // r15d
  int v9; // ecx
  void (*v10)(); // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  bool v18; // zf
  _QWORD *v19; // [rsp+0h] [rbp-78h]
  _QWORD *v20; // [rsp+0h] [rbp-78h]
  __int64 v21; // [rsp+0h] [rbp-78h]
  char v22; // [rsp+Bh] [rbp-6Dh]
  __int64 v24; // [rsp+18h] [rbp-60h]
  unsigned __int64 v25; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v7 = a1[6] + 176 * a2;
  v8 = *(_DWORD *)(v7 + 168);
  v22 = (a3 & v8) != 0;
  if ( a4 == v22 )
  {
    v10 = *(void (**)())(*a1 + 160LL);
    if ( v10 == nullsub_241 )
      return v26 - __readfsqword(0x28u);
    goto LABEL_8;
  }
  v9 = v8 & ~a3;
  if ( a4 )
    v9 = a3 | v8;
  *(_DWORD *)(v7 + 168) = v9;
  if ( a3 != 4 )
  {
    *(_DWORD *)(v7 + 168) = v9 | 1;
    v10 = *(void (**)())(*a1 + 160LL);
    if ( v10 == nullsub_241 )
      return v26 - __readfsqword(0x28u);
    goto LABEL_8;
  }
  v12 = *(_QWORD **)(v7 + 120);
  if ( v12 )
  {
    do
    {
      v19 = (_QWORD *)*v12;
      operator delete(v12, 0x10u);
      v12 = v19;
    }
    while ( v19 );
  }
  memset(*(void **)(v7 + 104), 0, 8LL * *(_QWORD *)(v7 + 112));
  v13 = *(_QWORD **)(v7 + 64);
  *(_QWORD *)(v7 + 128) = 0;
  *(_QWORD *)(v7 + 120) = 0;
  if ( v13 )
  {
    do
    {
      v20 = (_QWORD *)*v13;
      operator delete(v13, 0x10u);
      v13 = v20;
    }
    while ( v20 );
  }
  memset(*(void **)(v7 + 48), 0, 8LL * *(_QWORD *)(v7 + 56));
  v14 = *(_DWORD *)(v7 + 168);
  *(_QWORD *)(v7 + 72) = 0;
  *(_QWORD *)(v7 + 64) = 0;
  if ( (v14 & 4) == 0 )
  {
    v15 = *(_QWORD *)(v7 + 24);
    v16 = 9LL * *(_QWORD *)(v7 + 32);
    v21 = v15 + v16;
    if ( v15 != v15 + v16 )
    {
      v17 = *(_QWORD *)(v7 + 24);
      do
      {
        v18 = *(_BYTE *)(v17 + 8) == 0;
        v24 = v17;
        v25 = *(_QWORD *)v17;
        if ( v18 )
          sub_7740F0((__int64 *)(v7 + 48), &v25);
        else
          sub_7740F0((__int64 *)(v7 + 104), &v25);
        v17 = v24 + 9;
      }
      while ( v21 != v24 + 9 );
      v14 = *(_DWORD *)(v7 + 168);
    }
  }
  *(_DWORD *)(v7 + 168) = v14 | 1;
  v10 = *(void (**)())(*a1 + 160LL);
  if ( v10 != nullsub_241 )
LABEL_8:
    ((void (__fastcall *)(_QWORD *, __int64, _QWORD))v10)(a1, a2, v8);
  if ( ((a3 == 4) & (a5 ^ 1)) == 0 || v22 == a4 )
    return v26 - __readfsqword(0x28u);
  sub_39ADA0(0x5Au, a1[4], a2, a4);
  return sub_774BB0((__int64)a1, 90, a2, a4);
}
