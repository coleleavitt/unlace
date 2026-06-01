char __fastcall sub_A4A940(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // r12
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // r15
  __int64 v8; // r8
  void *v9; // rdi
  unsigned int v10; // esi
  __int64 v12; // [rsp+0h] [rbp-50h]
  void *v13; // [rsp+0h] [rbp-50h]
  __int64 v14; // [rsp+8h] [rbp-48h]
  __int64 v15; // [rsp+10h] [rbp-40h]

  v1 = a1[4];
  if ( !v1 )
    return v1;
  v2 = *(unsigned int *)(v1 - 4);
  if ( (int)v2 <= 0 )
    return v1;
  v4 = 0;
LABEL_5:
  while ( 2 )
  {
    LOBYTE(v1) = (*(_BYTE *)(a1[74] + 4 * v4 + 3) >> 4) & 3;
    if ( (_BYTE)v1 == 1 )
    {
      LOBYTE(v1) = sub_99A460((__int64)a1, v4);
      if ( (_BYTE)v1 )
      {
        v1 = a1[71] + 24LL * (*(_DWORD *)(a1[74] + 4 * v4) & 0xFFFFFFF);
        v5 = *(_QWORD *)v1;
        if ( *(_QWORD *)v1 )
        {
          LODWORD(v1) = 5 * *(_DWORD *)(v5 - 4);
          v6 = v5 + 40LL * *(unsigned int *)(v5 - 4);
          while ( v5 != v6 )
          {
            v1 = *(unsigned int *)(v5 + 32);
            if ( (_DWORD)v1 != -1 && (_DWORD)v1 != (_DWORD)v4 )
            {
              v7 = *(_QWORD *)(a1[77] + 8 * v1);
              if ( !v7
                || (v8 = *(_QWORD *)(a1[78] + 8 * v1)) == 0
                || ((v9 = qword_1C7F2C0, (*(_BYTE *)(v7 + 20) & 1) != 0) || (*(_BYTE *)(v8 + 20) & 1) != 0
                  ? (v15 = v6,
                     v14 = *(_QWORD *)(a1[78] + 8 * v1),
                     v13 = qword_1C7F2C0,
                     LODWORD(v1) = sub_182C7B0(qword_1C7F2C0, v7 + 16, v8 + 16),
                     v9 = v13,
                     v8 = v14,
                     v6 = v15,
                     LOBYTE(v1) = (_DWORD)v1 == 0)
                  : (LOBYTE(v1) = *(_DWORD *)(v7 + 16) == *(_DWORD *)(v8 + 16)),
                    !(_BYTE)v1) )
              {
LABEL_17:
                if ( v6 == v5 )
                  break;
                v10 = v4++;
                LOBYTE(v1) = sub_A49890((__int64)a1, v10, *(_DWORD *)(v5 + 32), (int *)v5, 0);
                if ( v2 == v4 )
                  return v1;
                goto LABEL_5;
              }
              if ( (*(_BYTE *)(v7 + 36) & 1) != 0 || (*(_BYTE *)(v8 + 36) & 1) != 0 )
              {
                v12 = v6;
                LODWORD(v1) = sub_182C7B0(v9, v7 + 32, v8 + 32);
                v6 = v12;
                if ( (_DWORD)v1 )
                  goto LABEL_17;
              }
              else
              {
                LODWORD(v1) = *(_DWORD *)(v8 + 32);
                if ( *(_DWORD *)(v7 + 32) != (_DWORD)v1 )
                  goto LABEL_17;
              }
            }
            v5 += 40;
          }
        }
      }
    }
    if ( v2 != ++v4 )
      continue;
    return v1;
  }
}

