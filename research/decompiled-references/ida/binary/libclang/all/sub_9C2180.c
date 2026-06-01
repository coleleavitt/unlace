// bad sp value at call has been detected, the output may be wrong!
void __fastcall sub_9C2180(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // r12
  __int64 v6; // rax
  unsigned int v7; // edx
  void *v8; // r13
  bool v9; // r12
  unsigned int v10; // r14d
  __int64 v11; // rbp
  __int64 *v12; // rbx
  void *v13; // rax
  void *v14; // [rsp+0h] [rbp-A8h] BYREF
  unsigned int v15; // [rsp+8h] [rbp-A0h]
  char v16; // [rsp+Ch] [rbp-9Ch]
  int v17; // [rsp+10h] [rbp-98h]
  void *v18; // [rsp+20h] [rbp-88h]
  unsigned int v19; // [rsp+28h] [rbp-80h]
  char v20; // [rsp+2Ch] [rbp-7Ch]
  int v21; // [rsp+30h] [rbp-78h]
  void *v22; // [rsp+40h] [rbp-68h] BYREF
  unsigned int v23; // [rsp+48h] [rbp-60h]
  bool v24; // [rsp+4Ch] [rbp-5Ch]
  void *v25; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+68h] [rbp-40h]
  char v27; // [rsp+6Ch] [rbp-3Ch]
  int v28; // [rsp+70h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 24);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v19 = v4;
  v18 = *(void **)v3;
  LOBYTE(v4) = *(_BYTE *)(v3 + 12);
  LODWORD(v3) = *(_DWORD *)(v3 + 16);
  v20 = v4;
  v21 = v3;
  sub_A1A5E0(v2, 24);
  v5 = *(_QWORD *)(a1 + 184);
  v6 = sub_A1A5A0(v5, 24);
  v7 = *(_DWORD *)(v6 + 8);
  *(_DWORD *)(v6 + 8) = 0;
  v15 = v7;
  v14 = *(void **)v6;
  LOBYTE(v7) = *(_BYTE *)(v6 + 12);
  LODWORD(v6) = *(_DWORD *)(v6 + 16);
  v16 = v7;
  v17 = v6;
  sub_A1A5E0(v5, 24);
  v26 = v19;
  if ( v19 <= 0x40 )
  {
    v8 = v18;
LABEL_3:
    v9 = v8 == nullptr;
    goto LABEL_4;
  }
  sub_2585B30(&v25);
  v10 = v26;
  v8 = v25;
  v23 = v26;
  v22 = v25;
  v24 = (v21 & 0x20000000) == 0;
  if ( v26 <= 0x40 )
    goto LABEL_3;
  v9 = (unsigned int)sub_2587400(&v22) == v10;
  if ( v8 )
  {
    operator delete[](v8);
    if ( !v9 )
      goto LABEL_5;
    goto LABEL_10;
  }
LABEL_4:
  if ( !v9 )
  {
LABEL_5:
    v26 = v19;
    if ( v19 > 0x40 )
      sub_2585B30(&v25);
    else
      v25 = v18;
    v27 = v20;
    v28 = v21;
    v23 = v15;
    sub_2585B30(&v22);
    sub_9C2390(&v22, &v14);
    return;
  }
LABEL_10:
  v11 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  v12 = (__int64 *)sub_A2E130(a1, v11, 2306, 0);
  v13 = (void *)sub_AC7B80(*(_QWORD *)(v11 + 24));
  if ( v12 )
  {
    v25 = v13;
    LOBYTE(v26) = 1;
    sub_839C90(v12, (__int64 *)&v25);
  }
  if ( v15 > 0x40 && v14 )
    operator delete[](v14);
  if ( v19 > 0x40 && v18 )
    operator delete[](v18);
}

