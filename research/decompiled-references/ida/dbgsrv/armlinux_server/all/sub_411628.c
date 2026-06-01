/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_411628
// Address: 0x0000000000411628

//----- (0000000000411628) ----------------------------------------------------
__int64 __fastcall sub_411628(__int64 a1)
{
  _QWORD *v2; // x22
  int v3; // w21
  __int64 v4; // x19
  __int64 v5; // x28
  unsigned int *v6; // x28
  __int64 v7; // x1
  __int64 v9; // x0
  _QWORD *v10; // x1
  int v11; // [xsp+6Ch] [xbp-194h] BYREF
  struct utsname v12; // [xsp+70h] [xbp-190h] BYREF

  v2 = (_QWORD *)(a1 + 1920);
  v3 = 0;
  sub_40B918(a1);
  ((void (__fastcall *)(__int64))loc_40B7F0)(a1);
  v4 = *(_QWORD *)(a1 + 1936);
  while ( v2 != (_QWORD *)v4 )
  {
    v6 = (unsigned int *)(v4 + 40);
    v7 = *(unsigned int *)(v4 + 40);
    if ( (_DWORD)v7 == *(_DWORD *)(a1 + 2044) )
      v3 = 1;
    if ( !*(_BYTE *)(a1 + 2055) )
      goto LABEL_2;
    if ( dword_51F740 < 0 )
    {
      dword_51F740 = 0;
      if ( !uname(&v12) )
      {
        v11 = 0;
        if ( sscanf(v12.release, "%d", &v11) == 1 && v11 <= 4 )
        {
          v7 = *v6;
          dword_51F740 = 1;
LABEL_9:
          if ( !ptrace(PTRACE_CONT, v7, 0, 0) )
          {
            sub_408610(*v6, 0x13u);
            v11 = 0;
            sub_417EA0(a1, &v11, *v6, 1000);
          }
          v7 = *v6;
          goto LABEL_2;
        }
      }
      v7 = *v6;
      if ( dword_51F740 )
        goto LABEL_9;
    }
    else if ( dword_51F740 )
    {
      goto LABEL_9;
    }
LABEL_2:
    v5 = ptrace(PTRACE_DETACH, v7, 0, 0);
    v4 = sub_49F6E8(v4);
    if ( v5 )
      return 0xFFFFFFFFLL;
  }
  if ( !v3 && ptrace(PTRACE_DETACH, *(unsigned int *)(a1 + 2044), 0, 0) )
    return 0xFFFFFFFFLL;
  v12.sysname[16] = 0;
  *(_QWORD *)v12.sysname = 0xFFFFFFFFLL;
  *(_QWORD *)&v12.sysname[8] = -1;
  memset(&v12.sysname[20], 0, 52);
  sub_482FB0((__int64)&v12, 0xCu);
  *(_DWORD *)v12.sysname = *(_DWORD *)(a1 + 2044);
  *(_DWORD *)&v12.sysname[4] = *(_DWORD *)v12.sysname;
  *(_QWORD *)&v12.sysname[8] = -1;
  v12.sysname[16] = 1;
  if ( (*(_DWORD *)&v12.sysname[20] & 0xFFFFFFF) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 168);
    if ( v9 == *(_QWORD *)(a1 + 184) - 72LL )
    {
      sub_411490((_QWORD *)(a1 + 120), (__int64)&v12);
    }
    else
    {
      *(_QWORD *)v9 = 0xFFFFFFFFLL;
      *(_QWORD *)(v9 + 8) = -1;
      *(_BYTE *)(v9 + 16) = 0;
      *(_DWORD *)(v9 + 20) = 0;
      sub_483128(v9, (__int64)&v12);
      *(_QWORD *)(a1 + 168) += 72LL;
    }
    *(_BYTE *)(a1 + 2116) = 0;
  }
  v10 = *(_QWORD **)(a1 + 1928);
  *(_BYTE *)(a1 + 2053) = 1;
  *(_BYTE *)(a1 + 2118) = 0;
  sub_40E6C0(a1 + 1912, v10);
  v2[1] = 0;
  v2[2] = v4;
  v2[3] = v4;
  v2[4] = 0;
  *(_DWORD *)(a1 + 2044) = -1;
  *(_BYTE *)(a1 + 2052) = 0;
  sub_482ED0((__int64)&v12);
  return 1;
}
// 51F740: using guessed type int dword_51F740;
