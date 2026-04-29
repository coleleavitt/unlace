unsigned __int64 __fastcall sub_39080(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  unsigned int v5; // r13d
  __int64 v6; // rax
  __int64 func; // r14
  __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v4 = sub_4E2D0(a1);
  if ( v4 != 4 )
  {
    if ( v4 <= 4 )
    {
      v5 = 30;
      if ( v4 != 3 )
        return v10 - __readfsqword(0x28u);
      goto LABEL_4;
    }
    if ( v4 - 8 > 1 )
      return v10 - __readfsqword(0x28u);
  }
  v5 = 2;
LABEL_4:
  v6 = netnode_altval(*(_QWORD *)(a1 + 120), a3, 839);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) == 8 || (v6 = (int)v6, (unsigned __int64)(int)v6 > 0xFFFFFFFFFFFFFFFCLL) )
  {
    v9 = v6;
    if ( v6 == -2 )
    {
      func = get_func(a3);
      if ( func )
      {
        if ( (unsigned __int8)sub_5B600(a1, &v9, *(_QWORD *)(a2 + 16), v5, 0xFFFFFFFFLL) )
        {
          sub_4F800(a1, a3);
          set_func_name_if_jumpfunc(func, 0);
        }
      }
    }
  }
  return v10 - __readfsqword(0x28u);
}
