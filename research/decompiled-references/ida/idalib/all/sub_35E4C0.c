__int64 __fastcall sub_35E4C0(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  __int64 result; // rax

  sub_35E460(a1);
  if ( !*((_BYTE *)a1 + 17) )
  {
    v1 = a1[1];
    if ( (*(_BYTE *)(v1 + 1) & 1) == 0 )
      return 1;
LABEL_3:
    *((_BYTE *)a1 + 17) = 1;
    v2 = 60;
    if ( (*(_DWORD *)v1 & 0x100) != 0 )
    {
LABEL_5:
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 32LL))(*a1, v2);
      ++a1[3];
      *((_BYTE *)a1 + 17) = 0;
      return 1;
    }
LABEL_4:
    v2 = 44;
    goto LABEL_5;
  }
  result = *((unsigned __int8 *)a1 + 16);
  if ( (_BYTE)result )
  {
    v1 = a1[1];
    if ( (*(_BYTE *)(v1 + 1) & 1) == 0 )
      goto LABEL_4;
    goto LABEL_3;
  }
  return result;
}
