unsigned __int64 __fastcall sub_652AD0(__int64 *a1, __int64 a2, __int64 *a3)
{
  __int64 *v3; // rbp
  __int64 idati; // rax
  __int64 v6; // rbx
  __int64 v7; // r13
  __int64 tinfo_property; // rax
  const char *v9; // rax
  __int64 v10; // rax
  const char *v12; // rcx
  __int64 v13; // [rsp+18h] [rbp-80h] BYREF
  _QWORD v14[2]; // [rsp+20h] [rbp-78h] BYREF
  __int16 v15; // [rsp+30h] [rbp-68h]
  _QWORD v16[2]; // [rsp+40h] [rbp-58h] BYREF
  __int16 v17; // [rsp+50h] [rbp-48h]
  unsigned __int64 v18; // [rsp+58h] [rbp-40h]

  v3 = a1;
  v18 = __readfsqword(0x28u);
  if ( (get_merge_state(a1, a2) & 2) == 0 )
  {
    v14[1] = a2;
    v15 = 0;
    idati = (__int64)a1;
    if ( !a1 )
      idati = get_idati(0, a2);
    v14[0] = idati;
    v6 = *a3;
    v7 = *a3 + 24 * a3[1];
    if ( v7 != *a3 )
    {
      do
      {
        v13 = 0;
        v9 = haystack;
        if ( *(_QWORD *)(v6 + 8) )
          v9 = *(const char **)v6;
        if ( v9 )
        {
          v16[1] = v9;
          v10 = (__int64)v3;
          v17 = 256;
          if ( !v3 )
            v10 = get_idati(a1, a2);
          a2 = 61;
          v16[0] = v10;
          if ( (unsigned __int8)create_tinfo(&v13, 61, 61, v16) )
          {
            a2 = 310;
            tinfo_property = get_tinfo_property(v13, 310);
            if ( tinfo_property )
            {
              if ( !*(_QWORD *)(tinfo_property + 8) )
              {
                create_tinfo(&v13, 61, 61, v14);
                v12 = haystack;
                if ( *(_QWORD *)(v6 + 8) )
                  v12 = *(const char **)v6;
                a2 = (__int64)v3;
                save_tinfo(&v13, v3, 0, v12, 2147483653LL);
              }
            }
          }
        }
        a1 = &v13;
        v6 += 24;
        clear_tinfo_t(&v13);
      }
      while ( v7 != v6 );
    }
  }
  return v18 - __readfsqword(0x28u);
}
