__int64 __fastcall sub_D5D8B0(__int64 a1, int a2, char a3, _QWORD *a4)
{
  __int64 v6; // r14
  __int64 v7; // rsi
  unsigned int v8; // ebx
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rsi
  _BYTE *v13; // rax
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // rsi
  _WORD *v18; // rax
  __int64 v19; // r14
  __int64 v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // rsi
  _DWORD *v23; // rax
  __int64 v24; // r14
  __int64 v25; // rsi
  __int64 v26; // rbx
  __int64 v27; // rsi
  _QWORD *v28; // rax
  __int64 v29; // r14
  __int64 v30; // rsi
  __int64 v31; // r14
  __int64 v32; // rsi
  __int64 v33; // r13
  __int64 v34; // rsi
  _BYTE v35[88]; // [rsp+0h] [rbp-58h] BYREF

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v9 = *(_QWORD *)(a1 + 1232);
      v10 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_D09010((__int64)v35, v10);
      v8 = sub_DCC160(a1 + 384, v9, v35, 4);
      if ( (_BYTE)v8 )
        v8 = sub_D36A20(a1 + 384, v9, (__int64)v35, a3);
      goto LABEL_45;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v11 = *(_QWORD *)(a1 + 1232);
      v12 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_D09010((__int64)v35, v12);
      v8 = sub_DCC160(a1 + 384, v11, v35, 4);
      if ( !(_BYTE)v8 || !(unsigned __int8)sub_E21C70(a1 + 384) && (unsigned __int8)sub_DC7D30(v35) )
        goto LABEL_46;
      v13 = (_BYTE *)sub_D0C7E0((__int64)v35);
      --*v13;
      goto LABEL_45;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v14 = *(_QWORD *)(a1 + 1232);
      v15 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_D09010((__int64)v35, v15);
      v8 = sub_DCC160(a1 + 384, v14, v35, 4);
      if ( (_BYTE)v8 )
        v8 = sub_D36C90(a1 + 384, v14, (__int64)v35, a3);
      goto LABEL_45;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v16 = *(_QWORD *)(a1 + 1232);
      v17 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_D09010((__int64)v35, v17);
      v8 = sub_DCC160(a1 + 384, v16, v35, 4);
      if ( !(_BYTE)v8 || !(unsigned __int8)sub_E21C70(a1 + 384) && (unsigned __int8)sub_DC7D30(v35) )
        goto LABEL_46;
      v18 = (_WORD *)sub_D0CDE0((__int64)v35);
      --*v18;
      goto LABEL_45;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v19 = *(_QWORD *)(a1 + 1232);
      v20 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_D09010((__int64)v35, v20);
      v8 = sub_DCC160(a1 + 384, v19, v35, 4);
      if ( (_BYTE)v8 )
        v8 = sub_D36F00(a1 + 384, v19, (__int64)v35, a3);
      goto LABEL_45;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v21 = *(_QWORD *)(a1 + 1232);
      v22 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_D09010((__int64)v35, v22);
      v8 = sub_DCC160(a1 + 384, v21, v35, 4);
      if ( !(_BYTE)v8 || !(unsigned __int8)sub_E21C70(a1 + 384) && (unsigned __int8)sub_DC7D30(v35) )
        goto LABEL_46;
      v23 = (_DWORD *)sub_D0D3E0((__int64)v35);
      --*v23;
      goto LABEL_45;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v24 = *(_QWORD *)(a1 + 1232);
      v25 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_D09010((__int64)v35, v25);
      v8 = sub_DCC160(a1 + 384, v24, v35, 4);
      if ( (_BYTE)v8 )
        v8 = sub_D37170(a1 + 384, v24, (__int64)v35, a3);
      goto LABEL_45;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v26 = *(_QWORD *)(a1 + 1232);
      v27 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_D09010((__int64)v35, v27);
      v8 = sub_DCC160(a1 + 384, v26, v35, 4);
      if ( (_BYTE)v8 && ((unsigned __int8)sub_E21C70(a1 + 384) || !(unsigned __int8)sub_DC7D30(v35)) )
      {
        v28 = (_QWORD *)sub_D0DBD0((__int64)v35);
        --*v28;
      }
      else
      {
LABEL_46:
        v8 = 0;
      }
      goto LABEL_45;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v29 = *(_QWORD *)(a1 + 1232);
      v30 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_D09010((__int64)v35, v30);
      v8 = sub_DCC160(a1 + 384, v29, v35, 4);
      if ( (_BYTE)v8 )
        v8 = sub_D5AAF0(a1 + 384, v29, (__int64)v35, a3);
      goto LABEL_45;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v31 = *(_QWORD *)(a1 + 1232);
      v32 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_D09010((__int64)v35, v32);
      v8 = sub_DCC160(a1 + 384, v31, v35, 4);
      if ( (_BYTE)v8 )
        v8 = sub_D5CEE0(a1 + 384, v31, (__int64)v35, a3);
      goto LABEL_45;
    case 10:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v33 = *(_QWORD *)(a1 + 1232);
      v34 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_D09010((__int64)v35, v34);
      v8 = sub_DCC160(a1 + 384, v33, v35, 4);
      if ( (_BYTE)v8 )
        v8 = sub_CFEE90(a1 + 384, v33, (__int64)v35);
      goto LABEL_45;
    case 11:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v6 = *(_QWORD *)(a1 + 1232);
      v7 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_D09010((__int64)v35, v7);
      v8 = sub_DCC160(a1 + 384, v6, v35, 4);
      if ( (_BYTE)v8 )
        v8 = sub_D373F0(a1 + 384, v6, (__int64)v35, a3);
LABEL_45:
      sub_E232A0(v35);
      return v8;
  }
}
