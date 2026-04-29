unsigned __int64 __fastcall sub_C9D00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // edx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rbp
  int v10; // eax
  __int64 v11; // r13
  __int64 v12; // rbp
  int v13; // eax
  _DWORD *v14; // rsi
  __int64 v15; // rdx
  int v16; // r12d
  _DWORD *v17; // rcx
  _DWORD *v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  _QWORD v23[5]; // [rsp+0h] [rbp-218h] BYREF
  char v24; // [rsp+28h] [rbp-1F0h]
  _QWORD v25[55]; // [rsp+30h] [rbp-1E8h] BYREF
  unsigned __int64 v26; // [rsp+1E8h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  v24 = 0;
  memset(&v23[1], 0, 32);
  v23[0] = &off_4AEA98;
  ((void (__fastcall *)(__int64, _QWORD *, __int64, __int64, __int64, __int64))sub_11B6F0)(a1, v23, a3, a4, a5, a6);
  v6 = *(_DWORD *)(a1 + 64);
  v7 = 8;
  v8 = 1;
  if ( v6 > 1 )
  {
    while ( 1 )
    {
      ++v8;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 528) + v7) + 24LL) |= 1u;
      v6 = *(_DWORD *)(a1 + 64);
      if ( v6 <= v8 )
        break;
      v7 += 8;
      if ( v8 >= (unsigned int)v6 )
      {
LABEL_25:
        if ( !under_debugger )
          sub_37DDE0(52719);
        BUG();
      }
    }
  }
  v9 = 0;
  if ( v6 > 0 )
  {
    while ( 1 )
    {
      sub_B71F0(*(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v9));
      v10 = *(_DWORD *)(a1 + 64);
      if ( v10 <= (int)v9 + 1 )
        break;
      if ( (unsigned int)++v9 >= v10 )
        goto LABEL_25;
    }
  }
  v11 = 0;
  sub_1D0990(a1);
  sub_62D60((_QWORD *)a1);
  sub_BEB80((__int64)v25, a1);
  if ( *(int *)(a1 + 64) > 0 )
  {
    do
    {
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v11);
      sub_C91D0(v12);
      if ( (*(_BYTE *)(v12 + 24) & 1) != 0 || *(_DWORD *)(a1 + 64) == 1 )
        sub_B8440((_QWORD *)v12, v25);
      if ( *(_DWORD *)(v12 + 76) == 4 )
      {
        v13 = sub_32BA00(v12);
        v14 = *(_DWORD **)(v12 + 704);
        v15 = *(_QWORD *)(v12 + 712);
        v16 = v13 - 1;
        v17 = &v14[v15];
        if ( v14 == v17 )
          goto LABEL_20;
        v18 = *(_DWORD **)(v12 + 704);
        while ( v16 != *v18 )
        {
          if ( v17 == ++v18 )
            goto LABEL_20;
        }
        if ( v17 == v18 )
        {
LABEL_20:
          v19 = v15 + 1;
          if ( *(_QWORD *)(v12 + 720) < v19 )
          {
            v21 = qvector_reserve(v12 + 704, v14, v19, 4);
            v22 = *(_QWORD *)(v12 + 712);
            *(_QWORD *)(v12 + 704) = v21;
            v17 = (_DWORD *)(v21 + 4 * v22);
          }
          *v17 = v16;
          ++*(_QWORD *)(v12 + 712);
        }
      }
      sub_B7520(v12);
      ++v11;
    }
    while ( *(_DWORD *)(a1 + 64) > (int)v11 );
  }
  sub_BE390(v25);
  return v26 - __readfsqword(0x28u);
}
