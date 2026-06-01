void __fastcall sub_118D420(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  const char **v6; // rax
  unsigned __int8 *v7; // r12
  size_t v8; // rax
  unsigned __int8 *v9; // r15
  __int64 v10; // rax
  unsigned __int8 *v11[4]; // [rsp+0h] [rbp-88h] BYREF
  __int16 v12; // [rsp+20h] [rbp-68h]

  sub_11C1F00(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL), a2, a3, 0, &byte_22F0C30, 0);
  v4 = sub_10DCD30(a2, 0x8D7u);
  if ( v4 )
  {
    v5 = v4;
    v6 = *(const char ***)(v4 + 48);
    v7 = (unsigned __int8 *)*v6;
    if ( *v6 )
    {
      v8 = j__strlen(*v6);
      v9 = (unsigned __int8 *)v8;
      if ( v8 == 5 )
      {
        if ( *(_DWORD *)v7 == 1702129257 && v7[4] == 108 )
        {
LABEL_6:
          sub_10DC5D0(a3, (__int64)"-mllvm");
          v12 = 1283;
          v11[0] = "-x86-asm-syntax=";
          v11[2] = v7;
          v11[3] = v9;
          v10 = sub_10DA6C0(a2, (__int64)v11);
          sub_10DC5D0(a3, v10);
          return;
        }
      }
      else if ( v8 == 3 && *(_WORD *)v7 == 29793 && v7[2] == 116 )
      {
        goto LABEL_6;
      }
    }
    else
    {
      v9 = nullptr;
    }
    sub_FC70B0((__int64)v11, **(_QWORD **)(*(_QWORD *)(a1 + 24) + 8LL), 0, 497);
    sub_AEC220(v11, *(_BYTE **)(v5 + 24), *(_QWORD *)(v5 + 32));
    sub_AEC220(v11, v7, (signed __int64)v9);
    sub_AEA040((__int64)v11);
  }
}
