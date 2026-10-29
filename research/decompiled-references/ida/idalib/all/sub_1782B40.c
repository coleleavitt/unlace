char __fastcall sub_1782B40(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 *v10; // r12
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbp
  __int64 v16; // rdi
  unsigned __int64 v17; // r13
  __int64 *v18; // rax
  __int64 *v19; // rax
  __int64 *v20; // rax
  __int64 v21; // rcx
  _QWORD v23[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = sub_BFB900(a1);
  LOWORD(v7) = (*(_WORD *)v4 + 423) & 0x1FF;
  if ( (unsigned __int16)v7 <= 4u && (*(_BYTE *)(v4 + 1) & 6) == 0 )
  {
    v23[0] = *(_QWORD *)(v4 + 8);
    LOBYTE(v7) = sub_1782A90(v23, a2, v2, v3, v5, v6);
    if ( (_BYTE)v7 )
    {
      *(_BYTE *)(v4 + 2) |= 0x40u;
      v7 = sub_BFBC70(*(_QWORD *)(v4 + 32));
      if ( v7 )
      {
        v9 = (*(_BYTE *)(v7 + 28) & 0x7Fu) - 34;
        if ( (unsigned int)v9 <= 5 )
        {
          v10 = *(__int64 **)(v7 + 120);
          v7 = (__int64)&v10[(unsigned int)sub_B76070(v7, a2, v9, v8)];
          if ( (__int64 *)v7 != v10 )
          {
            v15 = 0;
            v16 = *v10;
            v17 = (unsigned __int64)(v7 - (_QWORD)v10 - 8) >> 3;
            if ( (*(_BYTE *)(*v10 + 29) & 1) != 0 )
              goto LABEL_11;
            while ( 1 )
            {
              while ( 1 )
              {
                do
                {
LABEL_9:
                  v7 = v15 + 1;
                  if ( v17 == v15 )
                    return v7;
                  ++v15;
                  v16 = v10[v7];
                }
                while ( (*(_BYTE *)(v16 + 29) & 1) == 0 );
LABEL_11:
                v18 = sub_B8C3D0(v16, a2, v11, v12, v13, v14);
                v11 = *v18;
                v12 = *v18 + 8LL * *((unsigned int *)v18 + 2);
                if ( *v18 >= v12 )
                  break;
                v19 = (__int64 *)*v18;
                while ( 1 )
                {
                  v11 = *v19;
                  if ( *(_WORD *)(*v19 + 36) == 189 )
                    break;
                  if ( (__int64 *)v12 == ++v19 )
                    goto LABEL_9;
                }
                if ( (__int64 *)v12 != v19 )
LABEL_16:
                  sub_1782B40(*(_QWORD *)(v4
                                        + 8 * ((unsigned int)v15 + (unsigned __int64)((*(_BYTE *)(v4 + 2) & 8) != 0))
                                        + 40));
              }
              if ( v11 != v12 )
              {
                if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) == 189 )
                  goto LABEL_16;
                v20 = (__int64 *)(v12 + 8);
                while ( 1 )
                {
                  v12 = (unsigned __int64)v20;
                  if ( (__int64 *)v11 == v20 )
                    break;
                  v21 = *v20++;
                  if ( *(_WORD *)(v21 + 36) == 189 )
                    goto LABEL_16;
                }
              }
            }
          }
        }
      }
    }
  }
  return v7;
}
