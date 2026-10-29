__int64 __fastcall sub_D037E0(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebp
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rbp
  char v8; // r13
  unsigned int v9; // ebp
  __int64 v10; // rbp
  char v11; // r13
  __int64 v12; // rbp
  __int16 v13; // r13
  __int64 v14; // rbp
  __int16 v15; // r13
  __int64 v16; // rbp
  int v17; // r13d
  __int64 v18; // rbp
  int v19; // r13d
  __int64 v20; // rbp
  __int64 v21; // r13
  __int64 v22; // rbp
  __int64 v23; // r13
  __int64 v24; // rbp
  __int64 v25; // r13
  int v26; // edx
  int v27; // r14d
  __int64 v28; // rax
  __int64 v29; // rbp
  __int64 v30; // r13
  int v31; // edx
  int v32; // r14d
  __int64 v33; // rax
  __int64 v34; // rbp
  char v35; // r13
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // rbp
  __int64 v39; // r13
  int v40; // edx
  int v41; // r14d
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rdi
  _BYTE v45[24]; // [rsp+30h] [rbp-58h] BYREF
  int v46; // [rsp+48h] [rbp-40h]
  __int64 v47; // [rsp+50h] [rbp-38h]
  int v48; // [rsp+58h] [rbp-30h]

  v3 = 1;
  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_4;
      v7 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v8 = sub_CFEA20(*(_QWORD *)(a1 + 560));
      sub_CE52D0((__int64)v45, *(_QWORD *)(a1 + 560));
      v9 = sub_DA8220(a1 + 384, v7, v45);
      if ( (_BYTE)v9 )
      {
        if ( !v46 && v47 )
        {
          if ( v48 )
          {
            sub_E00FC0(v45);
            sub_DFFFB0(v45);
          }
        }
        *(_BYTE *)sub_CE8890((__int64)v45) = v8;
      }
      goto LABEL_93;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_4;
      v10 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v11 = sub_CFF120(*(_QWORD *)(a1 + 560));
      sub_CE52D0((__int64)v45, *(_QWORD *)(a1 + 560));
      v9 = sub_DA8220(a1 + 384, v10, v45);
      if ( (_BYTE)v9 )
      {
        if ( !v46 && v47 && v48 )
        {
          sub_E00FC0(v45);
          sub_DFFFB0(v45);
        }
        *(_BYTE *)sub_CE8AA0((__int64)v45) = v11;
      }
      goto LABEL_93;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_4;
      v12 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v13 = sub_CFF630(*(_QWORD *)(a1 + 560));
      sub_CE52D0((__int64)v45, *(_QWORD *)(a1 + 560));
      v9 = sub_DA8220(a1 + 384, v12, v45);
      if ( (_BYTE)v9 )
      {
        if ( !v46 && v47 && v48 )
        {
          sub_E00FC0(v45);
          sub_DFFFB0(v45);
        }
        *(_WORD *)sub_CE8E90((__int64)v45) = v13;
      }
      goto LABEL_93;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_4;
      v14 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v15 = sub_CFFD50(*(_QWORD *)(a1 + 560));
      sub_CE52D0((__int64)v45, *(_QWORD *)(a1 + 560));
      v9 = sub_DA8220(a1 + 384, v14, v45);
      if ( (_BYTE)v9 )
      {
        if ( !v46 && v47 && v48 )
        {
          sub_E00FC0(v45);
          sub_DFFFB0(v45);
        }
        *(_WORD *)sub_CE90A0((__int64)v45) = v15;
      }
      goto LABEL_93;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_4;
      v16 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v17 = sub_CFFE60(*(_QWORD *)(a1 + 560));
      sub_CE52D0((__int64)v45, *(_QWORD *)(a1 + 560));
      v9 = sub_DA8220(a1 + 384, v16, v45);
      if ( (_BYTE)v9 )
      {
        if ( !v46 && v47 && v48 )
        {
          sub_E00FC0(v45);
          sub_DFFFB0(v45);
        }
        *(_DWORD *)sub_CE9490((__int64)v45) = v17;
      }
      goto LABEL_93;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_4;
      v18 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v19 = sub_D00570(*(_QWORD *)(a1 + 560));
      sub_CE52D0((__int64)v45, *(_QWORD *)(a1 + 560));
      v9 = sub_DA8220(a1 + 384, v18, v45);
      if ( (_BYTE)v9 )
      {
        if ( !v46 && v47 && v48 )
        {
          sub_E00FC0(v45);
          sub_DFFFB0(v45);
        }
        *(_DWORD *)sub_CE96A0((__int64)v45) = v19;
      }
      goto LABEL_93;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_4;
      v20 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v21 = sub_D00680(*(_QWORD *)(a1 + 560));
      sub_CE52D0((__int64)v45, *(_QWORD *)(a1 + 560));
      v9 = sub_DA8220(a1 + 384, v20, v45);
      if ( (_BYTE)v9 )
      {
        if ( !v46 && v47 && v48 )
        {
          sub_E00FC0(v45);
          sub_DFFFB0(v45);
        }
        *(_QWORD *)sub_CE9C80((__int64)v45) = v21;
      }
      goto LABEL_93;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_4;
      v22 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v23 = sub_D00DC0(*(_QWORD *)(a1 + 560));
      sub_CE52D0((__int64)v45, *(_QWORD *)(a1 + 560));
      v9 = sub_DA8220(a1 + 384, v22, v45);
      if ( (_BYTE)v9 )
      {
        if ( !v46 && v47 && v48 )
        {
          sub_E00FC0(v45);
          sub_DFFFB0(v45);
        }
        *(_QWORD *)sub_CE9E90((__int64)v45) = v23;
      }
      goto LABEL_93;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_4;
      v24 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v25 = sub_D01350(*(_QWORD *)(a1 + 560));
      v27 = v26;
      sub_CE52D0((__int64)v45, *(_QWORD *)(a1 + 560));
      v9 = sub_DA8220(a1 + 384, v24, v45);
      if ( (_BYTE)v9 )
      {
        if ( !v46 && v47 && v48 )
        {
          sub_E00FC0(v45);
          sub_DFFFB0(v45);
        }
        v28 = sub_CEA4A0((__int64)v45);
        *(_QWORD *)v28 = v25;
        *(_DWORD *)(v28 + 8) = v27;
      }
      goto LABEL_93;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_4;
      v29 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v30 = sub_D01480(*(_QWORD *)(a1 + 560));
      v32 = v31;
      sub_CE52D0((__int64)v45, *(_QWORD *)(a1 + 560));
      v9 = sub_DA8220(a1 + 384, v29, v45);
      if ( (_BYTE)v9 )
      {
        if ( !v46 && v47 && v48 )
        {
          sub_E00FC0(v45);
          sub_DFFFB0(v45);
        }
        v33 = sub_CEA4F0((__int64)v45);
        *(_QWORD *)v33 = v30;
        *(_DWORD *)(v33 + 8) = v32;
      }
      goto LABEL_93;
    case 10:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_4;
      v34 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v35 = sub_CE52A0(*(_QWORD *)(a1 + 560));
      sub_CE52D0((__int64)v45, *(_QWORD *)(a1 + 560));
      v9 = sub_DA8220(a1 + 384, v34, v45);
      if ( (_BYTE)v9 )
      {
        if ( !v46 && v47 && v48 )
        {
          sub_E00FC0(v45);
          sub_DFFFB0(v45);
        }
        *(_BYTE *)sub_CEAA70((__int64)v45) = v35;
      }
      goto LABEL_93;
    case 11:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v36 = *(_QWORD *)(a1 + 1232);
        v37 = a1 + 384;
        *(_QWORD *)(v37 + 856) = *a3;
        v3 = sub_CFB500(v37, v36);
      }
      goto LABEL_4;
    case 12:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_4;
      v38 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v39 = sub_CE4EC0(*(_QWORD *)(a1 + 560));
      v41 = v40;
      sub_CE52D0((__int64)v45, *(_QWORD *)(a1 + 560));
      v9 = sub_DA8220(a1 + 384, v38, v45);
      if ( (_BYTE)v9 )
      {
        if ( !v46 && v47 && v48 )
        {
          sub_E00FC0(v45);
          sub_DFFFB0(v45);
        }
        v42 = sub_CEA540((__int64)v45);
        *(_QWORD *)v42 = v39;
        *(_DWORD *)(v42 + 8) = v41;
      }
LABEL_93:
      sub_DFF560(v45);
      result = v9;
      break;
    case 13:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v43 = *(_QWORD *)(a1 + 1232);
        v44 = a1 + 384;
        *(_QWORD *)(v44 + 856) = *a3;
        v3 = sub_CFB5F0(v44, v43);
      }
      goto LABEL_4;
    case 14:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v5 = *(_QWORD *)(a1 + 1232);
        v6 = a1 + 384;
        *(_QWORD *)(v6 + 856) = *a3;
        v3 = sub_CFB720(v6, v5);
      }
LABEL_4:
      result = v3;
      break;
  }
  return result;
}

