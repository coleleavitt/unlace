__int64 __fastcall sub_15E0A60(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rax
  bool v13; // [rsp+Fh] [rbp-A9h] BYREF
  _BYTE v14[168]; // [rsp+10h] [rbp-A8h] BYREF

  if ( (*(_BYTE *)(a4 + 28) & 0x7Fu) - 35 <= 3 && !sub_B979F0((_QWORD *)a4) )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(a4 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v11 = *(unsigned __int8 *)(v10 + 16);
    if ( (unsigned int)(v11 - 25) > 1 )
    {
      v12 = sub_F63050(v10, a2, v11, v6);
      v10 = v12;
      if ( *(_BYTE *)(v12 + 16) == 26 )
      {
LABEL_12:
        if ( !v12 )
          return 1;
        goto LABEL_9;
      }
    }
    else if ( (_BYTE)v11 == 26 )
    {
LABEL_9:
      if ( (*(_BYTE *)(v10 + 18) & 0x20) != 0 )
        goto LABEL_3;
      return 1;
    }
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
      return 1;
    v12 = sub_F63050(v10, a2, v11, v6);
    goto LABEL_12;
  }
LABEL_3:
  sub_168B9F0(v14, a2 + 8, *(unsigned int *)(a3 + 24), 3241, 0);
  v7 = sub_15DD120((__int64)v14, a3);
  v13 = (*(_BYTE *)(a3 + 35) & 2) != 0;
  v8 = sub_1588420(v7, (unsigned __int8 *)&v13);
  if ( *(_BYTE *)(v8 + 120) )
  {
    sub_15D6400((unsigned __int8 **)(v8 + 32), (__int64)"non-static non-const member functions");
  }
  else if ( *(_BYTE *)(v8 + 132) )
  {
    sub_15DDC70(v8, (__int64)"non-static non-const member functions");
  }
  sub_15F7200(v14);
  return 0;
}
