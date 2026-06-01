unsigned __int64 __fastcall sub_19A2CD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 result; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  _QWORD *v12; // rsi
  __int64 v13; // rdx

  *(_QWORD *)a1 = a2;
  result = *(_QWORD *)(a2 + 9944);
  *(_BYTE *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 8) = result;
  if ( (_BYTE)a5 == 1 && a3 )
  {
    if ( (*(_BYTE *)(a3 + 28) & 0x7F) == 0x48 )
      a3 = *(_QWORD *)(a3 + 48);
    v10 = sub_A7A9D0(*(_QWORD *)(a2 + 248), a3, a3, a4, a5, a6);
    v11 = *(_QWORD *)(a2 + 248);
    if ( (a4 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v12 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
      v13 = a4 | v10 & 7;
      if ( (v10 & 8) != 0 )
      {
        v13 |= *(__int64 *)((char *)&qword_18 + (v10 & 0xFFFFFFFFFFFFFFF0LL));
        v12 = (_QWORD *)*v12;
      }
      result = sub_A70C40(v11, (__int64)v12, v13);
      v11 = *(_QWORD *)(a2 + 248);
      if ( (*(_BYTE *)(*(_QWORD *)(v11 + 2320) + 89LL) & 1) != 0 )
        goto LABEL_7;
    }
    else
    {
      result = (unsigned int)a4 | v10 & 7 | v10 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)(*(_QWORD *)(v11 + 2320) + 89LL) & 1) != 0 )
      {
LABEL_7:
        *(_QWORD *)(a2 + 9944) = result;
        *(_BYTE *)(a1 + 16) = 1;
        return result;
      }
    }
    result = sub_A70010(v11, result);
    goto LABEL_7;
  }
  return result;
}
