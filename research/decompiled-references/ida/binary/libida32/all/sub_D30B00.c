__int64 __fastcall sub_D30B00(__int64 a1, int a2, char a3, _QWORD *a4)
{
  unsigned int v5; // ebx
  __int64 result; // rax
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rbp
  _BYTE *v13; // rax
  __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // rbx
  __int64 v17; // rbp
  _WORD *v18; // rax
  __int64 v19; // r13
  __int64 v20; // r14
  __int64 v21; // rbx
  __int64 v22; // rbp
  _DWORD *v23; // rax
  __int64 v24; // r13
  __int64 v25; // r14
  __int64 v26; // rbx
  __int64 v27; // rbp
  _QWORD *v28; // rax
  __int64 v29; // r13
  __int64 v30; // r14
  __int64 v31; // r13
  __int64 v32; // r14
  __int64 v33; // r12
  __int64 v34; // r13

  v5 = 1;
  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v9 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a4;
      v10 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
      v5 = sub_DA8420(a1 + 384, v9, v10, 3);
      if ( !(_BYTE)v5 )
        goto LABEL_3;
      return sub_D154A0(a1 + 384, v9, v10, a3);
    case 1:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v11 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a4;
      v12 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
      v5 = sub_DA8420(a1 + 384, v11, v12, 3);
      if ( !(_BYTE)v5 || !(unsigned __int8)sub_DFDF30(a1 + 384) && (unsigned __int8)sub_DA3FF0(v12) )
        goto LABEL_45;
      v13 = (_BYTE *)sub_CE8AA0(v12);
      ++*v13;
      goto LABEL_3;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v14 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a4;
      v15 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
      v5 = sub_DA8420(a1 + 384, v14, v15, 3);
      if ( !(_BYTE)v5 )
        goto LABEL_3;
      return sub_D15710(a1 + 384, v14, v15, a3);
    case 3:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v16 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a4;
      v17 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
      v5 = sub_DA8420(a1 + 384, v16, v17, 3);
      if ( !(_BYTE)v5 || !(unsigned __int8)sub_DFDF30(a1 + 384) && (unsigned __int8)sub_DA3FF0(v17) )
        goto LABEL_45;
      v18 = (_WORD *)sub_CE90A0(v17);
      ++*v18;
      goto LABEL_3;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v19 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a4;
      v20 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
      v5 = sub_DA8420(a1 + 384, v19, v20, 3);
      if ( !(_BYTE)v5 )
        goto LABEL_3;
      return sub_D15980(a1 + 384, v19, v20, a3);
    case 5:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v21 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a4;
      v22 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
      v5 = sub_DA8420(a1 + 384, v21, v22, 3);
      if ( !(_BYTE)v5 || !(unsigned __int8)sub_DFDF30(a1 + 384) && (unsigned __int8)sub_DA3FF0(v22) )
        goto LABEL_45;
      v23 = (_DWORD *)sub_CE96A0(v22);
      ++*v23;
      goto LABEL_3;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v24 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a4;
      v25 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
      v5 = sub_DA8420(a1 + 384, v24, v25, 3);
      if ( !(_BYTE)v5 )
        goto LABEL_3;
      return sub_D15BF0(a1 + 384, v24, v25, a3);
    case 7:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v26 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a4;
      v27 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
      v5 = sub_DA8420(a1 + 384, v26, v27, 3);
      if ( (_BYTE)v5 && ((unsigned __int8)sub_DFDF30(a1 + 384) || !(unsigned __int8)sub_DA3FF0(v27)) )
      {
        v28 = (_QWORD *)sub_CE9E90(v27);
        ++*v28;
      }
      else
      {
LABEL_45:
        v5 = 0;
      }
LABEL_3:
      result = v5;
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v29 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a4;
      v30 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
      v5 = sub_DA8420(a1 + 384, v29, v30, 3);
      if ( !(_BYTE)v5 )
        goto LABEL_3;
      result = sub_D2F110(a1 + 384, v29, v30, a3);
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v31 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a4;
      v32 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
      v5 = sub_DA8420(a1 + 384, v31, v32, 3);
      if ( !(_BYTE)v5 )
        goto LABEL_3;
      result = sub_D30750(a1 + 384, v31, v32, a3);
      break;
    case 10:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v33 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a4;
      v34 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
      v5 = sub_DA8420(a1 + 384, v33, v34, 3);
      if ( !(_BYTE)v5 )
        goto LABEL_3;
      result = sub_CEAC80(a1 + 384, v33, v34);
      break;
    case 11:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v7 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a4;
      v8 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
      v5 = sub_DA8420(a1 + 384, v7, v8, 3);
      if ( !(_BYTE)v5 )
        goto LABEL_3;
      result = sub_D15E70(a1 + 384, v7, v8, a3);
      break;
  }
  return result;
}

