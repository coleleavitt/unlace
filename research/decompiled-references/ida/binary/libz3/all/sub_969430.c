__int64 __fastcall sub_969430(__int64 a1, __int64 *a2, __m128i a3, __m128 a4)
{
  __int64 result; // rax
  unsigned int v5; // r12d
  char v6; // bp
  unsigned int v7; // r15d
  __int64 v8; // rax
  char v9; // al
  char v10; // dl
  __int64 v11[8]; // [rsp+18h] [rbp-40h] BYREF

  result = *a2;
LABEL_2:
  while ( 2 )
  {
    if ( result )
    {
      v5 = 0;
      v6 = 0;
      do
      {
        if ( v5 >= *(_DWORD *)(result - 4) )
        {
LABEL_8:
          if ( v6 )
            goto LABEL_2;
          return result;
        }
        while ( 1 )
        {
          v7 = *(_DWORD *)(result + 4LL * v5);
          if ( v7 != -2 && !*(_BYTE *)(*(_QWORD *)(a1 + 8848) + v7) )
            break;
          if ( ++v5 >= *(_DWORD *)(result - 4) )
            goto LABEL_8;
        }
        sub_8EC360(a1);
        v8 = *(_QWORD *)(a1 + 8848);
        v11[0] = 2;
        v9 = *(_BYTE *)(v8 + v7);
        if ( v9 == -1 )
        {
          sub_8E8670(a1, v11, v7 ^ 1);
        }
        else if ( !v9 )
        {
          sub_8F28B0(a1, v7, 2, 1u);
        }
        while ( 1 )
        {
          v10 = sub_8F5330(a1, a3, a4);
          result = *a2;
          if ( v10 )
            break;
          *(_DWORD *)(result + 4LL * v5) = -2;
          result = (**(__int64 (__fastcall ***)(__int64))a1)(a1);
          v6 = result;
          if ( (_BYTE)result )
          {
            result = qword_1C7EC80;
            if ( *(_QWORD *)(a1 + 8984) == qword_1C7EC80 && !*(_BYTE *)(a1 + 2416) )
              continue;
          }
          return result;
        }
        ++v5;
      }
      while ( result );
      if ( v6 )
        continue;
    }
    return result;
  }
}

