__int64 __fastcall sub_930260(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r13
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rbp
  unsigned __int64 v8; // r14
  __int64 v9; // r13
  unsigned __int8 **v10; // r15
  unsigned int v11; // r13d
  char v12; // r13
  __int64 v13; // r15
  void *v14; // rdx
  unsigned __int8 v15; // bp
  void *v17; // rdi
  __int64 v18; // [rsp+8h] [rbp-70h]
  void *v19; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v20; // [rsp+18h] [rbp-60h]
  void *v21; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v22; // [rsp+28h] [rbp-50h]
  char v23; // [rsp+2Ch] [rbp-4Ch]
  void *v24; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v25; // [rsp+38h] [rbp-40h]

  *(_QWORD *)(a1 + 800) = a2;
  v3 = *(_QWORD *)(a1 + 568);
  v4 = *(_QWORD *)(a1 + 792);
  v5 = sub_A1A5A0(v3, 16);
  v6 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = 0;
  v20 = v6;
  v19 = *(void **)v5;
  sub_A1A5E0(v3, 16);
  v7 = *(_QWORD *)(a1 + 568);
  v8 = *(_QWORD *)sub_A1A5A0(v7, 8);
  sub_A1A5E0(v7, 8);
  if ( (*(_BYTE *)(sub_A2CB40(a1 + 384) + 47) & 0x20) != 0 )
  {
    sub_92A4D0((__int64)&v24, 0x3Fu, v20);
    v22 = v20;
    if ( v20 > 0x40 )
      sub_2585B30(&v21);
    else
      v21 = v19;
    sub_8CC450((__int64)&v21, &v24, (__int64)&v19);
    if ( v22 > 0x40 && v21 )
      operator delete[](v21);
    if ( v25 > 0x40 && v24 )
      operator delete[](v24);
  }
  sub_92A4D0((__int64)&v24, 0x40u, v20);
  if ( (int)sub_2586820(&v19, &v24) < 0 )
  {
    if ( v25 <= 0x40 || (v17 = v24) == nullptr )
    {
LABEL_10:
      sub_92A4D0((__int64)&v24, 0x3Fu, v20);
      v12 = sub_922400((__int64)&v19, (__int64)&v24);
      if ( v25 > 0x40 && v24 )
        operator delete[](v24);
      v13 = -1;
      if ( v12 == 3 )
        goto LABEL_21;
      v22 = v20;
      if ( v20 > 0x40 )
      {
        sub_2585B30(&v21);
        v25 = v22;
        if ( v22 > 0x40 )
        {
          sub_2585B30(&v24);
LABEL_17:
          v15 = (unsigned __int8)sub_9301F0((__int64)&v24);
          if ( v25 > 0x40 && v24 )
            operator delete[](v24);
          v13 = v8 >> v15;
          if ( v22 > 0x40 && v21 )
            operator delete[](v21);
LABEL_21:
          v11 = 1;
          *(_QWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v13;
          goto LABEL_22;
        }
        v14 = v21;
      }
      else
      {
        v14 = v19;
        v25 = v20;
        v21 = v19;
      }
      v24 = v14;
      goto LABEL_17;
    }
LABEL_28:
    operator delete[](v17);
    goto LABEL_10;
  }
  if ( v25 > 0x40 && v24 )
    operator delete[](v24);
  v9 = sub_A180F0(*(_QWORD *)(a1 + 584), v4);
  sub_2587D60(&v24, &v19);
  v23 = 1;
  v22 = v25;
  v21 = v24;
  v18 = *(_QWORD *)(v9 + 8);
  v24 = (void *)sub_A2E240(a1 + 384, v9, 2220, 0);
  v10 = (unsigned __int8 **)v24;
  if ( v24 )
  {
    sub_8DF340((unsigned __int8 ***)&v24, (__int64)&v21);
    sub_8D69A0(v10, v18);
    sub_8D6E40(v10, 64);
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 32LL))(*(_QWORD *)(a1 + 408));
  if ( (_BYTE)v11 )
  {
    if ( v22 <= 0x40 )
      goto LABEL_10;
    v17 = v21;
    if ( !v21 )
      goto LABEL_10;
    goto LABEL_28;
  }
  if ( v22 > 0x40 && v21 )
    operator delete[](v21);
LABEL_22:
  if ( v20 > 0x40 && v19 )
    operator delete[](v19);
  return v11;
}

