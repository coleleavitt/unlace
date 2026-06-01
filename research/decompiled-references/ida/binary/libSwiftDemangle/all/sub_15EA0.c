__int64 __fastcall sub_15EA0(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 result; // rax
  __int16 v3; // si
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rax
  __int16 v8; // r12
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int16 v12; // si
  __int16 v13; // r14
  unsigned __int64 v14; // r13
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int16 v17; // r12
  __int64 v18; // r14
  __int64 v19; // r13
  unsigned __int64 v20; // r15
  __int64 v21; // rax
  unsigned __int64 v22; // r12
  __int64 v23; // r12

  v1 = *(_QWORD *)(a1 + 72);
  if ( v1 >= *(_QWORD *)(a1 + 64) )
    return 0;
  *(_QWORD *)(a1 + 72) = v1 + 1;
  switch ( *(_BYTE *)(*(_QWORD *)(a1 + 56) + v1) )
  {
    case 'A':
      v5 = sub_D1F0((_QWORD *)a1);
      v6 = sub_132E0(a1);
      v7 = sub_CD20((_QWORD *)a1, 30, v6);
      goto LABEL_7;
    case 'C':
      v17 = 0;
      goto LABEL_24;
    case 'D':
      v8 = 28;
      goto LABEL_9;
    case 'E':
      v8 = 101;
      goto LABEL_9;
    case 'M':
      return sub_13AD0(a1);
    case 'P':
      v8 = 167;
      goto LABEL_9;
    case 'U':
      v13 = 67;
      goto LABEL_22;
    case 'W':
      v3 = 168;
      v4 = sub_132E0(a1);
      return sub_CD20((_QWORD *)a1, v3, v4);
    case 'a':
      v9 = *(_DWORD *)(a1 + 96);
      if ( v9 )
      {
        v10 = (unsigned int)(v9 - 1);
        v5 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v10);
        *(_DWORD *)(a1 + 96) = v10;
      }
      else
      {
        v5 = 0;
      }
      v11 = sub_132E0(a1);
      v7 = sub_CD20((_QWORD *)a1, 330, v11);
      goto LABEL_7;
    case 'c':
      v17 = 26;
LABEL_24:
      v18 = sub_BBE0(a1, 165);
      v19 = sub_BBE0(a1, 221);
      v20 = sub_15540(a1, v19);
      v21 = sub_132E0(a1);
      v22 = sub_CD20((_QWORD *)a1, v17, v21);
      sub_CCF0((_QWORD *)a1, v22, v20);
      v23 = sub_CCF0((_QWORD *)a1, v22, v19);
      sub_CCF0((_QWORD *)a1, v23, v18);
      return v23;
    case 'd':
      v8 = 47;
      goto LABEL_9;
    case 'e':
      v8 = 100;
      goto LABEL_9;
    case 'i':
      v8 = 119;
LABEL_9:
      v3 = v8;
      v4 = sub_132E0(a1);
      return sub_CD20((_QWORD *)a1, v3, v4);
    case 'm':
      v12 = 129;
      goto LABEL_15;
    case 'p':
      v12 = 251;
LABEL_15:
      result = sub_15D90(a1, v12);
      break;
    case 'u':
      v13 = 111;
LABEL_22:
      v14 = sub_D1F0((_QWORD *)a1);
      v5 = sub_BBE0(a1, 221);
      v15 = sub_132E0(a1);
      v16 = sub_CD20((_QWORD *)a1, v13, v15);
      v7 = sub_CCF0((_QWORD *)a1, v16, v14);
LABEL_7:
      result = sub_CCF0((_QWORD *)a1, v7, v5);
      break;
    default:
      return 0;
  }
  return result;
}

