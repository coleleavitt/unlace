bool __fastcall sub_19F6F00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rsi
  __int64 v7; // rdx
  int v8; // eax
  bool result; // al
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax

  v6 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( !v6 )
    return 0;
  v7 = *(_QWORD *)(*(_QWORD *)(*v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(unsigned __int8 *)(v7 + 16);
  if ( (unsigned __int8)(v8 - 2) <= 4u || (_BYTE)v8 == 48 )
    return 0;
  if ( (_BYTE)v8 != 13 )
  {
    if ( (_BYTE)v8 != 47 )
      goto LABEL_7;
    return 0;
  }
  if ( ((*(_WORD *)(v7 + 18) >> 3) & 0x1FF) == 0x1B4 )
    return 0;
LABEL_7:
  result = (sub_F610C0(*v6, (__int64)v6, v7, *v6, (unsigned int)(v8 - 2), a6)
         || ((v11 = *v6, v12 = (unsigned int)*(unsigned __int8 *)(*v6 + 16) - 57, (unsigned int)v12 <= 1)
          || (v11 = sub_19F5590(v11, (__int64)v6, v12, v10)) != 0)
         && *(int *)(v11 + 20) <= 4
         && ((v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL),
              *(_BYTE *)(v13 + 16) != 13)
          || ((*(_WORD *)(v13 + 18) >> 3) & 0x1FF) != 0x1B4))
        && (unsigned __int64)sub_A97D20(*(_QWORD *)(*(_QWORD *)a1 + 248LL), *v6) <= 0x87;
  return result;
}
