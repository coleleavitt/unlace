unsigned __int64 __fastcall sub_EBDB60(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r13
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *v20; // rax
  __int64 *v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v27; // rbp
  _QWORD *v28; // rax
  __int64 v29; // r12
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 *v34; // r13
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax

  v6 = sub_A56850(a1[2], a2, a3, a4, a5, a6);
  if ( v6 != v7 )
  {
    v11 = v7;
    v12 = v6;
    do
    {
      v14 = sub_EB2840(*(__int64 **)(v12 + 16));
      v15 = sub_F3F530(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL));
      v20 = sub_EBA840(*a1, (char *)v15, v16, v17, v18, v19);
      a2 = *(_QWORD *)(v15 + 104);
      v21 = v20;
      sub_6E4DB0((__int64 *)(a2 + 96), a2, v22, v23, v24, v25);
      if ( (*(_BYTE *)(*(_QWORD *)(v15 + 128) + 1LL) & 2) != 0 )
        v13 = *v21;
      else
        v13 = *(_QWORD *)(v21[9] + 24);
      if ( v13 > a1[7] )
        a1[7] = v13;
      v12 += 24LL;
    }
    while ( v12 != v11 );
  }
  result = sub_B5ABC0(a1[2], a2, v7, v8, v9, v10);
  v27 = result;
  if ( result )
  {
LABEL_10:
    v28 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_A4D710(*a1, *(_QWORD *)(v27 + 48)) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                   & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*v28 + 16LL) == 48 )
    {
      v29 = sub_F3F530(*v28);
      v34 = sub_EBA840(*a1, (char *)v29, v30, v31, v32, v33);
      sub_6E4DB0((__int64 *)(*(_QWORD *)(v29 + 104) + 96LL), *(_QWORD *)(v29 + 104), v35, v36, v37, v38);
      if ( (*(_BYTE *)(*(_QWORD *)(v29 + 128) + 1LL) & 2) != 0 )
        v39 = *v34;
      else
        v39 = *(_QWORD *)(v34[9] + 24);
      if ( v39 > a1[7] )
        a1[7] = v39;
    }
    while ( 1 )
    {
      result = *(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v27 = result;
      if ( !result )
        break;
      if ( (*(_BYTE *)(result + 28) & 0x7Fu) - 49 <= 2 )
        goto LABEL_10;
    }
  }
  return result;
}

