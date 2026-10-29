__int64 __fastcall sub_19CD480(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  unsigned __int64 v7; // rdx
  __int64 v9; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r13
  __int64 v13; // [rsp+0h] [rbp-60h]
  void *ptr; // [rsp+8h] [rbp-58h] BYREF
  __int64 v15; // [rsp+10h] [rbp-50h]
  _BYTE v16[72]; // [rsp+18h] [rbp-48h] BYREF

  result = (__int64)a1;
  if ( a1[10] != a2 )
  {
    v7 = a1[2] & 0xFFFFFFFFFFFFFFF8LL;
    if ( (a1[2] & 4) != 0 )
      v7 = *(_QWORD *)v7;
    if ( (*(_BYTE *)(v7 + 8) & 0x7Fu) - 21 > 1
      || v7 == 48
      || ((*(_BYTE *)(v7 - 20) & 0x7F) != 0x16
        ? (v9 = *(_QWORD *)(v7 + 40))
        : (v9 = sub_BADE20(v7 - 48, a2, v7, a4, a5, a6)),
          (v10 = sub_BAA9D0(v9, a1[5], (a1[7] >> 17) & 1LL, 0, a5, a6)) == 0) )
    {
      ptr = v16;
      v15 = 0x400000000LL;
      sub_BABA70((unsigned __int64)a1, (__int64)&ptr, v7, a4, a5, a6);
      if ( (_DWORD)v15 )
      {
        v11 = 0;
        v12 = 8LL * (unsigned int)(v15 - 1) + 8;
        while ( 1 )
        {
          result = sub_19CD480(*(_QWORD *)((char *)ptr + v11), a2);
          if ( result )
            break;
          v11 += 8;
          if ( v12 == v11 )
            goto LABEL_15;
        }
      }
      else
      {
LABEL_15:
        result = 0;
      }
      if ( ptr != v16 )
      {
        v13 = result;
        free(ptr);
        return v13;
      }
    }
    else
    {
      return sub_19CD480(v10, a2);
    }
  }
  return result;
}
