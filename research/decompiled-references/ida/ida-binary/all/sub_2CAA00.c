__int64 __fastcall sub_2CAA00(
        _DWORD *a1,
        unsigned int *a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        double a7)
{
  unsigned int *v9; // r12
  unsigned int *v10; // rbp
  unsigned __int64 v11; // rbx
  int v12; // eax
  int v13; // edx
  __int16 flags; // ax
  __int64 not_tail; // r8
  unsigned __int64 item_end; // rax
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rbx
  __int64 result; // rax
  signed int v20; // edx
  unsigned __int64 v21; // [rsp+8h] [rbp-80h]
  unsigned __int8 v22; // [rsp+8h] [rbp-80h]
  unsigned __int64 v24; // [rsp+18h] [rbp-70h]
  unsigned int v25; // [rsp+2Ch] [rbp-5Ch] BYREF
  _DWORD v26[6]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+48h] [rbp-40h]

  v9 = a3;
  v10 = a2;
  v11 = *(_QWORD *)(a4 + 24);
  v27 = __readfsqword(0x28u);
  if ( !a2 )
    v10 = (unsigned int *)&unk_8CCBA4;
  if ( !a3 )
    v9 = (unsigned int *)&unk_8CCBA0;
  v12 = nbits(v11);
  v13 = a1[3];
  if ( (unsigned int)(v12 - 1) <= 7 )
    v13 *= a1[2];
  v21 = v11 + v13;
  if ( __CFADD__(v11, v13) )
    return 0;
  flags = get_flags_ex(a5, 4);
  not_tail = a5;
  if ( (flags & 0x600) == 0x200 )
    not_tail = prev_not_tail(a5);
  if ( not_tail == -1 )
    return 0;
  v24 = not_tail;
  item_end = get_item_end(not_tail);
  v17 = v24;
  if ( v11 >= v24 )
    v17 = v11;
  v18 = v21;
  if ( v21 > item_end )
    v18 = item_end;
  if ( v18 <= v17 )
    return 0;
  if ( !(unsigned __int8)sub_2CA720(a1, v10, &v25, a4, v17, a6, a7, 0) )
    return 0;
  v22 = sub_2CA720(a1, &v25, v9, a4, v18 - 1, a6, a7, 0);
  if ( !v22 )
    return 0;
  sub_2CA3D0((__int64)a1, v26, a5, a7);
  result = v22;
  v20 = v26[a6];
  if ( (int)*v10 < v20 )
    *v10 = v20;
  --*v9;
  return result;
}
