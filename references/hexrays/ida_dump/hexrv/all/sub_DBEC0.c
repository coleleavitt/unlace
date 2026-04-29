__int64 __fastcall sub_DBEC0(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 i; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 *v11; // rdx
  __int64 v12; // rax
  __int128 v13; // [rsp+0h] [rbp-198h] BYREF
  __int64 v14; // [rsp+10h] [rbp-188h]
  __int64 v15; // [rsp+18h] [rbp-180h]
  __int64 v16; // [rsp+20h] [rbp-178h]
  char v17; // [rsp+28h] [rbp-170h] BYREF
  unsigned __int64 v18; // [rsp+168h] [rbp-30h] BYREF

  v1 = a1[38];
  v18 = __readfsqword(0x28u);
  v2 = sub_32BBA0(a1[1], v1);
  v3 = sub_D2F70(*a1, v2);
  if ( !v3 )
    return 0;
  v4 = v3;
  if ( a1[40] != -1 )
  {
    for ( i = get_first_fcref_to();
          i != -1;
          i = get_next_fcref_to(a1[40], i, v6, v7, v9, v10, v13, *((_QWORD *)&v13 + 1), v14, v15, v16) )
    {
      if ( v2 != i )
      {
        if ( (unsigned __int8)sub_32D560(a1[1] + 8, i) )
        {
          v11 = (unsigned __int64 *)&v17;
          v14 = -1;
          v15 = 0;
          v16 = 0;
          v13 = -1;
          do
          {
            *(_WORD *)v11 = 0;
            v11 += 5;
            *((_WORD *)v11 - 19) = 0;
            *((_WORD *)v11 - 18) = 0;
            *((_DWORD *)v11 - 2) = 0;
            *((_WORD *)v11 - 17) = 0;
            *((_OWORD *)v11 - 2) = 0;
            *(v11 - 2) = 0;
          }
          while ( &v18 != v11 );
          if ( (unsigned int)((__int64 (__fastcall *)(__int128 *, __int64, double))decode_insn)(&v13, i, 0.0) )
          {
            if ( (unsigned __int8)((__int64 (__fastcall *)(__int128 *))is_call_insn)(&v13) )
            {
              v12 = sub_D2EF0(a1[1], i);
              if ( v12 < v4 )
              {
                if ( !v12 )
                  return 0;
                v4 = v12;
              }
            }
          }
        }
      }
    }
  }
  return v4;
}
