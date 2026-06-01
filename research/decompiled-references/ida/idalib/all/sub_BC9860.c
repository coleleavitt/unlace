__int64 __fastcall sub_BC9860(__int64 **a1, __int64 a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rax
  unsigned __int8 (*v5)(void); // rdx
  __int64 (*v6)(); // rdx
  __int64 (*v7)(); // rdx
  __int64 result; // rax

  v3 = *a1;
  v4 = *v3;
  v5 = *(unsigned __int8 (**)(void))(*v3 + 224);
  if ( (char *)v5 != (char *)sub_BC58F0 )
  {
    if ( !v5() )
      return 0;
    v3 = *a1;
    v4 = **a1;
  }
  v6 = *(__int64 (**)())(v4 + 3880);
  if ( v6 == sub_BC5FA0 )
    goto LABEL_3;
  if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v6)(v3, a2) )
    return 0;
  v3 = *a1;
  v4 = **a1;
LABEL_3:
  v7 = *(__int64 (**)())(v4 + 3896);
  result = 1;
  if ( v7 != sub_BC5FC0 )
    return ((__int64 (__fastcall *)(__int64 *, __int64))v7)(v3, a2);
  return result;
}
