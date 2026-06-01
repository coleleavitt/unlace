unsigned __int64 __fastcall sub_9E2440(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned __int8 v4; // al
  __int64 v5; // rdx
  unsigned __int64 result; // rax
  unsigned __int8 **v7; // rax
  unsigned __int8 **v8; // rax
  __int64 *v9; // rbp
  __int64 v10; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v11; // [rsp+10h] [rbp-38h] BYREF
  char v12; // [rsp+18h] [rbp-30h]

  v10 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
  v4 = a3[7] & 0x7F;
  if ( v4 == 41 )
  {
    if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x10) != 0 )
    {
      v8 = (unsigned __int8 **)sub_A2E0C0(a1, &v10, 2211, 0);
      if ( v8 )
        sub_8356A0(v8, (__int64)a3, 0xAu);
      v9 = (__int64 *)sub_A2DD70(a1, a3[6], 105);
      result = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)a3 + 16LL))(a3);
      if ( v9 )
      {
        v11 = result;
        v12 = 1;
        return sub_839C90(v9, (__int64 *)&v11);
      }
    }
    else
    {
      return sub_A2E0C0(a1, &v10, 110, 0);
    }
  }
  else
  {
    v5 = *((_QWORD *)a3 + 6);
    if ( (v5 & 1) != 0 || (byte_8[v5 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
    {
      result = (unsigned int)v4 - 38;
      if ( (unsigned int)result <= 6 )
      {
        if ( sub_77BD20(a3, &v11) )
        {
          v11 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
          v7 = (unsigned __int8 **)sub_A2E0C0(a1, &v11, 2299, 1);
          if ( v7 )
            sub_8356A0(v7, (__int64)a3, 0xAu);
          return sub_A2DD70(a1, a3[6], 105);
        }
        else
        {
          return sub_9D4270(a1, a2, a3);
        }
      }
    }
    else
    {
      return sub_9D4530(a1, a2, (__int64)a3);
    }
  }
  return result;
}

