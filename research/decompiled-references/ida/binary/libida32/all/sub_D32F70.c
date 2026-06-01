__int64 __fastcall sub_D32F70(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebp
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rbp
  char v9; // al
  __int64 v10; // rdi
  char v11; // r12
  __int64 v12; // rbp
  char v13; // al
  __int64 v14; // rdi
  char v15; // r12
  __int64 v16; // rbp
  __int16 v17; // ax
  __int64 v18; // rdi
  __int16 v19; // r12
  __int64 v20; // rbp
  __int16 v21; // ax
  __int64 v22; // rdi
  __int16 v23; // r12
  __int64 v24; // rbp
  int v25; // eax
  __int64 v26; // rdi
  unsigned int v27; // eax
  __int64 v28; // rbp
  int v29; // eax
  __int64 v30; // rdi
  __int64 v31; // rbp
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rbp
  __int64 v36; // rax
  __int64 v37; // rdi
  _QWORD *v38; // rdi
  __int64 v39; // rsi
  _QWORD *v40; // rdi
  __int64 v41; // [rsp+0h] [rbp-28h] BYREF
  __int64 v42[4]; // [rsp+8h] [rbp-20h] BYREF

  v3 = 1;
  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v8 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v9 = sub_CFEA20(*(_QWORD *)(a1 + 560));
        v10 = *(_QWORD *)(a1 + 560);
        LOBYTE(v42[0]) = v9;
        LOBYTE(v41) = sub_CFEA20(v10);
        v3 = sub_D13940(a1 + 384, v8, &v41, v42);
        if ( (_BYTE)v3 )
        {
          v11 = (char)v41 / SLOBYTE(v42[0]);
          *(_BYTE *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = v11;
        }
      }
      break;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v12 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v13 = sub_CFF120(*(_QWORD *)(a1 + 560));
        v14 = *(_QWORD *)(a1 + 560);
        LOBYTE(v42[0]) = v13;
        LOBYTE(v41) = sub_CFF120(v14);
        v3 = sub_D13B30(a1 + 384, v12, (__int64)&v41, v42);
        if ( (_BYTE)v3 )
        {
          v15 = (unsigned __int8)v41 / LOBYTE(v42[0]);
          *(_BYTE *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = v15;
        }
      }
      break;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v16 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v17 = sub_CFF630(*(_QWORD *)(a1 + 560));
        v18 = *(_QWORD *)(a1 + 560);
        LOWORD(v42[0]) = v17;
        LOWORD(v41) = sub_CFF630(v18);
        v3 = sub_D13BA0(a1 + 384, v16, &v41, v42);
        if ( (_BYTE)v3 )
        {
          v19 = (__int16)v41 / SLOWORD(v42[0]);
          *(_WORD *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = v19;
        }
      }
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v20 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v21 = sub_CFFD50(*(_QWORD *)(a1 + 560));
        v22 = *(_QWORD *)(a1 + 560);
        LOWORD(v42[0]) = v21;
        LOWORD(v41) = sub_CFFD50(v22);
        v3 = sub_D13D90(a1 + 384, v20, (__int64)&v41, v42);
        if ( (_BYTE)v3 )
        {
          v23 = (unsigned __int16)v41 / LOWORD(v42[0]);
          *(_WORD *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = v23;
        }
      }
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v24 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v25 = sub_CFFE60(*(_QWORD *)(a1 + 560));
        v26 = *(_QWORD *)(a1 + 560);
        LODWORD(v42[0]) = v25;
        LODWORD(v41) = sub_CFFE60(v26);
        v3 = sub_D13E00(a1 + 384, v24, &v41, v42);
        if ( (_BYTE)v3 )
        {
          v27 = (int)v41 / SLODWORD(v42[0]);
          goto LABEL_25;
        }
      }
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v28 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v29 = sub_D00570(*(_QWORD *)(a1 + 560));
        v30 = *(_QWORD *)(a1 + 560);
        LODWORD(v42[0]) = v29;
        LODWORD(v41) = sub_D00570(v30);
        v3 = sub_D13FF0(a1 + 384, v28, (__int64)&v41, v42);
        if ( (_BYTE)v3 )
        {
          v27 = (unsigned int)v41 / LODWORD(v42[0]);
LABEL_25:
          *(_DWORD *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = v27;
        }
      }
      break;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v31 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v32 = sub_D00680(*(_QWORD *)(a1 + 560));
        v33 = *(_QWORD *)(a1 + 560);
        v42[0] = v32;
        v41 = sub_D00680(v33);
        v3 = sub_D14060(a1 + 384, v31, &v41, v42);
        if ( (_BYTE)v3 )
        {
          v34 = v41 / v42[0];
          goto LABEL_32;
        }
      }
      break;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v35 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v36 = sub_D00DC0(*(_QWORD *)(a1 + 560));
        v37 = *(_QWORD *)(a1 + 560);
        v42[0] = v36;
        v41 = sub_D00DC0(v37);
        v3 = sub_D14260(a1 + 384, v35, (__int64)&v41, v42);
        if ( (_BYTE)v3 )
        {
          v34 = (unsigned __int64)v41 / v42[0];
LABEL_32:
          *(_QWORD *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = v34;
        }
      }
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v38 = (_QWORD *)(a1 + 384);
        v38[107] = *a3;
        v3 = sub_D27060(v38);
      }
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v39 = *(_QWORD *)(a1 + 1232);
        v40 = (_QWORD *)(a1 + 384);
        v40[107] = *a3;
        v3 = sub_D32DB0(v40, v39);
      }
      break;
    case 10:
    case 11:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v6 = *(_QWORD *)(a1 + 1232);
        v7 = a1 + 384;
        *(_QWORD *)(v7 + 856) = *a3;
        v3 = sub_D143A0(v7, v6);
      }
      break;
  }
  return v3;
}

