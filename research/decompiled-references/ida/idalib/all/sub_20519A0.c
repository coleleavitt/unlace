__int64 __fastcall sub_20519A0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  int v3; // edx
  __int64 v4; // rdi
  int v5; // esi
  unsigned int v6; // ecx
  __int64 *v7; // rdx
  __int64 v8; // r8
  int v9; // edx
  int v10; // r9d
  __int64 v11; // r8

  v1 = *(_QWORD *)(a1 - 32);
  result = *(_QWORD *)sub_20CB0D0(v1);
  v3 = *(_DWORD *)(result + 1648);
  v4 = *(_QWORD *)(result + 1632);
  if ( v3 )
  {
    v5 = v3 - 1;
    v6 = (v3 - 1) & (((unsigned int)v1 >> 9) ^ ((unsigned int)v1 >> 4));
    v7 = (__int64 *)(v4 + 16LL * v6);
    v8 = *v7;
    if ( v1 == *v7 )
    {
LABEL_3:
      *v7 = -8192;
      --*(_DWORD *)(result + 1640);
      ++*(_DWORD *)(result + 1644);
      return result;
    }
    v9 = 1;
    if ( v8 != -4096 )
    {
      while ( 1 )
      {
        v10 = v9 + 1;
        v6 = v5 & (v9 + v6);
        v7 = (__int64 *)(v4 + 16LL * v6);
        v11 = *v7;
        if ( v1 == *v7 )
          break;
        v9 = v10;
        if ( v11 == -4096 )
          return result;
      }
      goto LABEL_3;
    }
  }
  return result;
}
