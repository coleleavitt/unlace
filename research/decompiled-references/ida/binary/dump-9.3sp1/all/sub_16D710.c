__int64 __fastcall sub_16D710(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rbx
  __int64 v14; // rbp
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rdi
  char v18; // al
  _QWORD *v19; // r15
  __int64 v20; // r13
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // [rsp+0h] [rbp-128h]
  __int64 v26; // [rsp+0h] [rbp-128h]
  __int64 v28[2]; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v29[4]; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v30[2]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v31[4]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v32[2]; // [rsp+90h] [rbp-98h] BYREF
  __int64 v33; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v34; // [rsp+A8h] [rbp-80h]
  __int64 v35[2]; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v36; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v37; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v38; // [rsp+E8h] [rbp-40h]

  v3 = 0;
  v38 = __readfsqword(0x28u);
  if ( (**(_DWORD **)(a1 + 64) & 0x1000) == 0 )
    return v3;
  v25 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  sub_124680((__int64)v28, a1, *(_QWORD *)(a1 + 56), 1u);
  sub_127A20((__int64)v30, a1, *(_QWORD *)(a1 + 56), 1, v7, v8);
  v13 = *(_QWORD *)(a2 + 48);
  v14 = *(_QWORD *)(a3 + 48);
  if ( v13 )
  {
    while ( *(char *)(v13 + 4) >= 0 )
    {
      if ( !v14
        || *(char *)(v14 + 4) < 0
        || sub_1201A0((_BYTE *)v13, v25)
        || !sub_125B90((unsigned __int8 *)v13, v25, (unsigned int *)v14, 4u) )
      {
        goto LABEL_7;
      }
      sub_124680((__int64)v32, a1, v13, 1u);
      sub_127A20((__int64)v35, a1, v13, 1, v15, v16);
      if ( (unsigned __int8)sub_64780(v32, v30)
        || (unsigned __int8)sub_318470(&v33, v31)
        || (unsigned __int8)sub_64780(v35, v30)
        || (unsigned __int8)sub_318470(&v36, v31)
        || (unsigned __int8)sub_64780(v35, v28) )
      {
        v17 = v36;
LABEL_19:
        if ( v17 )
        {
          v37 = 0;
          qfree(v17);
        }
        qfree(v35[0]);
        if ( v33 )
        {
          v34 = 0;
          qfree(v33);
        }
        qfree(v32[0]);
        goto LABEL_7;
      }
      v18 = sub_318470(&v36, v29);
      v17 = v36;
      if ( v18 )
        goto LABEL_19;
      v13 = *(_QWORD *)(v13 + 8);
      v14 = *(_QWORD *)(v14 + 8);
      if ( v36 )
      {
        v37 = 0;
        qfree(v36);
      }
      qfree(v35[0]);
      if ( v33 )
      {
        v34 = 0;
        qfree(v33);
      }
      qfree(v32[0]);
      if ( !v13 )
        break;
    }
  }
  if ( v14 && *(char *)(v14 + 4) >= 0 )
  {
LABEL_7:
    if ( *(_QWORD *)(a2 + 48) != v13 )
    {
      v3 = sub_168F10(a2, v13, v9, v10, v11, v12);
      if ( (_BYTE)v3 )
      {
        v19 = *(_QWORD **)(a2 + 48);
        v26 = *(_QWORD *)(a2 + 64);
        while ( (_QWORD *)v13 != v19 )
        {
          v20 = sub_A33C0(a2, (__int64)v19);
          sub_A3160(a1, v19, *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL));
          sub_A3480(a3, *(_QWORD *)(a3 + 48));
          v19 = (_QWORD *)v20;
        }
        v21 = *(_DWORD *)(a1 + 24);
        BYTE1(v21) &= ~2u;
        LOBYTE(v21) = v21 | 0x80;
        *(_DWORD *)(a1 + 24) = v21;
        v22 = *(_DWORD *)(a2 + 24);
        BYTE1(v22) &= ~2u;
        LOBYTE(v22) = v22 | 0x80;
        *(_DWORD *)(a2 + 24) = v22;
        v23 = *(_DWORD *)(a3 + 24);
        BYTE1(v23) &= ~2u;
        LOBYTE(v23) = v23 | 0x80;
        *(_DWORD *)(a3 + 24) = v23;
        *(_DWORD *)v26 |= 0x400u;
        v24 = *(_QWORD *)(v26 + 784);
        if ( v24 )
          *(_DWORD *)(v24 + 48) = 63;
        sub_66FA0(*(_QWORD *)(a1 + 64), 1u, (__int64)"EXTRACT_IDENTICAL_HEAD_IF_INSNS");
        goto LABEL_10;
      }
    }
  }
  v3 = 0;
LABEL_10:
  if ( v31[0] )
  {
    v31[1] = 0;
    qfree(v31[0]);
  }
  qfree(v30[0]);
  if ( v29[0] )
  {
    v29[1] = 0;
    qfree(v29[0]);
  }
  qfree(v28[0]);
  return v3;
}
