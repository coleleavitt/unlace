void __fastcall sub_16B5DF0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 *v7; // rsi
  __int64 v8; // rcx
  _BYTE v9[168]; // [rsp-A8h] [rbp-A8h] BYREF

  v3 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v3 + 17) & 8) != 0 )
  {
    v5 = *(unsigned __int8 *)(v3 + 16);
    if ( (_BYTE)v5 == 42 )
      goto LABEL_3;
    if ( (unsigned int)(unsigned __int8)v5 - 43 <= 1 )
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(v3 + 32);
        if ( (*(_BYTE *)(v3 + 18) & 0x10) == 0 )
          break;
        v7 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
        v3 = *v7;
        v8 = (unsigned int)*(unsigned __int8 *)(*v7 + 16) - 43;
        if ( (unsigned int)v8 > 1 )
          v3 = sub_F63050(*v7, v7, v5, v8);
      }
      goto LABEL_4;
    }
    if ( (_BYTE)v5 == 40 )
    {
LABEL_3:
      v6 = *(_QWORD *)(v3 + 32);
LABEL_4:
      sub_16B5DF0(a1, v6, a3);
      return;
    }
    v3 = sub_A72040(*(_QWORD **)(a1 + 248), a2);
    if ( v3 )
    {
      if ( ((*(_WORD *)(v3 + 18) >> 6) & 7) == 2 )
      {
        sub_168B9F0((__int64)v9, (__int64 *)(a1 + 8), a3, 0xC11u, 0);
        sub_15F7200(v9);
        return;
      }
      goto LABEL_3;
    }
  }
}
