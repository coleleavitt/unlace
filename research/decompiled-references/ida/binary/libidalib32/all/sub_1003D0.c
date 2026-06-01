__int64 __fastcall sub_1003D0(
        _DWORD *a1,
        unsigned int *a2,
        unsigned int *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int *v8; // r12
  unsigned int *v9; // rbp
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // edx
  __int16 flags; // ax
  unsigned int not_tail; // r8d
  unsigned int item_end; // eax
  unsigned int v16; // r8d
  unsigned int v17; // ebx
  __int64 result; // rax
  int v19; // r8d
  int v20; // r9d
  signed int v21; // edx
  int v22; // [rsp-8h] [rbp-80h]
  unsigned int v23; // [rsp+0h] [rbp-78h]
  unsigned __int8 v24; // [rsp+0h] [rbp-78h]
  unsigned int v26; // [rsp+Ch] [rbp-6Ch]
  unsigned int v27; // [rsp+1Ch] [rbp-5Ch] BYREF
  _DWORD v28[6]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v29; // [rsp+38h] [rbp-40h]

  v8 = a3;
  v9 = a2;
  v10 = *(_DWORD *)(a4 + 16);
  v29 = __readfsqword(0x28u);
  if ( !a2 )
    v9 = (unsigned int *)&unk_25175C;
  if ( !a3 )
    v8 = (unsigned int *)&unk_251758;
  v11 = nbits();
  v12 = a1[3];
  if ( (unsigned int)(v11 - 1) <= 7 )
    v12 *= a1[2];
  v23 = v10 + v12;
  if ( __CFADD__(v10, v12) )
    return 0;
  flags = get_flags_ex();
  not_tail = a5;
  if ( (flags & 0x600) == 0x200 )
    not_tail = prev_not_tail();
  if ( not_tail == -1 )
    return 0;
  v26 = not_tail;
  item_end = get_item_end();
  v16 = v26;
  if ( v10 >= v26 )
    v16 = v10;
  v17 = v23;
  if ( v23 > item_end )
    v17 = item_end;
  if ( v17 <= v16 )
    return 0;
  if ( !(unsigned __int8)sub_1000F0(a1, v9, &v27, a4, v16, a6, 0) )
    return 0;
  v24 = sub_1000F0(a1, &v27, v8, a4, v17 - 1, a6, 0);
  if ( !v24 )
    return 0;
  sub_FFDA0((__int64)a1, v28, a5, v22, v19, v20);
  result = v24;
  v21 = v28[a6];
  if ( (int)*v9 < v21 )
    *v9 = v21;
  --*v8;
  return result;
}

