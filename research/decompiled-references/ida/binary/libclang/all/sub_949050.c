__int64 __fastcall sub_949050(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r15
  char v11; // r12
  char v12; // r13
  __int64 v13; // rbx
  bool v14; // cc
  __int64 v15; // rsi
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // r13
  __int64 v20; // r14
  unsigned __int8 v21; // r15
  unsigned __int8 v22; // al
  __int64 v23; // rdi
  __int16 v24; // r12
  __int16 v25; // r13
  unsigned __int16 v26; // r15
  unsigned __int16 v27; // r12
  __int64 v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // r12
  __int64 v31; // r13
  int v32; // r15d
  int v33; // r14d
  __int64 v34; // rbx
  bool v35; // cc
  __int64 v36; // rsi
  unsigned int v37; // eax
  __int64 v38; // rax
  unsigned int v39; // r15d
  unsigned int v40; // r12d
  __int64 v41; // rdi
  __int64 v42; // r15
  __int64 v43; // r14
  unsigned __int64 v44; // r15
  unsigned __int64 v45; // r12
  __int64 v46; // rsi
  unsigned int v47; // eax
  __int64 v48; // rsi
  __int64 v49; // rsi
  __int64 v50; // rdi
  __int64 v51; // rdi
  unsigned __int8 v52; // r12
  __int64 v53; // rax
  __int64 v54; // rsi
  __int64 v55; // rdi
  __int64 v56; // rsi
  __int64 v57; // rdi
  __int64 v58; // rsi
  unsigned __int8 v59; // [rsp+Fh] [rbp-49h]
  void *v60; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v61; // [rsp+18h] [rbp-40h]

  switch ( a2 )
  {
    case 0:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v8 = *(_QWORD *)(a1 + 568);
        v9 = a1 + 384;
        v10 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v11 = sub_915550(v8);
        v12 = sub_915550(*(_QWORD *)(a1 + 568));
        v13 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v14 = v12 <= v11;
        if ( v12 < v11 )
          goto LABEL_18;
        goto LABEL_8;
      }
      break;
    case 1:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v18 = *(_QWORD *)(a1 + 568);
        v19 = a1 + 384;
        v20 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v21 = sub_915900(v18);
        v22 = sub_915900(*(_QWORD *)(a1 + 568));
        goto LABEL_48;
      }
      break;
    case 2:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v23 = *(_QWORD *)(a1 + 568);
        v9 = a1 + 384;
        v10 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v24 = sub_915930(v23);
        v25 = sub_915930(*(_QWORD *)(a1 + 568));
        v13 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v14 = v25 <= v24;
        if ( v25 >= v24 )
        {
LABEL_8:
          if ( v14 )
          {
            v15 = 1;
            v16 = 0;
          }
          else
          {
            v15 = 3;
            v16 = 3;
          }
        }
        else
        {
LABEL_18:
          v15 = 2;
          v16 = 2;
        }
        if ( *(_BYTE *)(a3 + 112) == 2 )
          v15 = v16;
        v17 = sub_B9AC80(a3, v15);
        sub_B99210(&v60, v17);
        result = sub_987D60(v9, v10, v13, &v60);
        if ( v61 > 0x40 )
          goto LABEL_54;
      }
      break;
    case 3:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v20 = *(_QWORD *)(a1 + 792);
        v19 = a1 + 384;
        *(_QWORD *)(a1 + 800) = *a4;
        v26 = sub_915CE0(*(_QWORD *)(a1 + 568));
        v27 = sub_915CE0(*(_QWORD *)(a1 + 568));
        v28 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        if ( v27 < v26 )
          goto LABEL_61;
        if ( v26 >= v27 )
          goto LABEL_50;
        goto LABEL_41;
      }
      break;
    case 4:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v29 = *(_QWORD *)(a1 + 568);
        v30 = a1 + 384;
        v31 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v32 = sub_915D10(v29);
        v33 = sub_915D10(*(_QWORD *)(a1 + 568));
        v34 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v35 = v33 <= v32;
        if ( v33 < v32 )
          goto LABEL_37;
        goto LABEL_25;
      }
      break;
    case 5:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v20 = *(_QWORD *)(a1 + 792);
        v19 = a1 + 384;
        *(_QWORD *)(a1 + 800) = *a4;
        v39 = sub_9160C0(*(_QWORD *)(a1 + 568));
        v40 = sub_9160C0(*(_QWORD *)(a1 + 568));
        v28 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        if ( v40 < v39 )
          goto LABEL_61;
        if ( v39 >= v40 )
          goto LABEL_50;
        goto LABEL_41;
      }
      break;
    case 6:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v41 = *(_QWORD *)(a1 + 568);
        v30 = a1 + 384;
        v31 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v42 = sub_9160F0(v41);
        v43 = sub_9160F0(*(_QWORD *)(a1 + 568));
        v34 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        v35 = v43 <= v42;
        if ( v43 >= v42 )
        {
LABEL_25:
          if ( v35 )
          {
            v36 = 1;
            v37 = 0;
          }
          else
          {
            v36 = 3;
            v37 = 3;
          }
        }
        else
        {
LABEL_37:
          v36 = 2;
          v37 = 2;
        }
        if ( *(_BYTE *)(a3 + 112) == 2 )
          v36 = v37;
        v38 = sub_B9AC80(a3, v36);
        sub_B99210(&v60, v38);
        result = sub_987D60(v30, v31, v34, &v60);
        if ( v61 > 0x40 )
          goto LABEL_54;
      }
      break;
    case 7:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v20 = *(_QWORD *)(a1 + 792);
        v19 = a1 + 384;
        *(_QWORD *)(a1 + 800) = *a4;
        v44 = sub_9164A0(*(_QWORD *)(a1 + 568));
        v45 = sub_9164A0(*(_QWORD *)(a1 + 568));
        v28 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        if ( v45 < v44 )
          goto LABEL_61;
        if ( v44 >= v45 )
          goto LABEL_50;
        goto LABEL_41;
      }
      break;
    case 8:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v48 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        result = sub_8FB110(a1 + 384, v48, a3);
      }
      break;
    case 9:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v49 = *(_QWORD *)(a1 + 792);
        v50 = a1 + 384;
        *(_QWORD *)(v50 + 416) = *a4;
        result = sub_8FB280(v50, v49, a3);
      }
      break;
    case 10:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v51 = *(_QWORD *)(a1 + 568);
        v19 = a1 + 384;
        v20 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v21 = sub_8F4170(v51);
        v22 = sub_8F4170(*(_QWORD *)(a1 + 568));
LABEL_48:
        v52 = v22;
        v28 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
        if ( v52 < v21 )
        {
LABEL_61:
          v46 = 2;
          v47 = 2;
        }
        else if ( v21 < v52 )
        {
LABEL_41:
          v46 = 3;
          v47 = 3;
        }
        else
        {
LABEL_50:
          v46 = 1;
          v47 = 0;
        }
        if ( *(_BYTE *)(a3 + 112) == 2 )
          v46 = v47;
        v53 = sub_B9AC80(a3, v46);
        sub_B99210(&v60, v53);
        result = sub_987D60(v19, v20, v28, &v60);
        if ( v61 > 0x40 )
        {
LABEL_54:
          if ( v60 )
          {
            v59 = result;
            operator delete[](v60);
            result = v59;
          }
        }
      }
      break;
    case 11:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v54 = *(_QWORD *)(a1 + 792);
        v55 = a1 + 384;
        *(_QWORD *)(v55 + 416) = *a4;
        result = sub_8FB500(v55, v54, a3);
      }
      break;
    case 12:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v56 = *(_QWORD *)(a1 + 792);
        v57 = a1 + 384;
        *(_QWORD *)(v57 + 416) = *a4;
        result = sub_9487C0(v57, v56, a3);
      }
      break;
    case 13:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v58 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        result = sub_948560(a1 + 384, v58, a3);
      }
      break;
    case 14:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v7 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        result = sub_948C70((_QWORD *)(a1 + 384), v7, a3);
      }
      break;
  }
  return result;
}

