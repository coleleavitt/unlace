__int64 __fastcall sub_32B6F0(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rbp
  int v3; // edx
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v2 = xmmword_8CC810;
  v3 = sub_27E0B0(a1, (__int64)&v6, xmmword_8CC810, a2 == 0 ? 6 : 4);
  result = 0;
  if ( v3 )
  {
    if ( v7 == 3 )
    {
      v5 = v6;
      *(_BYTE *)(v6 + 40) = a2 ^ 1;
      update_hidden_range(v5);
    }
    else if ( v7 > 3 )
    {
      if ( v7 == 4 )
      {
        if ( a2 )
          set_abits(v2, &stru_80000);
        else
          clr_abits(v2, &stru_80000);
      }
    }
    else if ( v7 == 1 )
    {
      set_visible_segm(v6, a2 ^ 1u);
    }
    else if ( v7 == 2 )
    {
      set_visible_func(v6, a2 ^ 1u);
    }
    return 1;
  }
  return result;
}
