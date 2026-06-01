__int64 __fastcall sub_CB8B50(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebp
  __int64 v6; // rcx
  char v7; // al
  __int64 v8; // rax
  unsigned int v9; // eax
  __int64 v11; // rdx
  _QWORD v12[6]; // [rsp+8h] [rbp-30h] BYREF

  v5 = *(unsigned __int8 *)(a1 + 1360);
  if ( (_BYTE)v5 )
    return (unsigned int)sub_CB69D0(a1, a2, a3, a4, a5);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1) )
  {
    v7 = *(_BYTE *)(a2 + 1) >> 1;
    v12[0] = a2 | 4;
    if ( (v7 & 3) == 1 )
    {
      if ( (unsigned __int8)sub_CDCC60(a1, 0, v12) )
      {
        v12[0] = a2 | 4;
        return (unsigned int)sub_CFE030(a1, v12);
      }
    }
    else
    {
      v8 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v8 + 16) != 14 )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v11 + 16) != 14 )
          BUG();
        v8 = sub_F3F310(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v11, v6);
      }
      v9 = sub_CC2440(*(_QWORD *)(a1 + 1264), *(_QWORD *)(v8 + 32));
      return (unsigned int)sub_D0FAA0(a1, v9, 0, v12);
    }
  }
  return v5;
}

