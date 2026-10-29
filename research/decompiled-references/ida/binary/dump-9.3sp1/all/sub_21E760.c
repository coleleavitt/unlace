__int64 __fastcall sub_21E760(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  signed int tinfo_size; // r15d
  int v9; // r12d
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  bool v14; // bp
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  _DWORD *v18; // rsi
  int v19; // eax
  __int64 v20; // [rsp+10h] [rbp-78h] BYREF
  signed __int64 v21; // [rsp+18h] [rbp-70h] BYREF
  _QWORD v22[2]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v23[24]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v22[0] = 0;
  v22[1] = 0;
  sub_36D720(v23, *a1, v22);
  copy_tinfo_t();
  clear_tinfo_t();
  v3 = a1[4];
  if ( !(_BYTE)v3 )
  {
    v4 = sub_1D5170(*a1, v3, v1, v2);
    v5 = *(_QWORD *)(v4 + 184);
    if ( v5 )
    {
      v10 = *a1;
      v11 = *(_QWORD *)(v4 + 176) + 16 * v5;
      v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 1496) + 24LL) + 16LL)
          & (*(_QWORD *)(v11 - 16) - *(_QWORD *)(*a1 + 1440));
      v20 = v12;
      if ( v12 >= *(_QWORD *)(v10 + 144) )
      {
        v9 = *(_DWORD *)(v11 - 8);
        goto LABEL_11;
      }
    }
LABEL_3:
    v6 = 0;
    goto LABEL_4;
  }
  tinfo_size = get_tinfo_size();
  sub_1C5FB0((__int64)v23, (__int64)v22, tinfo_size, *(_QWORD *)(*a1 + 136) + *(int *)(*a1 + 116));
  if ( !(unsigned __int8)sub_1C34E0((__int64)v23, &v20, &v21, tinfo_size) )
    goto LABEL_8;
  if ( v21 - v20 > tinfo_size )
  {
    if ( !under_debugger )
      sub_383060(52851);
    BUG();
  }
  v9 = v21 - v20;
  if ( !(unsigned __int8)sub_1C34E0((__int64)v23, &v20, nullptr, (int)v21 - (int)v20) )
  {
LABEL_8:
    cleanup_argloc();
    goto LABEL_3;
  }
  cleanup_argloc();
  v12 = v20;
  v10 = *a1;
LABEL_11:
  v13 = a1[1];
  v14 = 1;
  v15 = v12 & -*(_DWORD *)(*(_QWORD *)(v10 + 1504) + 80LL);
  a1[1] = v15;
  if ( v13 == v15 )
  {
    v14 = 0;
    if ( !v9 )
      v14 = a1[2] != 0;
  }
  a1[2] = v15 + v9 - v12;
  v16 = get_tinfo_size();
  v17 = a1[2];
  if ( v16 != v17 )
  {
    clear_tinfo_t();
    v17 = a1[2];
  }
  v18 = (_DWORD *)*a1;
  v19 = *(_DWORD *)(*(_QWORD *)(*a1 + 1504) + 80LL);
  a1[3] = (v17 + a1[1] + v19 - 1) & -v19;
  if ( v14 )
    *v18 |= 0x8000000u;
  v6 = 1;
LABEL_4:
  cleanup_argloc();
  return v6;
}
