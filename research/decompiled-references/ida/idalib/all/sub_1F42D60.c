__int64 __fastcall sub_1F42D60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 v6; // al
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rax

  v6 = *(_BYTE *)(a2 + 8) & 0x7F;
  if ( v6 != 24 )
  {
    v9 = v6;
    v10 = a2;
    v11 = (unsigned int)v6 - 59;
    if ( (unsigned int)v11 > 2 )
    {
      v9 = (unsigned int)v6 - 58;
      if ( (unsigned int)v9 <= 3 )
      {
        v13 = a2 - 64;
        if ( a2 != 64 )
        {
LABEL_13:
          v12 = (__int64)sub_B7E870(v13, a2, v9, v11, a5, a6);
          if ( v12 )
            return v12 + 64;
          return 0;
        }
      }
    }
    else
    {
      a2 -= 64;
      if ( a2 )
      {
        v12 = sub_1F42A70(a1, a2);
        if ( v12 )
          return v12 + 64;
        return 0;
      }
    }
    if ( v6 != 62 )
    {
      if ( v6 == 20 )
      {
        if ( v10 != 48 )
        {
          v14 = *(_QWORD *)(v10 + 72);
          if ( !v14 )
          {
            sub_A794E0((__int64 *)(*(_QWORD *)(v10 + 48) + 88LL), *(_QWORD *)(v10 + 48), v9, v11, a5, a6);
            v14 = *(_QWORD *)(v10 + 72);
          }
          v15 = (__int64 *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v15 )
          {
            v16 = *v15;
            if ( v16 )
              return v16 + 48;
          }
        }
      }
      else if ( !v6 && v10 != 40 )
      {
        return sub_B91570(v10, a2, v9, v11, a5, a6);
      }
      return 0;
    }
    v13 = v10 - 64;
    if ( v10 == 64 )
      return 0;
    goto LABEL_13;
  }
  if ( a2 == 48 )
    return 0;
  v7 = *(_QWORD *)(a2 + 40);
  result = v7 + 48;
  if ( !v7 )
    return 0;
  return result;
}
