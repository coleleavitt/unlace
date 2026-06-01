__int64 __fastcall sub_1482C0(_BYTE *a1, void **a2)
{
  __int64 (*v3)(); // rax
  __int64 v4; // rsi
  int v5; // esi
  __int64 result; // rax
  __int64 *v7; // rdx

  v3 = *(__int64 (**)())(*(_QWORD *)a1 + 56LL);
  v4 = *(_QWORD *)*a2;
  if ( v3 == sub_147F70 )
  {
    v5 = 0;
    if ( !(unsigned __int8)getn_sreg_range() )
      goto LABEL_5;
  }
  else
  {
    v5 = ((__int64 (__fastcall *)(_BYTE *, __int64))v3)(a1, v4);
  }
  if ( v5 != -1 )
    sub_120900();
LABEL_5:
  result = 0;
  if ( !a1[200] )
  {
    v7 = (__int64 *)a2[1];
    if ( v7 != (__int64 *)((char *)&dword_0 + 1) )
    {
      memmove(*a2, (char *)*a2 + 8, 8LL * (_QWORD)v7 - 8);
      a2[1] = (char *)a2[1] - 1;
      return 2;
    }
  }
  return result;
}

