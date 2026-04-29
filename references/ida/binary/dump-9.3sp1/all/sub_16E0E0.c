__int64 __fastcall sub_16E0E0(__int128 a1)
{
  _DWORD *v1; // r13
  unsigned int v2; // r15d
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // r14
  _DWORD *v7; // rax
  unsigned __int8 *v8; // rax
  unsigned __int8 *v9; // r11
  int v10; // eax
  int v11; // edx
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  char v17; // al
  unsigned __int8 *v18; // r11
  __int64 v19; // r13
  __int64 v20; // [rsp+10h] [rbp-88h]
  unsigned __int8 *v21; // [rsp+18h] [rbp-80h]
  unsigned __int8 *v22; // [rsp+18h] [rbp-80h]
  unsigned __int8 *v23; // [rsp+18h] [rbp-80h]
  unsigned __int8 *v24; // [rsp+20h] [rbp-78h]
  __int64 v25; // [rsp+28h] [rbp-70h]
  _DWORD *v26; // [rsp+30h] [rbp-68h] BYREF
  __int64 v27; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v28[11]; // [rsp+40h] [rbp-58h] BYREF

  v28[3] = __readfsqword(0x28u);
  v1 = *(_DWORD **)(a1 + 56);
  if ( *v1 != 44 )
    return 0;
  v4 = *((_QWORD *)&a1 + 1);
  v5 = sub_1229A0(*(_QWORD *)(*((_QWORD *)&a1 + 1) + 48LL));
  v6 = v5;
  if ( !v5 )
    return 0;
  if ( *(_DWORD *)v5 != 4 )
    return 0;
  v7 = *(_DWORD **)(v5 + 8);
  if ( v7 )
  {
    if ( *v7 != 55 )
      return 0;
  }
  v2 = sub_11FD80((char *)(v6 + 32), v28, 0);
  if ( !(_BYTE)v2 )
    return 0;
  if ( v28[0] != 1 )
    return 0;
  *((_QWORD *)&a1 + 1) = v6 + 64;
  v26 = v1;
  v8 = (unsigned __int8 *)sub_129440(a1, (__int64)&v26, 1);
  v9 = v8;
  if ( !v8 )
    return 0;
  v10 = *(_DWORD *)v8;
  if ( (unsigned int)(v10 - 12) > 1 )
    return 0;
  v11 = *((_DWORD *)v9 + 17);
  if ( v11 != *(_DWORD *)(v6 + 68) || v11 != v1[9] )
    return 0;
  v20 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  if ( v10 != 13 )
  {
    v21 = v9;
    if ( (unsigned __int8)sub_11FD80((char *)(*(_QWORD *)(a1 + 56) + 48LL), &v27, 1u) )
    {
      if ( sub_1255D0(v21 + 32, v20, (__int64)(v1 + 8), 0) )
      {
        v12 = v27;
        if ( (unsigned __int8)sub_11FD80((char *)v21 + 48, v28, 1u) )
        {
          if ( !(v28[0] + v12) )
            goto LABEL_19;
        }
      }
    }
    return 0;
  }
  v22 = v9;
  v25 = (__int64)(v1 + 8);
  v24 = v9 + 32;
  v17 = sub_1255D0(v9 + 32, v20, (__int64)(v1 + 8), 0);
  v18 = v22;
  if ( !v17 )
  {
    v19 = (__int64)(v1 + 12);
LABEL_23:
    v23 = v18;
    if ( sub_1255D0(v24, v20, v19, 0) && sub_1255D0(v23 + 48, v20, v25, 0) )
      goto LABEL_19;
    return 0;
  }
  v19 = (__int64)(v1 + 12);
  if ( !sub_1255D0(v22 + 48, v20, v19, 0) )
  {
    v18 = v22;
    goto LABEL_23;
  }
LABEL_19:
  sub_123A40((__int64)v28, (unsigned __int8 *)(v6 + 64), v13, v14);
  v15 = *(_QWORD *)(a1 + 64);
  v16 = *(unsigned int *)(*(_QWORD *)(a1 + 56) + 72LL);
  if ( (unsigned int)v16 >= *(_DWORD *)(v15 + 64) )
    sub_167AF0(v28);
  sub_167DA0(a1, v4, *(_QWORD *)(*(_QWORD *)(v15 + 528) + 8 * v16), 32, (__int64)v28, v6);
  sub_11CDA0((__int64)v28);
  sub_66FA0(*(_QWORD *)(a1 + 64), 1u, (__int64)"RECOGNIZE_SETNZ2");
  return v2;
}
