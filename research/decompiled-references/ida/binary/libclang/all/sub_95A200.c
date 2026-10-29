__int64 __fastcall sub_95A200(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rsi
  __int64 v6; // r13
  unsigned int v7; // eax
  __int64 v8; // rbp
  char v9; // al
  __int64 v10; // rsi
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
  void *v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rbp
  void *v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rsi
  __int64 v33; // r13
  __int64 v34; // rsi
  __int64 v35; // r13
  __int64 v36; // rbp
  char v37; // al
  __int64 v38; // rsi
  void *v39; // [rsp+0h] [rbp-88h] BYREF
  unsigned int v40; // [rsp+8h] [rbp-80h]
  _BYTE v41[104]; // [rsp+20h] [rbp-68h] BYREF

  v3 = 1;
  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v8 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v9 = sub_915550(*(_QWORD *)(a1 + 568));
        v10 = *(_QWORD *)(a1 + 568);
        LOBYTE(v39) = v9;
        sub_8F41A0((__int64)v41, v10);
        v3 = sub_956530(a1 + 384, v8, (unsigned __int8 *)&v39, (__int64)v41, 1);
        sub_A1C0C0(v41);
      }
      break;
    case 1:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v11 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v12 = sub_915900(*(_QWORD *)(a1 + 568));
        v13 = *(_QWORD *)(a1 + 568);
        LOBYTE(v39) = v12;
        sub_8F41A0((__int64)v41, v13);
        v3 = sub_9497A0(a1 + 384, v11, &v39, (__int64)v41, 1);
        sub_A1C0C0(v41);
      }
      break;
    case 2:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v14 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v15 = sub_915930(*(_QWORD *)(a1 + 568));
        v16 = *(_QWORD *)(a1 + 568);
        LOWORD(v39) = v15;
        sub_8F41A0((__int64)v41, v16);
        v3 = sub_956A90(a1 + 384, v14, (unsigned __int16 *)&v39, (__int64)v41, 1);
        sub_A1C0C0(v41);
      }
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v17 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v18 = sub_915CE0(*(_QWORD *)(a1 + 568));
        v19 = *(_QWORD *)(a1 + 568);
        LOWORD(v39) = v18;
        sub_8F41A0((__int64)v41, v19);
        v3 = sub_956E20(a1 + 384, v17, &v39, (__int64)v41, 1);
        sub_A1C0C0(v41);
      }
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v20 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v21 = sub_915D10(*(_QWORD *)(a1 + 568));
        v22 = *(_QWORD *)(a1 + 568);
        LODWORD(v39) = v21;
        sub_8F41A0((__int64)v41, v22);
        v3 = sub_957440(a1 + 384, v20, (unsigned int *)&v39, (__int64)v41, 1);
        sub_A1C0C0(v41);
      }
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v23 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v24 = sub_9160C0(*(_QWORD *)(a1 + 568));
        v25 = *(_QWORD *)(a1 + 568);
        LODWORD(v39) = v24;
        sub_8F41A0((__int64)v41, v25);
        v3 = sub_9577D0(a1 + 384, v23, &v39, (__int64)v41, 1);
        sub_A1C0C0(v41);
      }
      break;
    case 6:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v26 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v27 = (void *)sub_9160F0(*(_QWORD *)(a1 + 568));
        v28 = *(_QWORD *)(a1 + 568);
        v39 = v27;
        sub_8F41A0((__int64)v41, v28);
        v3 = sub_957E30(a1 + 384, v26, (__int64 *)&v39, (__int64)v41, 1);
        sub_A1C0C0(v41);
      }
      break;
    case 7:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v29 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v30 = (void *)sub_9164A0(*(_QWORD *)(a1 + 568));
        v31 = *(_QWORD *)(a1 + 568);
        v39 = v30;
        sub_8F41A0((__int64)v41, v31);
        v3 = sub_9581D0(a1 + 384, v29, (unsigned __int64 *)&v39, (__int64)v41, 1);
        sub_A1C0C0(v41);
      }
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v32 = *(_QWORD *)(a1 + 568);
        v33 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        sub_919FD0((__int64)&v39, v32);
        sub_8F41A0((__int64)v41, *(_QWORD *)(a1 + 568));
        v7 = sub_958680(a1 + 384, v33, (__int64)&v39, (__int64)v41, 1);
        goto LABEL_27;
      }
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v34 = *(_QWORD *)(a1 + 568);
        v35 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        sub_91A020((__int64)&v39, v34);
        sub_8F41A0((__int64)v41, *(_QWORD *)(a1 + 568));
        v7 = sub_958EA0(a1 + 384, v35, (__int64)&v39, (__int64)v41, 1);
        goto LABEL_27;
      }
      break;
    case 10:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v36 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v37 = sub_8F4170(*(_QWORD *)(a1 + 568));
        v38 = *(_QWORD *)(a1 + 568);
        LOBYTE(v39) = v37;
        sub_8F41A0((__int64)v41, v38);
        v3 = sub_9593B0(a1 + 384, v36, &v39, (__int64)v41, 1);
        sub_A1C0C0(v41);
      }
      break;
    case 11:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v5 = *(_QWORD *)(a1 + 568);
        v6 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        sub_8F5730((__int64)&v39, v5);
        sub_8F41A0((__int64)v41, *(_QWORD *)(a1 + 568));
        v7 = sub_959AC0(a1 + 384, v6, (__int64)&v39, (__int64)v41, 1);
LABEL_27:
        v3 = v7;
        sub_A1C0C0(v41);
        if ( v40 > 0x40 && v39 )
          operator delete[](v39);
      }
      break;
  }
  return v3;
}

