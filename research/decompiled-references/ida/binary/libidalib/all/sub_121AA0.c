unsigned __int64 __fastcall sub_121AA0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r13
  unsigned __int64 v4; // r14
  __int64 v5; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // [rsp+28h] [rbp-40h]

  v8 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a2 + 8) )
  {
    a1[1] = 0;
    v2 = 0;
    v3 = *(_QWORD *)(a2 + 8);
    if ( v3 )
    {
      while ( 1 )
      {
        if ( getseg() )
          get_segm_name();
        if ( v3 == ++v2 )
          break;
        v4 = a1[1];
        if ( v4 > 1 )
        {
          v5 = *a1;
          if ( a1[2] < v4 + 1 )
          {
            v7 = qvector_reserve();
            *a1 = v7;
            v5 = v7;
          }
          a1[1] = v4 + 1;
          *(_BYTE *)(v5 + v4 - 1) = 32;
          *(_BYTE *)(*a1 + v4) = 0;
        }
      }
    }
  }
  return v8 - __readfsqword(0x28u);
}

