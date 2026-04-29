unsigned __int64 __fastcall sub_3A5880(__int64 *a1)
{
  __int64 v1; // rbp
  unsigned __int64 v2; // rbx
  __int64 v4; // r9
  _QWORD *v5; // rax
  __int64 flags; // r13
  unsigned int v7; // r12d
  char v8; // cl
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  unsigned __int8 v12; // al
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int8 default_reftype; // al
  int v16; // [rsp+0h] [rbp-1B8h] BYREF
  unsigned __int64 v17; // [rsp+8h] [rbp-1B0h]
  __int128 v18; // [rsp+20h] [rbp-198h] BYREF
  __int64 v19; // [rsp+30h] [rbp-188h]
  __int64 v20; // [rsp+38h] [rbp-180h]
  __int64 v21; // [rsp+40h] [rbp-178h]
  _BYTE v22[320]; // [rsp+48h] [rbp-170h] BYREF
  _QWORD v23[6]; // [rsp+188h] [rbp-30h] BYREF

  v23[0] = __readfsqword(0x28u);
  if ( *((_DWORD *)a1 + 2) == 64 )
  {
    v1 = *a1;
    if ( *a1 != -1 )
    {
      v2 = a1[3];
      if ( (get_flags_ex(v2, 4) & 0x600) == 0x400 )
      {
        if ( !(unsigned __int8)xrefblk_t_first_from(&v16, v1, 2) )
          goto LABEL_10;
        while ( v17 < v2 )
        {
          v17 = v2 - 1;
          if ( !(unsigned __int8)xrefblk_t_next_from(&v16) )
            goto LABEL_10;
        }
        if ( v2 < v17 )
        {
LABEL_10:
          v19 = -1;
          v5 = v22;
          v20 = 0;
          v21 = 0;
          v18 = -1;
          do
          {
            *(_WORD *)v5 = 0;
            v5 += 5;
            *((_WORD *)v5 - 19) = 0;
            *((_WORD *)v5 - 18) = 0;
            *((_DWORD *)v5 - 2) = 0;
            *((_WORD *)v5 - 17) = 0;
            *((_OWORD *)v5 - 2) = 0;
            *(v5 - 2) = 0;
          }
          while ( v23 != v5 );
          if ( (int)decode_insn(&v18, v1, v23, 0, 0, v4, 0.0) > 0 )
          {
            flags = get_flags_ex(v1, 0);
            v7 = sub_CB3B0(0x64u, &v16, &v18) - 1;
            if ( (v7 & 0x80000000) == 0 && !(unsigned __int8)is_defarg(flags, v7) )
            {
              v8 = v22[40 * v7 + 1];
              if ( v16 == 1 )
              {
                if ( v8 == 5 )
                {
                  v14 = *(_QWORD *)&v22[40 * v7 + 8];
                  if ( v14 >= v2 && v14 < v2 + 256 )
                  {
                    default_reftype = get_default_reftype(v1);
                    op_offset(v1, v7, default_reftype, -1, 0, 0);
                  }
                }
              }
              else
              {
                if ( v8 == 5 )
                {
                  v9 = *(_QWORD *)&v22[40 * v7 + 8];
                }
                else
                {
                  if ( v8 != 4 )
                    return v23[0] - __readfsqword(0x28u);
                  v9 = *(_QWORD *)&v22[40 * v7 + 16];
                }
                v10 = -v9;
                if ( v16 != 2 )
                {
                  v10 = v9;
                  v9 = -v9;
                }
                if ( v9 < 0 )
                {
                  if ( v2 < v10 )
                    return v23[0] - __readfsqword(0x28u);
                }
                else if ( __CFADD__(v2, v9) )
                {
                  return v23[0] - __readfsqword(0x28u);
                }
                v11 = v2 - v10;
                v12 = get_default_reftype(v1);
                v13 = v12 | 0x380u;
                if ( v16 != 2 )
                  v13 = v12 | 0x280u;
                op_offset(v1, v7, v13, -1, v11, 0);
              }
            }
          }
        }
      }
    }
  }
  return v23[0] - __readfsqword(0x28u);
}
