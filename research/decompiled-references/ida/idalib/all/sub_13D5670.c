void __fastcall sub_13D5670(__int64 a1, _BYTE *a2, unsigned int a3, __int64 a4, int a5, char a6)
{
  bool v8; // zf
  bool v10; // al
  char v11; // cl
  int v12; // edx
  __int64 v13; // r14
  __int64 v14; // [rsp+0h] [rbp-F8h] BYREF
  int v15; // [rsp+8h] [rbp-F0h]
  _BYTE v16[10]; // [rsp+16h] [rbp-E2h] BYREF
  void *ptr; // [rsp+20h] [rbp-D8h] BYREF
  signed __int64 v18; // [rsp+28h] [rbp-D0h]
  __int64 v19; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+40h] [rbp-B8h] BYREF
  char v21; // [rsp+48h] [rbp-B0h]
  __int64 v22; // [rsp+4Ch] [rbp-ACh]
  char v23; // [rsp+54h] [rbp-A4h]
  void *v24; // [rsp+58h] [rbp-A0h]
  __int64 v25; // [rsp+60h] [rbp-98h]
  _BYTE v26[24]; // [rsp+68h] [rbp-90h] BYREF
  unsigned __int8 *v27[15]; // [rsp+80h] [rbp-78h] BYREF

  v14 = a4;
  v15 = a5;
  if ( a3 <= 0x7F )
    return;
  v16[0] = 0;
  if ( (a2[4] & 2) == 0 )
  {
    if ( (*(_WORD *)a2 & 0x808) != 0 )
    {
      LODWORD(v27[0]) = a3;
      if ( sub_13D2FE0((char *)&jpt_13DFAB7[-1334], (char *)jpt_13DFAB7, v27)
        || sub_13D2FE0(&byte_26122A8[-104], byte_26122A8, v27) )
      {
        return;
      }
    }
    else if ( sub_13D34C0(a3, a2, v16) )
    {
      v8 = (*a2 & 2) == 0;
      LODWORD(v27[0]) = a3;
      if ( !(v8
           ? sub_13D2FE0(&byte_2611890[-112], byte_2611890, v27)
           : sub_13D2FE0(&byte_26118C0[-32], byte_26118C0, v27)) )
        return;
    }
  }
  v10 = sub_13D34C0(a3, a2, v16);
  v11 = a6 ^ 1;
  if ( v10 )
  {
    if ( v11 )
      return;
    v12 = v14;
    if ( a6 )
    {
      v13 = 1;
      goto LABEL_27;
    }
  }
  else
  {
    v12 = v14;
  }
  v13 = 0;
  if ( !v11 )
  {
    sub_FC70B0((__int64)v27, a1, v12, 1025);
    sub_AEC610((__int64 *)v27, &v14);
    sub_13D0580((__int64)&ptr, a3);
    sub_AEC220(v27, ptr, v18);
    goto LABEL_17;
  }
LABEL_27:
  sub_FC70B0((__int64)v27, a1, v12, 1026);
  sub_AEC610((__int64 *)v27, &v14);
  sub_13D0580((__int64)&ptr, a3);
  sub_AEC220(v27, ptr, v18);
  sub_AE9DF0(v27, v13, 2u);
LABEL_17:
  v22 = 0;
  v23 = 0;
  v24 = v26;
  v25 = 0;
  v26[0] = 0;
  v26[16] = 0;
  v20 = v14;
  v21 = v15;
  if ( (_DWORD)v14 )
  {
    if ( HIDWORD(v20) )
    {
      sub_13D5200((__int64 *)v27, (unsigned __int64)&v20);
      if ( v24 != v26 )
        operator delete(v24);
    }
  }
  if ( ptr != &v19 )
    free(ptr);
  sub_AEA040((__int64)v27);
}
