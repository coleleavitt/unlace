__int64 __fastcall sub_BD0030(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rdx
  __int64 (*v5)(); // rdx
  __int64 result; // rax

  v2 = *a1;
  v3 = *(unsigned __int8 (**)(void))(*a1 + 232);
  if ( (char *)v3 != (char *)sub_BC5900 )
  {
    if ( !v3() )
      return 0;
    v2 = *a1;
  }
  v4 = *(__int64 (**)())(v2 + 6952);
  if ( v4 == sub_BC73F0 )
    goto LABEL_3;
  if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v4)(a1, a2) )
    return 0;
  v2 = *a1;
LABEL_3:
  v5 = *(__int64 (**)())(v2 + 6960);
  result = 1;
  if ( v5 != sub_BC7400 )
    return ((__int64 (__fastcall *)(__int64 *, __int64))v5)(a1, a2);
  return result;
}
