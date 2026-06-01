_QWORD *__fastcall sub_847D30(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbp
  __int64 v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  char *v7; // rax

  if ( !*(_DWORD *)a1 )
  {
    v2 = sub_8451D0(a1, 32);
    v3 = v2;
    if ( v2 )
    {
      *v2 = 0;
      v4 = *(_QWORD *)(a1 + 120);
      v3[2] = 2;
      v3[1] = v4;
      v3[3] = 0;
      v5 = *(_QWORD **)(a1 + 40);
      if ( v5 )
        *v5 = v3;
      else
        *(_QWORD *)(a1 + 16) = v3;
      *(_QWORD *)(a1 + 40) = v3;
      *(_DWORD *)(a1 + 144) = 0;
      if ( !(unsigned int)sub_8442D0((_QWORD *)a1, 15, 0) )
      {
        v3[1] = *(_QWORD *)(a1 + 120);
        v6 = sub_8441E0(a1, 1);
        if ( v6 )
        {
          *(_BYTE *)v6 = -3;
          v7 = sub_844340(a1, 1u, 15, 0, 140, a2);
          if ( v7 )
          {
            *v7 = -119;
            return v3;
          }
          if ( !*(_DWORD *)a1 )
            return v3;
        }
      }
    }
  }
  return nullptr;
}

