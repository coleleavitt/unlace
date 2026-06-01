__int64 __fastcall sub_60BAB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  _QWORD *v6; // r12
  __int64 v7; // rdi
  unsigned int v9[14]; // [rsp-38h] [rbp-38h] BYREF

  if ( !(_DWORD)a2 )
    return 0;
  if ( a1 )
  {
    if ( a3 )
    {
      if ( *(_DWORD *)(a1 + 28) )
      {
        v5 = *(_QWORD *)(a3 + 8);
        v6 = *(_QWORD **)(v5 + 64);
        if ( v6[360] )
        {
          v7 = (unsigned int)a2;
          if ( (int)a2 < 0 )
            v7 = (unsigned int)sub_CAB1A0(*(_QWORD *)(v5 + 32), a2);
          if ( !(unsigned __int8)sub_1169180(v7, v9, v6[11], v6[7], 0) )
            return sub_60B6C0(a1, v9, a3);
        }
      }
    }
  }
  return 0;
}

