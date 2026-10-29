__int64 __fastcall sub_22C0110(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // eax
  char v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v11; // rcx
  _QWORD v12[5]; // [rsp+0h] [rbp-28h] BYREF

  v6 = *(unsigned __int8 *)(a2 + 8);
  if ( v6 != 12 )
  {
    a4 = *(unsigned __int8 *)(a2 + 8);
    if ( (unsigned __int8)v6 > 5u || (a3 = (1LL << a4) & 0x2F, ((1LL << a4) & 0x2F) == 0) )
    {
      a3 = (unsigned int)a4 & 0xFFFFFFFD;
      if ( (a4 & 0xFD) != 4 )
      {
        a3 = (unsigned int)a4 & 0xFFFFFFFB;
        if ( (a4 & 0xFB) != 0xA )
        {
          v11 = (unsigned int)(a4 - 15);
          if ( (unsigned __int8)v11 > 3u && v6 != 20 )
            return 0;
          if ( !(unsigned __int8)sub_20C6390(a2, 0, a3, v11, a5, a6) )
            return 0;
        }
      }
    }
  }
  v7 = sub_206A070(a1 + 312, a2, a3, a4, a5, a6);
  v8 = sub_200E290(a1 + 312, a2);
  v12[1] = v9;
  v12[0] = 8 * (((1LL << v7) + ((unsigned __int64)(v8 + 7) >> 3) - 1) >> v7 << v7);
  return (int)sub_2254830(v12);
}
