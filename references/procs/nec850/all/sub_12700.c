__int64 __fastcall sub_12700(__int64 a1, __int64 a2)
{
  __int16 v2; // dx
  __int64 v3; // rax
  char *v4; // rbp
  char v5; // al
  __int64 result; // rax
  __int64 v7; // rcx

  v2 = *(_WORD *)(a1 + 248);
  v3 = *(unsigned __int16 *)(a2 + 6);
  if ( v2 == 39 )
  {
    if ( *(_BYTE *)a2 != 1 )
      goto LABEL_3;
  }
  else if ( v2 != 9 || *(_BYTE *)a2 )
  {
    goto LABEL_3;
  }
  v7 = *(_QWORD *)(a1 + 352);
  if ( (unsigned __int8)(v3 - 32) <= 0x1Fu && (unsigned __int8)v7 <= 7u )
  {
    v4 = (&off_2C640[8 * (char)(v3 - 32)])[(unsigned __int8)v7];
    if ( v4 )
    {
      *(_BYTE *)(a1 + 348) &= ~8u;
      goto LABEL_4;
    }
  }
LABEL_3:
  v4 = *(char **)(*(_QWORD *)(*(_QWORD *)(a1 + 624) + 56LL) + 8 * v3);
LABEL_4:
  v5 = *(_BYTE *)(a2 + 1);
  if ( (unsigned __int8)(v5 - 3) <= 1u || v5 == 1 && (*(_BYTE *)(a2 + 32) & 1) != 0 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 91);
    (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v4, 33);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 93);
  }
  else
  {
    (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v4, 33);
  }
  result = *(unsigned __int8 *)(a2 + 32);
  if ( (result & 8) != 0 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 43);
    result = *(unsigned __int8 *)(a2 + 32);
  }
  if ( (result & 0x10) != 0 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 45);
    result = *(unsigned __int8 *)(a2 + 32);
  }
  if ( (result & 0x20) != 0 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 37);
    result = *(unsigned __int8 *)(a2 + 32);
  }
  if ( (result & 0x40) != 0 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 33);
  return result;
}
