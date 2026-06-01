__int64 __fastcall sub_3C0670(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  const char *v4; // rsi
  const char *v5; // rdx
  const char *v6; // rbp
  __int64 v7; // rax
  unsigned int v8; // [rsp+Ch] [rbp-6Ch]
  unsigned __int64 v9; // [rsp+10h] [rbp-68h] BYREF
  __int64 v10; // [rsp+18h] [rbp-60h] BYREF
  const char *v11; // [rsp+20h] [rbp-58h] BYREF
  __int128 v12; // [rsp+28h] [rbp-50h]
  const char *v13; // [rsp+40h] [rbp-38h] BYREF
  __int128 v14; // [rsp+48h] [rbp-30h]
  unsigned __int64 v15; // [rsp+58h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  result = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *))(QT::QCoreApplication::self[2] + 40LL))(
             QT::QCoreApplication::self + 2,
             a1,
             a2);
  if ( (int)result <= 3 )
  {
    v4 = (const char *)&v9;
    v12 = 0;
    v11 = nullptr;
    if ( (unsigned __int8)sub_3BA410(a2, &v9, &v10, (__int64 *)&v11) )
    {
      v5 = "member";
      if ( *(_BYTE *)(a2[26] + 31) == 12 )
        v5 = "argument";
      v13 = nullptr;
      v14 = 0;
      if ( v10 == -1 && (unsigned __int64)v12 > 1 )
      {
        v4 = "Delete %s \"%s\"";
        sub_169A50((__int64 *)&v13, (__int64)"Delete %s \"%s\"", v5, v11);
      }
      else
      {
        v4 = "Delete selected %ss";
        sub_169A50((__int64 *)&v13, (__int64)"Delete selected %ss", v5);
      }
      v6 = &s1;
      if ( (_QWORD)v14 )
        v6 = v13;
      v7 = sub_534430(a2[9]);
      if ( v7 )
      {
        v4 = (_BYTE *)(&dword_0 + 1);
        sub_537630(v7, 1, v6);
      }
      if ( v13 )
      {
        *(_QWORD *)&v14 = 0;
        qfree(v13, v4);
      }
      result = 3;
    }
    else
    {
      result = 7;
    }
    if ( v11 )
    {
      v8 = result;
      *(_QWORD *)&v12 = 0;
      qfree(v11, v4);
      return v8;
    }
  }
  return result;
}
