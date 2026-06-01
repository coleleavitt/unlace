/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A9A0
// Address: 0x000000000003A9A0

//----- (000000000003A9A0) ----------------------------------------------------
__int64 __fastcall sub_3A9A0(_BOOL8 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int128 *v4; // rsi
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  char *v9; // rax
  __int64 v10; // rcx
  __int64 *v12; // rax
  __int128 v13; // [rsp+8h] [rbp-50h] BYREF
  __int64 v14; // [rsp+18h] [rbp-40h]
  __int128 v15; // [rsp+20h] [rbp-38h]
  __int64 v16; // [rsp+30h] [rbp-28h]
  unsigned __int64 v17; // [rsp+40h] [rbp-18h]

  v3 = a1;
  v17 = __readfsqword(0x28u);
  v4 = &v13;
  v5 = sub_36770(a1, (__int64)&v13);
  if ( v5 )
  {
    v12 = sub_3A270(v5);
    sub_3A5C0("%s: %s\n", "td_thr_get_info", (const char *)v12);
  }
  if ( ((unsigned int)v13 | 2) != 3 )
  {
    v6 = *(_QWORD *)(*a2 + 1040LL);
    if ( !v6 )
      goto LABEL_10;
    v4 = (__int128 *)(*a2 + 1040LL);
    do
    {
      a1 = *(_DWORD *)(v6 + 32) < (int)v14;
      if ( *(_DWORD *)(v6 + 32) >= (int)v14 )
        v4 = (__int128 *)v6;
      v6 = *(_QWORD *)(v6 + 8 * a1);
    }
    while ( v6 );
    if ( v4 == (__int128 *)(*a2 + 1040LL) || (int)v14 < *((_DWORD *)v4 + 8) )
    {
LABEL_10:
      sub_3A300(a1, (__int64)v4, v3);
      v7 = a2[1];
      v16 = v14;
      v15 = v13;
      v8 = *(_QWORD *)(v7 + 8);
      if ( *(_QWORD *)(v7 + 16) >= (unsigned __int64)(v8 + 1) )
      {
        v9 = *(char **)v7;
      }
      else
      {
        v9 = (char *)qvector_reserve(v7, *(char **)v7, v8 + 1, 0x18u);
        *(_QWORD *)v7 = v9;
        v8 = *(_QWORD *)(v7 + 8);
      }
      v10 = 3 * v8;
      *(_QWORD *)&v9[8 * v10 + 16] = v16;
      *(_OWORD *)&v9[8 * v10] = v15;
      ++*(_QWORD *)(v7 + 8);
    }
  }
  return 0;
}
