__int64 __fastcall sub_ACD0B0(__int64 a1, __int64 a2, char a3, __int64 *a4, __int64 *a5)
{
  __int64 v8; // r13
  __int64 v9; // rax
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // rsi
  unsigned int v13; // r12d
  unsigned __int8 v14; // r15
  __int64 v15; // rbx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  _DWORD *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // [rsp+0h] [rbp-B8h]
  __int64 v23; // [rsp+10h] [rbp-A8h]
  char v24; // [rsp+1Eh] [rbp-9Ah]
  char v25; // [rsp+1Fh] [rbp-99h]
  char v26; // [rsp+2Fh] [rbp-89h] BYREF
  __int64 v27; // [rsp+30h] [rbp-88h] BYREF
  __int64 v28; // [rsp+38h] [rbp-80h]
  _QWORD v29[2]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v30[2]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v31[2]; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v32[9]; // [rsp+70h] [rbp-48h] BYREF

  if ( *(_WORD *)(a2 + 4) )
    return 0;
  if ( a3 )
  {
    if ( (unsigned __int8)sub_1392640(a1 + 16) )
      return (unsigned int)sub_ACCD70(a1, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), a4, a5, v31);
    return 0;
  }
  v8 = a1 + 16;
  if ( !(unsigned __int8)sub_1392640(a1 + 16) )
    return 0;
  v9 = *(_QWORD *)(a1 + 8);
  v27 = 0;
  v28 = v9;
  v10 = sub_13925E0(v8, a2);
  v11 = *(_QWORD *)(a2 + 40);
  v12 = *(_QWORD *)(a2 + 32);
  v24 = v10;
  v26 = 0;
  v13 = sub_ACCD70(a1, v12, v11, a4, &v27, &v26);
  if ( !(_BYTE)v13 )
  {
    sub_AC6F60(v27, v28);
    return 0;
  }
  v25 = v26;
  v22 = sub_15D1F10(v27);
  v23 = *(_QWORD *)(a1 + 8);
  v14 = sub_1673B10(a1 + 368, v22);
  if ( v14 )
  {
    v31[0] = 1;
    v31[1] = 0;
    v32[0] = 1;
    v32[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v32);
    LODWORD(v32[0]) = 1;
    BYTE4(v32[0]) &= ~1u;
    v15 = sub_16746C0(a1 + 368, v31, v22);
    sub_25A130((char *)v31);
  }
  else
  {
    v29[0] = 1;
    v29[1] = 0;
    v30[0] = 1;
    v30[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v30);
    BYTE4(v30[0]) &= ~1u;
    LODWORD(v30[0]) = 1;
    v20 = *(_DWORD **)(v22 + 24);
    if ( v20 && *v20 == 5 )
      v14 = v20[1] == 1;
    v21 = *(_QWORD *)(a1 + 360);
    if ( !v21 )
    {
      sub_16669E0(a1 + 352);
      v21 = *(_QWORD *)(a1 + 360);
    }
    v15 = sub_166A700(v21, (unsigned int)v29, v14, v17, v18, v19);
    sub_25A130((char *)v29);
  }
  if ( v15 )
    ++*(_DWORD *)(v15 + 8);
  if ( v25 == v24 )
    sub_13928E0(v8, v27, v15, a5);
  else
    sub_1392960(v8, v27, v15, a5);
  sub_AC6F60(v15, v23);
  sub_AC6F60(v27, v28);
  return v13;
}

