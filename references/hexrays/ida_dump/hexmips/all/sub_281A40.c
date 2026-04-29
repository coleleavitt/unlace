__int64 __fastcall sub_281A40(__int64 a1, __int64 a2, int a3, unsigned __int8 a4, int a5)
{
  __int64 v5; // r15
  int v8; // ebx
  __int64 v9; // rsi
  int tinfo_size; // eax
  int v11; // r10d
  int v12; // ebx
  __int64 v13; // r13
  __int64 v14; // rbp
  __int64 v15; // rax
  int v17; // eax
  int v18; // r10d
  int v19; // r8d
  int v20; // ecx
  int v21; // eax
  int v22; // r13d
  int v23; // eax
  int v24; // r14d
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  int v28; // r10d
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // r14
  int v32; // eax
  __int64 v33; // r8
  unsigned __int64 v34; // rax
  unsigned __int8 v35; // [rsp+0h] [rbp-68h]
  int v36; // [rsp+0h] [rbp-68h]
  int v37; // [rsp+Ch] [rbp-5Ch]
  int v38; // [rsp+Ch] [rbp-5Ch]
  int v39; // [rsp+10h] [rbp-58h]
  int v40; // [rsp+10h] [rbp-58h]
  int v41; // [rsp+10h] [rbp-58h]
  __int64 v42; // [rsp+10h] [rbp-58h]
  int v43; // [rsp+18h] [rbp-50h]
  __int64 v44; // [rsp+18h] [rbp-50h]
  int v45; // [rsp+18h] [rbp-50h]
  _QWORD v46[9]; // [rsp+20h] [rbp-48h] BYREF

  v5 = a2;
  v8 = ~a5;
  v9 = *(_QWORD *)(a2 + 48);
  v46[1] = __readfsqword(0x28u);
  tinfo_size = get_tinfo_size(0, v9, 0);
  v37 = tinfo_size;
  if ( a3 >= tinfo_size )
    tinfo_size = a3;
  v11 = tinfo_size;
  v35 = *(_BYTE *)(*(_QWORD *)(a1 + 72) + 130LL);
  v12 = *(_DWORD *)(a1 + 24) + v8;
  if ( v12 < 0 )
    return 0;
  v13 = 8LL * (unsigned int)v12;
  while ( 1 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + v13);
    if ( !v14 )
      return 0;
    v15 = *(unsigned int *)(v14 + 8);
    if ( (unsigned int)v15 > 0x45 )
    {
      if ( !a4 || (int)v15 > 69 )
        goto LABEL_8;
      goto LABEL_22;
    }
    if ( (*((_BYTE *)&off_4C0A60 + 16 * (int)v15 + 11) & 0x10) == 0 )
      break;
    if ( (*((_BYTE *)&off_4C0A60 + 16 * (int)v15 + 11) & 8) == 0 || *(_QWORD *)(v14 + 32) != v5 )
    {
      v21 = get_tinfo_size(0, *(_QWORD *)(v5 + 48), 0);
      if ( (unsigned int)(*(_DWORD *)(v14 + 8) - 22) > 9 )
      {
        v22 = get_tinfo_size(0, *(_QWORD *)(v14 + 48), 0);
      }
      else
      {
        if ( v35 >= v21 )
          v21 = v35;
        v22 = v21;
      }
LABEL_34:
      v23 = get_tinfo_size(0, *(_QWORD *)(v5 + 48), 0);
      if ( a4 )
      {
        v24 = v23;
LABEL_36:
        if ( (unsigned int)get_tinfo_property(*(_QWORD *)(v5 + 48), 3) == 1 )
          return (unsigned int)sub_281800(a1, v14, v5, v22, v24, v12) + 1;
      }
      return 1;
    }
    if ( (_DWORD)v15 == 58 )
      goto LABEL_13;
    if ( a4 )
      goto LABEL_22;
    switch ( *(_DWORD *)(v14 + 8) )
    {
      case 1:
      case 0x10:
LABEL_51:
        if ( *(_QWORD *)(v14 + 24) == v5 || (get_tinfo_property(*(_QWORD *)(v14 + 48), 2) & 0xF) == 8 )
          return 0;
        goto LABEL_17;
      case 0x13:
      case 0x14:
      case 0x23:
      case 0x24:
      case 0x25:
LABEL_41:
        v26 = *(_QWORD *)(v14 + 24);
        a4 = 1;
        goto LABEL_42;
      case 0x15:
LABEL_61:
        v26 = *(_QWORD *)(v14 + 24);
        if ( *(_DWORD *)(v26 + 8) == 61 )
        {
          v31 = *(_QWORD *)(v14 + 24);
        }
        else
        {
          v31 = *(_QWORD *)(v14 + 32);
          if ( *(_DWORD *)(v31 + 8) != 61 )
            goto LABEL_63;
        }
        if ( !v31 )
        {
LABEL_63:
          a4 = 1;
          goto LABEL_42;
        }
        v45 = v11;
        v42 = sub_2511B0(*(__int64 **)(v31 + 24), (_QWORD *)(v31 + 48));
        v32 = get_tinfo_size(0, *(_QWORD *)(v31 + 48), 0);
        v33 = v42;
        v26 = *(_QWORD *)(v14 + 24);
        v34 = (unsigned int)(8 * v32 - 1);
        v11 = v45;
        a4 = _bittest64(&v33, v34);
        if ( (unsigned __int64)(int)v34 >= 0x40 )
          a4 = 0;
LABEL_42:
        if ( v26 == v5 )
          v26 = *(_QWORD *)(v14 + 32);
        v41 = v11;
        v44 = v26;
        v27 = get_tinfo_size(0, *(_QWORD *)(v26 + 48), 0);
        if ( v41 <= v27
          && (v41 != v27
           || (unsigned int)get_tinfo_property(*(_QWORD *)(v44 + 48), 3) == 2
           || *(_DWORD *)(v5 + 8) == 48
           && !(unsigned __int8)sub_27A1A0(*(_QWORD *)(a1 + 72), v44 + 48, *(_QWORD *)(v5 + 24) + 48LL, v5 + 48, 1)) )
        {
          return 0;
        }
LABEL_18:
        --v12;
        v13 -= 8;
        v11 = get_tinfo_size(0, *(_QWORD *)(v14 + 48), 0);
        if ( v12 == -1 )
          return 0;
        v5 = v14;
        break;
      case 0x32:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
LABEL_17:
        a4 = 1;
        goto LABEL_18;
      case 0x39:
LABEL_59:
        v36 = v11;
        if ( *(_QWORD *)(v14 + 24) == v5 )
          return 0;
        v29 = sub_27FAE0(v14, v5, nullptr);
        v30 = get_tinfo_size(0, *(_QWORD *)(v29 + 64), 0);
        v28 = v36;
        v22 = v30;
LABEL_55:
        if ( v22 == -1 )
          goto LABEL_34;
        if ( v28 >= v22 || !a4 )
          return 0;
        v24 = get_tinfo_size(0, *(_QWORD *)(v5 + 48), 0);
        goto LABEL_36;
      default:
        return 0;
    }
  }
  if ( (_DWORD)v15 != 58 )
  {
    if ( a4 )
      goto LABEL_22;
LABEL_8:
    switch ( v15 )
    {
      case 1LL:
      case 16LL:
        goto LABEL_51;
      case 2LL:
      case 3LL:
      case 4LL:
      case 5LL:
      case 6LL:
      case 7LL:
      case 8LL:
      case 34LL:
        if ( *(_QWORD *)(v14 + 32) != v5 )
          goto LABEL_17;
        return 0;
      case 19LL:
      case 20LL:
      case 35LL:
      case 36LL:
      case 37LL:
        goto LABEL_41;
      case 21LL:
        goto LABEL_61;
      case 48LL:
        if ( !a4 || (get_tinfo_property(*(_QWORD *)(v14 + 48), 2) & 0xF) != 9 )
          return 0;
        return (get_tinfo_property(*(_QWORD *)(v5 + 48), 2) & 0xF) != 9;
      case 50LL:
      case 52LL:
      case 53LL:
      case 54LL:
      case 55LL:
      case 56LL:
        goto LABEL_17;
      case 57LL:
        goto LABEL_59;
      case 77LL:
        if ( !a4 || !(unsigned __int8)sub_23D680(*(_QWORD **)(v14 + 24)) )
          return 0;
        if ( v35 > v37 )
          return 2;
        return 1;
      case 80LL:
        v38 = v11;
        sub_368820(v46, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL), 0);
        v22 = get_tinfo_size(0, v46[0], 0);
        clear_tinfo_t(v46);
        v28 = v38;
        goto LABEL_55;
      default:
        return 0;
    }
  }
LABEL_13:
  if ( v35 > v11 )
    return 1;
  if ( !a4 )
    return 0;
LABEL_22:
  v39 = v11;
  v17 = get_tinfo_size(0, *(_QWORD *)(v5 + 48), 0);
  v18 = v39;
  v37 = v17;
  v19 = v17;
  if ( (unsigned int)(*(_DWORD *)(v14 + 8) - 22) > 9 )
  {
    v43 = v17;
    v25 = get_tinfo_size(0, *(_QWORD *)(v14 + 48), 0);
    v19 = v43;
    v18 = v39;
    v20 = v25;
  }
  else
  {
    v20 = v35;
    if ( v35 < v17 )
      v20 = v17;
  }
  v40 = v18;
  if ( !sub_281800(a1, v14, v5, v20, v19, v12) )
  {
    v15 = *(unsigned int *)(v14 + 8);
    v11 = v40;
    goto LABEL_8;
  }
  return 2;
}
