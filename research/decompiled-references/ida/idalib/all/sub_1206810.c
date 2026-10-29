__int64 __fastcall sub_1206810(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // r13d
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 *v9; // rbx
  __int64 *v10; // r15
  const char **v11; // rbx
  __int64 v12; // r12
  const char *v13; // rbp
  int v14[15]; // [rsp+Ch] [rbp-3Ch] BYREF

  sub_1131C90(a1, a2, a3);
  v4 = sub_22B7B00(a1 + 16);
  v14[0] = 3129;
  v5 = sub_21B6DA0(a2, v14, 1);
  v6 = *(_QWORD *)(a2 + 8);
  v7 = (unsigned int)v5;
  result = HIDWORD(v5);
  v9 = (__int64 *)(v6 + 8 * v7);
  v10 = (__int64 *)(v6 + 8 * result);
  if ( v9 != v10 )
  {
    while ( 1 )
    {
      if ( *v9 )
      {
        result = sub_21B9810(*v9, 3129);
        if ( (_BYTE)result )
          break;
      }
      if ( v10 == ++v9 )
        return result;
    }
    if ( v10 != v9 )
    {
      do
      {
        result = *v9;
        if ( *(_QWORD *)(*v9 + 16) )
          result = *(_QWORD *)(*v9 + 16);
        ++v9;
        *(_BYTE *)(result + 44) |= 1u;
        if ( v9 == v10 )
          break;
        while ( 1 )
        {
          if ( *v9 )
          {
            result = sub_21B9810(*v9, 3129);
            if ( (_BYTE)result )
              break;
          }
          if ( v10 == ++v9 )
            goto LABEL_13;
        }
      }
      while ( v10 != v9 );
LABEL_13:
      if ( (unsigned int)(v4 - 1) <= 0xC )
      {
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 608LL))(a1, a2);
        if ( !(_DWORD)result )
        {
          v11 = *(const char ***)a3;
          result = *(unsigned int *)(a3 + 8);
          v12 = *(_QWORD *)a3 + 8 * result;
          if ( *(_QWORD *)a3 != v12 )
          {
            do
            {
              v13 = *v11;
              if ( *v11 )
              {
                result = strlen(*v11);
                if ( result == 5 && *(_DWORD *)v13 == 727936045 && v13[4] == 43 )
                  *v11 = "-lc++_p";
              }
              ++v11;
            }
            while ( (const char **)v12 != v11 );
          }
        }
      }
    }
  }
  return result;
}
