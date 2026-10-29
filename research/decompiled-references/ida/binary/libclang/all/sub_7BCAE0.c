unsigned __int64 __fastcall sub_7BCAE0(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // r12
  __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r13
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14[6]; // [rsp+8h] [rbp-30h] BYREF

  result = *(_QWORD *)(a1 + 120);
  if ( !result )
  {
    sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
    result = *(_QWORD *)(a1 + 120);
  }
  if ( result > 7 )
  {
    result &= 0xFFFFFFFFFFFFFFF8LL;
    if ( a1 == *(_QWORD *)result )
    {
      if ( (*(_BYTE *)(result + 72) & 1) != 0 )
        sub_7B7DB0(a1);
      result = sub_7BCA30(a1);
      v3 = result;
      if ( result )
      {
        v4 = sub_79C190(result + 48);
        if ( v4 )
        {
          while ( (*(_BYTE *)(v4 + 28) & 0x7F) != 0x10 || (*(_BYTE *)(v4 + 58) & 2) == 0 )
          {
            v5 = *(_QWORD *)(v4 + 8);
            v4 = v5 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v5 <= 7 )
              goto LABEL_19;
          }
LABEL_13:
          if ( sub_7B73C0(v4) )
          {
            v13 = *(unsigned int *)(a2 + 8);
            if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(v13 + 1) )
            {
              sub_25D6060(a2, a2 + 16, v13 + 1, 8);
              v13 = *(unsigned int *)(a2 + 8);
            }
            *(_QWORD *)(*(_QWORD *)a2 + 8 * v13) = v4;
            ++*(_DWORD *)(a2 + 8);
          }
          while ( 1 )
          {
            v6 = *(_QWORD *)(v4 + 8);
            v4 = v6 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v6 <= 7 )
              break;
            if ( (*(_BYTE *)(v4 + 28) & 0x7F) == 0x10 && (*(_BYTE *)(v4 + 58) & 2) != 0 )
              goto LABEL_13;
          }
        }
LABEL_19:
        v7 = *(_QWORD *)(v3 + 120);
        if ( !v7 )
        {
          sub_7B9840((unsigned __int64 *)(*(_QWORD *)(v3 + 96) + 88LL), *(_QWORD *)(v3 + 96));
          v7 = *(_QWORD *)(v3 + 120);
        }
        if ( v7 <= 7 )
        {
          v9 = 0;
        }
        else
        {
          v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_BYTE *)(v8 + 72) & 1) != 0 )
          {
            sub_7B7DB0(v3);
            v8 = *(_QWORD *)(v3 + 120) & 0xFFFFFFFFFFFFFFF8LL;
          }
          v9 = *(_QWORD *)(v8 + 56);
        }
        v14[0] = v9;
        result = sub_7BC620(v14);
        v10 = v14[0];
        if ( v14[0] )
        {
LABEL_26:
          result = sub_79C190(v10 + 48);
          v11 = result;
          if ( result )
          {
            while ( (*(_BYTE *)(v11 + 28) & 0x7F) != 0x10 || (*(_BYTE *)(v11 + 58) & 2) == 0 )
            {
              result = *(_QWORD *)(v11 + 8);
              v11 = result & 0xFFFFFFFFFFFFFFF8LL;
              if ( result <= 7 )
                goto LABEL_36;
            }
            while ( 1 )
            {
              if ( sub_7B73C0(v11) )
              {
                v12 = *(unsigned int *)(a2 + 8);
                if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(v12 + 1) )
                {
                  sub_25D6060(a2, a2 + 16, v12 + 1, 8);
                  v12 = *(unsigned int *)(a2 + 8);
                }
                *(_QWORD *)(*(_QWORD *)a2 + 8 * v12) = v11;
                ++*(_DWORD *)(a2 + 8);
              }
              do
              {
                result = *(_QWORD *)(v11 + 8);
                v11 = result & 0xFFFFFFFFFFFFFFF8LL;
                if ( result <= 7 )
                  goto LABEL_36;
              }
              while ( (*(_BYTE *)(v11 + 28) & 0x7F) != 0x10 || (*(_BYTE *)(v11 + 58) & 2) == 0 );
            }
          }
LABEL_36:
          while ( 1 )
          {
            v10 = *(_QWORD *)(v10 + 128);
            if ( !v10 )
              break;
            if ( *(char *)(v10 + 28) >= 0 )
            {
              result = *(_QWORD *)(v10 + 40);
              if ( ((result & 7) != 0 || result <= 7) && (*(_BYTE *)(v10 + 8) & 6) == 0 )
                goto LABEL_26;
            }
          }
        }
      }
    }
  }
  return result;
}

