__int64 __fastcall sub_E0380(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 i; // rbx
  unsigned __int64 *v6; // rdx
  __int64 v7; // rax
  char v8; // [rsp+28h] [rbp-170h] BYREF
  unsigned __int64 v9; // [rsp+168h] [rbp-30h] BYREF

  v9 = __readfsqword(0x28u);
  v1 = sub_330F80(a1[1]);
  v2 = sub_D7430(*a1);
  if ( !v2 )
    return 0;
  v3 = v2;
  if ( a1[40] != -1 )
  {
    for ( i = get_first_fcref_to(); i != -1; i = get_next_fcref_to() )
    {
      if ( v1 != i )
      {
        if ( (unsigned __int8)sub_332920(a1[1] + 8, i) )
        {
          v6 = (unsigned __int64 *)&v8;
          do
          {
            *(_WORD *)v6 = 0;
            v6 += 5;
            *((_WORD *)v6 - 19) = 0;
            *((_WORD *)v6 - 18) = 0;
            *((_DWORD *)v6 - 2) = 0;
            *((_WORD *)v6 - 17) = 0;
            *((_OWORD *)v6 - 2) = 0;
            *(v6 - 2) = 0;
          }
          while ( &v9 != v6 );
          if ( (unsigned int)decode_insn() )
          {
            if ( (unsigned __int8)is_call_insn() )
            {
              v7 = sub_D73B0(a1[1]);
              if ( v7 < v3 )
              {
                if ( !v7 )
                  return 0;
                v3 = v7;
              }
            }
          }
        }
      }
    }
  }
  return v3;
}
