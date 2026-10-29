void __fastcall sub_BA7F10(__int64 a1, __int64 a2)
{
  int v2; // r14d
  unsigned int v3; // r12d
  int v4; // r15d
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // eax
  _QWORD v10[8]; // [rsp+0h] [rbp-40h] BYREF

  if ( (*(_BYTE *)(a1 + 29) & 2) == 0 )
  {
    v2 = 1;
    v10[0] = *(_QWORD *)(a1 + 40);
    if ( (v10[0] & 3) == 1 || (v2 = sub_FDE930(v10)) != 0 )
    {
      v3 = 0;
      while ( 1 )
      {
        v7 = *(_QWORD *)(a1 + 96);
        v8 = *(unsigned int *)(a1 + 104);
        if ( ((*(_BYTE *)(a1 + 60) >> 2) & 3) != 0 )
        {
          v9 = sub_EE7BC0(
                 v3,
                 *(_QWORD *)(a1 + 40),
                 ((*(_BYTE *)(a1 + 60) >> 2) & 3) == 2,
                 v7,
                 v8,
                 *(unsigned int *)(a1 + 108));
          v5 = *(unsigned int *)(a2 + 8);
          v4 = v9;
          v6 = v5 + 1;
          if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
            goto LABEL_9;
LABEL_6:
          ++v3;
          *(_DWORD *)(*(_QWORD *)a2 + 4 * v5) = v4;
          ++*(_DWORD *)(a2 + 8);
          if ( v3 == v2 )
            return;
        }
        else
        {
          v4 = *(_DWORD *)(v7 + 4LL * v3 + 8 * v8);
          v5 = *(unsigned int *)(a2 + 8);
          v6 = v5 + 1;
          if ( v5 + 1 <= (unsigned __int64)*(unsigned int *)(a2 + 12) )
            goto LABEL_6;
LABEL_9:
          ++v3;
          sub_2237220(a2, a2 + 16, v6, 4);
          *(_DWORD *)(*(_QWORD *)a2 + 4LL * (unsigned int)(*(_DWORD *)(a2 + 8))++) = v4;
          if ( v2 == v3 )
            return;
        }
      }
    }
  }
}
