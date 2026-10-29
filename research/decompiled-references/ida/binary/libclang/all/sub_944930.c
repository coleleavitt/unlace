__int64 __fastcall sub_944930(__int64 a1, int a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // r13
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // r13
  char v9; // al
  __int64 v10; // rsi
  __int64 v11; // r13
  __int16 v12; // ax
  __int64 v13; // rsi
  __int64 v14; // r13
  __int16 v15; // ax
  __int64 v16; // rsi
  __int64 v17; // r13
  int v18; // eax
  __int64 v19; // rsi
  __int64 v20; // r13
  int v21; // eax
  __int64 v22; // rsi
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // r13
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // r13
  char v34; // al
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rdx
  unsigned __int8 v45; // [rsp+Fh] [rbp-B9h]
  unsigned __int8 v46; // [rsp+Fh] [rbp-B9h]
  unsigned __int8 v47; // [rsp+Fh] [rbp-B9h]
  unsigned __int8 v48; // [rsp+Fh] [rbp-B9h]
  unsigned __int8 v49; // [rsp+Fh] [rbp-B9h]
  unsigned __int8 v50; // [rsp+Fh] [rbp-B9h]
  unsigned __int8 v51; // [rsp+Fh] [rbp-B9h]
  unsigned __int8 v52; // [rsp+Fh] [rbp-B9h]
  unsigned __int8 v53; // [rsp+Fh] [rbp-B9h]
  __int64 v54; // [rsp+18h] [rbp-B0h] BYREF
  _BYTE v55[48]; // [rsp+20h] [rbp-A8h] BYREF
  int v56; // [rsp+50h] [rbp-78h]
  _BYTE v57[104]; // [rsp+60h] [rbp-68h] BYREF

  switch ( a2 )
  {
    case 0:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v5 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v6 = sub_915550(*(_QWORD *)(a1 + 568));
        v7 = *(_QWORD *)(a1 + 568);
        LOBYTE(v54) = v6;
        sub_8F41A0((__int64)v55, v7);
        if ( !v56 )
        {
          sub_8E54E0((__int64)v57, (__int64)v55);
          sub_A1C200(v55, v57, v40);
          sub_A1C0C0(v57);
        }
        v45 = sub_93FBD0(a1 + 384, v5, (unsigned __int8 *)&v54, (__int64)v55, 1);
        sub_A1C0C0(v55);
        result = v45;
      }
      break;
    case 1:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v8 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v9 = sub_915900(*(_QWORD *)(a1 + 568));
        v10 = *(_QWORD *)(a1 + 568);
        LOBYTE(v54) = v9;
        sub_8F41A0((__int64)v55, v10);
        if ( !v56 )
        {
          sub_8E54E0((__int64)v57, (__int64)v55);
          sub_A1C200(v55, v57, v41);
          sub_A1C0C0(v57);
        }
        v46 = sub_93FF70(a1 + 384, v8, &v54, (__int64)v55, 1);
        sub_A1C0C0(v55);
        result = v46;
      }
      break;
    case 2:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v11 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v12 = sub_915930(*(_QWORD *)(a1 + 568));
        v13 = *(_QWORD *)(a1 + 568);
        LOWORD(v54) = v12;
        sub_8F41A0((__int64)v55, v13);
        if ( !v56 )
        {
          sub_8E54E0((__int64)v57, (__int64)v55);
          sub_A1C200(v55, v57, v38);
          sub_A1C0C0(v57);
        }
        v47 = sub_9409F0(a1 + 384, v11, (unsigned __int16 *)&v54, (__int64)v55, 1);
        sub_A1C0C0(v55);
        result = v47;
      }
      break;
    case 3:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v14 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v15 = sub_915CE0(*(_QWORD *)(a1 + 568));
        v16 = *(_QWORD *)(a1 + 568);
        LOWORD(v54) = v15;
        sub_8F41A0((__int64)v55, v16);
        if ( !v56 )
        {
          sub_8E54E0((__int64)v57, (__int64)v55);
          sub_A1C200(v55, v57, v39);
          sub_A1C0C0(v57);
        }
        v48 = sub_940DB0(a1 + 384, v14, &v54, (__int64)v55, 1);
        sub_A1C0C0(v55);
        result = v48;
      }
      break;
    case 4:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v17 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v18 = sub_915D10(*(_QWORD *)(a1 + 568));
        v19 = *(_QWORD *)(a1 + 568);
        LODWORD(v54) = v18;
        sub_8F41A0((__int64)v55, v19);
        if ( !v56 )
        {
          sub_8E54E0((__int64)v57, (__int64)v55);
          sub_A1C200(v55, v57, v42);
          sub_A1C0C0(v57);
        }
        v49 = sub_941420(a1 + 384, v17, (unsigned int *)&v54, (__int64)v55, 1);
        sub_A1C0C0(v55);
        result = v49;
      }
      break;
    case 5:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v20 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v21 = sub_9160C0(*(_QWORD *)(a1 + 568));
        v22 = *(_QWORD *)(a1 + 568);
        LODWORD(v54) = v21;
        sub_8F41A0((__int64)v55, v22);
        if ( !v56 )
        {
          sub_8E54E0((__int64)v57, (__int64)v55);
          sub_A1C200(v55, v57, v37);
          sub_A1C0C0(v57);
        }
        v50 = sub_9417C0(a1 + 384, v20, &v54, (__int64)v55, 1);
        sub_A1C0C0(v55);
        result = v50;
      }
      break;
    case 6:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v23 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v24 = sub_9160F0(*(_QWORD *)(a1 + 568));
        v25 = *(_QWORD *)(a1 + 568);
        v54 = v24;
        sub_8F41A0((__int64)v55, v25);
        if ( !v56 )
        {
          sub_8E54E0((__int64)v57, (__int64)v55);
          sub_A1C200(v55, v57, v43);
          sub_A1C0C0(v57);
        }
        v51 = sub_9420E0(a1 + 384, v23, &v54, (__int64)v55, 1);
        sub_A1C0C0(v55);
        result = v51;
      }
      break;
    case 7:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v26 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v27 = sub_9164A0(*(_QWORD *)(a1 + 568));
        v28 = *(_QWORD *)(a1 + 568);
        v54 = v27;
        sub_8F41A0((__int64)v55, v28);
        if ( !v56 )
        {
          sub_8E54E0((__int64)v57, (__int64)v55);
          sub_A1C200(v55, v57, v36);
          sub_A1C0C0(v57);
        }
        v52 = sub_942480(a1 + 384, v26, (unsigned __int64 *)&v54, (__int64)v55, 1);
        sub_A1C0C0(v55);
        result = v52;
      }
      break;
    case 8:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v29 = *(_QWORD *)(a1 + 792);
        v30 = a1 + 384;
        *(_QWORD *)(v30 + 416) = *a3;
        result = sub_943010(v30, v29);
      }
      break;
    case 9:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v31 = *(_QWORD *)(a1 + 792);
        v32 = a1 + 384;
        *(_QWORD *)(v32 + 416) = *a3;
        result = sub_9438C0(v32, v31);
      }
      break;
    case 10:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v33 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v34 = sub_8F4170(*(_QWORD *)(a1 + 568));
        v35 = *(_QWORD *)(a1 + 568);
        LOBYTE(v54) = v34;
        sub_8F41A0((__int64)v55, v35);
        if ( !v56 )
        {
          sub_8E54E0((__int64)v57, (__int64)v55);
          sub_A1C200(v55, v57, v44);
          sub_A1C0C0(v57);
        }
        v53 = sub_9439C0(a1 + 384, v33, &v54, (__int64)v55, 1);
        sub_A1C0C0(v55);
        result = v53;
      }
      break;
    case 11:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v4 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        result = sub_944820(a1 + 384, v4);
      }
      break;
  }
  return result;
}

