void __fastcall sub_558000(__int64 a1, __int64 *a2, __int64 a3)
{
  signed __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r13
  signed __int64 v7; // r14
  unsigned __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rax

  if ( a3 > 0 )
  {
    if ( a2[1] )
    {
      v4 = a3 - tag_strlen(*a2);
      if ( v4 > 0 )
      {
LABEL_4:
        v5 = a2[1];
        if ( v5 )
        {
          v8 = v5 - 1;
          v7 = v4 + v5 - 1;
          v6 = v4 + v5;
          if ( v5 >= v4 + v5 )
          {
LABEL_9:
            memset((void *)(v8 + *a2), 32, v4);
            return;
          }
        }
        else
        {
          v6 = v4 + 1;
          v7 = v4;
          v8 = 0;
        }
        v9 = *a2;
        if ( a2[2] < v6 )
        {
          v10 = qvector_reserve(a2, v9, v6, 1);
          *a2 = v10;
          v9 = v10;
        }
        a2[1] = v6;
        *(_BYTE *)(v9 + v7) = 0;
        goto LABEL_9;
      }
    }
    else
    {
      v4 = a3 - tag_strlen(haystack);
      if ( v4 > 0 )
        goto LABEL_4;
    }
  }
}

