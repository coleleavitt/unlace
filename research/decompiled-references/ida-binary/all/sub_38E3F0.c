__int64 __fastcall sub_38E3F0(__int64 a1, _QWORD *a2, char a3)
{
  unsigned int v5; // ebp
  __int64 v7; // rdi
  const char *v8; // rsi
  const char *v9; // rdi
  const char *v10; // r14
  const char *i; // rbx
  __int64 v12; // r13
  __int64 v13; // r12
  const char *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdi
  const char *v17; // [rsp+0h] [rbp-78h] BYREF
  __int128 v18; // [rsp+8h] [rbp-70h]
  __int128 v19; // [rsp+18h] [rbp-60h]
  __int64 v20; // [rsp+28h] [rbp-50h]
  int v21; // [rsp+30h] [rbp-48h]
  unsigned __int64 v22; // [rsp+38h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  if ( (get_tinfo_property(*a2, 2) & 0x2F) == 0xD )
  {
    v5 = 1;
    if ( (get_tinfo_property(*a2, 2) & 0x3F) != 0x1D )
    {
      v7 = *a2;
      v8 = byte_9 + 4;
      v17 = nullptr;
      v20 = 0;
      v21 = 1;
      v18 = 0;
      v19 = 0;
      get_tinfo_details(v7, 13, &v17);
      v9 = v17;
      v10 = &v17[144 * v18];
      if ( v10 == v17 )
      {
        v5 = 0;
      }
      else
      {
        for ( i = v17 + 64; ; i += 144 )
        {
          v8 = (_BYTE *)(&dword_0 + 2);
          if ( (get_tinfo_property(*(_QWORD *)i, 2) & 0x2F) == 0xD )
          {
            if ( !a3 )
            {
              v9 = v17;
              v5 = 1;
              goto LABEL_12;
            }
            v8 = i;
            v5 = sub_38E3F0(a1, i, 1);
            if ( (_BYTE)v5 )
              break;
          }
          if ( v10 == i + 80 )
          {
            v9 = v17;
            v5 = 0;
            goto LABEL_12;
          }
        }
        v9 = v17;
      }
LABEL_12:
      if ( v9 )
      {
        v12 = v18;
        if ( (_QWORD)v18 )
        {
          v13 = 0;
          do
          {
            v14 = &v9[144 * v13];
            clear_tinfo_t(v14 + 64);
            v15 = *((_QWORD *)v14 + 5);
            if ( v15 )
            {
              *((_QWORD *)v14 + 6) = 0;
              qfree(v15, v8);
            }
            v16 = *((_QWORD *)v14 + 2);
            if ( v16 )
            {
              *((_QWORD *)v14 + 3) = 0;
              qfree(v16, v8);
            }
            ++v13;
            v9 = v17;
          }
          while ( v12 != v13 );
        }
        *(_QWORD *)&v18 = 0;
        qfree(v9, v8);
      }
    }
  }
  else
  {
    return 0;
  }
  return v5;
}
