unsigned __int64 __fastcall sub_17044D0(_QWORD *a1, __int64 *a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 result; // rax
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdi
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r13
  _QWORD *v14; // rdx
  int v15; // r14d
  __int64 v16; // rdx
  __int64 v17; // rcx

  result = a1[37];
  if ( result )
  {
    a5 = *a2;
    a4 = *(_BYTE *)(*a2 + 28) & 0x7F;
    if ( (_BYTE)a4 == 18 && result == *(_QWORD *)(a5 + 40) )
      *a3 -= 3;
  }
  if ( (a1[28] & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v9 = *a2;
    result = sub_17040B0(*(_QWORD *)(a1[22] + 248LL), v9, (__int64)a3, a4, a5, a6);
    if ( (result & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v11 = a1[28];
      v12 = *(_QWORD *)&byte_8[result & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)&byte_8[result & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)result) & 7;
      v13 = *(_QWORD *)&byte_8[result & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL;
      v14 = (_QWORD *)(*(_QWORD *)&byte_8[a1[28] & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
      result = *(_QWORD *)(*(_QWORD *)&byte_8[v13] & 0xFFFFFFFFFFFFFFF0LL);
      if ( *v14 == result )
      {
        *a3 >>= 2;
      }
      else
      {
        v15 = sub_1703F50(v11, v9, (__int64)v14, v10);
        result = sub_1703F50(v12, v9, v16, v17);
        if ( v15 == (_DWORD)result )
        {
          result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1[28] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(result + 16) != 47
            || (result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
                *(_BYTE *)(result + 16) != 47) )
          {
            *a3 >>= 1;
          }
        }
      }
    }
  }
  return result;
}
