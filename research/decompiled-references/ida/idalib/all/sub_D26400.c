__int64 __fastcall sub_D26400(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebp
  __int64 result; // rax
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
  int v33; // edx
  int v34; // r14d
  __int64 v35; // r13
  __int64 v36; // r12
  __int64 v37; // rax
  __int64 v38; // rbp
  __int64 v39; // rax
  int v40; // edx
  int v41; // r14d
  __int64 v42; // r13
  __int64 v43; // r12
  __int64 v44; // rax
  __int64 v45; // rbp
  char v46; // r13
  __int64 v47; // r12
  __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // rbp
  __int64 v51; // rax
  int v52; // edx
  int v53; // r14d
  __int64 v54; // r13
  __int64 v55; // r12
  __int64 v56; // rax
  __int64 v57; // rsi
  __int64 v58; // rdi

  v3 = 1;
  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v7 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v8 = sub_D22760(*(_QWORD *)(a1 + 560));
        v9 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        v3 = sub_DCBF60(a1 + 384, v7, v9);
        if ( (_BYTE)v3 )
        {
          if ( !*(_DWORD *)(v9 + 24) && *(_QWORD *)(v9 + 32) )
          {
            if ( *(_DWORD *)(v9 + 40) )
            {
              sub_E24D00(v9);
              sub_E23CF0(v9);
            }
          }
          *(_BYTE *)sub_D0C5D0(v9) = v8;
        }
      }
      goto LABEL_3;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v10 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v11 = sub_D22E60(*(_QWORD *)(a1 + 560));
        v12 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        v3 = sub_DCBF60(a1 + 384, v10, v12);
        if ( (_BYTE)v3 )
        {
          if ( !*(_DWORD *)(v12 + 24) && *(_QWORD *)(v12 + 32) && *(_DWORD *)(v12 + 40) )
          {
            sub_E24D00(v12);
            sub_E23CF0(v12);
          }
          *(_BYTE *)sub_D0C7E0(v12) = v11;
        }
      }
      goto LABEL_3;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v13 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v14 = sub_D23370(*(_QWORD *)(a1 + 560));
        v15 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        v3 = sub_DCBF60(a1 + 384, v13, v15);
        if ( (_BYTE)v3 )
        {
          if ( !*(_DWORD *)(v15 + 24) && *(_QWORD *)(v15 + 32) && *(_DWORD *)(v15 + 40) )
          {
            sub_E24D00(v15);
            sub_E23CF0(v15);
          }
          *(_WORD *)sub_D0CBD0(v15) = v14;
        }
      }
      goto LABEL_3;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v16 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v17 = sub_D23A90(*(_QWORD *)(a1 + 560));
        v18 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        v3 = sub_DCBF60(a1 + 384, v16, v18);
        if ( (_BYTE)v3 )
        {
          if ( !*(_DWORD *)(v18 + 24) && *(_QWORD *)(v18 + 32) && *(_DWORD *)(v18 + 40) )
          {
            sub_E24D00(v18);
            sub_E23CF0(v18);
          }
          *(_WORD *)sub_D0CDE0(v18) = v17;
        }
      }
      goto LABEL_3;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v19 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v20 = sub_D23BA0(*(_QWORD *)(a1 + 560));
        v21 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        v3 = sub_DCBF60(a1 + 384, v19, v21);
        if ( (_BYTE)v3 )
        {
          if ( !*(_DWORD *)(v21 + 24) && *(_QWORD *)(v21 + 32) && *(_DWORD *)(v21 + 40) )
          {
            sub_E24D00(v21);
            sub_E23CF0(v21);
          }
          *(_DWORD *)sub_D0D1D0(v21) = v20;
        }
      }
      goto LABEL_3;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v22 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v23 = sub_D242B0(*(_QWORD *)(a1 + 560));
        v24 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        v3 = sub_DCBF60(a1 + 384, v22, v24);
        if ( (_BYTE)v3 )
        {
          if ( !*(_DWORD *)(v24 + 24) && *(_QWORD *)(v24 + 32) && *(_DWORD *)(v24 + 40) )
          {
            sub_E24D00(v24);
            sub_E23CF0(v24);
          }
          *(_DWORD *)sub_D0D3E0(v24) = v23;
        }
      }
      goto LABEL_3;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v25 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v26 = sub_D243C0(*(_QWORD *)(a1 + 560));
        v27 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        v3 = sub_DCBF60(a1 + 384, v25, v27);
        if ( (_BYTE)v3 )
        {
          if ( !*(_DWORD *)(v27 + 24) && *(_QWORD *)(v27 + 32) && *(_DWORD *)(v27 + 40) )
          {
            sub_E24D00(v27);
            sub_E23CF0(v27);
          }
          *(_QWORD *)sub_D0D9C0(v27) = v26;
        }
      }
      goto LABEL_3;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v28 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v29 = sub_D24B00(*(_QWORD *)(a1 + 560));
        v30 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        v3 = sub_DCBF60(a1 + 384, v28, v30);
        if ( (_BYTE)v3 )
        {
          if ( !*(_DWORD *)(v30 + 24) && *(_QWORD *)(v30 + 32) && *(_DWORD *)(v30 + 40) )
          {
            sub_E24D00(v30);
            sub_E23CF0(v30);
          }
          *(_QWORD *)sub_D0DBD0(v30) = v29;
        }
      }
      goto LABEL_3;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v31 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v32 = sub_D25090(*(_QWORD *)(a1 + 560));
        v34 = v33;
        v35 = v32;
        v36 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        v3 = sub_DCBF60(a1 + 384, v31, v36);
        if ( (_BYTE)v3 )
        {
          if ( !*(_DWORD *)(v36 + 24) && *(_QWORD *)(v36 + 32) && *(_DWORD *)(v36 + 40) )
          {
            sub_E24D00(v36);
            sub_E23CF0(v36);
          }
          v37 = sub_D0E1E0(v36);
          *(_QWORD *)v37 = v35;
          *(_DWORD *)(v37 + 8) = v34;
        }
      }
      goto LABEL_3;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v38 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v39 = sub_D251C0(*(_QWORD *)(a1 + 560));
        v41 = v40;
        v42 = v39;
        v43 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        v3 = sub_DCBF60(a1 + 384, v38, v43);
        if ( (_BYTE)v3 )
        {
          if ( !*(_DWORD *)(v43 + 24) && *(_QWORD *)(v43 + 32) && *(_DWORD *)(v43 + 40) )
          {
            sub_E24D00(v43);
            sub_E23CF0(v43);
          }
          v44 = sub_D0E230(v43);
          *(_QWORD *)v44 = v42;
          *(_DWORD *)(v44 + 8) = v41;
        }
      }
      goto LABEL_3;
    case 10:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v45 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v46 = sub_D08FE0(*(_QWORD *)(a1 + 560));
        v47 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        v3 = sub_DCBF60(a1 + 384, v45, v47);
        if ( (_BYTE)v3 )
        {
          if ( !*(_DWORD *)(v47 + 24) && *(_QWORD *)(v47 + 32) && *(_DWORD *)(v47 + 40) )
          {
            sub_E24D00(v47);
            sub_E23CF0(v47);
          }
          *(_BYTE *)sub_D0E7B0(v47) = v46;
        }
      }
      goto LABEL_3;
    case 11:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v48 = *(_QWORD *)(a1 + 1232);
      v49 = a1 + 384;
      *(_QWORD *)(v49 + 856) = *a3;
      result = sub_D1D2A0(v49, v48);
      break;
    case 12:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v50 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        v51 = sub_D08C00(*(_QWORD *)(a1 + 560));
        v53 = v52;
        v54 = v51;
        v55 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
        v3 = sub_DCBF60(a1 + 384, v50, v55);
        if ( (_BYTE)v3 )
        {
          if ( !*(_DWORD *)(v55 + 24) && *(_QWORD *)(v55 + 32) && *(_DWORD *)(v55 + 40) )
          {
            sub_E24D00(v55);
            sub_E23CF0(v55);
          }
          v56 = sub_D0E280(v55);
          *(_QWORD *)v56 = v54;
          *(_DWORD *)(v56 + 8) = v53;
        }
      }
      goto LABEL_3;
    case 13:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v57 = *(_QWORD *)(a1 + 1232);
      v58 = a1 + 384;
      *(_QWORD *)(v58 + 856) = *a3;
      result = sub_D1D360(v58, v57);
      break;
    case 14:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v5 = *(_QWORD *)(a1 + 1232);
        v6 = a1 + 384;
        *(_QWORD *)(v6 + 856) = *a3;
        result = sub_D1D460(v6, v5);
      }
      else
      {
LABEL_3:
        result = v3;
      }
      break;
  }
  return result;
}
