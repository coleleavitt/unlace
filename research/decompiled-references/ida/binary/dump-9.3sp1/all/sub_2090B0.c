__int64 __fastcall sub_2090B0(_QWORD *a1, unsigned __int64 a2, __int64 a3, unsigned __int8 a4)
{
  int v5; // eax
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // r15d
  __int64 v10; // r13
  __int64 v11; // r12
  _QWORD *v12; // rax
  int v13; // r8d
  int v14; // r9d
  unsigned __int64 v15; // rsi
  int v16; // eax
  __int64 result; // rax
  bool v18; // dl
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // [rsp+8h] [rbp-98h]
  unsigned int v23; // [rsp+8h] [rbp-98h]
  __int64 *v24; // [rsp+10h] [rbp-90h]
  unsigned int v27; // [rsp+28h] [rbp-78h]
  __m128i v28; // [rsp+30h] [rbp-70h] BYREF
  int v29; // [rsp+40h] [rbp-60h]
  int v30; // [rsp+44h] [rbp-5Ch]
  _QWORD v31[10]; // [rsp+50h] [rbp-50h] BYREF

  v31[3] = __readfsqword(0x28u);
  v5 = sub_1C3500(*(_DWORD **)(a2 + 8));
  v6 = v5;
  if ( v5 != -1 )
  {
    v19 = sub_1C35C0(*(_DWORD **)(a2 + 8), *(_DWORD *)(a2 + 4));
    if ( (unsigned __int8)sub_1EF9B0(a1[1], v6, v19 - (int)v6) )
      return 1;
  }
  v7 = a1[1];
  v8 = *(int *)(a1[9] + 44LL);
  v9 = *(_DWORD *)(a1[9] + 44LL);
  v10 = 104 * v8;
  v11 = 104 * v8 + *(_QWORD *)(v7 + 432);
  if ( (!*(_BYTE *)(v7 + 320) || (*(_BYTE *)(v11 + 25) & 1) == 0)
    && (unsigned __int8)sub_1C3DC0(
                          *(int **)(a2 + 8),
                          *(_DWORD *)(a2 + 4),
                          104 * v8 + *(_QWORD *)(v7 + 432),
                          *(_DWORD *)(v11 + 88),
                          &v28) )
  {
    if ( v30 )
    {
      if ( !under_debugger )
        sub_383060(52867);
      BUG();
    }
    v12 = sub_1FBD10(*(_QWORD ***)(a1[1] + 800LL), a2);
    if ( v12 )
    {
      v15 = *((int *)v12 + 4);
      v16 = *(_DWORD *)(*(_QWORD *)(a1[1] + 432LL) + 104 * v15 + 24);
      if ( (v16 & 0x2000000) != 0 && (v16 & 0x400) == 0 )
        goto LABEL_9;
      return 1;
    }
    if ( *(_DWORD *)(v11 + 92) && a4 || (unsigned __int8)sub_206BC0(a1, a2, -1, a4, v13, v14) )
    {
      v24 = (__int64 *)(a1[1] + 432LL);
      v20 = *(_QWORD *)(v11 + 16);
      LODWORD(v31[0]) = 0;
      v22 = v20;
      copy_argloc();
      v31[2] = v22;
      v23 = sub_1F0540(v24, (__int64)v31);
      cleanup_argloc();
      v15 = v23;
      if ( v23 != -1 && *(_DWORD *)(a1[9] + 44LL) != v23 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(a1[1] + 432LL) + 104LL * (int)v23 + 88) >= *(_DWORD *)(a2 + 4) )
          goto LABEL_9;
        *(_QWORD *)(v11 + 16) = *(_QWORD *)(a1[4] + 24LL) + a4;
      }
      LODWORD(v31[0]) = 0;
      copy_argloc();
      copy_argloc();
      if ( !sub_1EF8F0(v11, *(_QWORD *)(a1[1] + 1504LL), (_BYTE *)(*(_QWORD *)(a2 + 8) + 48LL), 1) )
      {
        copy_argloc();
        cleanup_argloc();
        goto LABEL_14;
      }
      v21 = *(_QWORD *)(a1[1] + 432LL) + v10;
      *(_DWORD *)(v21 + 24) |= 0x2000000u;
      cleanup_argloc();
      v15 = v9;
LABEL_9:
      sub_207330((__int64)a1, (_QWORD *)v15, v29);
      v31[0] = 0;
      copy_tinfo_t();
      v27 = sub_2089E0(a2, *(int *)(a1[9] + 44LL), a3, *(__m128i **)(*(_QWORD *)(a3 + 8) + 800LL), a4, 0, v31);
      clear_tinfo_t();
      return v27;
    }
  }
LABEL_14:
  v18 = sub_206A80((__int64)a1, (_BYTE *)a2, a3, 0);
  result = 3;
  if ( !v18 )
  {
    sub_1F45B0(a1[1], -1, v11);
    *(_DWORD *)(v11 + 24) |= 0x400u;
    return 1;
  }
  return result;
}
