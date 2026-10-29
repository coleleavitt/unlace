/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_38E20
// Address: 0x0000000000038E20

//----- (0000000000038E20) ----------------------------------------------------
__int64 __fastcall sub_38E20(unsigned __int64 a1, __int64 *a2, char a3, double a4)
{
  __int64 v4; // r12
  __int64 v5; // rbx
  unsigned __int64 v6; // r13
  __int64 v7; // rbp
  const char *v8; // rdi
  const char *v9; // rdi
  unsigned int v10; // ebx
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  int v16; // r12d
  __int64 v17; // r15
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v22; // [rsp+8h] [rbp-2060h]
  unsigned __int64 v23; // [rsp+10h] [rbp-2058h]
  __int16 v25; // [rsp+2Eh] [rbp-203Ah] BYREF
  _DWORD v26[2048]; // [rsp+30h] [rbp-2038h] BYREF
  unsigned __int64 v27; // [rsp+2030h] [rbp-38h]

  v27 = __readfsqword(0x28u);
  v4 = 80 * a2[1];
  if ( !v4 )
  {
LABEL_10:
    v9 = "Failed to find data segment of /system/bin/linker\n";
LABEL_11:
    v10 = 0;
    sub_390A0((int)v9);
    return v10;
  }
  v5 = *a2;
  v6 = -1;
  v7 = 0;
  while ( 1 )
  {
    v8 = s1;
    if ( *(_QWORD *)(v5 + v7 + 24) )
      v8 = *(const char **)(v5 + v7 + 16);
    if ( !strcmp(v8, "/system/bin/linker") )
    {
      if ( v6 == -1 )
        v6 = *(_QWORD *)(v5 + v7);
      if ( (*(_BYTE *)(v5 + v7 + 73) & 6) == 6 )
        break;
    }
    v7 += 80;
    if ( v4 == v7 )
      goto LABEL_10;
  }
  v12 = *(_QWORD *)(v5 + v7);
  v13 = *(_QWORD *)(v5 + v7 + 8) - v12;
  v14 = 0x2000;
  if ( v13 < 0x2000 )
    v14 = (int)v13;
  v10 = a1;
  v15 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64, _DWORD *, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
          a1,
          v12,
          v26,
          v14,
          0);
  if ( v15 < 24 )
  {
LABEL_32:
    v9 = "Failed to find r_debug in /system/bin/linker\n";
    goto LABEL_11;
  }
  v16 = v15 / 4 - 5;
  v17 = 0;
  while ( 1 )
  {
    if ( v26[v17] == 1 && (a3 || !v26[v17 + 1]) )
    {
      v18 = (unsigned int)v26[v17 + 2];
      if ( (v18 & 1) != 0 && v12 > v18 && (a3 || !v26[v17 + 3]) && !v26[v17 + 4] )
      {
        v19 = (unsigned int)v18 & 0xFFFFFFFE;
        v20 = v6;
        if ( v6 <= v19 )
          v20 = 0;
        v23 = v19 + v20;
        if ( (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64, __int16 *, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
               a1,
               v19 + v20,
               &v25,
               2,
               0) == 2
          && v25 == 18288 )
        {
          v22 = v23 + 1;
          if ( (unsigned int)sub_3D950(a1, 0xFFFFFFFF, v23 + 1, a1 + 872, 1, 0) == 1 )
          {
            if ( (*(unsigned int (__fastcall **)(unsigned __int64, _QWORD, __int64, unsigned __int64, __int64))(*(_QWORD *)a1 + 312LL))(
                   a1,
                   0,
                   4,
                   v22,
                   0xFFFFFFFFLL) )
            {
              break;
            }
          }
        }
      }
    }
    if ( (int)++v17 >= v16 )
      goto LABEL_32;
  }
  *(_QWORD *)(a1 + 864) = v22;
  *(_BYTE *)(a1 + 873) = 1;
  sub_391F0(a1, "found r_debug (r_brk=%a)\n", a4);
  LOBYTE(v10) = 1;
  return v10;
}
