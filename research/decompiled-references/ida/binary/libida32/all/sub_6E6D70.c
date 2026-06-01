__int64 __fastcall sub_6E6D70(_QWORD *a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  _QWORD *v7; // rax
  __int64 result; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r14
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int8 *v20; // r12
  int v21; // eax
  __int64 v22; // r12
  __int64 v23; // rsi
  void *v24; // rcx
  __int64 v25; // rdi
  unsigned __int64 v26; // rdx
  __int64 v27; // rsi
  unsigned __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // [rsp+8h] [rbp-50h]
  unsigned __int64 v32; // [rsp+8h] [rbp-50h]
  void *tinfo_property; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v34; // [rsp+18h] [rbp-40h]
  unsigned __int64 v35; // [rsp+28h] [rbp-30h]

  v7 = (_QWORD *)a1[1];
  v35 = __readfsqword(0x28u);
  if ( (*v7 & 0xFuLL) - 3 > 1 )
    goto LABEL_2;
  if ( !strcmp((const char *)a3, "Protocol") )
  {
    v16 = sub_A662A0(a1[6]);
    sub_6D3180((__int64)a1, (const char *)a3, v16, 2);
    result = sub_A5E330(a1[6], v16, 0);
    v15 = result & 0xFFFFFFFFFFFFFFF8LL;
    goto LABEL_15;
  }
  if ( *(_BYTE *)a3 == 105 && *(_BYTE *)(a3 + 1) == 100 && !*(_BYTE *)(a3 + 2) )
  {
    v12 = sub_A66510(a1[6]);
  }
  else if ( !strcmp((const char *)a3, "SEL") )
  {
    v12 = sub_A664B0(a1[6]);
  }
  else
  {
    if ( strcmp((const char *)a3, "Class") )
      goto LABEL_2;
    v12 = sub_A66440(a1[6]);
  }
  if ( v12 )
  {
    sub_6D3180((__int64)a1, (const char *)a3, v12, 2);
    v14 = *(_QWORD *)(v12 + 48);
    if ( v14 )
    {
      result = v14 & 0xFFFFFFFFFFFFFFF0LL;
      v15 = result;
    }
    else
    {
      result = sub_A56D30(a1[6], v12, v13);
      v15 = result & 0xFFFFFFFFFFFFFFF8LL;
    }
LABEL_15:
    if ( v15 > 0xF )
      return result;
  }
LABEL_2:
  if ( get_tinfo_property(*a2, 288) || get_tinfo_property(*a2, 5) )
    return sub_6E7900(a1, a2, a3, a4);
  v10 = *a2;
  v11 = *a2 & 0xFLL;
  if ( (unsigned __int8)v11 <= 9u )
    return sub_6D3E90(a1, a2);
  switch ( (char)v11 )
  {
    case 10:
      tinfo_property = (void *)get_tinfo_property(v10, 9);
      v27 = sub_6E7240(a1, &tinfo_property, 1);
      if ( (v27 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
      {
        clear_tinfo_t(&tinfo_property);
LABEL_26:
        if ( !under_debugger )
          interr(3373);
        BUG();
      }
      v28 = sub_A4C2D0(a1[6], v27);
      v32 = sub_6D3D30((__int64)a1, a2, v28);
      clear_tinfo_t(&tinfo_property);
      result = v32;
      break;
    case 11:
      v22 = get_tinfo_property(v10, 308);
      v23 = sub_6E7240(a1, v22, a4);
      if ( (v23 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
        goto LABEL_26;
      v24 = (void *)*(unsigned int *)(v22 + 12);
      v25 = a1[6];
      v34 = 64;
      tinfo_property = v24;
      if ( (_DWORD)v24 )
        v26 = sub_A4D230(v25, v23, &tinfo_property, 0, 0, 0);
      else
        v26 = sub_A4E110(v25, v23, 0, 0);
      result = sub_6D3D30((__int64)a1, a2, v26);
      if ( v34 > 0x40 && tinfo_property )
      {
        v31 = result;
        operator delete[](tinfo_property);
        result = v31;
      }
      break;
    case 12:
      result = sub_6E7E80(a1, a2, 0, a4);
      if ( (result & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
        goto LABEL_26;
      return result;
    case 13:
      if ( (get_tinfo_property(v10, 2) & 0x3F) == 0x2D )
        return sub_6E4580(a1, a2, (const char *)a3, v17, v18, v19);
      if ( (get_tinfo_property(*a2, 306) & 0x1000) != 0 )
        return sub_6E7C60(a1, a2, a3, a4);
      return sub_6E6BB0(a1, a2, (const char *)a3, a4, v29, v30);
    case 14:
      v20 = (unsigned __int8 *)get_tinfo_property(v10, 312);
      v21 = get_tinfo_property(*a2, 3);
      return sub_6D3DB0((__int64)a1, *v20, v21 == 1);
    default:
      goto LABEL_26;
  }
  return result;
}

