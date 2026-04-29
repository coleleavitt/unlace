__int64 __fastcall sub_16D710(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rdi
  char v10; // al
  _QWORD *v11; // r15
  __int64 v12; // r13
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // [rsp+0h] [rbp-128h]
  __int64 v18; // [rsp+0h] [rbp-128h]
  _QWORD v20[2]; // [rsp+30h] [rbp-F8h] BYREF
  _QWORD v21[4]; // [rsp+40h] [rbp-E8h] BYREF
  _QWORD v22[2]; // [rsp+60h] [rbp-C8h] BYREF
  _QWORD v23[4]; // [rsp+70h] [rbp-B8h] BYREF
  _QWORD v24[2]; // [rsp+90h] [rbp-98h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-80h]
  _QWORD v27[2]; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v28; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v29; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v30; // [rsp+E8h] [rbp-40h]

  v3 = 0;
  v30 = __readfsqword(0x28u);
  if ( (**(_DWORD **)(a1 + 64) & 0x1000) == 0 )
    return v3;
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  sub_124680((__int64)v20, a1, *(_QWORD *)(a1 + 56), 1u);
  sub_127A20((__int64)v22, a1, *(_QWORD *)(a1 + 56), 1);
  v7 = *(_QWORD *)(a2 + 48);
  v8 = *(_QWORD *)(a3 + 48);
  if ( v7 )
  {
    while ( *(char *)(v7 + 4) >= 0 )
    {
      if ( !v8
        || *(char *)(v8 + 4) < 0
        || sub_1201A0((_BYTE *)v7, v17)
        || !sub_125B90((unsigned __int8 *)v7, v17, (unsigned int *)v8, 4u) )
      {
        goto LABEL_7;
      }
      sub_124680((__int64)v24, a1, v7, 1u);
      sub_127A20((__int64)v27, a1, v7, 1);
      if ( (unsigned __int8)sub_64780(v24, v22)
        || (unsigned __int8)sub_318470(&v25, v23)
        || (unsigned __int8)sub_64780(v27, v22)
        || (unsigned __int8)sub_318470(&v28, v23)
        || (unsigned __int8)sub_64780(v27, v20) )
      {
        v9 = v28;
LABEL_19:
        if ( v9 )
        {
          v29 = 0;
          qfree();
        }
        qfree();
        if ( v25 )
        {
          v26 = 0;
          qfree();
        }
        qfree();
        goto LABEL_7;
      }
      v10 = sub_318470(&v28, v21);
      v9 = v28;
      if ( v10 )
        goto LABEL_19;
      v7 = *(_QWORD *)(v7 + 8);
      v8 = *(_QWORD *)(v8 + 8);
      if ( v28 )
      {
        v29 = 0;
        qfree();
      }
      qfree();
      if ( v25 )
      {
        v26 = 0;
        qfree();
      }
      qfree();
      if ( !v7 )
        break;
    }
  }
  if ( v8 && *(char *)(v8 + 4) >= 0 )
  {
LABEL_7:
    if ( *(_QWORD *)(a2 + 48) != v7 )
    {
      v3 = sub_168F10(a2, v7);
      if ( (_BYTE)v3 )
      {
        v11 = *(_QWORD **)(a2 + 48);
        v18 = *(_QWORD *)(a2 + 64);
        while ( (_QWORD *)v7 != v11 )
        {
          v12 = sub_A33C0(a2, (__int64)v11);
          sub_A3160(a1, v11, *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL));
          sub_A3480(a3, *(_QWORD *)(a3 + 48));
          v11 = (_QWORD *)v12;
        }
        v13 = *(_DWORD *)(a1 + 24);
        BYTE1(v13) &= ~2u;
        LOBYTE(v13) = v13 | 0x80;
        *(_DWORD *)(a1 + 24) = v13;
        v14 = *(_DWORD *)(a2 + 24);
        BYTE1(v14) &= ~2u;
        LOBYTE(v14) = v14 | 0x80;
        *(_DWORD *)(a2 + 24) = v14;
        v15 = *(_DWORD *)(a3 + 24);
        BYTE1(v15) &= ~2u;
        LOBYTE(v15) = v15 | 0x80;
        *(_DWORD *)(a3 + 24) = v15;
        *(_DWORD *)v18 |= 0x400u;
        v16 = *(_QWORD *)(v18 + 784);
        if ( v16 )
          *(_DWORD *)(v16 + 48) = 63;
        sub_66FA0(*(_QWORD *)(a1 + 64), 1u, (__int64)"EXTRACT_IDENTICAL_HEAD_IF_INSNS");
        goto LABEL_10;
      }
    }
  }
  v3 = 0;
LABEL_10:
  if ( v23[0] )
  {
    v23[1] = 0;
    qfree();
  }
  qfree();
  if ( v21[0] )
  {
    v21[1] = 0;
    qfree();
  }
  qfree();
  return v3;
}
