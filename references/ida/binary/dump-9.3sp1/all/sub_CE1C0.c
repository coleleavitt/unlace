unsigned __int64 __fastcall sub_CE1C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rbp
  int v10; // eax
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbp
  int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // rdx
  int v18; // r12d
  _DWORD *v19; // rcx
  _DWORD *v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  _QWORD v25[5]; // [rsp+0h] [rbp-218h] BYREF
  char v26; // [rsp+28h] [rbp-1F0h]
  __int64 v27[55]; // [rsp+30h] [rbp-1E8h] BYREF
  unsigned __int64 v28; // [rsp+1E8h] [rbp-30h]

  v28 = __readfsqword(0x28u);
  v26 = 0;
  memset(&v25[1], 0, 32);
  v25[0] = &off_4DC018;
  ((void (__fastcall *)(__int64, _QWORD *, __int64, __int64, __int64, __int64))sub_11FBB0)(a1, v25, a3, a4, a5, a6);
  v6 = *(unsigned int *)(a1 + 64);
  v7 = 8;
  v8 = 1;
  if ( (int)v6 > 1 )
  {
    while ( 1 )
    {
      ++v8;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 528) + v7) + 24LL) |= 1u;
      v6 = *(unsigned int *)(a1 + 64);
      if ( (int)v6 <= v8 )
        break;
      v7 += 8;
      if ( v8 >= (unsigned int)v6 )
      {
LABEL_25:
        if ( !under_debugger )
          sub_383060(52719);
        BUG();
      }
    }
  }
  v9 = 0;
  if ( (int)v6 > 0 )
  {
    while ( 1 )
    {
      sub_BB6B0(*(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v9), (__int64)v25, v6, v7);
      v10 = *(_DWORD *)(a1 + 64);
      v6 = (unsigned int)(v9 + 1);
      if ( v10 <= (int)v6 )
        break;
      if ( (unsigned int)++v9 >= v10 )
        goto LABEL_25;
    }
  }
  v11 = 0;
  sub_1D4FD0(a1);
  sub_670E0((_QWORD *)a1, (__int64)v25, v12, v13);
  sub_C3040((__int64)v27, a1);
  if ( *(int *)(a1 + 64) > 0 )
  {
    do
    {
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v11);
      sub_CD690(v14);
      if ( (*(_BYTE *)(v14 + 24) & 1) != 0 || *(_DWORD *)(a1 + 64) == 1 )
        sub_BC900((_QWORD *)v14, v27);
      if ( *(_DWORD *)(v14 + 76) == 4 )
      {
        v15 = sub_330DE0(v14);
        v16 = *(_QWORD *)(v14 + 704);
        v17 = *(_QWORD *)(v14 + 712);
        v18 = v15 - 1;
        v19 = (_DWORD *)(v16 + 4 * v17);
        if ( (_DWORD *)v16 == v19 )
          goto LABEL_20;
        v20 = *(_DWORD **)(v14 + 704);
        while ( v18 != *v20 )
        {
          if ( v19 == ++v20 )
            goto LABEL_20;
        }
        if ( v19 == v20 )
        {
LABEL_20:
          v21 = v17 + 1;
          if ( *(_QWORD *)(v14 + 720) < v21 )
          {
            v23 = qvector_reserve(v14 + 704, v16, v21, 4);
            v24 = *(_QWORD *)(v14 + 712);
            *(_QWORD *)(v14 + 704) = v23;
            v19 = (_DWORD *)(v23 + 4 * v24);
          }
          *v19 = v18;
          ++*(_QWORD *)(v14 + 712);
        }
      }
      sub_BB9E0(v14);
      ++v11;
    }
    while ( *(_DWORD *)(a1 + 64) > (int)v11 );
  }
  sub_C2850(v27);
  return v28 - __readfsqword(0x28u);
}
