bool __fastcall sub_68DE10(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  _DWORD *v3; // rax
  int v4; // eax
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  _QWORD *v7; // r12

  v2 = *(_WORD *)(a2 + 4);
  if ( !v2 )
  {
    if ( *(_WORD *)(a2 + 28) <= 4u )
    {
      if ( sub_68D010(a2) )
        return 1;
      v3 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
      if ( v3 )
      {
        if ( !*v3 )
        {
          v4 = v3[1];
          if ( v4 == 6
            || v4 == 5
            || v4 == 9
            || v4 == 8
            || v4 == 2 && (unsigned __int8)sub_15D2CB0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a2 + 32)) )
          {
            v5 = (_QWORD *)(a2 + 32);
            v6 = 8LL * *(unsigned int *)(a2 + 24);
            v7 = (_QWORD *)(a2 + 32 + v6);
            if ( v6 )
            {
              while ( (unsigned __int8)sub_68DE10(a1, *v5) )
              {
                if ( v7 == ++v5 )
                  return 1;
              }
              return 0;
            }
            return 1;
          }
        }
      }
    }
    return 0;
  }
  if ( v2 == 2 && *(_DWORD *)(a2 + 40) > 4u )
    return 0;
  return sub_68D010(a2);
}

