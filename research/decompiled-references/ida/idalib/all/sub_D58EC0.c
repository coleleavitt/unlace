__int64 __fastcall sub_D58EC0(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebp
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rbp
  char v8; // al
  __int64 v9; // rsi
  unsigned int v10; // ebp
  __int64 v11; // rbp
  char v12; // al
  __int64 v13; // rsi
  __int64 v14; // rbp
  __int16 v15; // ax
  __int64 v16; // rsi
  __int64 v17; // rbp
  __int16 v18; // ax
  __int64 v19; // rsi
  __int64 v20; // rbp
  int v21; // eax
  __int64 v22; // rsi
  __int64 v23; // rbp
  int v24; // eax
  __int64 v25; // rsi
  __int64 v26; // rbp
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rbp
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rbp
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rbp
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rbp
  char v42; // al
  __int64 v43; // rsi
  __int64 v44; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+8h] [rbp-A0h]
  _BYTE v46[48]; // [rsp+10h] [rbp-98h] BYREF
  _BYTE v47[48]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int8 v48; // [rsp+70h] [rbp-38h]

  v3 = 1;
  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v7 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v8 = sub_D22760(*(_QWORD *)(a1 + 560));
      v9 = *(_QWORD *)(a1 + 560);
      LOBYTE(v44) = v8;
      sub_D09010((__int64)v46, v9);
      sub_D3EE30((__int64)v47, a1 + 384, v7, (char *)&v44, (__int64)v46, 1);
      v10 = v48;
      if ( !v48 )
        goto LABEL_36;
      goto LABEL_32;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v11 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v12 = sub_D22E60(*(_QWORD *)(a1 + 560));
      v13 = *(_QWORD *)(a1 + 560);
      LOBYTE(v44) = v12;
      sub_D09010((__int64)v46, v13);
      sub_D22160((__int64)v47, a1 + 384, v11, (unsigned __int8 *)&v44, (__int64)v46, 1);
      v10 = v48;
      if ( v48 )
        goto LABEL_32;
      goto LABEL_36;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v14 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v15 = sub_D23370(*(_QWORD *)(a1 + 560));
      v16 = *(_QWORD *)(a1 + 560);
      LOWORD(v44) = v15;
      sub_D09010((__int64)v46, v16);
      sub_D3F3B0((__int64)v47, a1 + 384, v14, (__int16 *)&v44, (__int64)v46, 1);
      v10 = v48;
      if ( v48 )
        goto LABEL_32;
      goto LABEL_36;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v17 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v18 = sub_D23A90(*(_QWORD *)(a1 + 560));
      v19 = *(_QWORD *)(a1 + 560);
      LOWORD(v44) = v18;
      sub_D09010((__int64)v46, v19);
      sub_D3F930((__int64)v47, a1 + 384, v17, (unsigned __int16 *)&v44, (__int64)v46, 1);
      v10 = v48;
      if ( v48 )
        goto LABEL_32;
      goto LABEL_36;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v20 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v21 = sub_D23BA0(*(_QWORD *)(a1 + 560));
      v22 = *(_QWORD *)(a1 + 560);
      LODWORD(v44) = v21;
      sub_D09010((__int64)v46, v22);
      sub_D3FE40((__int64)v47, a1 + 384, v20, (int *)&v44, (__int64)v46, 1);
      v10 = v48;
      if ( v48 )
        goto LABEL_32;
      goto LABEL_36;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v23 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v24 = sub_D242B0(*(_QWORD *)(a1 + 560));
      v25 = *(_QWORD *)(a1 + 560);
      LODWORD(v44) = v24;
      sub_D09010((__int64)v46, v25);
      sub_D403B0((__int64)v47, a1 + 384, v23, (unsigned int *)&v44, (__int64)v46, 1);
      v10 = v48;
      if ( v48 )
        goto LABEL_32;
      goto LABEL_36;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v26 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v27 = sub_D243C0(*(_QWORD *)(a1 + 560));
      v28 = *(_QWORD *)(a1 + 560);
      v44 = v27;
      sub_D09010((__int64)v46, v28);
      sub_D408D0((__int64)v47, a1 + 384, v26, &v44, (__int64)v46, 1);
      v10 = v48;
      if ( v48 )
        goto LABEL_32;
      goto LABEL_36;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v29 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v30 = sub_D24B00(*(_QWORD *)(a1 + 560));
      v31 = *(_QWORD *)(a1 + 560);
      v44 = v30;
      sub_D09010((__int64)v46, v31);
      sub_D40E50((__int64)v47, a1 + 384, v29, (unsigned __int64 *)&v44, (__int64)v46, 1);
      v10 = v48;
      if ( v48 )
        goto LABEL_32;
      goto LABEL_36;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v32 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v33 = sub_D25090(*(_QWORD *)(a1 + 560));
      v34 = *(_QWORD *)(a1 + 560);
      v44 = v33;
      v45 = v35;
      sub_D09010((__int64)v46, v34);
      sub_D48A10((__int64)v47, a1 + 384, v32, (__int64)&v44, (__int64)v46, 1);
      v10 = v48;
      if ( v48 )
        goto LABEL_32;
      goto LABEL_36;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v37 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v38 = sub_D251C0(*(_QWORD *)(a1 + 560));
      v39 = *(_QWORD *)(a1 + 560);
      v44 = v38;
      v45 = v40;
      sub_D09010((__int64)v46, v39);
      sub_D58AB0((__int64)v47, a1 + 384, v37, &v44, (__int64)v46, 1);
      v10 = v48;
      if ( !v48 )
        goto LABEL_36;
      goto LABEL_32;
    case 10:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v41 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v42 = sub_D08FE0(*(_QWORD *)(a1 + 560));
      v43 = *(_QWORD *)(a1 + 560);
      LOBYTE(v44) = v42;
      sub_D09010((__int64)v46, v43);
      sub_D41360((__int64)v47, a1 + 384, v41, (unsigned __int8 *)&v44, (__int64)v46, 1);
      v10 = v48;
      if ( v48 )
      {
LABEL_32:
        v36 = sub_E216C0(*(_QWORD *)(a1 + 560), 48);
        sub_E231E0(v36, v47);
        if ( v48 )
          sub_E232A0(v47);
      }
LABEL_36:
      sub_E232A0(v46);
      result = v10;
      break;
    case 11:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v5 = *(_QWORD *)(a1 + 1232);
        v6 = a1 + 384;
        *(_QWORD *)(v6 + 856) = *a3;
        v3 = sub_D41D80(v6, v5);
      }
LABEL_3:
      result = v3;
      break;
  }
  return result;
}
