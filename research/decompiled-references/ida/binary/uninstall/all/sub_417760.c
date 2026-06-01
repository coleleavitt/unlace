__int64 __fastcall sub_417760(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v7; // r12
  __int64 v8; // rax
  _DWORD *v9; // rbx
  __int64 v10; // r12
  int v11; // eax
  bool v12; // zf

  if ( a3 > 2 )
  {
    v7 = sub_4A43A0(a2, a4[1], 0, 512);
    result = 1;
    if ( v7 )
    {
      v8 = a3 == 4 ? sub_4701D0(a2, v7, a4[2], a4[3]) : sub_46FE10(a2, v7, (unsigned int)(a3 - 3), a4 + 2, a4[a3 - 1]);
      v9 = (_DWORD *)v8;
      result = 1;
      if ( v9 )
      {
        v10 = sub_4A4160(a2, a4[1], 0, v9, 512);
        v11 = *v9 - 1;
        v12 = *v9 == 1;
        *v9 = v11;
        if ( v11 < 0 || v12 )
          sub_47B120(v9);
        result = 1;
        if ( v10 )
        {
          sub_48AFD0(a2, v10);
          return 0;
        }
      }
    }
  }
  else
  {
    sub_458930(a2, 1, a4, "listVar ?index? ?index...? value");
    return 1;
  }
  return result;
}

