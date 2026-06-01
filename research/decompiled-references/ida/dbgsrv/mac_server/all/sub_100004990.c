/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100004990
// Address: 0x0000000100004990

//----- (0000000100004990) ----------------------------------------------------
__int64 __fastcall sub_100004990(__int64 a1, __int64 a2)
{
  int v2; // edx
  unsigned int v3; // r14d
  _QWORD *v4; // r12
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // r14
  const char *v8; // rax
  const char *v9; // rdx
  int v10; // r9d
  __int64 v11; // r15
  int v12; // r8d
  _QWORD *v13; // r13
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  bool v17; // zf
  char v18; // al
  _DWORD v19[256]; // [rsp+10h] [rbp-430h] BYREF

  if ( *(_DWORD *)(a1 + 860) == 4 )
  {
    v2 = *(_DWORD *)(a1 + 528);
    if ( v2 == -1 )
    {
      return 1;
    }
    else
    {
      sub_100060FA0(a1, "%d: reaping the child status\n", v2);
      v3 = 1;
      sub_100003220(a1, v19, 1u);
      *(_DWORD *)(a1 + 528) = -1;
    }
    return v3;
  }
  if ( !a2 )
    return (unsigned int)-1;
  v4 = (_QWORD *)(a1 + 1216);
  v5 = *(_QWORD *)(a1 + 1216);
  if ( !v5 )
    goto LABEL_12;
  v6 = *(_DWORD *)(a2 + 4);
  v7 = a1 + 1216;
  do
  {
    if ( *(_DWORD *)(v5 + 32) >= v6 )
      v7 = v5;
    v5 = *(_QWORD *)(v5 + 8LL * (*(_DWORD *)(v5 + 32) < v6));
  }
  while ( v5 );
  if ( (_QWORD *)v7 != v4 && *(_DWORD *)(v7 + 32) <= v6 )
  {
    v18 = 1;
    if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 7 )
      v18 = *(_BYTE *)(a2 + 16);
    v11 = v7 + 40;
    *(_BYTE *)(v7 + 2152) = v18;
    if ( !*(_BYTE *)(a1 + 664) )
      goto LABEL_18;
    v8 = (const char *)((__int64 (__fastcall *)(__int64, _DWORD *, __int64))loc_100061690)(a2, v19, 1024);
    v10 = *(_DWORD *)(v7 + 48);
    v12 = *(_DWORD *)(v7 + 56);
    v9 = "un";
    if ( *(_BYTE *)(v7 + 2152) )
      v9 = &_s;
  }
  else
  {
LABEL_12:
    if ( !*(_BYTE *)(a1 + 664) )
    {
      v11 = 0;
      goto LABEL_18;
    }
    v8 = (const char *)((__int64 (__fastcall *)(__int64, _DWORD *, __int64))loc_100061690)(a2, v19, 1024);
    v9 = &_s;
    v10 = 0;
    v11 = 0;
    v12 = 0;
  }
  sub_100060FA0(
    a1,
    "continue after event %s (%d pending, block type %d, sig#=%d,%shandled)\n",
    v8,
    *(_DWORD *)(a1 + 160),
    v12,
    v10,
    v9);
LABEL_18:
  v3 = 1;
  if ( !*(_QWORD *)(a1 + 160) && !*(_BYTE *)(a1 + 1232) )
  {
    if ( *(_DWORD *)(a1 + 860) == 1 )
    {
      *(_BYTE *)(v11 + 14) = 1;
      *(_DWORD *)(a1 + 860) = 0;
    }
    v13 = *(_QWORD **)(a1 + 1208);
    if ( v13 != v4 )
    {
      do
      {
        if ( *((_BYTE *)v13 + 2152) == 1 )
          *((_DWORD *)v13 + 12) = 0;
        if ( *((_DWORD *)v13 + 14) == 2 )
          sub_100003050(a1, (int *)v13 + 10);
        sub_100003180(a1, (__int64)(v13 + 5));
        v15 = (_QWORD *)v13[1];
        if ( v15 )
        {
          do
          {
            v16 = v15;
            v15 = (_QWORD *)*v15;
          }
          while ( v15 );
        }
        else
        {
          do
          {
            v16 = (_QWORD *)v13[2];
            v17 = *v16 == (_QWORD)v13;
            v13 = v16;
          }
          while ( !v17 );
        }
        v13 = v16;
      }
      while ( v16 != v4 );
    }
  }
  return v3;
}
