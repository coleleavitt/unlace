unsigned __int64 __fastcall sub_6A6570(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int16 v3; // ax
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // r15
  _DWORD v10[4]; // [rsp+10h] [rbp-58h] BYREF
  int v11; // [rsp+20h] [rbp-48h]
  unsigned __int64 v12; // [rsp+28h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  if ( a1 != a2 )
  {
    v2 = a1 + 24;
    while ( a2 != v2 )
    {
      v3 = *(_WORD *)(v2 + 16);
      v4 = v2;
      v2 += 24;
      if ( v3 >= *(_WORD *)(a1 + 16) )
      {
        sub_6A64A0(v4);
      }
      else
      {
        v5 = v2 - 24;
        v10[0] = 0;
        copy_argloc(v10, v2 - 24);
        v11 = *(_DWORD *)(v2 - 8);
        v6 = v4 - a1;
        v7 = 0xAAAAAAAAAAAAAAABLL * ((v4 - a1) >> 3);
        if ( v6 > 0 )
        {
          do
          {
            v8 = v5;
            v5 -= 24;
            copy_argloc(v8, v5);
            *(_WORD *)(v8 + 16) = *(_WORD *)(v8 - 8);
            *(_WORD *)(v8 + 18) = *(_WORD *)(v8 - 6);
            --v7;
          }
          while ( v7 );
        }
        copy_argloc(a1, v10);
        *(_DWORD *)(a1 + 16) = v11;
        cleanup_argloc(v10);
      }
    }
  }
  return v12 - __readfsqword(0x28u);
}
