__int64 __fastcall sub_D26CC0(__int64 a1, int a2, int a3, _QWORD *a4)
{
  unsigned int v5; // ebp
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rbp
  char v10; // r14
  __int64 v11; // r13
  __int64 v12; // rbp
  char v13; // r14
  __int64 v14; // r13
  __int64 v15; // rbp
  __int16 v16; // r14
  __int64 v17; // r13
  __int64 v18; // rbp
  __int16 v19; // r14
  __int64 v20; // r13
  __int64 v21; // rbp
  int v22; // r14d
  __int64 v23; // r13
  __int64 v24; // rbp
  int v25; // r14d
  __int64 v26; // r13
  __int64 v27; // rbp
  __int64 v28; // r14
  __int64 v29; // r13
  __int64 v30; // rbp
  __int64 v31; // r14
  __int64 v32; // r13
  __int64 v33; // rbp
  __int64 v34; // rax
  int v35; // edx
  int v36; // r15d
  __int64 v37; // r14
  __int64 v38; // r13
  __int64 v39; // rax
  int v40; // edx
  __int64 v41; // rbp
  __int64 v42; // rax
  int v43; // edx
  int v44; // r15d
  __int64 v45; // r14
  __int64 v46; // r13
  __int64 v47; // rbp
  char v48; // r14
  __int64 v49; // r13
  __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 v52; // rbp
  __int64 v53; // rax
  int v54; // edx
  int v55; // r14d
  __int64 v56; // r13
  __int64 v57; // r15
  __int64 v58; // rsi
  __int64 v59; // rdi
  _BYTE v60[104]; // [rsp+30h] [rbp-68h] BYREF

  v5 = 1;
  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v9 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v10 = sub_D22760(*(_QWORD *)(a1 + 560));
        v11 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        v5 = sub_DC8DB0(a1 + 384, v9, v11, 2);
        if ( (_BYTE)v5 )
        {
          sub_E23220(
            v60,
            *(_QWORD *)(v11 + 32),
            (unsigned int)(a3 + *(_DWORD *)v11),
            (unsigned int)(a3 + *(_DWORD *)v11));
          *(_BYTE *)sub_D0C5D0((__int64)v60) = v10;
          goto LABEL_46;
        }
      }
      break;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v12 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v13 = sub_D22E60(*(_QWORD *)(a1 + 560));
        v14 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        v5 = sub_DC8DB0(a1 + 384, v12, v14, 2);
        if ( (_BYTE)v5 )
        {
          sub_E23220(
            v60,
            *(_QWORD *)(v14 + 32),
            (unsigned int)(a3 + *(_DWORD *)v14),
            (unsigned int)(a3 + *(_DWORD *)v14));
          *(_BYTE *)sub_D0C7E0((__int64)v60) = v13;
          goto LABEL_46;
        }
      }
      break;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v15 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v16 = sub_D23370(*(_QWORD *)(a1 + 560));
        v17 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        v5 = sub_DC8DB0(a1 + 384, v15, v17, 2);
        if ( (_BYTE)v5 )
        {
          sub_E23220(
            v60,
            *(_QWORD *)(v17 + 32),
            (unsigned int)(a3 + *(_DWORD *)v17),
            (unsigned int)(a3 + *(_DWORD *)v17));
          *(_WORD *)sub_D0CBD0((__int64)v60) = v16;
          goto LABEL_46;
        }
      }
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v18 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v19 = sub_D23A90(*(_QWORD *)(a1 + 560));
        v20 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        v5 = sub_DC8DB0(a1 + 384, v18, v20, 2);
        if ( (_BYTE)v5 )
        {
          sub_E23220(
            v60,
            *(_QWORD *)(v20 + 32),
            (unsigned int)(a3 + *(_DWORD *)v20),
            (unsigned int)(a3 + *(_DWORD *)v20));
          *(_WORD *)sub_D0CDE0((__int64)v60) = v19;
          goto LABEL_46;
        }
      }
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v21 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v22 = sub_D23BA0(*(_QWORD *)(a1 + 560));
        v23 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        v5 = sub_DC8DB0(a1 + 384, v21, v23, 2);
        if ( (_BYTE)v5 )
        {
          sub_E23220(
            v60,
            *(_QWORD *)(v23 + 32),
            (unsigned int)(a3 + *(_DWORD *)v23),
            (unsigned int)(a3 + *(_DWORD *)v23));
          *(_DWORD *)sub_D0D1D0((__int64)v60) = v22;
          goto LABEL_46;
        }
      }
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v24 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v25 = sub_D242B0(*(_QWORD *)(a1 + 560));
        v26 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        v5 = sub_DC8DB0(a1 + 384, v24, v26, 2);
        if ( (_BYTE)v5 )
        {
          sub_E23220(
            v60,
            *(_QWORD *)(v26 + 32),
            (unsigned int)(a3 + *(_DWORD *)v26),
            (unsigned int)(a3 + *(_DWORD *)v26));
          *(_DWORD *)sub_D0D3E0((__int64)v60) = v25;
          goto LABEL_46;
        }
      }
      break;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v27 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v28 = sub_D243C0(*(_QWORD *)(a1 + 560));
        v29 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        v5 = sub_DC8DB0(a1 + 384, v27, v29, 2);
        if ( (_BYTE)v5 )
        {
          sub_E23220(
            v60,
            *(_QWORD *)(v29 + 32),
            (unsigned int)(a3 + *(_DWORD *)v29),
            (unsigned int)(a3 + *(_DWORD *)v29));
          *(_QWORD *)sub_D0D9C0((__int64)v60) = v28;
          goto LABEL_46;
        }
      }
      break;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v30 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v31 = sub_D24B00(*(_QWORD *)(a1 + 560));
        v32 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        v5 = sub_DC8DB0(a1 + 384, v30, v32, 2);
        if ( (_BYTE)v5 )
        {
          sub_E23220(
            v60,
            *(_QWORD *)(v32 + 32),
            (unsigned int)(a3 + *(_DWORD *)v32),
            (unsigned int)(a3 + *(_DWORD *)v32));
          *(_QWORD *)sub_D0DBD0((__int64)v60) = v31;
          goto LABEL_46;
        }
      }
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v33 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v34 = sub_D25090(*(_QWORD *)(a1 + 560));
        v36 = v35;
        v37 = v34;
        v38 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        v5 = sub_DC8DB0(a1 + 384, v33, v38, 2);
        if ( (_BYTE)v5 )
        {
          sub_E23220(
            v60,
            *(_QWORD *)(v38 + 32),
            (unsigned int)(a3 + *(_DWORD *)v38),
            (unsigned int)(a3 + *(_DWORD *)v38));
          v39 = sub_D0E1E0((__int64)v60);
          *(_QWORD *)v39 = v37;
          v40 = v36;
          goto LABEL_45;
        }
      }
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v41 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v42 = sub_D251C0(*(_QWORD *)(a1 + 560));
        v44 = v43;
        v45 = v42;
        v46 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        v5 = sub_DC8DB0(a1 + 384, v41, v46, 2);
        if ( (_BYTE)v5 )
        {
          sub_E23220(
            v60,
            *(_QWORD *)(v46 + 32),
            (unsigned int)(a3 + *(_DWORD *)v46),
            (unsigned int)(a3 + *(_DWORD *)v46));
          v39 = sub_D0E230((__int64)v60);
          *(_QWORD *)v39 = v45;
          v40 = v44;
          goto LABEL_45;
        }
      }
      break;
    case 10:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v47 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v48 = sub_D08FE0(*(_QWORD *)(a1 + 560));
        v49 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        v5 = sub_DC8DB0(a1 + 384, v47, v49, 2);
        if ( (_BYTE)v5 )
        {
          sub_E23220(
            v60,
            *(_QWORD *)(v49 + 32),
            (unsigned int)(a3 + *(_DWORD *)v49),
            (unsigned int)(a3 + *(_DWORD *)v49));
          *(_BYTE *)sub_D0E7B0((__int64)v60) = v48;
          goto LABEL_46;
        }
      }
      break;
    case 11:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v50 = *(_QWORD *)(a1 + 1232);
        v51 = a1 + 384;
        *(_QWORD *)(v51 + 856) = *a4;
        v5 = sub_D1ADE0(v51, v50, a3);
      }
      break;
    case 12:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v52 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v53 = sub_D08C00(*(_QWORD *)(a1 + 560));
        v55 = v54;
        v56 = v53;
        v57 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        v5 = sub_DC8DB0(a1 + 384, v52, v57, 2);
        if ( (_BYTE)v5 )
        {
          sub_E23220(
            v60,
            *(_QWORD *)(v57 + 32),
            (unsigned int)(a3 + *(_DWORD *)v57),
            (unsigned int)(a3 + *(_DWORD *)v57));
          v39 = sub_D0E280((__int64)v60);
          *(_QWORD *)v39 = v56;
          v40 = v55;
LABEL_45:
          *(_DWORD *)(v39 + 8) = v40;
LABEL_46:
          sub_E23CF0(v60);
          sub_E24D00(v60);
          sub_E232A0(v60);
        }
      }
      break;
    case 13:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v58 = *(_QWORD *)(a1 + 1232);
        v59 = a1 + 384;
        *(_QWORD *)(v59 + 856) = *a4;
        v5 = sub_D1AEB0(v59, v58, a3);
      }
      break;
    case 14:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v7 = *(_QWORD *)(a1 + 1232);
        v8 = a1 + 384;
        *(_QWORD *)(v8 + 856) = *a4;
        v5 = sub_D1AFC0(v8, v7, a3);
      }
      break;
  }
  return v5;
}
