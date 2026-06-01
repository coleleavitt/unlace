__int64 __fastcall sub_9511F0(__int64 a1, __int64 a2, __int64 (__fastcall *a3)(__int64, __int64), __int64 a4)
{
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // r15
  char v9; // bp
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rsi
  char v17; // bp
  unsigned __int64 v19; // rdi
  _QWORD *v20; // r12
  unsigned __int8 **v21; // rbp
  __int64 v22; // rax
  unsigned __int64 v23; // rdi
  char v24; // [rsp+Fh] [rbp-B9h]
  __int64 v25; // [rsp+10h] [rbp-B8h]
  __int64 v28; // [rsp+38h] [rbp-90h] BYREF
  void *v29[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v30; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v31[2]; // [rsp+60h] [rbp-68h] BYREF
  char v32; // [rsp+70h] [rbp-58h]
  _QWORD v33[2]; // [rsp+78h] [rbp-50h] BYREF
  char v34; // [rsp+88h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 184);
  v6 = sub_A1A5A0(v5, 24);
  v7 = *(_QWORD *)v6;
  v8 = *(_QWORD *)(v6 + 8);
  v9 = *(_BYTE *)(v6 + 16);
  sub_A1A5E0(v5, 24);
  v25 = *(_QWORD *)(a1 + 184);
  v10 = sub_A1A5A0(v25, 24);
  v11 = *(_QWORD *)v10;
  v12 = *(_QWORD *)(v10 + 8);
  v24 = *(_BYTE *)(v10 + 16);
  sub_A1A5E0(v25, 24);
  v31[0] = v11;
  v31[1] = v12;
  v32 = v24;
  v33[0] = v7;
  v33[1] = v8;
  v34 = v9;
  if ( v11
    && v24
    && (v13 = *(_QWORD *)(v11 + 8), (v13 & 4) == 0)
    && (v19 = v13 & 0xFFFFFFFFFFFFFFF8LL) != 0
    && (unsigned __int8)sub_783680(v19) )
  {
    v20 = v31;
  }
  else
  {
    if ( !v34
      || !v33[0]
      || (v14 = *(_QWORD *)(v33[0] + 8LL), (v14 & 4) != 0)
      || (v23 = v14 & 0xFFFFFFFFFFFFFFF8LL) == 0
      || !(unsigned __int8)sub_783680(v23) )
    {
      v15 = *(_QWORD *)(a1 + 184);
      v16 = 4;
      if ( v7 == v11 )
      {
        LOBYTE(v16) = v8 != v12;
        v16 = (unsigned int)(4 * v16);
      }
      v17 = a3(a4, v16);
      *(_BYTE *)sub_A1A4E0(v15, 8) = v17;
      return 1;
    }
    v20 = v33;
  }
  v28 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
  v21 = (unsigned __int8 **)sub_A2E0C0(a1, &v28, 2276, 0);
  v22 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
  sub_8E53D0((__int64)v29, (__int64)v20, v22);
  if ( v21 )
    sub_838D50(v21, (_BYTE *)v29[0], (size_t)v29[1]);
  if ( v29[0] != &v30 )
    operator delete(v29[0], v30 + 1);
  return 0;
}

