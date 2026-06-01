__int64 __fastcall sub_3B55E0(int a1, _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 (__fastcall *v4)(__int64); // rax
  _BYTE *v5; // rax
  _BOOL8 v6; // rdx
  _BYTE v7[2]; // [rsp+6h] [rbp-22h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( a1 == -1 || a1 == 55 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, _BYTE *))*a2)(a2, 55, v7) )
      (*(void (__fastcall **)(_QWORD *, __int64, bool))(*a2 + 16LL))(a2, 56, (v7[0] & 4) != 0);
    if ( a1 == -1 )
    {
      v3 = *a2;
      v4 = *(__int64 (__fastcall **)(__int64))(*a2 + 72LL);
      if ( v4 == form_actions_impl_t__::vfunc_9 )
      {
        v5 = (_BYTE *)a2[4];
      }
      else
      {
        v5 = (_BYTE *)v4((__int64)a2);
        v3 = *a2;
      }
      v6 = 1;
      if ( v5 )
        v6 = *v5 == 0;
      (*(void (__fastcall **)(_QWORD *, __int64, _BOOL8))(v3 + 16))(a2, 57, v6);
    }
  }
  return 1;
}
