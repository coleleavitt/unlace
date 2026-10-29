__int64 __fastcall sub_4339F0(const char *a1, _QWORD *a2, unsigned int a3)
{
  int v4; // eax
  __int64 *v6; // rax
  __int64 *v7; // rdx
  __int64 result; // rax
  unsigned __int8 v9; // [rsp+Fh] [rbp-29h]
  __int64 v10; // [rsp+10h] [rbp-28h] BYREF
  __int128 v11; // [rsp+18h] [rbp-20h]
  unsigned __int64 v12; // [rsp+28h] [rbp-10h]

  v12 = __readfsqword(0x28u);
  v4 = *((_DWORD *)a2 + 2) - 63;
  switch ( v4 )
  {
    case 0:
    case 2:
    case 3:
      if ( a3 )
      {
        v6 = (__int64 *)a2[25];
        v7 = &v10;
        v10 = 0;
        v11 = 0;
        if ( v6 )
          v7 = v6;
        result = (*(__int64 (__fastcall **)(_QWORD, const char *, __int64 *, _QWORD))(*(_QWORD *)*a2 + 1192LL))(
                   *a2,
                   a1,
                   v7,
                   a3);
        if ( v10 )
        {
          v9 = result;
          *(_QWORD *)&v11 = 0;
          qfree(v10, a1);
          result = v9;
        }
      }
      else
      {
        result = 1;
      }
      break;
    case 6:
      result = 1;
      if ( a3 )
        result = sub_43D7A0(a2[5], a1, a2 + 6, a3);
      break;
    case 7:
      result = 1;
      if ( a3 )
        result = sub_451950(a2[5], a1, a2 + 6, a3);
      break;
    case 9:
      result = 1;
      if ( a3 )
        result = sub_44E800(a2[5], a1, a2 + 6, a3);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
