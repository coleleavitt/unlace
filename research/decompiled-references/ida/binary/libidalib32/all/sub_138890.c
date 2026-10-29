__int64 __fastcall sub_138890(__int64 a1, char a2)
{
  int v2; // edx
  __int64 result; // rax
  __int64 v4; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v5; // [rsp+8h] [rbp-30h]
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v2 = sub_F4A40(a1, (__int64)&v4, qword_251700, a2 == 0 ? 6 : 4);
  result = 0;
  if ( v2 )
  {
    if ( v5 == 3 )
    {
      *(_BYTE *)(v4 + 32) = a2 ^ 1;
      update_hidden_range();
    }
    else if ( v5 > 3 )
    {
      if ( v5 == 4 )
      {
        if ( a2 )
          set_abits();
        else
          clr_abits();
      }
    }
    else if ( v5 == 1 )
    {
      set_visible_segm();
    }
    else if ( v5 == 2 )
    {
      set_visible_func();
    }
    return 1;
  }
  return result;
}

