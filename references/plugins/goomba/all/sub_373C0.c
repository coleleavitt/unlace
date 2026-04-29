__int64 __fastcall sub_373C0(_DWORD *a1, __int64 a2)
{
  char v3; // r12
  char v4; // al
  __int64 v5; // rdx
  __int64 result; // rax
  _DWORD *v7; // rbx
  __int64 v8; // rbp
  unsigned __int8 v9; // al
  __int64 v10; // rcx
  __int64 v11; // r13
  unsigned __int8 v12; // al
  __int64 v13; // rcx
  __int64 v14; // rbp

  while ( 2 )
  {
    v3 = *(_BYTE *)a1;
    if ( (*(_BYTE *)a1 & 0xFB) == 1 )
      return 1;
    v4 = *(_BYTE *)a1;
    v5 = (__int64)a1;
    while ( v4 == 4 )
    {
      v8 = *(_QWORD *)(v5 + 8);
      if ( *(_DWORD *)v8 != 5 )
      {
        if ( *(_DWORD *)v8 == 20 )
        {
          v9 = *(_BYTE *)(v8 + 32);
          v10 = v8 + 32;
          v5 = v9 & 0xFB;
          if ( (v9 & 0xFB) == 1 )
          {
LABEL_18:
            v12 = *(_BYTE *)(v8 + 48);
            v13 = v8 + 48;
            v5 = v12 & 0xFB;
            if ( (v12 & 0xFB) == 1 )
              return 1;
            while ( v12 == 4 )
            {
              v14 = *(_QWORD *)(v13 + 8);
              if ( *(_DWORD *)v14 != 5 )
              {
                if ( *(_DWORD *)v14 == 20 )
                {
                  if ( (unsigned __int8)sub_372D0(v14 + 32) )
                  {
                    result = sub_372D0(v14 + 48);
                    if ( (_BYTE)result )
                      return result;
                  }
                }
                goto LABEL_4;
              }
              v12 = *(_BYTE *)(v14 + 32);
              v13 = v14 + 32;
              v5 = v12 & 0xFB;
              if ( (v12 & 0xFB) == 1 )
                return 1;
            }
          }
          else
          {
            while ( v9 == 4 )
            {
              v11 = *(_QWORD *)(v10 + 8);
              if ( *(_DWORD *)v11 != 5 )
              {
                if ( *(_DWORD *)v11 != 20
                  || !(unsigned __int8)sub_372D0(v11 + 32)
                  || !(unsigned __int8)sub_372D0(v11 + 48) )
                {
                  goto LABEL_4;
                }
                goto LABEL_18;
              }
              v9 = *(_BYTE *)(v11 + 32);
              v10 = v11 + 32;
              v5 = v9 & 0xFB;
              if ( (v9 & 0xFB) == 1 )
                goto LABEL_18;
            }
          }
        }
        break;
      }
      v4 = *(_BYTE *)(v8 + 32);
      v5 = v8 + 32;
      if ( (v4 & 0xFB) == 1 )
        return 1;
    }
LABEL_4:
    if ( v3 != 4 )
      return 0;
    v7 = *((_DWORD **)a1 + 1);
    if ( *v7 != 14 )
      return 0;
    result = sub_373C0(v7 + 8, a2, v5);
    if ( (_BYTE)result )
    {
      a1 = v7 + 12;
      continue;
    }
    return result;
  }
}
