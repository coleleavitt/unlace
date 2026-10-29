__int64 __fastcall sub_BAD390(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rdx
  __int64 v5; // rsi

  v2 = *a1;
  v3 = *(unsigned __int8 (**)(void))(*a1 + 232);
  if ( (char *)v3 != (char *)sub_BA1BC0 )
  {
    if ( !v3() )
      return 0;
    v2 = *a1;
  }
  v4 = *(__int64 (**)())(v2 + 6944);
  if ( v4 != sub_BA36A0 )
  {
    if ( ((unsigned __int8 (__fastcall *)(__int64 *, __int64))v4)(a1, a2) )
    {
      v2 = *a1;
      goto LABEL_3;
    }
    return 0;
  }
LABEL_3:
  if ( (*(_BYTE *)(a2 + 18) & 8) != 0 )
    v5 = *(_QWORD *)(a2 + 48);
  else
    v5 = *(_QWORD *)(a2 + 8);
  return (*(__int64 (__fastcall **)(__int64 *, __int64))(v2 + 128))(a1, v5);
}

