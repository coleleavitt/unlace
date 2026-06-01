void __fastcall sub_15212D0(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r12
  char v6; // dl
  bool v7; // r14
  unsigned int v8; // [rsp+8h] [rbp-B0h]
  unsigned int v9; // [rsp+Ch] [rbp-ACh]
  unsigned int v10; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v11; // [rsp+18h] [rbp-A0h]
  __int16 v12; // [rsp+20h] [rbp-98h]
  void *v13; // [rsp+30h] [rbp-88h] BYREF
  __int64 v14; // [rsp+38h] [rbp-80h]
  _BYTE v15[120]; // [rsp+40h] [rbp-78h] BYREF

  sub_14634E0((__int64 *)a2, (int *)&v10);
  v2 = v12;
  if ( v12 != 2 )
  {
    while ( 1 )
    {
      if ( v2 != 5 )
      {
LABEL_11:
        sub_FC70B0((__int64)&v13, *(_QWORD *)(a2 + 48), v10, 1857);
        sub_1520A40((unsigned __int8 **)&v13, (__int64)"clang section");
        sub_AEA040((__int64)&v13);
        return;
      }
      v3 = *(__int64 **)(v11 + 16);
      v4 = *v3;
      if ( (unsigned int)*v3 == 3 )
      {
        if ( *((_WORD *)v3 + 8) != 29538 || *((_BYTE *)v3 + 18) != 115 )
          goto LABEL_11;
        v5 = 1;
        v9 = 1;
      }
      else if ( (_DWORD)v4 == 4 )
      {
        if ( *((_DWORD *)v3 + 4) == 1635017060 )
        {
          v9 = 2;
          v5 = 2;
        }
        else
        {
          if ( *((_DWORD *)v3 + 4) != 1954047348 )
            goto LABEL_11;
          v5 = 4;
          v9 = 4;
        }
      }
      else if ( (_DWORD)v4 == 6 )
      {
        if ( *((_DWORD *)v3 + 4) != 1633972082 || *((_WORD *)v3 + 10) != 24948 )
          goto LABEL_11;
        v5 = 3;
        v9 = 3;
      }
      else
      {
        if ( (_DWORD)v4 != 5 || *((_DWORD *)v3 + 4) != 1919706482 || *((_BYTE *)v3 + 20) != 111 )
          goto LABEL_11;
        v5 = 5;
        v9 = 5;
      }
      v8 = v10;
      sub_14634E0((__int64 *)a2, (int *)&v10);
      if ( v12 != 64 )
      {
        sub_FC70B0((__int64)&v13, *(_QWORD *)(a2 + 48), v10, 1853);
        sub_1520C80((unsigned __int8 **)&v13, v5);
        sub_AEA040((__int64)&v13);
        return;
      }
      v15[0] = 0;
      v6 = *(_BYTE *)(a2 + 544);
      v13 = v15;
      v14 = 0;
      *(_BYTE *)(a2 + 544) = v6 | 0x20;
      v7 = (v6 & 0x20) != 0;
      sub_14634E0((__int64 *)a2, (int *)&v10);
      *(_BYTE *)(a2 + 544) = (32 * v7) | *(_BYTE *)(a2 + 544) & 0xDF;
      if ( !(unsigned __int8)sub_1464000(a2, (unsigned __int64)&v10, &v13, (__int64)"pragma clang section", 0) )
        break;
      sub_166C600(*(_QWORD *)(a1 + 40), v8, v14 == 0, v9, v13);
      if ( v13 != v15 )
        operator delete(v13);
      v2 = v12;
      if ( v12 == 2 )
        return;
    }
    if ( v13 != v15 )
      operator delete(v13);
  }
}
