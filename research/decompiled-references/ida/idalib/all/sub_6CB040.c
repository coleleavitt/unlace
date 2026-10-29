__int64 __fastcall sub_6CB040(__int64 *a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  unsigned __int64 i; // rax
  __int64 v9; // rsi
  __int64 j; // r15
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  _QWORD *v13; // rbp
  __int64 v14; // rax
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rax
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  __int64 v19; // rsi
  unsigned __int8 v20; // al
  unsigned __int64 v21; // rsi
  unsigned __int8 v22; // bp
  unsigned __int64 v23; // rax
  __int64 v24; // rsi
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 result; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rsi
  _QWORD *v32; // [rsp+0h] [rbp-68h]
  unsigned __int64 v33; // [rsp+8h] [rbp-60h]
  __int64 v34; // [rsp+10h] [rbp-58h]
  _QWORD v36[9]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(_QWORD **)(*a1 + 1672);
  v36[1] = __readfsqword(0x28u);
  v6 = sub_3BDD60(v4, a2);
  v7 = *a1;
  v36[0] = v6;
  v34 = sub_7BEB80(v36, v7, 109);
  for ( i = sub_6CAD10(a1, a2, v34); ; i = sub_6CAD10(a1, a2, v34) )
  {
    v9 = *a1;
    v36[0] = i;
    for ( j = sub_7BEB80(v36, v9, 69); ; j = sub_7BEBF0(v36, v17, j, 69) )
    {
      v11 = sub_6CAD10(a1, a2, v34);
      v12 = *a1;
      v36[0] = v11;
      v13 = *(_QWORD **)(v12 + 1672);
      v14 = sub_7BE710(v36, v12, j, 69);
      v15 = sub_3BDE50(v13, v14 - 1);
      if ( v15 != -1 )
      {
        v18 = sub_3BDD60(*(_QWORD **)(*a1 + 1672), v15);
        v19 = *a1;
        v36[0] = v18;
        v20 = sub_7BE710(v36, v19, -7, 65);
        v21 = v15;
        v22 = v20;
        while ( v21 != -1 )
        {
          result = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)a3 + 16LL))(a3, v21, j);
          if ( (_DWORD)result )
            return result;
          v23 = sub_3BDD60(*(_QWORD **)(*a1 + 1672), v15);
          v24 = *a1;
          v36[0] = v23;
          v25 = sub_7BEBF0(v36, v24, v22, 115);
          if ( v25 > 0xFF )
            break;
          v33 = v25;
          v22 = v25;
          v32 = *(_QWORD **)(*a1 + 1672);
          v26 = sub_3BDD60(v32, v15);
          v27 = *a1;
          v36[0] = v26;
          v28 = sub_7BE710(v36, v27, v33, 115);
          v21 = sub_3BDE50(v32, v28 - 1);
        }
      }
      if ( j == -1 )
        break;
      v16 = sub_6CAD10(a1, a2, v34);
      v17 = *a1;
      v36[0] = v16;
    }
    if ( v34 == -1 )
      break;
    v30 = sub_3BDD60(*(_QWORD **)(*a1 + 1672), a2);
    v31 = *a1;
    v36[0] = v30;
    v34 = sub_7BEBF0(v36, v31, v34, 109);
  }
  return 0;
}
