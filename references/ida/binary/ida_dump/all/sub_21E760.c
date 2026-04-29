__int64 __fastcall sub_21E760(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  unsigned int v3; // ebx
  int tinfo_size; // r15d
  int v6; // r12d
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rsi
  bool v11; // bp
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  _DWORD *v15; // rsi
  int v16; // eax
  __int64 v17; // [rsp+10h] [rbp-78h] BYREF
  signed __int64 v18; // [rsp+18h] [rbp-70h] BYREF
  _QWORD v19[2]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v20[24]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v19[0] = 0;
  v19[1] = 0;
  sub_36D720(v20, *a1, v19);
  copy_tinfo_t();
  clear_tinfo_t();
  if ( !(unsigned __int8)a1[4] )
  {
    v1 = sub_1D5170(*a1);
    v2 = *(_QWORD *)(v1 + 184);
    if ( v2 )
    {
      v7 = *a1;
      v8 = *(_QWORD *)(v1 + 176) + 16 * v2;
      v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 1496) + 24LL) + 16LL)
         & (*(_QWORD *)(v8 - 16) - *(_QWORD *)(*a1 + 1440));
      v17 = v9;
      if ( v9 >= *(_QWORD *)(v7 + 144) )
      {
        v6 = *(_DWORD *)(v8 - 8);
        goto LABEL_11;
      }
    }
LABEL_3:
    v3 = 0;
    goto LABEL_4;
  }
  tinfo_size = get_tinfo_size();
  sub_1C5FB0((__int64)v20, (__int64)v19, tinfo_size, *(_QWORD *)(*a1 + 136) + *(int *)(*a1 + 116));
  if ( !(unsigned __int8)sub_1C34E0((__int64)v20, &v17, &v18, tinfo_size) )
    goto LABEL_8;
  if ( v18 - v17 > tinfo_size )
  {
    if ( !under_debugger )
      sub_383060(52851);
    BUG();
  }
  v6 = v18 - v17;
  if ( !(unsigned __int8)sub_1C34E0((__int64)v20, &v17, nullptr, (int)v18 - (int)v17) )
  {
LABEL_8:
    cleanup_argloc();
    goto LABEL_3;
  }
  cleanup_argloc();
  v9 = v17;
  v7 = *a1;
LABEL_11:
  v10 = a1[1];
  v11 = 1;
  v12 = v9 & -*(_DWORD *)(*(_QWORD *)(v7 + 1504) + 80LL);
  a1[1] = v12;
  if ( v10 == v12 )
  {
    v11 = 0;
    if ( !v6 )
      v11 = a1[2] != 0;
  }
  a1[2] = v12 + v6 - v9;
  v13 = get_tinfo_size();
  v14 = a1[2];
  if ( v13 != v14 )
  {
    clear_tinfo_t();
    v14 = a1[2];
  }
  v15 = (_DWORD *)*a1;
  v16 = *(_DWORD *)(*(_QWORD *)(*a1 + 1504) + 80LL);
  a1[3] = (v14 + a1[1] + v16 - 1) & -v16;
  if ( v11 )
    *v15 |= 0x8000000u;
  v3 = 1;
LABEL_4:
  cleanup_argloc();
  return v3;
}
