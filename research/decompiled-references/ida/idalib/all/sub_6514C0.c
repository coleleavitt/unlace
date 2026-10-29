__int64 __fastcall sub_6514C0(__int64 *a1, __int64 a2, const char *a3, __int16 a4, unsigned int *a5)
{
  _QWORD *v9; // r14
  char v10; // r12
  const char *v11; // rax
  __int64 v12; // rbx
  unsigned int v14; // edx
  unsigned int v15; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  if ( (a4 & 1) == 0 )
  {
    v9 = *(_QWORD **)(a2 + 56);
    if ( !v9 )
      return 0;
    v10 = (a4 & 4) != 0;
    goto LABEL_7;
  }
  v9 = *(_QWORD **)(a2 + 64);
  if ( !v9 )
    return 0;
  v10 = (a4 & 4) != 0;
  if ( !(unsigned __int8)sub_6B3A20(a1, a3, &v15) )
  {
LABEL_7:
    v11 = sub_64F440((__int64)v9, a3, a4);
    v12 = (__int64)v11;
    if ( v11 )
    {
      if ( a5 )
        *a5 = sub_6474E0((__int64)v11, nullptr, 0, 0, 0, 0);
      sub_6507E0(a1, v9, v12, v10);
      return 1;
    }
    return 0;
  }
  v14 = v15;
  if ( a5 )
    *a5 = v15;
  return sub_651240(a1, a2, v14, v10);
}
