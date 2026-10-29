__int64 __fastcall sub_5B2430(__int64 a1, unsigned int *a2, unsigned int *a3, _DWORD *a4)
{
  unsigned int v6; // eax
  unsigned int v7; // ebx
  _QWORD *v8; // r15
  unsigned int v10; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  v6 = calc_thunk_func_target(a2, &v10);
  if ( (v6 & v10) == 0xFFFFFFFF )
    return 0;
  v7 = v6;
  v8 = *(_QWORD **)(qword_2CA1698 + 1480);
  if ( !(unsigned __int8)sub_5B2180(v8, a2, v6) )
    sub_5B2180(v8, a2, v10);
  if ( !(unsigned __int8)sub_5AF5A0(a1, a2, v7, nullptr) )
    sub_5AF5A0(a1, a2, v10, nullptr);
  if ( a3 )
    *a3 = v7;
  if ( a4 )
    *a4 = v10;
  return 1;
}

