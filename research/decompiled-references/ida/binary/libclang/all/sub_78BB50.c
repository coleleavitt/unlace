__int64 __fastcall sub_78BB50(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rbp
  unsigned __int64 v4; // rdi
  __int64 v5; // r12
  _QWORD *v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF8LL);
  v4 = v2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v2 & 4) != 0 )
  {
    v4 = v3[1];
    v3 = (_QWORD *)*v3;
  }
  if ( !v3 )
    return 1;
  v5 = sub_79CC40(v4);
  if ( v5 != sub_79CC40(v3) )
    return 1;
  v7 = (_QWORD *)sub_780C90(a1);
  if ( v7
    && (*v7 & 0xFFFFFFFFFFFFFFF8LL) != 0
    && (unsigned __int8)sub_78B990((_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFF8LL), v11) )
  {
    return (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v11[0] + 24LL))(v11[0]);
  }
  v8 = *(_QWORD *)(a1 + 152);
  if ( v8
    && (*(_QWORD *)(a1 + 152) & 6LL) == 4
    && (v9 = v8 & 0xFFFFFFFFFFFFFFF8LL) != 0
    && (v10 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFF8LL) != 0
    && (unsigned __int8)sub_78B990(*(_QWORD **)(v10 + 48), v11) )
  {
    return (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v11[0] + 24LL))(v11[0]);
  }
  else
  {
    return 0;
  }
}

