__int64 __fastcall sub_9DFFA0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // r13
  __int64 v6; // rax
  unsigned int v7; // ebp
  void *v9; // r14
  bool v10; // r13
  char v11; // r13
  unsigned int v12; // r15d
  void *v13; // [rsp+0h] [rbp-B8h] BYREF
  unsigned int v14; // [rsp+8h] [rbp-B0h]
  bool v15; // [rsp+Ch] [rbp-ACh]
  void *v16; // [rsp+10h] [rbp-A8h] BYREF
  unsigned int v17; // [rsp+18h] [rbp-A0h]
  void *v18; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v19; // [rsp+28h] [rbp-90h]
  char v20; // [rsp+2Ch] [rbp-8Ch]
  int v21; // [rsp+30h] [rbp-88h]
  _QWORD v22[3]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v23; // [rsp+58h] [rbp-60h]
  __int64 v24; // [rsp+60h] [rbp-58h]
  int v25; // [rsp+70h] [rbp-48h]

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
  v6 = sub_A1A5A0(v5, 56);
  sub_A1C070(v22, v6);
  sub_A1A5E0(v5, 56);
  if ( !v25 )
  {
    if ( !v23 )
      goto LABEL_3;
LABEL_11:
    v17 = v19;
    if ( v19 > 0x40 )
    {
      v11 = HIBYTE(v21) >> 5;
      sub_2585B30(&v16);
      v12 = v17;
      v9 = v16;
      v14 = v17;
      v13 = v16;
      v15 = !(v11 & 1);
      if ( v17 > 0x40 )
      {
        v10 = (unsigned int)sub_2587400(&v13) == v12;
        if ( v9 )
          operator delete[](v9);
LABEL_14:
        if ( !v10 && !(unsigned __int8)sub_9D4C70(a1, a2, (__int64)v22) )
          goto LABEL_4;
        goto LABEL_3;
      }
    }
    else
    {
      v9 = v18;
    }
    v10 = v9 == nullptr;
    goto LABEL_14;
  }
  if ( v25 == 2 )
  {
    if ( v23 )
      goto LABEL_11;
  }
  else if ( v25 == 3 || v22[0] | v24 )
  {
    goto LABEL_11;
  }
LABEL_3:
  v7 = sub_944110(a1, a2, (__int64)&v18, (__int64)v22, 0);
  if ( (_BYTE)v7 )
  {
    sub_9C74F0(a1);
    goto LABEL_5;
  }
LABEL_4:
  v7 = 0;
LABEL_5:
  sub_A1C0C0(v22);
  if ( v19 > 0x40 && v18 )
    operator delete[](v18);
  return v7;
}

