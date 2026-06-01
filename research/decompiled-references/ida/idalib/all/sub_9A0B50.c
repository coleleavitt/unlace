__int64 __fastcall sub_9A0B50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r12
  int v12; // eax
  char v13; // bp
  __int64 *v14; // rbx
  __int64 v15; // rsi
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 result; // rax
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 *v23; // rsi
  __int64 v24; // rax
  _QWORD *v25; // rcx
  __int64 v26; // [rsp+8h] [rbp-60h]
  __int64 v28; // [rsp+18h] [rbp-50h]
  __int64 v29[8]; // [rsp+28h] [rbp-40h] BYREF

  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 )
  {
    if ( *(_BYTE *)(a1 + 320) )
      return 0;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 24);
  }
  v28 = *(_QWORD *)(a1 + 120);
  v11 = sub_999B20(a1, a2, a3, a4, a5, a6);
  *(_QWORD *)(v11 + 32) = a2 & 0xFFFFFFFFFFFFFFF9LL;
  v12 = *(_DWORD *)(a2 + 12);
  if ( v12 )
  {
    v13 = 0;
    v14 = (__int64 *)(a2 + 24);
    v26 = a2 + 8LL * (unsigned int)(v12 - 1) + 32;
    while ( 1 )
    {
      v15 = *v14;
      *(_QWORD *)(a1 + 24) = v6;
      v16 = *(_QWORD *)(v15 + 16) == 0;
      *(_QWORD *)(a1 + 16) = 0;
      if ( v16 )
        v13 = 1;
      v17 = sub_9A0A00(a1, v15, v7, v8, v9, v10);
      if ( !v17 )
        return 0;
      ++v14;
      sub_9999E0(v11, v17, 0, (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL), v18, v19);
      if ( (__int64 *)v26 == v14 )
      {
        if ( !v13 )
          break;
        goto LABEL_11;
      }
    }
  }
  v24 = *(_QWORD *)(a1 + 8);
  v25 = (_QWORD *)(v24 + 32);
  if ( v28 )
    sub_9999E0(v11, v28, 0, v25, v9, v10);
  else
    sub_999860(v11, *(_QWORD *)(v24 + 8), 2LL * (*(_QWORD *)(v24 + 8) == 0), v25, v9, v10);
LABEL_11:
  v21 = *(_QWORD *)(a1 + 8);
  v22 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 24) = v6;
  *(_QWORD *)(a1 + 120) = v11;
  v29[0] = v11;
  v23 = *(__int64 **)(v21 + 72);
  if ( v23 == *(__int64 **)(v21 + 80) )
  {
    sub_9981B0(v21 + 64, v23, v29);
  }
  else
  {
    *v23 = v11;
    *(_QWORD *)(v21 + 72) = v23 + 1;
  }
  *(_QWORD *)(a1 + 16) = 0;
  result = sub_99D480(a1, *(_QWORD *)(a2 + 16), 1, 0, v9, v10);
  *(_QWORD *)(a1 + 120) = v22;
  return result;
}
