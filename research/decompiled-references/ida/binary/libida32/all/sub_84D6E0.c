_QWORD *__fastcall sub_84D6E0(__int64 a1, unsigned __int8 a2, int a3, int a4)
{
  unsigned int *v5; // r12
  unsigned int *v7; // rbx
  int v8; // r15d
  int v9; // r13d
  int v10; // ebp
  _QWORD *v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  int i; // r13d
  int v17; // edx
  _QWORD *v18; // r14
  _QWORD *v19; // r15
  __int64 v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // r13
  int j; // r15d
  int v25; // edx
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // r14
  __int64 v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rax
  _QWORD *v33; // rbp
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  _QWORD *v37; // [rsp+10h] [rbp-68h]
  _QWORD *v38; // [rsp+10h] [rbp-68h]
  unsigned __int8 v39; // [rsp+18h] [rbp-60h]
  _QWORD *v40; // [rsp+18h] [rbp-60h]
  _QWORD *v41; // [rsp+20h] [rbp-58h]
  _QWORD *v42; // [rsp+28h] [rbp-50h]

  v5 = *(unsigned int **)a1;
  sub_849F80(*(unsigned int **)a1, 0x40u, 4, 0, 2, 0, 0x7Fu, 500000);
  sub_847F60(v5, 32, 1, 0, 142, *(int *)(a1 + 84));
  v42 = sub_84A700(v5, 2, 4, 0, 13, 0);
  v41 = sub_84A700(v5, 2, 2, 0, 1, 0);
  if ( a4 )
    sub_849F80(v5, 0x40u, 1, 0, 2, 0, 0x7Fu, 1);
  else
    sub_847F60(v5, 32, 1, 0, 2, 0);
  v7 = *(unsigned int **)a1;
  if ( a3 )
  {
    v8 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 152) + a2);
    if ( (_BYTE)v8 == a2 )
    {
      v39 = *(_BYTE *)(*(_QWORD *)(a1 + 152) + a2);
      v9 = 0;
      v10 = 0;
    }
    else
    {
      v9 = (unsigned __int8)(a2 ^ v8);
      if ( (v9 & (v9 - 1)) != 0 )
      {
        v39 = a2;
        v9 = 0;
        v10 = 2;
      }
      else
      {
        v10 = 1;
        v39 = a2 | v8;
      }
    }
  }
  else
  {
    v39 = a2;
    v8 = a2;
    v9 = 0;
    v10 = 0;
  }
  v11 = sub_84A700(v7, 3, 1, 0, 13, 0);
  if ( !*v7 )
  {
    v12 = *((_QWORD *)v7 + 10);
    v13 = *(_QWORD *)(v12 + 8);
    if ( (unsigned __int64)(v13 + 16) <= 0xFF0 )
    {
      *(_QWORD *)(v12 + 8) = v13 + 16;
      v38 = (_QWORD *)(v12 + v13 + 16);
      if ( v12 + v13 != -16 )
        goto LABEL_12;
    }
    else
    {
      v37 = v11;
      v14 = (_QWORD *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v7 + 7))(
                        4096,
                        *(_QWORD *)(*((_QWORD *)v7 + 7) + 16LL));
      v11 = v37;
      if ( v14 )
      {
        *v14 = *((_QWORD *)v7 + 10);
        *((_QWORD *)v7 + 10) = v14;
        v15 = v14 + 2;
        *(v15 - 1) = 16;
        v38 = v15;
LABEL_12:
        v38[1] = 0;
        *v38 = v11;
        goto LABEL_13;
      }
      *v7 = 2;
    }
  }
  v38 = nullptr;
LABEL_13:
  sub_847F60(v7, 32, 4, 0, 1, 0);
  sub_847F60(v7, 32, 3, 0, 2, 0);
  sub_848B50(v7, 2, 127, 16843009 * v39);
  if ( a2 == (_BYTE)v8 )
  {
    sub_847F60(v7, 32, 2, 0, 4, 0);
    sub_847EA0((__int64)v7, 2, 2);
  }
  else
  {
    if ( !v9 )
      v9 = v8;
    sub_848B50(v7, 3, 127, 16843009 * v9);
    sub_847F60(v7, 32, 2, 0, 4, 0);
    sub_847EA0((__int64)v7, 2, 2);
    sub_847EA0((__int64)v7, 3, 3);
  }
  if ( !*v7 )
  {
    v7[36] = 0;
    sub_8498A0(v7, 0x25232120u, 2, 0, 2, 0, 127, -16);
    if ( !*v7 )
    {
      v7[36] = 0;
      sub_8498A0(v7, 0x25232120u, 4, 0, 4, 0, 127, 15);
    }
  }
  sub_847A70((__int64)v7, 67125248, 1, 0);
  for ( i = 0; i != 4; ++i )
  {
    v17 = i;
    sub_848E80(v7, v10, v17, 0, 1u, 2u, 3u);
  }
  sub_848FF0(v7);
  sub_849F80(v7, 0x40u, 2, 0, 2, 0, 4u, 0);
  if ( !*v7 )
  {
    v7[36] = 0;
    sub_849DA0(v7, 40, 0, 1, 0, 1, 0, 4, 0);
  }
  v18 = sub_84A700(v7, 1, 1, 0, 127, 0);
  sub_849F80(v7, 0x42u, 2, 0, 2, 0, 4u, 0);
  v40 = sub_845240((__int64)v7);
  sub_849F80(v7, 0x40u, 2, 0, 2, 0, 0x7Fu, 16);
  v19 = sub_84A700(v7, 3, 2, 0, 13, 0);
  if ( *v7 )
    goto LABEL_60;
  v20 = *((_QWORD *)v7 + 10);
  v21 = *(_QWORD *)(v20 + 8);
  if ( (unsigned __int64)(v21 + 16) <= 0xFF0 )
  {
    v23 = (_QWORD *)(v20 + v21 + 16);
    *(_QWORD *)(v20 + 8) = v21 + 16;
    if ( v20 + v21 != -16 )
      goto LABEL_28;
LABEL_60:
    v23 = v38;
    goto LABEL_29;
  }
  v22 = (_QWORD *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v7 + 7))(4096, *(_QWORD *)(*((_QWORD *)v7 + 7) + 16LL));
  if ( !v22 )
  {
    *v7 = 2;
    goto LABEL_60;
  }
  v23 = v22 + 2;
  *v22 = *((_QWORD *)v7 + 10);
  *((_QWORD *)v7 + 10) = v22;
  v22[1] = 16;
LABEL_28:
  *v23 = v19;
  v23[1] = v38;
LABEL_29:
  sub_847A70((__int64)v7, 67125248, 1, 0);
  for ( j = 0; j != 4; ++j )
  {
    v25 = j;
    sub_848E80(v7, v10, v25, 0, 1u, 2u, 3u);
  }
  sub_848FF0(v7);
  v26 = sub_84A700(v7, 0, 1, 0, 127, 0);
  if ( v26 && v40 )
  {
    v26[2] &= ~1uLL;
    v26[3] = v40;
  }
  v27 = sub_845240((__int64)v7);
  if ( v18 && v27 )
  {
    v18[2] &= ~1uLL;
    v18[3] = v27;
  }
  if ( !*v7 )
  {
    v28 = sub_8441E0((__int64)v7, 4);
    if ( v28 )
    {
      *(_BYTE *)v28 = 3;
      *((_QWORD *)v7 + 15) += 3LL;
      *(_WORD *)((char *)v28 + 1) = -17393;
      *((_BYTE *)v28 + 3) = -64;
    }
  }
  sub_849F80(v7, 0x40u, 1, 0, 1, 0, 2u, 0);
  v29 = sub_84A700(v7, 3, 1, 0, 13, 0);
  if ( *v7 )
    goto LABEL_56;
  v30 = *((_QWORD *)v7 + 10);
  v31 = *(_QWORD *)(v30 + 8);
  if ( (unsigned __int64)(v31 + 16) <= 0xFF0 )
  {
    v33 = (_QWORD *)(v30 + v31 + 16);
    *(_QWORD *)(v30 + 8) = v31 + 16;
    if ( v30 + v31 != -16 )
      goto LABEL_44;
LABEL_56:
    v33 = v23;
    goto LABEL_45;
  }
  v32 = (_QWORD *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v7 + 7))(4096, *(_QWORD *)(*((_QWORD *)v7 + 7) + 16LL));
  if ( !v32 )
  {
    *v7 = 2;
    goto LABEL_56;
  }
  v33 = v32 + 2;
  *v32 = *((_QWORD *)v7 + 10);
  *((_QWORD *)v7 + 10) = v32;
  v32[1] = 16;
LABEL_44:
  v33[1] = v23;
  *v33 = v29;
LABEL_45:
  sub_847F60(v7, 32, 2, 0, 3, 0);
  sub_847F60(v5, 32, 142, *(int *)(a1 + 84), 1, 0);
  v34 = sub_845240((__int64)v5);
  if ( v41 && v34 )
  {
    v41[2] &= ~1uLL;
    v41[3] = v34;
  }
  v35 = sub_845240((__int64)v5);
  if ( v42 && v35 )
  {
    v42[2] &= ~1uLL;
    v42[3] = v35;
  }
  return v33;
}

