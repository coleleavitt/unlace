__int64 __fastcall sub_202EDF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // rax
  unsigned __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbp
  __int64 result; // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+0h] [rbp-28h]

  v6 = a2;
  v7 = *(_QWORD *)(a1 + 48);
  if ( v7 )
  {
    v8 = *(_QWORD *)(a1 + 16);
    if ( !*(_DWORD *)(a1 + 44) || v8 )
    {
      v9 = *(_QWORD *)(a1 + 24) - v8;
    }
    else
    {
      v23 = sub_227AEC0();
      v7 = *(_QWORD *)(a1 + 48);
      v9 = v23;
    }
    v10 = *(_QWORD *)(v7 + 32);
    v11 = *(_QWORD *)(v7 + 16);
    if ( !v9 )
    {
      if ( v11 != v10 )
        sub_227B9F0(v7, a2, v11, a4, a5, a6, v24);
      a2 = 0;
      sub_227B8B0(v7, 0, 0, 0);
      *(_QWORD *)(a1 + 48) = v6;
      v12 = *(_QWORD *)(v6 + 16);
      if ( !*(_DWORD *)(v6 + 44) )
        goto LABEL_9;
      goto LABEL_20;
    }
    if ( v11 != v10 )
      sub_227B9F0(v7, a2, v11, a4, a5, a6, v24);
    a2 = operator new[](v9);
    sub_227B8B0(v7, a2, v9, 1);
  }
  *(_QWORD *)(a1 + 48) = v6;
  v12 = *(_QWORD *)(v6 + 16);
  if ( !*(_DWORD *)(v6 + 44) )
  {
LABEL_9:
    v13 = *(_QWORD *)(v6 + 24) - v12;
    goto LABEL_10;
  }
LABEL_20:
  if ( v12 )
    goto LABEL_9;
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 88LL))(v6);
LABEL_10:
  v14 = *(_QWORD *)(a1 + 32);
  v15 = *(_QWORD *)(a1 + 16);
  if ( v13 )
  {
    if ( v14 != v15 )
      sub_227B9F0(a1, a2, v14, a4, a5, a6, v24);
    v16 = operator new[](v13);
    sub_227B8B0(a1, v16, v13, 1);
  }
  else
  {
    if ( v14 != v15 )
      sub_227B9F0(a1, a2, v14, a4, a5, a6, v24);
    v16 = 0;
    sub_227B8B0(a1, 0, 0, 0);
  }
  v21 = *(_QWORD *)(a1 + 48);
  if ( *(_QWORD *)(v21 + 32) != *(_QWORD *)(v21 + 16) )
    sub_227B9F0(*(_QWORD *)(a1 + 48), v16, v17, v18, v19, v20, v24);
  sub_227B8B0(v21, 0, 0, 0);
  result = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 40LL);
  *(_QWORD *)(a1 + 64) = 0;
  *(_BYTE *)(a1 + 40) = result;
  return result;
}
