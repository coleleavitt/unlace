__int64 __fastcall sub_9FD880(unsigned int **a1)
{
  unsigned int *v1; // r9
  unsigned int *v2; // r11
  __int64 result; // rax
  __int64 v4; // r9
  unsigned int **v5; // r10
  unsigned int *v6; // r11
  __int64 v7; // r9
  unsigned int **v8; // r10
  unsigned int *v9; // r11
  int v10; // [rsp+0h] [rbp-78h] BYREF
  __int64 *v11; // [rsp+8h] [rbp-70h]
  __int64 v12; // [rsp+10h] [rbp-68h]
  __int64 v13; // [rsp+18h] [rbp-60h] BYREF
  int v14; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v15; // [rsp+38h] [rbp-40h]
  __int64 v16; // [rsp+40h] [rbp-38h]
  __int64 v17; // [rsp+48h] [rbp-30h] BYREF

  v1 = *a1;
  v2 = a1[1];
  v10 = -1;
  v14 = -2;
  v11 = &v13;
  result = 0x200000000LL;
  v12 = 0x200000000LL;
  v15 = &v17;
  v16 = 0x200000000LL;
  if ( v2 != v1 )
  {
    do
    {
      while ( 1 )
      {
        result = *v1;
        if ( (_DWORD)result == -1 )
          break;
        if ( (_DWORD)result == -2 )
        {
          result = sub_9FAEC0((__int64)v1, (__int64)&v14);
          if ( (_BYTE)result )
          {
            v1 = (unsigned int *)(v7 + 48);
            *v8 = v1;
            if ( v1 != v9 )
              continue;
          }
        }
        return result;
      }
      result = sub_9FAEC0((__int64)v1, (__int64)&v10);
      if ( !(_BYTE)result )
        break;
      v1 = (unsigned int *)(v4 + 48);
      *v5 = v1;
    }
    while ( v1 != v6 );
  }
  return result;
}

