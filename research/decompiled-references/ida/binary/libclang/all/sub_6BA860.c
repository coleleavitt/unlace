__int64 __fastcall sub_6BA860(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned int v5; // esi
  __int64 *v6; // rax
  __int64 v7; // r9
  _DWORD *v8; // rbx
  int v10; // eax
  int v11; // r11d

  v2 = *(unsigned int *)(a1 + 1712);
  v3 = *(_QWORD *)(a1 + 1696);
  if ( !(_DWORD)v2 )
    return 0;
  v5 = (v2 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v6 = (__int64 *)(v3 + 16LL * v5);
  v7 = *v6;
  if ( a2 != *v6 )
  {
    v10 = 1;
    while ( v7 != -4096 )
    {
      v11 = v10 + 1;
      v5 = (v2 - 1) & (v10 + v5);
      v6 = (__int64 *)(v3 + 16LL * v5);
      v7 = *v6;
      if ( a2 == *v6 )
        goto LABEL_3;
      v10 = v11;
    }
    return 0;
  }
LABEL_3:
  if ( v6 == (__int64 *)(v3 + 16 * v2) )
    return 0;
  v8 = (_DWORD *)v6[1];
  if ( v8[14] )
    sub_6A7ED0((__int64)v8, a1);
  return *(_QWORD *)v8;
}

