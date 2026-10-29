unsigned __int64 __fastcall sub_9E0260(__int64 **a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  char *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // rdi
  char *v9; // r12
  __int64 v10; // rax
  _QWORD *v11; // rbx
  _BYTE *v12; // rbp
  __int64 v13; // r8
  __int64 v14; // r9
  _BYTE **v15; // rax
  _BYTE **v16; // rdx
  __int64 *v17; // rdi
  __int64 v18; // rax
  unsigned __int64 v19; // rsi

  v5 = (char *)sub_9DF520((__int64)a1, *(_QWORD *)(a2 + 16), a3, a4);
  v8 = *a1;
  v9 = v5;
  v10 = **a1;
  v8[10] += 32;
  v11 = (_QWORD *)((v10 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  if ( v8[1] >= (unsigned __int64)(v11 + 4) && v10 )
    *v8 = (__int64)(v11 + 4);
  else
    v11 = (_QWORD *)sub_986170((__int64)v8, 32, 32, 4, v6, v7);
  *v11 = 11;
  v11[1] = 0;
  v11[2] = v9;
  v11[3] = 0;
  v12 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 24) + 32LL))(*(_QWORD *)(a2 + 24));
  if ( (v12[28] & 0x7Fu) - 35 <= 3 )
  {
    while ( 1 )
    {
      v12 = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v12 + 32LL))(v12);
      v15 = (_BYTE **)sub_B98510(v12);
      if ( v15 == v16 )
        break;
      v12 = *v15;
    }
  }
  v17 = *a1;
  v18 = **a1;
  v17[10] += 72;
  v19 = (v18 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( v17[1] >= v19 + 72 && v18 )
    *v17 = v19 + 72;
  else
    v19 = sub_986170((__int64)v17, 72, 72, 4, v13, v14);
  *(_QWORD *)v19 = 12;
  *(_QWORD *)(v19 + 8) = 0;
  *(_QWORD *)(v19 + 16) = v11;
  *(_BYTE *)(v19 + 56) = 0;
  *(_QWORD *)(v19 + 64) = v12;
  if ( sub_9DCE80(v9) )
    *(_WORD *)(v19 + 2) = 1;
  return v19;
}
