__int64 __fastcall sub_19F8730(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 *v7; // r15
  __int64 *v8; // rbx
  __int64 *v9; // rbp
  unsigned __int8 v10; // [rsp+Fh] [rbp-159h]
  unsigned __int8 v11; // [rsp+Fh] [rbp-159h]
  void *v12; // [rsp+10h] [rbp-158h] BYREF
  __int64 v13; // [rsp+18h] [rbp-150h]
  _BYTE v14[128]; // [rsp+20h] [rbp-148h] BYREF
  void *ptr; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+A8h] [rbp-C0h]
  _BYTE v17[184]; // [rsp+B0h] [rbp-B8h] BYREF

  result = 0;
  if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) != 0 && (a3 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    ptr = (void *)(*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                 | ((unsigned __int8)*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a2) & 7);
    v5 = sub_6D5440(&ptr);
    ptr = (void *)(*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                 | ((unsigned __int8)*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a3) & 7);
    v6 = sub_6D5440(&ptr);
    result = 1;
    if ( (*(_QWORD *)&byte_8[v5 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)v5 | (unsigned __int8)*(_QWORD *)&byte_8[v5 & 0xFFFFFFFFFFFFFFF0LL]) & 7) != (*(_QWORD *)&byte_8[v6 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v6 | (unsigned __int8)*(_QWORD *)&byte_8[v6 & 0xFFFFFFFFFFFFFFF0LL]) & 7) )
    {
      v13 = 0x1000000000LL;
      v12 = v14;
      sub_19F81D0(v5, (__int64)&v12);
      ptr = v17;
      v16 = 0x1000000000LL;
      sub_19F81D0(v6, (__int64)&ptr);
      result = 0;
      v7 = (__int64 *)ptr;
      if ( (unsigned int)v16 == (unsigned __int64)(unsigned int)v13 )
      {
        v8 = (__int64 *)v12;
        v9 = (__int64 *)((char *)v12 + 8 * (unsigned int)v16);
        if ( v12 == v9 )
        {
          result = 1;
        }
        else
        {
          do
          {
            result = sub_16C73B0(*a1, *v8, *v7);
            if ( !(_BYTE)result )
              break;
            ++v8;
            ++v7;
          }
          while ( v9 != v8 );
          v7 = (__int64 *)ptr;
        }
      }
      if ( v7 != (__int64 *)v17 )
      {
        v10 = result;
        free(v7);
        result = v10;
      }
      if ( v12 != v14 )
      {
        v11 = result;
        free(v12);
        return v11;
      }
    }
  }
  return result;
}
