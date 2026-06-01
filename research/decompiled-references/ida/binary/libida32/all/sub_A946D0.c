char __fastcall sub_A946D0(_QWORD *a1, __int64 a2, __int64 a3)
{
  char result; // al
  char v5; // al
  unsigned __int64 v6; // rdx
  bool v7; // zf
  __int64 *v8; // rax
  __int64 v9; // r14
  __int64 *v10; // rax
  __int64 v11; // r15
  __int64 *v12; // r14
  __int64 *v13; // rax
  void *v14; // r13
  void *v15; // rbp
  __int64 v16; // rbx
  __int64 v17; // rbp
  __int64 *v18; // rax
  char v19; // [rsp+Fh] [rbp-159h]
  char v20; // [rsp+Fh] [rbp-159h]
  void *v21[2]; // [rsp+10h] [rbp-158h] BYREF
  _BYTE v22[128]; // [rsp+20h] [rbp-148h] BYREF
  void *ptr[2]; // [rsp+A0h] [rbp-C8h] BYREF
  _BYTE v24[184]; // [rsp+B0h] [rbp-B8h] BYREF

  result = sub_A716B0(a1, a2, a3);
  if ( result )
  {
    v5 = *(_BYTE *)(a2 + 28) & 0x7F;
    v6 = *(_QWORD *)(a2 + 72) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v5 == 67 )
    {
      result = 0;
      if ( v6 )
      {
        if ( (*(_QWORD *)(a3 + 72) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v17 = sub_A3B090(a3)[1];
          v18 = sub_A3B090(a2);
          return (*(_QWORD *)&byte_8[v18[1] & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                | ((unsigned __int8)*(_QWORD *)&byte_8[v18[1] & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v18[1]) & 7) == (*(_QWORD *)&byte_8[v17 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v17 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v17) & 7);
        }
      }
    }
    else
    {
      v7 = v5 == 47;
      result = 0;
      if ( v7 )
      {
        if ( v6 && (*(_QWORD *)(a3 + 72) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v8 = sub_A3B160(a2);
          v9 = sub_BD7B00(v8[1]);
          v10 = sub_A3B160(a3);
          v11 = sub_BD7B00(v10[1]);
          ptr[0] = v24;
          v21[1] = (void *)0x2000000000LL;
          ptr[1] = (void *)0x2000000000LL;
          v21[0] = v22;
          sub_EF6750(v9, v21, a1, 1, 0);
          sub_EF6750(v11, ptr, a1, 1, 0);
          result = sub_21FF190(v21, ptr);
          if ( ptr[0] != v24 )
          {
            v19 = result;
            free(ptr[0]);
            result = v19;
          }
          if ( v21[0] != v22 )
          {
            v20 = result;
            free(v21[0]);
            return v20;
          }
        }
      }
      else if ( v6 && (*(_QWORD *)(a3 + 72) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v12 = sub_A3B270(a2);
        v13 = sub_A3B270(a3);
        sub_EFED50(ptr, v13[1]);
        v14 = ptr[0];
        sub_EFED50(ptr, v12[1]);
        v15 = ptr[0];
        v16 = sub_A92560(a1, (__int64)v14, 0);
        return sub_A92560(a1, (__int64)v15, 0) == v16;
      }
    }
  }
  return result;
}

