__int64 __fastcall sub_1A480(__int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // r13
  __int128 v5; // xmm0
  char *v6; // rax
  unsigned __int64 *v7; // rax
  __int64 v8; // rax
  unsigned __int8 v9; // [rsp+Fh] [rbp-389h]
  __int64 v10; // [rsp+38h] [rbp-360h] BYREF
  __int64 v11; // [rsp+40h] [rbp-358h]
  __int128 v12; // [rsp+48h] [rbp-350h]
  __int64 v13; // [rsp+60h] [rbp-338h] BYREF
  __int128 v14; // [rsp+68h] [rbp-330h]
  __int128 v15; // [rsp+80h] [rbp-318h]
  __int64 v16; // [rsp+90h] [rbp-308h]
  __int64 v17; // [rsp+98h] [rbp-300h]
  __int64 v18; // [rsp+A0h] [rbp-2F8h]
  _BYTE v19[48]; // [rsp+A8h] [rbp-2F0h] BYREF
  __int64 v20; // [rsp+D8h] [rbp-2C0h]
  char v21; // [rsp+1E8h] [rbp-1B0h] BYREF
  __int128 v22; // [rsp+1F0h] [rbp-1A8h]
  __int64 v23; // [rsp+200h] [rbp-198h]
  __int64 v24; // [rsp+208h] [rbp-190h]
  __int64 v25; // [rsp+210h] [rbp-188h]
  _BYTE v26[56]; // [rsp+218h] [rbp-180h] BYREF
  __int64 v27; // [rsp+250h] [rbp-148h]
  unsigned __int64 v28; // [rsp+358h] [rbp-40h] BYREF

  v28 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1[2] + 4) == 13 && (v9 = getinf_flag()) != 0 )
  {
    v3 = *a2;
    v4 = a2[1];
    if ( *a2 < v4 )
    {
      v5 = 0;
      do
      {
        v16 = -1;
        v6 = v19;
        v17 = 0;
        v18 = 0;
        v15 = -1;
        do
        {
          *(_WORD *)v6 = 0;
          v6 += 40;
          *((_WORD *)v6 - 19) = 0;
          *((_WORD *)v6 - 18) = 0;
          *((_DWORD *)v6 - 2) = 0;
          *((_WORD *)v6 - 17) = 0;
          *((_OWORD *)v6 - 2) = v5;
          *((_QWORD *)v6 - 2) = 0;
        }
        while ( &v21 != v6 );
        v23 = -1;
        v7 = (unsigned __int64 *)v26;
        v24 = 0;
        v25 = 0;
        v22 = -1;
        do
        {
          *(_WORD *)v7 = 0;
          v7 += 5;
          *((_WORD *)v7 - 19) = 0;
          *((_WORD *)v7 - 18) = 0;
          *((_DWORD *)v7 - 2) = 0;
          *((_WORD *)v7 - 17) = 0;
          *((_OWORD *)v7 - 2) = v5;
          *(v7 - 2) = 0;
        }
        while ( v7 != &v28 );
        v5 = 0;
        if ( (get_flags_ex() & 0x4000) == 0
          && (v5 = 0, (unsigned int)decode_insn() == 4)
          && (v5 = 0, (unsigned int)decode_insn() == 4)
          && v19[41] == 5
          && v26[41] == 4 )
        {
          v8 = *a1;
          v12 = 0;
          v11 = 0;
          v5 = 0;
          if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *, __int64))(v8 + 136))(a1, &v10, v20 + v27) )
          {
            v5 = 0;
            if ( get_strlit_contents() > 0 )
            {
              v14 = 0;
              v13 = 0;
              sub_D6A0(&v13);
              set_name();
              v5 = 0;
              if ( v13 )
              {
                *(_QWORD *)&v14 = 0;
                qfree();
                v5 = 0;
              }
            }
          }
          v3 += 24LL;
          if ( v11 )
          {
            *(_QWORD *)&v12 = 0;
            qfree();
            v5 = 0;
          }
        }
        else
        {
          v3 += 4LL;
        }
      }
      while ( v3 < v4 );
    }
  }
  else
  {
    return 0;
  }
  return v9;
}
