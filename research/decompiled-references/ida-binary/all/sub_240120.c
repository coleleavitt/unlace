__int64 __fastcall sub_240120(double a1)
{
  __int64 result; // rax
  _DWORD *v2; // rdi
  __int64 v3; // rdx
  _QWORD v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v4[1] = __readfsqword(0x28u);
  v4[0] = 0;
  sub_22FC60(0x10u, v4);
  result = v4[0];
  if ( !v4[0] )
  {
    if ( dbg )
    {
      if ( dword_8CC5F0 < 0 )
      {
        if ( (_DWORD)dword_8CC428 )
        {
          v2 = (_DWORD *)qword_8CC430;
          v3 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8);
          if ( qword_8CC430 != v3 )
          {
            while ( (_DWORD)dword_8CC428 != *v2 )
            {
              v2 += 64;
              if ( (_DWORD *)v3 == v2 )
                return result;
            }
            if ( v2 )
              return sub_23F1C0((__int64)v2, -1, a1, v3, (char *)(unsigned int)dword_8CC428);
            else
              return 0;
          }
        }
      }
    }
  }
  return result;
}
