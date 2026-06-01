__int64 __fastcall sub_1524810(__int64 a1, _BYTE *a2, signed __int64 a3, unsigned int a4)
{
  __int64 v6; // rax
  unsigned int v7; // r15d
  unsigned __int64 v11; // rdi
  int v12; // ecx
  __int64 v13; // rsi
  const char *v14; // rdx
  size_t v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // rdi
  unsigned int *v18; // r14
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // [rsp+0h] [rbp-98h]
  unsigned __int8 *v22[2]; // [rsp+10h] [rbp-88h] BYREF
  int v23; // [rsp+20h] [rbp-78h]

  v6 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(*(_QWORD *)(v6 + 64) + 264LL) == 27 )
  {
    v7 = sub_1569A00(a1, 22, 2192, a2, a3);
    if ( (_BYTE)v7 )
      return 0;
    v11 = *(unsigned __int16 *)(a1 + 32);
    if ( (unsigned __int16)(v11 - 5) > 1u )
    {
      if ( (_WORD)v11 != 14 )
      {
LABEL_7:
        v12 = 2190;
        v13 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL);
LABEL_8:
        sub_FC70B0((__int64)v22, v13, a4, v12);
        sub_AEC220(v22, a2, a3);
        sub_AEA040((__int64)v22);
        return v7;
      }
      v20 = sub_14B6F80(a1, 0);
      if ( v20 != 1 )
      {
        v21 = v20 & 0xFFFFFFFFFFFFFFFELL;
        if ( ((*(_WORD *)((v20 & 0xFFFFFFFFFFFFFFFELL) + 2) >> 6) & 7) != 1 )
        {
          v12 = 2193;
          v13 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL);
          goto LABEL_8;
        }
LABEL_12:
        if ( !(unsigned __int8)sub_1569A00(a1, 23, 2196, a2, a3) && !(unsigned __int8)sub_1569A00(a1, 1, 2202, a2, a3) )
        {
          v7 = 1;
          sub_16660B0(*(_QWORD *)(a1 + 96), a4, v21);
          return v7;
        }
      }
      return 0;
    }
    if ( sub_141A630(v11) )
      BUG();
    v18 = *(unsigned int **)(*(_QWORD *)(a1 + 24) + 16LL);
    v19 = *v18;
    if ( v19 == 8 )
    {
      if ( *((_QWORD *)v18 + 2) == 0x72656C69706D6F63LL )
      {
        v14 = "\".CRT$XCC\"";
        LODWORD(v15) = 10;
        goto LABEL_11;
      }
    }
    else if ( v19 == 3 )
    {
      v15 = j__strlen("\".CRT$XCL\"");
      if ( *((_WORD *)v18 + 8) == 26988 && *((_BYTE *)v18 + 18) == 98 )
      {
        v14 = "\".CRT$XCL\"";
LABEL_21:
        if ( !v15 )
          goto LABEL_7;
LABEL_11:
        v16 = *(_DWORD *)(a1 + 16);
        v17 = *(_QWORD *)(a1 + 96);
        v22[1] = (unsigned __int8 *)v14;
        v22[0] = (unsigned __int8 *)__PAIR64__(v15, v16);
        v23 = 14;
        v21 = sub_18D6880(v17, v22, 1, 0) & 0xFFFFFFFFFFFFFFFELL;
        sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
        if ( !v21 )
          goto LABEL_7;
        goto LABEL_12;
      }
    }
    else if ( v19 == 4 && v18[4] == 1919251317 )
    {
      v15 = j__strlen("\".CRT$XCU\"");
      v14 = "\".CRT$XCU\"";
      goto LABEL_21;
    }
    v15 = j__strlen(&byte_22F0C30);
    v14 = &byte_22F0C30;
    goto LABEL_21;
  }
  v7 = 0;
  sub_FC70B0((__int64)v22, *(_QWORD *)(v6 + 48), a4, 2205);
  sub_AEA040((__int64)v22);
  return v7;
}
