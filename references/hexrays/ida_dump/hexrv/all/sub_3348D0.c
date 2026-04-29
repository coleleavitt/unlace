__int64 __fastcall sub_3348D0(__int64 a1, __int64 a2, _QWORD *a3, unsigned __int64 a4, __int64 a5, char *a6)
{
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  int v14; // esi
  __int64 segm_para; // r15
  unsigned __int8 v17; // al
  unsigned __int64 v18; // rdi
  __int64 v19; // rbx
  int v20; // ecx
  char v21; // al
  __int64 v22; // rbx
  _QWORD *v23; // rax
  __int64 v24; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v25[11]; // [rsp+10h] [rbp-58h] BYREF

  v25[3] = __readfsqword(0x28u);
  v12 = sub_32BBA0(a3, a4);
  v13 = getseg(v12);
  if ( !v13 )
    return 0;
  v14 = *(_DWORD *)(a1 + 84);
  if ( v14 != (1 << (*(_BYTE *)(v13 + 43) + 4)) / 8 )
  {
    if ( !under_debugger )
      sub_37DDE0(52944);
    BUG();
  }
  if ( v14 > *((_DWORD *)a6 + 1) )
    return 0;
  if ( !a5 )
  {
    get_segm_para(v13);
    v21 = *a6;
    v24 = 0;
    if ( v21 != 4 )
    {
      if ( v21 != 10 )
      {
        if ( v21 == 2 )
          return 0;
        return 2;
      }
      goto LABEL_26;
    }
LABEL_22:
    if ( !(unsigned __int8)sub_333EB0(&v24, a1, a3, a4, *((int **)a6 + 1)) )
    {
      if ( (unsigned __int8)sub_334820(v25, *((_QWORD *)a6 + 1)) )
      {
        v19 = v25[0];
        goto LABEL_14;
      }
      return 2;
    }
    goto LABEL_28;
  }
  if ( *(_BYTE *)a5 != 1 || *(_DWORD *)(a1 + 64) != *(_DWORD *)(a5 + 8) )
    return 0;
  v24 = 0;
  segm_para = get_segm_para(v13);
  v17 = *a6;
  if ( *a6 == 4 )
    goto LABEL_22;
  if ( v17 > 4u )
  {
    if ( v17 != 10 )
      return 2;
LABEL_26:
    sub_11F580((__int64)v25, *((unsigned __int8 **)a6 + 1));
    sub_118550((char *)a2, (char *)v25);
    sub_1188E0((__int64)v25);
    return 1;
  }
  if ( v17 == 1 )
  {
    if ( !(unsigned __int8)sub_333DF0((unsigned __int64 *)&v24, a1, a3, a4, *((_DWORD *)a6 + 2)) )
      return 2;
LABEL_28:
    v22 = v24;
    if ( v24 < 0 )
      return 0;
    sub_1188E0(a2);
    *(_BYTE *)a2 = 5;
    v23 = (_QWORD *)j__qalloc_or_throw(16);
    *v23 = a3;
    v23[1] = v22;
    *(_QWORD *)(a2 + 8) = v23;
    return 1;
  }
  if ( v17 == 2 )
  {
    v18 = *(_QWORD *)(*((_QWORD *)a6 + 1) + 16LL);
    if ( v18 < *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 16LL) )
    {
      v19 = 16 * segm_para + sub_325910(v18, *(_DWORD *)(a1 + 84), 0);
LABEL_14:
      sub_1188E0(a2);
      *(_BYTE *)a2 = 6;
      v20 = 8 * *(_DWORD *)(a1 + 84);
      if ( (unsigned __int64)v20 <= 0x3F )
        v19 &= ~(-1LL << v20);
      *(_QWORD *)(a2 + 8) = v19;
      return 1;
    }
    return 0;
  }
  return 2;
}
