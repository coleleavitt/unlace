__int64 __fastcall sub_DC3AE0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  int v4; // r13d
  __int64 v5; // r14
  char v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  int v12; // [rsp+10h] [rbp-68h]
  _QWORD v13[3]; // [rsp+20h] [rbp-58h] BYREF
  int v14; // [rsp+38h] [rbp-40h]
  __int64 v15; // [rsp+40h] [rbp-38h]
  unsigned int v16; // [rsp+48h] [rbp-30h]

  sub_E23170(v13, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 224LL) + 8LL * a2));
  v2 = *(_QWORD *)(a1 + 176);
  v3 = sub_E21760(v2, 24);
  v4 = *(_DWORD *)(v3 + 8);
  v5 = *(_QWORD *)v3;
  *(_DWORD *)(v3 + 8) = 0;
  v6 = *(_BYTE *)(v3 + 12);
  v12 = *(_DWORD *)(v3 + 16);
  sub_E21790(v2, 24);
  if ( v14 )
  {
    v8 = v13[0];
    v9 = v15;
LABEL_3:
    v10 = v9 + v8 + 40;
    goto LABEL_4;
  }
  v7 = sub_CFDF60((__int64)v13);
  v8 = v13[0];
  v9 = v15;
  if ( !*(_BYTE *)(v7 + 60) )
    goto LABEL_3;
  v10 = v15 + v16 + 72;
  if ( v16 != v13[0] )
    goto LABEL_3;
LABEL_4:
  if ( *(_DWORD *)(v10 + 8) > 0x40u && *(_QWORD *)v10 )
    operator delete[](*(void **)v10);
  *(_QWORD *)v10 = v5;
  *(_DWORD *)(v10 + 8) = v4;
  *(_DWORD *)(v10 + 16) = v12;
  *(_BYTE *)(v10 + 12) = v6;
  sub_E24D00(v13);
  sub_E232A0(v13);
  return 1;
}
