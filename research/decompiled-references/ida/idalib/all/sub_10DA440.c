__int64 __fastcall sub_10DA440(__int64 a1, _BYTE *a2, unsigned __int8 *a3, unsigned int a4, char a5)
{
  unsigned int v5; // r10d
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, unsigned __int8 **); // rax
  unsigned __int8 v13; // r10
  int v14; // eax
  int v15; // edx
  int v16; // r8d
  unsigned int v17; // eax
  size_t v18; // rax
  bool v19; // al
  unsigned __int8 v20; // [rsp+Fh] [rbp-B9h]
  unsigned __int8 v21; // [rsp+Fh] [rbp-B9h]
  _BYTE *v22; // [rsp+10h] [rbp-B8h] BYREF
  unsigned __int8 *v23; // [rsp+18h] [rbp-B0h]
  void *v24; // [rsp+20h] [rbp-A8h] BYREF
  signed __int64 v25; // [rsp+28h] [rbp-A0h]
  _BYTE v26[16]; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int8 *v27[4]; // [rsp+40h] [rbp-88h] BYREF
  __int16 v28; // [rsp+60h] [rbp-68h]

  v22 = a2;
  v23 = a3;
  if ( (*(_BYTE *)(a1 + 1168) & 1) == 0
    || (unsigned __int8 *)j__strlen("-") == a3 && (!a3 || !memcmp(a2, "-", (size_t)a3)) )
  {
    return 1;
  }
  if ( a4 - 31 <= 1 || *(_BYTE *)(a1 + 36) && a4 == 28 )
    return 1;
  v11 = *(_QWORD *)(a1 + 8);
  v12 = *(__int64 (__fastcall **)(__int64, unsigned __int8 **))(*(_QWORD *)v11 + 96LL);
  v28 = 261;
  v27[0] = a2;
  v27[1] = a3;
  v13 = v12(v11, v27);
  if ( v13 )
    return 1;
  if ( !a5 )
    goto LABEL_12;
  v26[0] = 0;
  v24 = v26;
  v25 = 0;
  v14 = sub_1105E80();
  v15 = *(_DWORD *)(a1 + 16);
  v16 = 2;
  if ( v15 != 3 )
  {
    v16 = 64;
    if ( v15 != 5 )
    {
      v16 = 16;
      if ( v15 != 4 )
        v16 = 1;
    }
  }
  v17 = sub_21BBC30(v14, (_DWORD)v22, (_DWORD)v23, (unsigned int)&v24, v16, 4, -1);
  v13 = 0;
  if ( v17 > 1 )
  {
    if ( v24 != v26 )
    {
      operator delete(v24);
      v13 = 0;
    }
LABEL_12:
    LOBYTE(a4) = *(_DWORD *)(a1 + 16) == 3 && a4 == 58;
    if ( !(_BYTE)a4 || (v21 = v13, v18 = j__strlen("/"), v19 = sub_9C7D00((__int64)&v22, "/", v18), v13 = v21, v19) )
    {
      v20 = v13;
      sub_FC70B0((__int64)v27, *(_QWORD *)a1, 0, 443);
      sub_AEC220(v27, a2, (signed __int64)a3);
      sub_AEA040((__int64)v27);
      return v20;
    }
    else
    {
      return a4;
    }
  }
  sub_FC70B0((__int64)v27, *(_QWORD *)a1, 0, 444);
  sub_AEC220(v27, a2, (signed __int64)a3);
  sub_AEC220(v27, v24, v25);
  sub_AEA040((__int64)v27);
  v5 = 0;
  if ( v24 != v26 )
  {
    operator delete(v24);
    return 0;
  }
  return v5;
}
