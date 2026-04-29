__int64 __fastcall sub_219EE0(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned int v4; // ebx
  int tinfo_size; // r15d
  int v7; // r12d
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rsi
  bool v12; // bp
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  _DWORD *v17; // rsi
  int v18; // eax
  __int64 v19; // [rsp+10h] [rbp-78h] BYREF
  signed __int64 v20; // [rsp+18h] [rbp-70h] BYREF
  _QWORD v21[2]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v22[24]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v21[0] = 0;
  v21[1] = 0;
  sub_368820(v22, *a1, v21);
  copy_tinfo_t(a1 + 4, v22);
  clear_tinfo_t(v22);
  v1 = a1[4];
  if ( !(_BYTE)v1 )
  {
    v2 = sub_1D0DF0(*a1);
    v3 = *(_QWORD *)(v2 + 184);
    if ( v3 )
    {
      v8 = *a1;
      v9 = *(_QWORD *)(v2 + 176) + 16 * v3;
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 1496) + 24LL) + 16LL)
          & (*(_QWORD *)(v9 - 16) - *(_QWORD *)(*a1 + 1440));
      v19 = v10;
      if ( v10 >= *(_QWORD *)(v8 + 144) )
      {
        v7 = *(_DWORD *)(v9 - 8);
        goto LABEL_11;
      }
    }
LABEL_3:
    v4 = 0;
    goto LABEL_4;
  }
  tinfo_size = get_tinfo_size(0, v1, 0);
  sub_1C1BF0((__int64)v22, (__int64)v21, tinfo_size, *(_QWORD *)(*a1 + 136) + *(int *)(*a1 + 116));
  if ( !(unsigned __int8)sub_1BF120((__int64)v22, &v19, &v20, tinfo_size) )
    goto LABEL_8;
  if ( v20 - v19 > tinfo_size )
  {
    if ( !under_debugger )
      sub_37E160(52851);
    BUG();
  }
  v7 = v20 - v19;
  if ( !(unsigned __int8)sub_1BF120((__int64)v22, &v19, nullptr, (int)v20 - (int)v19) )
  {
LABEL_8:
    cleanup_argloc(v22);
    goto LABEL_3;
  }
  cleanup_argloc(v22);
  v10 = v19;
  v8 = *a1;
LABEL_11:
  v11 = a1[1];
  v12 = 1;
  v13 = v10 & -*(_DWORD *)(*(_QWORD *)(v8 + 1504) + 80LL);
  a1[1] = v13;
  if ( v11 == v13 )
  {
    v12 = 0;
    if ( !v7 )
      v12 = a1[2] != 0;
  }
  v14 = a1[4];
  a1[2] = v13 + v7 - v10;
  v15 = get_tinfo_size(0, v14, 0);
  v16 = a1[2];
  if ( v15 != v16 )
  {
    clear_tinfo_t(a1 + 4);
    v16 = a1[2];
  }
  v17 = (_DWORD *)*a1;
  v18 = *(_DWORD *)(*(_QWORD *)(*a1 + 1504) + 80LL);
  a1[3] = (v16 + a1[1] + v18 - 1) & -v18;
  if ( v12 )
    *v17 |= 0x8000000u;
  v4 = 1;
LABEL_4:
  cleanup_argloc(v21);
  return v4;
}
