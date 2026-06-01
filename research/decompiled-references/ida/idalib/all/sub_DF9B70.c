__int64 __fastcall sub_DF9B70(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // eax
  __int64 v4; // rbp
  __int64 v5; // rax
  void *v6; // rdx
  unsigned int v7; // ebp
  __int64 v8; // rbx
  unsigned int v9; // eax
  char v11; // [rsp+Bh] [rbp-7Dh] BYREF
  int v12; // [rsp+Ch] [rbp-7Ch] BYREF
  void *v13; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v14; // [rsp+18h] [rbp-70h]
  char v15; // [rsp+1Ch] [rbp-6Ch]
  int v16; // [rsp+20h] [rbp-68h]
  void *v17; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v18; // [rsp+38h] [rbp-50h]
  char v19; // [rsp+3Ch] [rbp-4Ch]
  int v20; // [rsp+40h] [rbp-48h]
  void *v21; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v22; // [rsp+58h] [rbp-30h]
  char v23; // [rsp+5Ch] [rbp-2Ch]
  int v24; // [rsp+60h] [rbp-28h]

  v3 = sub_21EDE80(a3);
  v4 = *(_QWORD *)(a1 + 176);
  v12 = v3;
  v5 = sub_E21760(v4, 24);
  v14 = *(_DWORD *)(v5 + 8);
  v6 = *(void **)v5;
  *(_DWORD *)(v5 + 8) = 0;
  v13 = v6;
  LOBYTE(v6) = *(_BYTE *)(v5 + 12);
  LODWORD(v5) = *(_DWORD *)(v5 + 16);
  v15 = (char)v6;
  v16 = v5;
  sub_E21790(v4, 24);
  sub_21EDE90(&v21, &v13, &v12, &v11);
  v18 = v22;
  v17 = v21;
  v19 = v23;
  v20 = v24;
  if ( !v11 || (v7 = sub_DF81A0(a1, a2, (__int64)&v17), (_BYTE)v7) )
  {
    v8 = sub_E216C0(*(_QWORD *)(a1 + 176), 24);
    v9 = v18;
    *(_DWORD *)(v8 + 8) = v18;
    if ( v9 > 0x40 )
      sub_2205510(v8);
    else
      *(_QWORD *)v8 = v17;
    v7 = 1;
    *(_BYTE *)(v8 + 12) = v19;
    *(_DWORD *)(v8 + 16) = v20;
  }
  if ( v18 > 0x40 && v17 )
    operator delete[](v17);
  if ( v14 > 0x40 && v13 )
    operator delete[](v13);
  return v7;
}
