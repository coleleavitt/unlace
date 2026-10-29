char __fastcall sub_1714200(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v2; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // r13
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 i; // rbx
  __int64 v20; // rax
  __int64 *v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // r13
  int v24; // eax
  char *v25; // rdi

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 232LL);
  if ( (*(_BYTE *)(v2 + 1) & 8) != 0 )
  {
    if ( *(_QWORD *)a2 )
    {
      LOBYTE(v2) = sub_15A2A90((_DWORD *)(a1 + 304));
      if ( (_BYTE)v2 )
      {
        v8 = *(_QWORD **)a2;
        LOBYTE(v2) = *(_BYTE *)(*(_QWORD *)a2 + 28LL) & 0x7F;
        if ( (_BYTE)v2 == 72 )
        {
          v8 = (_QWORD *)v8[6];
        }
        else if ( (_BYTE)v2 != 59 )
        {
          return v2;
        }
        v2 = v8[16];
        if ( v2 || (sub_7052B0((__int64 *)(v8[13] + 96LL), v8[13], v4, v5, v6, v7), (v2 = v8[16]) != 0) )
        {
          v9 = *(_QWORD *)(v2 + 88);
          if ( v9 )
          {
            v10 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 248LL);
            v11 = *(_QWORD *)(v9 + 48);
            if ( v11 )
            {
              v12 = v11 & 0xFFFFFFFFFFFFFFF0LL;
              v13 = v12;
            }
            else
            {
              v12 = sub_A7AA70(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 248LL), v9, v4, v5, v6, v7);
              v13 = v12 & 0xFFFFFFFFFFFFFFF0LL;
            }
            v14 = sub_B87BD0(
                    v10 + 17536,
                    *(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL
                  | ((unsigned __int8)*(_QWORD *)(v13 + 8) | (unsigned __int8)v12) & 7);
            v2 = sub_B94670(v9 + 64, v14, v15, v16, v17, v18);
            for ( i = v2; i; i = v21[1] )
            {
              v20 = i;
              v21 = (__int64 *)(i & 0xFFFFFFFFFFFFFFF8LL);
              v22 = (__int64)v21;
              LODWORD(v20) = (v20 >> 2) & 1;
              v23 = (unsigned int)v20;
              if ( (_DWORD)v20 )
              {
                v22 = 0;
                if ( v21 )
                  v22 = *v21;
              }
              *(_QWORD *)a2 = v22;
              v24 = sub_1704F30(v22);
              v25 = *(char **)(a1 + 8);
              a2[7] = v24;
              if ( v25 == *(char **)(a1 + 16) )
              {
                LOBYTE(v2) = sub_1706840(a1, v25, (__int64)a2);
              }
              else
              {
                LOBYTE(v2) = sub_17048E0((__int64)v25, (__int64)a2);
                *(_QWORD *)(a1 + 8) += 96LL;
              }
              if ( !v23 )
                break;
              if ( !v21 )
                break;
            }
          }
        }
      }
    }
  }
  return v2;
}
