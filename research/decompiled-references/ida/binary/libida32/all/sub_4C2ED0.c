__int64 __fastcall sub_4C2ED0(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        char a4,
        unsigned int a5,
        unsigned int a6,
        char a7)
{
  unsigned int v7; // r14d
  unsigned int v9; // r12d
  __int64 v11; // rbp
  int v12; // r14d
  unsigned int v13; // eax
  __int64 v14; // r9
  char v15; // al
  char aflags; // dl
  char v18; // al
  unsigned int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  unsigned int v23; // [rsp+4h] [rbp-54h]
  unsigned int v25; // [rsp+Ch] [rbp-4Ch]
  int v26; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v27; // [rsp+18h] [rbp-40h]

  v7 = 0;
  v9 = a5;
  v23 = a3;
  v27 = __readfsqword(0x28u);
  if ( (a7 & 2) == 0 )
  {
    v19 = sub_4B39D0(a1, a3, a5);
    v7 = v19 - v9;
    v9 = v19;
  }
  if ( (a7 & 1) == 0 )
  {
    if ( (sub_3B9AA0(a1, v23, 4) & 0x600) == 0x200 )
      v23 = sub_3BD5D0(a1, v23);
    aflags = get_aflags(v23);
    v18 = a7 | 1;
    if ( (aflags & 0x80) == 0 )
      v18 = a7;
    a7 = v18;
  }
  v26 = 0;
  v11 = sub_4EE820(a1 + 1552, v9);
  v12 = sub_4F8EA0(a1, v11, v7);
  if ( a6 != -1 )
    a6 += v12;
  v13 = sub_4F8EA0(a1, v11, a6);
  v14 = v13;
  if ( v11 )
  {
    v25 = v13;
    v15 = is_spec_segm(*(unsigned __int8 *)(v11 + 96));
    v14 = v25;
    if ( v15 )
    {
      v26 -= v12;
      v12 = 0;
    }
  }
  if ( !(unsigned __int8)sub_4C2960(*(_QWORD *)a1, a2, v23, a4, v9, v14, &v26, a7) )
    return -1;
  sub_4F5740(a1, a2, (unsigned int)(v26 - v12), 1);
  if ( *(_BYTE *)(a1 + 2664) )
  {
    v20 = *(_QWORD *)(a1 + 2648);
    v21 = *(_QWORD *)(a1 + 2640);
    if ( *(_QWORD *)(a1 + 2656) < (unsigned __int64)(v20 + 1) )
    {
      v22 = qvector_reserve(a1 + 2640, v21, v20 + 1, 4);
      *(_QWORD *)(a1 + 2640) = v22;
      v21 = v22;
      v20 = *(_QWORD *)(a1 + 2648);
    }
    *(_DWORD *)(v21 + 4 * v20) = v9;
    ++*(_QWORD *)(a1 + 2648);
  }
  return (a2[1] == 0) + a2[1] - 1;
}

