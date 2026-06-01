__int64 __fastcall sub_9DF730(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // r13
  __int64 v6; // rax
  unsigned int v7; // ebp
  unsigned int v9; // r13d
  bool v10; // al
  void *v11; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v12; // [rsp+8h] [rbp-70h]
  _QWORD v13[6]; // [rsp+10h] [rbp-68h] BYREF
  int v14; // [rsp+40h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 16);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v12 = v4;
  v11 = *(void **)v3;
  sub_A1A5E0(v2, 16);
  v5 = *(_QWORD *)(a1 + 184);
  v6 = sub_A1A5A0(v5, 56);
  sub_A1C070(v13, v6);
  sub_A1A5E0(v5, 56);
  if ( !v14 || v14 == 2 )
  {
    if ( !v13[3] )
      goto LABEL_5;
LABEL_12:
    v9 = v12;
    if ( v12 <= 0x40 )
      v10 = v11 == nullptr;
    else
      v10 = v9 == (unsigned int)sub_2587400(&v11);
    if ( !v10 && !(unsigned __int8)sub_9D4C70(a1, a2, (__int64)v13) )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( v14 == 3 || v13[0] | v13[4] )
    goto LABEL_12;
LABEL_5:
  v7 = sub_942A60(a1, a2, (__int64)&v11, (__int64)v13, 0);
  if ( (_BYTE)v7 )
  {
    sub_9C74F0(a1);
    goto LABEL_7;
  }
LABEL_6:
  v7 = 0;
LABEL_7:
  sub_A1C0C0(v13);
  if ( v12 > 0x40 && v11 )
    operator delete[](v11);
  return v7;
}

