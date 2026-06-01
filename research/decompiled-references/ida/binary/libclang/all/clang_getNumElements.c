__int64 __fastcall clang_getNumElements(
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
  char v10; // cl
  __int64 v11; // rsi
  unsigned __int8 v12; // dl
  int v13; // edx
  __int64 v14; // [rsp+8h] [rbp-20h]
  void *v15; // [rsp+10h] [rbp-18h] BYREF
  unsigned int v16; // [rsp+18h] [rbp-10h]

  result = -1;
  if ( (a8 & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
  {
    v9 = *(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL);
    if ( v9 )
    {
      v10 = *(_BYTE *)(v9 + 16);
      if ( v10 == 56 || v10 == 57 )
        return *(unsigned int *)(v9 + 20);
      if ( v10 == 2 )
      {
        v11 = *(_QWORD *)(v9 + 40);
        v12 = *(_BYTE *)(v9 + 19);
        if ( (v12 & 2) != 0 )
        {
          v13 = *(_DWORD *)(v11 + 8);
          v16 = v13;
          if ( (unsigned int)v13 <= 0x40 )
          {
            v15 = *(void **)v11;
            goto LABEL_9;
          }
          sub_2585B30(&v15);
        }
        else
        {
          v13 = 8 * ((v12 >> 2) & 0x1F);
          v16 = v13;
          if ( v13 <= 64 )
          {
            v15 = (void *)v11;
LABEL_9:
            result = 0;
            if ( v13 )
              return (__int64)((_QWORD)v15 << (64 - (unsigned __int8)v13)) >> (64 - (unsigned __int8)v13);
            return result;
          }
          sub_2585A50(&v15, v11, 0);
        }
        v13 = v16;
        if ( v16 > 0x40 )
        {
          v14 = *(_QWORD *)v15;
          operator delete[](v15);
          return v14;
        }
        goto LABEL_9;
      }
    }
  }
  return result;
}

