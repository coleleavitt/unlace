__int64 __fastcall sub_42620(__int64 *a1)
{
  unsigned int v1; // r9d
  unsigned __int64 v4; // r10
  __int64 *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 *v9; // r12
  __int64 v10; // rdi
  char v11; // al
  __int64 v12; // r8
  __int64 v13; // r11
  char v14; // al
  __int64 v15; // r8
  unsigned __int64 v16; // rax
  unsigned int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r10
  char v20; // r11
  unsigned __int64 v21; // rdx
  _QWORD *v22; // r8
  __int64 v23; // rax

  v1 = 0;
  if ( a1[10] != 3 )
    return 0;
  v4 = a1[11];
  v5 = &a1[3
         * (v4
          + 1
          - ((v4 + 1) / 3
           + (((0xAAAAAAAAAAAAAAABLL * (unsigned __int128)(v4 + 1)) >> 64) & 0xFFFFFFFFFFFFFFFELL)))];
  v6 = v4 - (v4 / 3 + (((0xAAAAAAAAAAAAAAABLL * (unsigned __int128)v4) >> 64) & 0xFFFFFFFFFFFFFFFELL));
  v7 = a1[3 * (int)v6 + 1];
  if ( v5[1] == v7 )
  {
    v8 = 3
       * (v4 + 2 - ((v4 + 2) / 3 + (((0xAAAAAAAAAAAAAAABLL * (unsigned __int128)(v4 + 2)) >> 64) & 0xFFFFFFFFFFFFFFFELL)));
    v9 = &a1[v8];
    if ( v7 == a1[v8 + 1] )
    {
      v10 = *a1;
      v11 = sub_3A400(*a1, (__int64)&a1[3 * v6 + 1]);
      if ( v11 == 7 || v11 == -120 )
      {
        v14 = sub_3A400(v10, v12 + v13 + 8);
        if ( v14 == 24 || (v1 = 0, v14 == -106) )
        {
          v16 = v5[2];
          if ( *(_BYTE *)(v10 + 617) )
          {
            if ( *(_BYTE *)(v10 + 616) || *(_WORD *)(v10 + 522) != 8 )
              v16 >>= 32;
          }
          else
          {
            v16 >>= 8;
          }
          v1 = 0;
          if ( !(_DWORD)v16 )
          {
            v17 = sub_3A400(v10, v15 + v8 * 8 + 8);
            if ( (unsigned __int8)(v17 + 122) <= 1u || (unsigned __int8)(v17 - 5) <= 1u )
            {
              v21 = v9[2];
              if ( v20 )
              {
                if ( *(_BYTE *)(v10 + 616) || *(_WORD *)(v10 + 522) != 8 )
                  v21 >>= 32;
              }
              else
              {
                v21 >>= 8;
              }
              v1 = 0;
              if ( !(_DWORD)v21 )
              {
                if ( v17 == 134 )
                {
                  LODWORD(v21) = 202;
                }
                else if ( v17 > 0x86 )
                {
                  if ( v17 == 135 )
                    LODWORD(v21) = 203;
                }
                else
                {
                  LODWORD(v21) = 201;
                  if ( v17 != 5 )
                    LODWORD(v21) = 200;
                }
                sub_3A460(v10, v18 + 24 * v19 + 8, v21);
                v23 = v22[11];
                v22[10] = 1;
                v22[12] = v23
                        + 1
                        - ((v23 + 1) / 3uLL
                         + ((((unsigned __int64)(v23 + 1) * (unsigned __int128)0xAAAAAAAAAAAAAAABLL) >> 64)
                          & 0xFFFFFFFFFFFFFFFELL));
              }
            }
          }
        }
      }
    }
  }
  return v1;
}

