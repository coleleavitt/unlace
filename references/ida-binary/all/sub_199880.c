__int64 __fastcall add_bpt_ah_t__::vfunc_1(__int64 a1, __int64 *a2)
{
  unsigned int v2; // ecx
  __int64 v4; // rdx
  char **p_s1; // rsi
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  char *v10; // rbx
  char *s1; // [rsp+0h] [rbp-28h] BYREF
  __int128 v12; // [rsp+8h] [rbp-20h]
  unsigned __int64 v13; // [rsp+18h] [rbp-10h]

  v13 = __readfsqword(0x28u);
  v2 = *((_DWORD *)a2 + 2);
  if ( v2 <= 0x23 )
  {
    if ( ((1LL << v2) & 0xA000D) != 0 )
      return 2;
    if ( v2 == 35 )
    {
      v4 = *a2;
      s1 = nullptr;
      v12 = 0;
      p_s1 = &s1;
      v6 = (*(__int64 (__fastcall **)(_QWORD *, char **, __int64))(QT::QCoreApplication::self[2] + 64LL))(
             QT::QCoreApplication::self + 2,
             &s1,
             v4);
      v10 = s1;
      if ( v6 )
      {
        if ( (unsigned __int64)v12 > 7 )
        {
          p_s1 = (char **)"Module:";
          if ( !strncmp(s1, "Module:", 7u) )
          {
            if ( v10 )
            {
              *(_QWORD *)&v12 = 0;
              qfree(v10, "Module:", v7, v8, v9);
            }
            return 2;
          }
        }
      }
      if ( v10 )
      {
        *(_QWORD *)&v12 = 0;
        qfree(v10, p_s1, v7, v8, v9);
      }
    }
    else if ( v2 == 13 && *(_BYTE *)(a1 + 12) )
    {
      return 2;
    }
  }
  return 6;
}
