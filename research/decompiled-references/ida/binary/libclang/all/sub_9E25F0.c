__int64 __fastcall sub_9E25F0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 *v6; // rdx
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  __int64 v9; // [rsp+10h] [rbp-10h] BYREF

  result = 1;
  if ( !*(_DWORD *)(a3 + 48) )
  {
    v5 = *(_QWORD *)(a3 + 24);
    if ( v5 )
    {
      v6 = *(__int64 **)(v5 + 32);
      if ( *((_BYTE *)v6 + 52) )
      {
        v7 = *v6;
        if ( (v7 & 2) != 0 )
          return 0;
        v8 = v7 & 0xFFFFFFFFFFFFFFFCLL;
        if ( !v8 || (*(_BYTE *)(v8 + 28) & 0x7Fu) - 24 > 0x1A )
        {
          return 0;
        }
        else
        {
          if ( (unsigned int)(a4 - 3) > 1 && a4 )
          {
            if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x20) != 0 )
            {
              v9 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
              sub_A2E0C0(a1, &v9, 2241, 0);
            }
          }
          else
          {
            sub_9E2440(a1, a2, (unsigned int *)v8);
          }
          return 0;
        }
      }
    }
  }
  return result;
}

