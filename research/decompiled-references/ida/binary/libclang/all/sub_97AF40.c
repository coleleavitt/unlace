__int64 __fastcall sub_97AF40(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebp
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rbp
  int v8; // r13d
  char v9; // r12
  __int64 v10; // r13
  unsigned __int8 v11; // r12
  unsigned __int8 v12; // al
  __int64 v13; // rbp
  int v14; // r13d
  __int16 v15; // r12
  unsigned __int16 v16; // r12
  unsigned __int16 v17; // ax
  __int64 v18; // rbp
  int v19; // r13d
  int v20; // r12d
  int v21; // eax
  unsigned int v22; // r12d
  unsigned int v23; // eax
  __int64 v24; // rbp
  __int64 v25; // r13
  __int64 v26; // r12
  __int64 v27; // rax
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rbp
  __int64 *v35; // rbx
  __int64 v36; // rax
  __int64 v37; // [rsp+0h] [rbp-38h] BYREF
  char v38; // [rsp+8h] [rbp-30h]

  v3 = 1;
  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v7 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v8 = (char)sub_915550(*(_QWORD *)(a1 + 568));
        v9 = sub_915550(*(_QWORD *)(a1 + 568));
        v3 = sub_97A6B0(a1 + 384, v7, v9, v8);
        if ( (_BYTE)v3 )
          *(_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v9 / v8;
      }
      goto LABEL_3;
    case 1:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v10 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v11 = sub_915900(*(_QWORD *)(a1 + 568));
      v12 = sub_915900(*(_QWORD *)(a1 + 568));
      if ( !v11 )
        goto LABEL_35;
      *(_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v12 / v11;
      goto LABEL_3;
    case 2:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v13 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        v14 = (__int16)sub_915930(*(_QWORD *)(a1 + 568));
        v15 = sub_915930(*(_QWORD *)(a1 + 568));
        v3 = sub_97A4B0(a1 + 384, v13, v15, v14);
        if ( (_BYTE)v3 )
          *(_WORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v15 / v14;
      }
      goto LABEL_3;
    case 3:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v10 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v16 = sub_915CE0(*(_QWORD *)(a1 + 568));
      v17 = sub_915CE0(*(_QWORD *)(a1 + 568));
      if ( !v16 )
        goto LABEL_35;
      *(_WORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v17 / v16;
      goto LABEL_3;
    case 4:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v18 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v19 = sub_915D10(*(_QWORD *)(a1 + 568));
      v20 = sub_915D10(*(_QWORD *)(a1 + 568));
      v3 = sub_97A2C0(a1 + 384, v18, v20, v19);
      if ( !(_BYTE)v3 )
        goto LABEL_3;
      v21 = v20 / v19;
      goto LABEL_24;
    case 5:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v10 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v22 = sub_9160C0(*(_QWORD *)(a1 + 568));
      v23 = sub_9160C0(*(_QWORD *)(a1 + 568));
      if ( !v22 )
        goto LABEL_35;
      v21 = v23 / v22;
LABEL_24:
      *(_DWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v21;
      goto LABEL_3;
    case 6:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v24 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v25 = sub_9160F0(*(_QWORD *)(a1 + 568));
      v26 = sub_9160F0(*(_QWORD *)(a1 + 568));
      v3 = sub_97A0C0(a1 + 384, v24, v26, v25);
      if ( !(_BYTE)v3 )
        goto LABEL_3;
      v27 = v26 / v25;
      goto LABEL_31;
    case 7:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v10 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v28 = sub_9164A0(*(_QWORD *)(a1 + 568));
      v29 = sub_9164A0(*(_QWORD *)(a1 + 568));
      if ( v28 )
      {
        v27 = v29 / v28;
LABEL_31:
        *(_QWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v27;
      }
      else
      {
LABEL_35:
        v34 = sub_A180F0(*(_QWORD *)(a1 + 584), v10);
        v35 = (__int64 *)sub_A2E130(a1 + 384, v34, 2306, 0);
        v36 = sub_AC7B80(*(_QWORD *)(v34 + 24));
        if ( v35 )
        {
          v37 = v36;
          v38 = 1;
          sub_839C90(v35, &v37);
        }
        v3 = 0;
      }
LABEL_3:
      result = v3;
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v30 = *(_QWORD *)(a1 + 792);
      v31 = a1 + 384;
      *(_QWORD *)(v31 + 416) = *a3;
      result = sub_900C80(v31, v30);
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v32 = *(_QWORD *)(a1 + 792);
      v33 = a1 + 384;
      *(_QWORD *)(v33 + 416) = *a3;
      result = sub_94A170(v33, v32);
      break;
    case 10:
    case 11:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v5 = *(_QWORD *)(a1 + 792);
      v6 = a1 + 384;
      *(_QWORD *)(v6 + 416) = *a3;
      result = sub_900F70(v6, v5);
      break;
  }
  return result;
}

