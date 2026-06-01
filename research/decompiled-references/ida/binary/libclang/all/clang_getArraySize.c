__int64 __fastcall clang_getArraySize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rsi
  unsigned __int8 v11; // dl
  int v12; // edx
  __int64 v13; // [rsp+8h] [rbp-20h]
  void *v14; // [rsp+10h] [rbp-18h] BYREF
  unsigned int v15; // [rsp+18h] [rbp-10h]

  result = -1;
  if ( (a8 & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
  {
    v9 = *(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL);
    if ( v9 )
    {
      if ( *(_BYTE *)(v9 + 16) == 2 )
      {
        v10 = *(_QWORD *)(v9 + 40);
        v11 = *(_BYTE *)(v9 + 19);
        if ( (v11 & 2) != 0 )
        {
          v12 = *(_DWORD *)(v10 + 8);
          v15 = v12;
          if ( (unsigned int)v12 <= 0x40 )
          {
            v14 = *(void **)v10;
LABEL_7:
            result = 0;
            if ( v12 )
              return (__int64)((_QWORD)v14 << (64 - (unsigned __int8)v12)) >> (64 - (unsigned __int8)v12);
            return result;
          }
          sub_2585B30(&v14);
        }
        else
        {
          v12 = 8 * ((v11 >> 2) & 0x1F);
          v15 = v12;
          if ( v12 <= 64 )
          {
            v14 = (void *)v10;
            goto LABEL_7;
          }
          sub_2585A50(&v14, v10, 0);
        }
        v12 = v15;
        if ( v15 > 0x40 )
        {
          v13 = *(_QWORD *)v14;
          operator delete[](v14);
          return v13;
        }
        goto LABEL_7;
      }
    }
  }
  return result;
}

