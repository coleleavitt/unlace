__int64 __fastcall sub_114C80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rax
  __int64 v10; // r14
  int v11; // r9d
  __int64 v13; // rcx
  _DWORD *v14; // rax
  _DWORD *v15; // rax
  int v16; // r13d
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _DWORD *v21; // rax
  char v22; // al
  __int64 v23; // [rsp+8h] [rbp-70h]
  int v24; // [rsp+10h] [rbp-68h]
  int v25; // [rsp+10h] [rbp-68h]
  int v26; // [rsp+10h] [rbp-68h]
  __int64 v27; // [rsp+10h] [rbp-68h]
  int v28; // [rsp+1Ch] [rbp-5Ch]
  int v29; // [rsp+24h] [rbp-54h] BYREF
  __int64 v30; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v31[9]; // [rsp+30h] [rbp-48h] BYREF

  v31[1] = __readfsqword(0x28u);
  v30 = a3;
  v9 = sub_124F80(a2, a4, &v30, 0);
  if ( !v9 )
    return 0;
  v10 = v9;
  if ( (unsigned __int8)sub_A57F0(a2, a5, v30, a3) )
    return 0;
  if ( (unsigned int)(*(_DWORD *)v10 - 9) <= 1 )
  {
    if ( *(_BYTE *)(v10 + 32) != 4 )
      return 0;
    v10 = *(_QWORD *)(v10 + 40);
  }
  v23 = *(_QWORD *)(*(_QWORD *)(a2 + 480) + 112LL);
  if ( a6 != 2 || (v13 = sub_308740(v23, a2, &v30, v10)) == 0 )
  {
    v11 = log2ceil(a6);
    if ( *(_DWORD *)v10 == 23 )
    {
      v24 = v11;
      v16 = *(_DWORD *)(v10 + 36);
      if ( !(unsigned __int8)sub_14E170(v10, &v29) )
        return 0;
      v17 = v24;
      if ( v29 != 8 * v16 - v24 || *(_BYTE *)(v10 + 32) != 4 )
        return 0;
      if ( **(_DWORD **)(v10 + 40) == 24 && v24 > 1 )
      {
        v28 = v24;
        v27 = *(_QWORD *)(v10 + 40);
        v22 = sub_14E170(v27, v31);
        v17 = v28;
        if ( v22 )
        {
          if ( v28 - 1 <= SLODWORD(v31[0]) )
          {
            v13 = v27 + 32;
            goto LABEL_12;
          }
        }
      }
      v25 = v17;
      v18 = sub_3089C0(v23, a2, &v30);
      v11 = v25;
      v13 = v18;
    }
    else
    {
      if ( *(_DWORD *)v10 != 20 )
        goto LABEL_7;
      v26 = v11;
      v19 = sub_1183E0(v10, v31);
      if ( !v19 || a6 - 1 != sub_325910(*(_QWORD *)(*(_QWORD *)(v19 + 8) + 16LL), *(unsigned int *)(v19 + 4), 0) )
        return 0;
      if ( *(_BYTE *)v31[0] == 4 )
      {
        v21 = *(_DWORD **)(v31[0] + 8LL);
        if ( *v21 == 9 && 8 * v21[9] >= v26 )
          v31[0] = v21 + 8;
      }
      v20 = sub_308A10(v23, a2, &v30);
      v11 = v26;
      v13 = v20;
    }
    if ( v13 )
      goto LABEL_12;
LABEL_7:
    if ( 8 * *(_DWORD *)(v10 + 68) == v11 )
    {
      v13 = sub_3089C0(v23, a2, &v30);
      if ( v13 )
        goto LABEL_12;
    }
    return 0;
  }
LABEL_12:
  if ( !a1 )
    return sub_14E190(a5, v23, v13);
  if ( *(_BYTE *)a5 == 4 )
  {
    v15 = *(_DWORD **)(a5 + 8);
    if ( *v15 == 8 )
      LODWORD(a5) = (_DWORD)v15 + 32;
  }
  if ( *(_BYTE *)v13 == 4 )
  {
    v14 = *(_DWORD **)(v13 + 8);
    if ( *v14 == 8 )
      LODWORD(v13) = (_DWORD)v14 + 32;
  }
  return sub_14EA20(v23, a1, a5, v13, *(_QWORD *)(v10 + 24), a2, a3);
}
