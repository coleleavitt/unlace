__int64 __fastcall sub_11F9300(_QWORD *a1, int a2)
{
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  _QWORD *v7; // [rsp+8h] [rbp-10h]
  _QWORD *v8; // [rsp+8h] [rbp-10h]
  _QWORD *v9; // [rsp+8h] [rbp-10h]

  switch ( a2 )
  {
    case 13:
      result = a1[299];
      if ( !result )
      {
        v9 = (_QWORD *)operator new(0x20u);
        sub_112B250(v9, (__int64)"darwin::Dsymutil", (__int64)"dsymutil", (__int64)a1);
        result = (__int64)v9;
        v6 = a1[299];
        *v9 = &off_2C392C8;
        a1[299] = v9;
        if ( v6 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
          return a1[299];
        }
      }
      break;
    case 14:
      result = a1[300];
      if ( !result )
      {
        v8 = (_QWORD *)operator new(0x20u);
        sub_112B250(v8, (__int64)"darwin::VerifyDebug", (__int64)"dwarfdump", (__int64)a1);
        result = (__int64)v8;
        v5 = a1[300];
        *v8 = &off_2C39338;
        a1[300] = v8;
        if ( v5 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
          return a1[300];
        }
      }
      break;
    case 12:
      result = a1[298];
      if ( !result )
      {
        v7 = (_QWORD *)operator new(0x20u);
        sub_112B250(v7, (__int64)"darwin::Lipo", (__int64)"lipo", (__int64)a1);
        result = (__int64)v7;
        v4 = a1[298];
        *v7 = &off_2C39258;
        a1[298] = v7;
        if ( v4 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
          return a1[298];
        }
      }
      break;
    default:
      return sub_112D160(a1, a2);
  }
  return result;
}
