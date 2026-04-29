__int64 __fastcall sub_3C500(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 *v5; // rsi
  _QWORD *v6; // rbx
  __int64 v7; // rbp
  int i; // eax
  __int16 v9; // ax
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned int v16; // edx
  int v18; // ebx
  __int64 *v19; // rax
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  const char *v23; // rsi
  __int64 *v24; // rax
  const char *v25; // rbx
  __int64 *v26; // rax
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  const char *v30; // rsi
  __int64 v31; // rax
  __int64 *v32; // rax
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  int v36; // r9d
  const char *v37; // rsi
  __int64 v38; // [rsp+8h] [rbp-70h]
  __int64 v39; // [rsp+10h] [rbp-68h] BYREF
  __int64 *v40; // [rsp+18h] [rbp-60h] BYREF
  __int64 v41[11]; // [rsp+20h] [rbp-58h] BYREF

  v41[3] = __readfsqword(0x28u);
  sub_39C30(a1);
  v2 = *(_QWORD *)(a1 + 88);
  if ( !v2 )
  {
    if ( (debug & 0x400000) != 0 )
    {
      v32 = sub_34340(a1);
      v37 = src;
      if ( v32[1] )
        v37 = (const char *)*v32;
      sub_88B80((unsigned int)"Error subroutine DIE %s resolving return type\n", (_DWORD)v37, v33, v34, v35, v36);
    }
    return 5;
  }
  if ( *(_BYTE *)(v2 + 142) == 5 )
  {
    if ( (debug & 0x400000) != 0 )
    {
      v24 = sub_34340(v2);
      v25 = src;
      if ( v24[1] )
        v25 = (const char *)*v24;
      v26 = sub_34340(a1);
      v30 = src;
      if ( v26[1] )
        v30 = (const char *)*v26;
      sub_88B80(
        (unsigned int)"Error subroutine DIE %s dependency DIE %s processing error\n",
        (_DWORD)v30,
        (_DWORD)v25,
        v27,
        v28,
        v29);
    }
    return 5;
  }
  v41[0] = 0x4E7B30A9EA4DB41LL;
  sub_349E0(a1, v41);
  v3 = *(_QWORD *)(a1 + 80);
  v4 = *(_QWORD *)(a1 + 104);
  v39 = 0;
  v5 = (__int64 *)&v40;
  v6 = *(_QWORD **)(v3 + 144);
  v7 = v6[11];
  for ( i = (*(__int64 (__fastcall **)(__int64, __int64 **, __int64 *))(v7 + 32))(v4, &v40, &v39);
        !i;
        i = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _QWORD, __int64 **, __int64 *))(v7 + 24))(
              v6[20],
              v40,
              *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL) >> 63,
              &v40,
              &v39) )
  {
    v9 = sub_290B0((__int64)v6, *(_QWORD *)(a1 + 80), (__int64)v40);
    if ( v9 == 5 )
    {
      v10 = sub_28270(*(_QWORD *)(a1 + 80), (__int64)v40, 0);
      v41[0] = v10;
      v41[1] = v11;
      if ( (v10 & 0x7FFFFFFFFFFFFFFFLL) != 0 && v10 != -1 )
      {
        v12 = sub_39BA0(v6[18] + 72LL, (__int64)v41);
        if ( v12 != v6[18] + 80LL )
        {
          v13 = *(_QWORD *)(v12 + 48);
          v14 = *(_QWORD *)(a1 + 152);
          v15 = *(_QWORD *)(a1 + 144);
          if ( *(_QWORD *)(a1 + 160) < (unsigned __int64)(v14 + 1) )
          {
            v38 = v13;
            v31 = qvector_reserve(a1 + 144, v15, v14 + 1, 8);
            v13 = v38;
            *(_QWORD *)(a1 + 144) = v31;
            v15 = v31;
            v14 = *(_QWORD *)(a1 + 152);
          }
          *(_QWORD *)(v15 + 8 * v14) = v13;
          ++*(_QWORD *)(a1 + 152);
        }
      }
    }
    else if ( v9 == 24 )
    {
      *(_DWORD *)(a1 + 168) = 64;
    }
    v5 = v40;
  }
  v16 = 0;
  if ( i != -1 )
  {
    if ( (debug & 0x400000) != 0 )
    {
      v18 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(v7 + 464))(v39, v5, 0);
      v19 = sub_34340(a1);
      v23 = src;
      if ( v19[1] )
        v23 = (const char *)*v19;
      sub_88B80((unsigned int)"Error subroutine DIE %s : Child enumeration : %s\n", (_DWORD)v23, v18, v20, v21, v22);
    }
    return 5;
  }
  return v16;
}
