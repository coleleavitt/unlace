__int64 __fastcall sub_209470(_QWORD *a1, unsigned __int64 a2, __int64 a3, unsigned __int8 a4)
{
  int v5; // eax
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // r15d
  __int64 v10; // r13
  __int64 v11; // r12
  _QWORD *v12; // rax
  unsigned __int64 v13; // rsi
  int v14; // eax
  __int64 v15; // rax
  __int64 result; // rax
  bool v17; // dl
  int v18; // eax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // [rsp+8h] [rbp-98h]
  unsigned int v23; // [rsp+8h] [rbp-98h]
  __int64 *v24; // [rsp+10h] [rbp-90h]
  unsigned int v27; // [rsp+28h] [rbp-78h]
  __m128i v28; // [rsp+30h] [rbp-70h] BYREF
  int v29; // [rsp+40h] [rbp-60h]
  int v30; // [rsp+44h] [rbp-5Ch]
  __int64 v31[10]; // [rsp+50h] [rbp-50h] BYREF

  v31[3] = __readfsqword(0x28u);
  v5 = sub_1C2F40(*(_DWORD **)(a2 + 8));
  v6 = v5;
  if ( v5 != -1 )
  {
    v18 = sub_1C3000(*(_DWORD **)(a2 + 8), *(_DWORD *)(a2 + 4));
    if ( (unsigned __int8)sub_1EFD70(a1[1], v6, v18 - (int)v6) )
      return 1;
  }
  v7 = a1[1];
  v8 = *(int *)(a1[9] + 44LL);
  v9 = *(_DWORD *)(a1[9] + 44LL);
  v10 = 104 * v8;
  v11 = 104 * v8 + *(_QWORD *)(v7 + 432);
  if ( (!*(_BYTE *)(v7 + 320) || (*(_BYTE *)(v11 + 25) & 1) == 0)
    && (unsigned __int8)sub_1C3800(
                          *(int **)(a2 + 8),
                          *(_DWORD *)(a2 + 4),
                          104 * v8 + *(_QWORD *)(v7 + 432),
                          *(_DWORD *)(v11 + 88),
                          &v28) )
  {
    if ( v30 )
    {
      if ( !under_debugger )
        sub_3835A0(52867);
      BUG();
    }
    v12 = sub_1FC0D0(*(_QWORD ***)(a1[1] + 800LL), a2);
    if ( v12 )
    {
      v13 = *((int *)v12 + 4);
      v14 = *(_DWORD *)(*(_QWORD *)(a1[1] + 432LL) + 104 * v13 + 24);
      if ( (v14 & 0x2000000) != 0 && (v14 & 0x400) == 0 )
        goto LABEL_9;
      return 1;
    }
    if ( *(_DWORD *)(v11 + 92) && a4 || (unsigned __int8)sub_206F80(a1, a2, -1, a4) )
    {
      v19 = *(_QWORD *)(a2 + 8);
      v24 = (__int64 *)(a1[1] + 432LL);
      v20 = *(_QWORD *)(v11 + 16);
      LODWORD(v31[0]) = 0;
      v22 = v20;
      copy_argloc(v31, v19);
      v31[2] = v22;
      v23 = sub_1F0900(v24, (__int64)v31);
      cleanup_argloc(v31);
      v13 = v23;
      if ( v23 != -1 && *(_DWORD *)(a1[9] + 44LL) != v23 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(a1[1] + 432LL) + 104LL * (int)v23 + 88) >= *(_DWORD *)(a2 + 4) )
          goto LABEL_9;
        *(_QWORD *)(v11 + 16) = *(_QWORD *)(a1[4] + 24LL) + a4;
      }
      LODWORD(v31[0]) = 0;
      copy_argloc(v31, v11);
      copy_argloc(v11, *(_QWORD *)(a2 + 8));
      if ( !sub_1EFCB0(v11, *(_QWORD *)(a1[1] + 1504LL), (_QWORD *)(*(_QWORD *)(a2 + 8) + 48LL), 1) )
      {
        copy_argloc(v11, v31);
        cleanup_argloc(v31);
        goto LABEL_14;
      }
      v21 = *(_QWORD *)(a1[1] + 432LL) + v10;
      *(_DWORD *)(v21 + 24) |= 0x2000000u;
      cleanup_argloc(v31);
      v13 = v9;
LABEL_9:
      sub_2076F0((__int64)a1, (_QWORD *)v13, v29);
      v15 = *(_QWORD *)(a2 + 8);
      v31[0] = 0;
      copy_tinfo_t(v31, v15 + 48);
      v27 = sub_208DA0(a2, *(int *)(a1[9] + 44LL), a3, *(__m128i **)(*(_QWORD *)(a3 + 8) + 800LL), a4, 0, v31);
      clear_tinfo_t(v31);
      return v27;
    }
  }
LABEL_14:
  v17 = sub_206E40((__int64)a1, (_BYTE *)a2, a3, 0);
  result = 3;
  if ( !v17 )
  {
    sub_1F4970(a1[1], -1, v11);
    *(_DWORD *)(v11 + 24) |= 0x400u;
    return 1;
  }
  return result;
}
