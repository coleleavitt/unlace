__int64 __fastcall sub_1AD7410(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v5; // r15
  __int64 *v7; // rax
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned __int64 v11; // r13
  unsigned int v12; // edx
  __int16 v13; // cx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  char v25; // cl
  __int64 v26; // [rsp+8h] [rbp-D0h] BYREF
  _OWORD v27[12]; // [rsp+10h] [rbp-C8h] BYREF

  v5 = a2;
  v7 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL]
                                         & 0xFFFFFFFFFFFFFFF0LL)
                             + 32LL)
                 & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *v7;
  if ( *(_BYTE *)(*v7 + 16) != 26 )
    v8 = sub_F63050(*v7, a2, a3, a4);
  if ( v8 + 48 != v8 + 48 + 8LL * *(unsigned __int16 *)(v8 + 22) )
  {
    v9 = 0;
    v10 = 0;
    v11 = (8 * (unsigned __int64)*(unsigned __int16 *)(v8 + 22) - 8) >> 3;
    while ( 1 )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(v8 + 8 * v9 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42
        && (LOBYTE(v26) = v10,
            v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_F68450(v15, a2, v10, a4, a5) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL),
            *(_BYTE *)(v16 + 16) == 13)
        && ((*(_WORD *)(v16 + 18) >> 3) & 0x1FF) == 0x1B3
        && (v20 = sub_F68450(*(_QWORD *)(*(_QWORD *)(v8 + 8 * v9 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v17, v18, v19),
            v10 = (unsigned __int8)v26,
            v21 = *(_QWORD *)&byte_8[v20 & 0xFFFFFFFFFFFFFFF0LL],
            (v21 & 8) != 0)
        && (a4 = v21 & 0xFFFFFFFFFFFFFFF0LL,
            (*(_DWORD *)((char *)&qword_18 + (v21 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v21 & 7)) >> 9 == 2) )
      {
        v14 = v9 + 1;
        if ( v9 == v11 )
          return (unsigned int)v10;
      }
      else
      {
        v12 = 0;
        v13 = *(_WORD *)v5 & 0x1FF;
        if ( v13 == 117 )
        {
          v12 = sub_B73090(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 72LL) + 8LL * (unsigned int)v9));
        }
        else if ( v13 == 71 )
        {
          if ( (*(_QWORD *)v5 & 0x80000LL) != 0 )
          {
            v23 = *(_QWORD *)(v5 + 32);
            if ( v23 )
            {
              v26 = *(_QWORD *)(v5 + 40);
              v27[0] = _mm_loadh_ps((const double *)&v26);
              v24 = *(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              if ( v24 )
              {
                *(_QWORD *)&v27[0] = v24;
                v25 = 0;
                while ( (*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                {
                  v25 = 1;
                  v24 = *(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                }
                if ( v25 )
                  *(_QWORD *)&v27[0] = v24;
              }
              v12 = sub_E90530((__int64 *)v27);
            }
            else
            {
              v12 = 0;
            }
          }
          else
          {
            v12 = *(_DWORD *)(v5 + 4);
          }
        }
        a2 = a1 + 8;
        sub_168B9F0((__int64)v27, (__int64 *)(a1 + 8), v12, 0x1245u, 0);
        sub_15F7200(v27);
        v10 = 1;
        v14 = v9 + 1;
        if ( v9 == v11 )
          return (unsigned int)v10;
      }
      v9 = v14;
    }
  }
  LODWORD(v10) = 0;
  return (unsigned int)v10;
}
