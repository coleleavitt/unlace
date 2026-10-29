__int64 __fastcall sub_D01F00(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rbp
  char v8; // r13
  __int64 v9; // r12
  __int64 v10; // rbp
  char v11; // r13
  __int64 v12; // r12
  __int64 v13; // rbp
  __int16 v14; // r13
  __int64 v15; // r12
  __int64 v16; // rbp
  __int16 v17; // r13
  __int64 v18; // r12
  __int64 v19; // rbp
  int v20; // r13d
  __int64 v21; // r12
  __int64 v22; // rbp
  int v23; // r13d
  __int64 v24; // r12
  __int64 v25; // rbp
  __int64 v26; // r13
  __int64 v27; // r12
  __int64 v28; // rbp
  __int64 v29; // r13
  __int64 v30; // r12
  __int64 v31; // rbp
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r14
  __int64 v35; // r13
  __int64 v36; // r12
  _QWORD *v37; // rax
  __int64 v38; // rbp
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r14
  __int64 v42; // r13
  __int64 v43; // r12
  _QWORD *v44; // rax
  __int64 v45; // rbp
  char v46; // r13
  __int64 v47; // r12
  __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // rbp
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r14
  __int64 v54; // r13
  __int64 v55; // r12
  _QWORD *v56; // rax
  __int64 v57; // rsi
  __int64 v58; // rbp
  __int64 v59; // r12
  __int64 v60; // rax
  _BYTE v61[88]; // [rsp+0h] [rbp-58h] BYREF

  v3 = 1;
  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v7 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v8 = sub_CFEA20(*(_QWORD *)(a1 + 560));
        v9 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
        v3 = sub_DA6400(a1 + 384, v7, v9);
        if ( (_BYTE)v3 )
        {
          sub_DFFFB0(v9);
          sub_E00FC0(v9);
          *(_BYTE *)sub_CE8890(v9) = v8;
        }
      }
      break;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v10 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v11 = sub_CFF120(*(_QWORD *)(a1 + 560));
        v12 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
        v3 = sub_DA6400(a1 + 384, v10, v12);
        if ( (_BYTE)v3 )
        {
          sub_DFFFB0(v12);
          sub_E00FC0(v12);
          *(_BYTE *)sub_CE8AA0(v12) = v11;
        }
      }
      break;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v13 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v14 = sub_CFF630(*(_QWORD *)(a1 + 560));
        v15 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
        v3 = sub_DA6400(a1 + 384, v13, v15);
        if ( (_BYTE)v3 )
        {
          sub_DFFFB0(v15);
          sub_E00FC0(v15);
          *(_WORD *)sub_CE8E90(v15) = v14;
        }
      }
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v16 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v17 = sub_CFFD50(*(_QWORD *)(a1 + 560));
        v18 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
        v3 = sub_DA6400(a1 + 384, v16, v18);
        if ( (_BYTE)v3 )
        {
          sub_DFFFB0(v18);
          sub_E00FC0(v18);
          *(_WORD *)sub_CE90A0(v18) = v17;
        }
      }
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v19 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v20 = sub_CFFE60(*(_QWORD *)(a1 + 560));
        v21 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
        v3 = sub_DA6400(a1 + 384, v19, v21);
        if ( (_BYTE)v3 )
        {
          sub_DFFFB0(v21);
          sub_E00FC0(v21);
          *(_DWORD *)sub_CE9490(v21) = v20;
        }
      }
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v22 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v23 = sub_D00570(*(_QWORD *)(a1 + 560));
        v24 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
        v3 = sub_DA6400(a1 + 384, v22, v24);
        if ( (_BYTE)v3 )
        {
          sub_DFFFB0(v24);
          sub_E00FC0(v24);
          *(_DWORD *)sub_CE96A0(v24) = v23;
        }
      }
      break;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v25 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v26 = sub_D00680(*(_QWORD *)(a1 + 560));
        v27 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
        v3 = sub_DA6400(a1 + 384, v25, v27);
        if ( (_BYTE)v3 )
        {
          sub_DFFFB0(v27);
          sub_E00FC0(v27);
          *(_QWORD *)sub_CE9C80(v27) = v26;
        }
      }
      break;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v28 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v29 = sub_D00DC0(*(_QWORD *)(a1 + 560));
        v30 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
        v3 = sub_DA6400(a1 + 384, v28, v30);
        if ( (_BYTE)v3 )
        {
          sub_DFFFB0(v30);
          sub_E00FC0(v30);
          *(_QWORD *)sub_CE9E90(v30) = v29;
        }
      }
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v31 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v32 = sub_D01350(*(_QWORD *)(a1 + 560));
        v34 = v33;
        v35 = v32;
        v36 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
        v3 = sub_DA6400(a1 + 384, v31, v36);
        if ( (_BYTE)v3 )
        {
          sub_DFFFB0(v36);
          sub_E00FC0(v36);
          v37 = (_QWORD *)sub_CEA4A0(v36);
          *v37 = v35;
          v37[1] = v34;
        }
      }
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v38 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v39 = sub_D01480(*(_QWORD *)(a1 + 560));
        v41 = v40;
        v42 = v39;
        v43 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
        v3 = sub_DA6400(a1 + 384, v38, v43);
        if ( (_BYTE)v3 )
        {
          sub_DFFFB0(v43);
          sub_E00FC0(v43);
          v44 = (_QWORD *)sub_CEA4F0(v43);
          *v44 = v42;
          v44[1] = v41;
        }
      }
      break;
    case 10:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v45 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v46 = sub_CE52A0(*(_QWORD *)(a1 + 560));
        v47 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
        v3 = sub_DA6400(a1 + 384, v45, v47);
        if ( (_BYTE)v3 )
        {
          sub_DFFFB0(v47);
          sub_E00FC0(v47);
          *(_BYTE *)sub_CEAA70(v47) = v46;
        }
      }
      break;
    case 11:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v48 = *(_QWORD *)(a1 + 1232);
        v49 = a1 + 384;
        *(_QWORD *)(v49 + 856) = *a3;
        v3 = sub_CF3FF0(v49, v48);
      }
      break;
    case 12:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v50 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v51 = sub_CE4EC0(*(_QWORD *)(a1 + 560));
        v53 = v52;
        v54 = v51;
        v55 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
        v3 = sub_DA6400(a1 + 384, v50, v55);
        if ( (_BYTE)v3 )
        {
          sub_DFFFB0(v55);
          sub_E00FC0(v55);
          v56 = (_QWORD *)sub_CEA540(v55);
          *v56 = v54;
          v56[1] = v53;
        }
      }
      break;
    case 13:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v57 = *(_QWORD *)(a1 + 560);
        v58 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_CE52D0((__int64)v61, v57);
        v59 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
        v3 = sub_DA6400(a1 + 384, v58, v59);
        if ( (_BYTE)v3 )
        {
          sub_DFFFB0(v59);
          sub_E00FC0(v59);
          v60 = sub_CEACF0(v59);
          sub_DFF4A0(v60, v61);
        }
        sub_DFF560(v61);
      }
      break;
    case 14:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v5 = *(_QWORD *)(a1 + 1232);
        v6 = a1 + 384;
        *(_QWORD *)(v6 + 856) = *a3;
        v3 = sub_CF40B0(v6, v5);
      }
      break;
  }
  return v3;
}

