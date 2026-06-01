void __fastcall sub_7B6C50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  unsigned int v4; // eax
  __int64 v5; // r14
  int v6; // r8d
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // [rsp+0h] [rbp-4Ch]
  _QWORD v10[8]; // [rsp+Ch] [rbp-40h] BYREF

  if ( (*(_BYTE *)(a1 + 29) & 2) == 0 )
  {
    v3 = 1;
    v10[0] = *(_QWORD *)(a1 + 40);
    if ( (v10[0] & 3) == 1 || (v4 = sub_C87220(v10, a2, a3), (v3 = v4) != 0) )
    {
      v5 = 0;
      while ( 1 )
      {
        if ( ((*(_BYTE *)(a1 + 60) >> 2) & 3) != 0 )
        {
          v6 = sub_AC26A0(
                 (unsigned int)v5,
                 *(_QWORD *)(a1 + 40),
                 ((*(_BYTE *)(a1 + 60) >> 2) & 3) == 2,
                 *(_QWORD *)(a1 + 96),
                 *(unsigned int *)(a1 + 104),
                 *(unsigned int *)(a1 + 108));
          v7 = *(unsigned int *)(a2 + 8);
          v8 = v7 + 1;
          if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(v7 + 1) )
            goto LABEL_9;
LABEL_6:
          ++v5;
          *(_DWORD *)(*(_QWORD *)a2 + 4 * v7) = v6;
          ++*(_DWORD *)(a2 + 8);
          if ( v5 == v3 )
            return;
        }
        else
        {
          v6 = *(_DWORD *)(*(_QWORD *)(a1 + 96) + 4 * v5 + 8LL * *(unsigned int *)(a1 + 104));
          v7 = *(unsigned int *)(a2 + 8);
          v8 = v7 + 1;
          if ( *(unsigned int *)(a2 + 12) >= (unsigned __int64)(v7 + 1) )
            goto LABEL_6;
LABEL_9:
          ++v5;
          v9 = v6;
          sub_25D6060(a2, a2 + 16, v8, 4);
          *(_DWORD *)(*(_QWORD *)a2 + 4LL * (unsigned int)(*(_DWORD *)(a2 + 8))++) = v9;
          if ( v5 == v3 )
            return;
        }
      }
    }
  }
}

