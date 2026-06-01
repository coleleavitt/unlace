__int64 __fastcall sub_77A0C0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  int v4; // eax
  int v5; // ecx
  unsigned int v6; // edx
  __int64 *v7; // rax
  __int64 v8; // rdi
  __int64 result; // rax
  int v10; // eax
  int v11; // r8d

  v2 = sub_798D40(a1);
  v3 = *(_QWORD *)(v2 + 1648);
  v4 = *(_DWORD *)(v2 + 1664);
  if ( !v4 )
    return a1;
  v5 = v4 - 1;
  v6 = (v4 - 1) & (((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4));
  v7 = (__int64 *)(v3 + 16LL * v6);
  v8 = *v7;
  if ( a1 != *v7 )
  {
    v10 = 1;
    while ( v8 != -4096 )
    {
      v11 = v10 + 1;
      v6 = v5 & (v10 + v6);
      v7 = (__int64 *)(v3 + 16LL * v6);
      v8 = *v7;
      if ( a1 == *v7 )
        goto LABEL_3;
      v10 = v11;
    }
    return a1;
  }
LABEL_3:
  result = v7[1];
  if ( !result )
    return a1;
  return result;
}

