__int64 __fastcall sub_3354A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 *v5; // r12
  __int64 module_data; // rax
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  __int64 *vars8; // [rsp+8h] [rbp+8h]
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  vars0 = 0;
  vars8 = nullptr;
  v3 = sub_3351D0(&vars0, a1, a3);
  if ( !v3 )
  {
    if ( (_DWORD)vars0 != 4 )
      sub_334DA0();
    v5 = vars8;
    module_data = get_module_data((unsigned int)dword_4C1BB8);
    if ( !(unsigned __int8)sub_334DC0((_OWORD *)(module_data + 728), v5) )
      v3 = 2;
  }
  jvalue_t_clear(&vars0);
  return v3;
}
