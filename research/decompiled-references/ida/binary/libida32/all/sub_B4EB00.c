__int64 __fastcall sub_B4EB00(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 *v4; // r12
  __int64 v5; // rdx
  char v6; // al
  _QWORD *v7; // rax
  unsigned __int8 v9; // al
  int v10; // eax
  __int64 *v11; // r15
  __int64 v12; // r13
  __int64 v13; // rsi
  unsigned __int8 v14; // al
  int v15; // eax
  _QWORD *v16; // r15
  __int64 v17; // r13
  unsigned __int8 v18; // al
  char v19; // al
  char v20; // si
  bool v21; // dl
  char v22; // al
  unsigned __int8 v24; // [rsp+Fh] [rbp-49h]
  unsigned __int8 v25[57]; // [rsp+1Fh] [rbp-39h] BYREF

  v25[0] = v25[0] & 0xC0 | 0x16;
  v3 = a2 + 8LL * (*(_DWORD *)(a2 + 20) & 0x1FFFFFFF) + 24;
  if ( a2 + 24 != v3 )
  {
    v4 = (__int64 *)(a2 + 24);
    do
    {
      v5 = *v4;
      v6 = *(_BYTE *)(*v4 + 28) & 0x7F;
      if ( v6 != 67 )
      {
        if ( v6 == 47 )
        {
          if ( *(_BYTE *)(v5 + 81) )
          {
            v15 = *(_DWORD *)(v5 + 84);
            if ( v15 )
            {
              v16 = (_QWORD *)(v5 + 88);
              v17 = v5 + 16LL * (unsigned int)(v15 - 1) + 104;
              do
              {
                if ( (*(_BYTE *)(*(_QWORD *)(*v16 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
                {
                  v18 = sub_F3FB80(a1);
                  sub_B4E730(v25, v18);
                }
                v16 += 2;
              }
              while ( v16 != (_QWORD *)v17 );
            }
          }
          else
          {
            v7 = (_QWORD *)(*(_QWORD *)(v5 + 48) & 0xFFFFFFFFFFFFFFF0LL);
            if ( (*(_BYTE *)(*v7 + 17LL) & 4) == 0 )
            {
              if ( (a3 & 4) != 0 )
              {
                v22 = sub_F40350(*v7);
                v21 = 1;
                v20 = 2;
                v19 = v22 & 7;
              }
              else
              {
                v24 = sub_F3FB80(a1);
                v19 = v24 & 7;
                v20 = (v24 >> 3) & 3;
                v21 = (v24 & 0x20) != 0;
              }
              v24 = (32 * v21) | (8 * (v20 & 3)) & 0xDF | v19 & 0xDF | v24 & 0xC0;
              sub_B4E730(v25, v24);
            }
          }
        }
        else if ( (*(_BYTE *)(v5 + 80) & 4) != 0 )
        {
          v10 = *(_DWORD *)(v5 + 84);
          if ( v10 )
          {
            v11 = (__int64 *)(v5 + 88);
            v12 = v5 + 8LL * (unsigned int)(v10 - 1) + 96;
            do
            {
              v13 = *v11++;
              v14 = sub_B4EB00(a1, v13, a3);
              sub_B4E730(v25, v14);
            }
            while ( (__int64 *)v12 != v11 );
          }
        }
        else
        {
          v9 = sub_B4EB00(a1, *(_QWORD *)(v5 + 56), a3);
          sub_B4E730(v25, v9);
        }
      }
      ++v4;
    }
    while ( (__int64 *)v3 != v4 );
  }
  return v25[0];
}

