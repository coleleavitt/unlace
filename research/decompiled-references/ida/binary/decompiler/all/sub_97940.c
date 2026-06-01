__int64 __fastcall sub_97940(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // r13d
  unsigned int v4; // r15d
  __int64 v6; // r14
  int v7; // r9d
  _DWORD *v8; // rax
  int v9; // r9d
  int v10; // ebp
  int v11; // r9d
  _DWORD *v12; // [rsp+8h] [rbp-80h]
  __int64 v13; // [rsp+10h] [rbp-78h]
  __int64 v14; // [rsp+18h] [rbp-70h]
  _DWORD *v15; // [rsp+20h] [rbp-68h]
  _DWORD *v16; // [rsp+28h] [rbp-60h]
  unsigned __int64 v17; // [rsp+30h] [rbp-58h] BYREF
  __int64 v18; // [rsp+38h] [rbp-50h]
  unsigned __int64 v19; // [rsp+48h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 480);
  if ( !*(_DWORD *)(*(_QWORD *)(v2 + 112) + 16LL) )
    return 0;
  v3 = *(_DWORD *)(a2 + 68);
  if ( v3 != *(unsigned __int8 *)(v2 + 130) )
    return 0;
  if ( !(unsigned __int8)sub_11D940(a2 + 48, &v17, 1) )
    return 0;
  if ( 8 * v3 - 1 != v17 )
    return 0;
  v6 = *(_QWORD *)(a2 + 16);
  if ( !v6 )
    return 0;
  while ( !*(_DWORD *)v6
       || (unsigned int)(*(_DWORD *)v6 - 29) <= 0xC && (unsigned __int8)sub_123660(v6 + 32, a2 + 32, 0) )
  {
    v6 = *(_QWORD *)(v6 + 16);
    if ( !v6 )
      return 0;
  }
  if ( *(_DWORD *)v6 != 4 )
    return 0;
  if ( !(unsigned __int8)sub_123660(v6 + 32, a2 + 32, 0) )
    return 0;
  if ( *(_QWORD *)(v6 + 24) == *(_QWORD *)(a2 + 24) )
    return 0;
  v4 = sub_123660(v6 + 32, a2 + 32, 0);
  if ( !(_BYTE)v4 )
    return 0;
  v14 = v6 + 64;
  v13 = a2 + 64;
  if ( (unsigned __int8)sub_12AA10(*(_QWORD *)(a1 + 64), (int)v6 + 64, (int)a2 + 64, 0, 0, v7) )
  {
    sub_121540(&v17, v14);
    sub_154E70(a1, *(_QWORD *)(v6 + 8), &v17, *(_QWORD *)(a2 + 8), v13, 1);
    *(_DWORD *)v6 = 8;
    sub_11A5D0(v14, &v17);
    *(_DWORD *)(v6 + 4) &= ~0x10u;
    sub_11B160(a2);
    sub_11A960(&v17);
    return v4;
  }
  if ( !(unsigned __int8)sub_123660(v6 + 32, v13, 0) )
    return 0;
  v8 = (_DWORD *)sub_120500(*(_QWORD *)(a2 + 8));
  v12 = v8;
  if ( !v8 || *v8 != 4 )
    return 0;
  v16 = v8 + 8;
  if ( !(unsigned __int8)sub_123660(v8 + 8, v14, 0) )
  {
    if ( (unsigned __int8)sub_123660(v16, a2 + 32, 0) )
    {
      v15 = v12 + 16;
      if ( (unsigned __int8)sub_12AA10(*(_QWORD *)(a1 + 64), v14, (int)v12 + 64, 0, 0, v11) )
      {
        v17 = 0xFFFFFFFF00000000LL;
        v18 = 0;
        sub_122C80(&v17);
        sub_154E70(a1, *(_QWORD *)(v6 + 8), &v17, *((_QWORD *)v12 + 1), v15, 1);
        v10 = 3;
        goto LABEL_24;
      }
    }
    return 0;
  }
  v15 = v12 + 16;
  if ( !(unsigned __int8)sub_12AA10(*(_QWORD *)(a1 + 64), (int)v12 + 64, v13, 0, 0, v9) )
    return 0;
  v18 = 0;
  v17 = 0xFFFFFFFF00000000LL;
  sub_122C80(&v17);
  sub_154E70(a1, *((_QWORD *)v12 + 1), &v17, *(_QWORD *)(a2 + 8), v13, 1);
  v10 = 2;
LABEL_24:
  *v12 = 8;
  sub_11A5D0(v16, a2 + 32);
  sub_11A5D0(v15, &v17);
  v12[1] &= ~0x10u;
  sub_11B160(a2);
  if ( v10 == 3 )
    sub_11B160(v6);
  sub_11A960(&v17);
  return v4;
}
