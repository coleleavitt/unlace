__int64 __fastcall sub_6C1B40(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  unsigned int v5; // esi
  __int64 *v6; // rdx
  __int64 v7; // rdi
  int v9; // edx
  int v10; // r10d

  v2 = *(unsigned int *)(a1 + 1184);
  v3 = *(_QWORD *)(a1 + 1168);
  if ( (_DWORD)v2 )
  {
    v5 = (v2 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v6 = (__int64 *)(v3 + 16LL * v5);
    v7 = *v6;
    if ( a2 == *v6 )
    {
LABEL_3:
      if ( v6 != (__int64 *)(v3 + 16 * v2) )
        return v6[1];
    }
    else
    {
      v9 = 1;
      while ( v7 != -4096 )
      {
        v10 = v9 + 1;
        v5 = (v2 - 1) & (v9 + v5);
        v6 = (__int64 *)(v3 + 16LL * v5);
        v7 = *v6;
        if ( a2 == *v6 )
          goto LABEL_3;
        v9 = v10;
      }
    }
  }
  return 0;
}

