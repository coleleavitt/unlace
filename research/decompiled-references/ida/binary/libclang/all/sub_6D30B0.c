__int64 __fastcall sub_6D30B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  unsigned int v5; // edi
  __int64 *v6; // rax
  __int64 v7; // r9
  __int64 v8; // rax
  int v10; // eax
  int v11; // r11d

  v2 = *(unsigned int *)(a1 + 2024);
  v3 = *(_QWORD *)(a1 + 2008);
  if ( (_DWORD)v2 )
  {
    v5 = (v2 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v6 = (__int64 *)(v3 + 16LL * v5);
    v7 = *v6;
    if ( *v6 == a2 )
    {
LABEL_3:
      if ( v6 != (__int64 *)(v3 + 16 * v2) )
      {
        v8 = 16LL * *((unsigned int *)v6 + 2);
        if ( 16LL * *(unsigned int *)(a1 + 2040) != v8 )
          return *(unsigned int *)(v8 + *(_QWORD *)(a1 + 2032) + 8);
      }
    }
    else
    {
      v10 = 1;
      while ( v7 != -4096 )
      {
        v11 = v10 + 1;
        v5 = (v2 - 1) & (v10 + v5);
        v6 = (__int64 *)(v3 + 16LL * v5);
        v7 = *v6;
        if ( *v6 == a2 )
          goto LABEL_3;
        v10 = v11;
      }
    }
  }
  return 1;
}

