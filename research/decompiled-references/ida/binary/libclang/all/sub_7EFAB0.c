__int64 __fastcall sub_7EFAB0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rax
  unsigned int v5; // eax

  v3 = *(__int64 **)(a3 + 8);
  if ( v3 )
  {
    if ( (unsigned __int8)sub_7EEDC0((__int64)a1, *v3, (__int64)(v3 + 1)) )
    {
LABEL_3:
      v5 = sub_B1AFD0(*(_QWORD *)(a2 + 32));
      return sub_7EEDC0(
               (__int64)a1,
               *(_QWORD *)(a2 + 32),
               v5 * ((a3 != -16) + (a3 + 16 - (unsigned __int64)(a3 != -16)) / v5));
    }
  }
  else if ( (unsigned __int8)sub_7EDF40(a1, *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF0LL) )
  {
    goto LABEL_3;
  }
  return 0;
}

