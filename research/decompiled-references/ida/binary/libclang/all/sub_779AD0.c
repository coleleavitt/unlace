__int64 __fastcall sub_779AD0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rsi
  int v4; // eax
  int v5; // ecx
  unsigned int v6; // edx
  __int64 *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  int v11; // eax
  int v12; // r8d

  v1 = a1;
  if ( *(char *)(a1 + 29) < 0 )
  {
    v2 = sub_798D40(a1);
    v3 = *(_QWORD *)(v2 + 1648);
    v4 = *(_DWORD *)(v2 + 1664);
    if ( v4 )
    {
      v5 = v4 - 1;
      v6 = (v4 - 1) & (((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4));
      v7 = (__int64 *)(v3 + 16LL * v6);
      v8 = *v7;
      if ( v1 == *v7 )
      {
LABEL_4:
        v9 = v7[1];
        if ( v9 )
          return v9;
      }
      else
      {
        v11 = 1;
        while ( v8 != -4096 )
        {
          v12 = v11 + 1;
          v6 = v5 & (v11 + v6);
          v7 = (__int64 *)(v3 + 16LL * v6);
          v8 = *v7;
          if ( v1 == *v7 )
            goto LABEL_4;
          v11 = v12;
        }
      }
    }
  }
  return v1;
}

