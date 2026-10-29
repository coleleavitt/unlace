__int64 __fastcall sub_A72780(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 *v7; // rsi
  __int64 v8; // rdx
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13[4]; // [rsp+0h] [rbp-20h] BYREF

  result = a2;
  v7 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v8 = v7[1];
  if ( (v8 & 8) != 0 )
  {
    v13[2] = v5;
    v10 = result & 7;
    if ( (*(__int64 *)((char *)&qword_18 + (v8 & 0xFFFFFFFFFFFFFFF0LL)) & 0xFFFFFE00) != 0 )
    {
      v13[0] = 0;
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
      {
        v12 = 0;
        if ( (v8 & 8) == 0 )
          return v5 & 0xFFFFFFFFFFFFFFF0LL | v12 & 0x1FF;
        do
        {
          v12 |= v10;
          v5 = (__int64)v7;
          v13[0] = v12;
          if ( (result & 8) != 0 )
          {
            v12 |= v7[3];
            v13[0] = v12;
            v5 = *v7;
            v8 = *(_QWORD *)&byte_8[*v7 & 0xFFFFFFFFFFFFFFF0LL];
            if ( (v8 & 8) == 0 )
              break;
          }
          if ( (*(__int64 *)((char *)&qword_18 + (v8 & 0xFFFFFFFFFFFFFFF0LL)) & 0xFFFFFE00) == 0 )
            break;
          result = sub_F6B250(result, a1);
          v12 = v13[0];
          v7 = (__int64 *)(result & 0xFFFFFFFFFFFFFFF0LL);
          v8 = *(_QWORD *)&byte_8[result & 0xFFFFFFFFFFFFFFF0LL];
          if ( (v8 & 8) == 0 )
            break;
          v10 = result & 7;
        }
        while ( (*(__int64 *)((char *)&qword_18 + (v8 & 0xFFFFFFFFFFFFFFF0LL)) & 0xFFFFFE00) != 0 );
      }
      else
      {
        v11 = sub_A725A0(
                a1,
                result,
                v13,
                (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2,
                a5);
        v12 = v13[0];
        v5 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
      }
      v13[0] = v12 & 0xFFFFFFFF000001FFLL;
      if ( (v12 & 0xFFFFFFFF000001F8LL) != 0 )
        return sub_A70C40((__int64)a1, v5, v12 & 0xFFFFFFFF000001FFLL);
      return v5 & 0xFFFFFFFFFFFFFFF0LL | v12 & 0x1FF;
    }
  }
  return result;
}
