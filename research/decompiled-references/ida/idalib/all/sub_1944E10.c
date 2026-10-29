__int64 __fastcall sub_1944E10(__int64 *a1, unsigned __int16 *a2, __m128 a3, __m128 a4)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r9
  char v11; // al

  if ( !a2 )
    return 0;
  v4 = *a2;
  v5 = (unsigned int)(v4 + 509);
  LOWORD(v5) = (v4 + 509) & 0x1FF;
  switch ( v5 )
  {
    case 0LL:
      result = sub_1946C60();
      break;
    case 1LL:
      result = sub_1961510();
      break;
    case 2LL:
      result = sub_1944C60(a1, (unsigned __int64)a2, a3, a4);
      break;
    case 3LL:
      result = sub_194F150();
      break;
    case 4LL:
      result = sub_18BB980((__int64)a2);
      break;
    case 5LL:
      result = sub_18BB990((__int64)a2);
      break;
    case 6LL:
      result = sub_18BB9A0((__int64)a2);
      break;
    case 7LL:
      result = sub_1962A30();
      break;
    case 8LL:
      v8 = *a1;
      v9 = *((_QWORD *)a2 + 3);
      result = (__int64)a2;
      v10 = *(_QWORD *)(v8 + 544);
      if ( v9 != v10 )
      {
        if ( *(_QWORD *)(v8 + 11280) )
        {
          if ( (unsigned __int8)sub_B8E180(*(_QWORD *)(v8 + 544)) )
          {
            v11 = sub_B8E180(v9);
            v8 = *a1;
            v10 = v9;
            if ( v11 )
              v10 = *(_QWORD *)(v8 + 544);
          }
          else
          {
            v8 = *a1;
            v10 = *(_QWORD *)(*a1 + 544);
          }
        }
        result = sub_18C3820(
                   v8,
                   (*((_BYTE *)a2 + 2) >> 3) & 7,
                   *((_QWORD *)a2 + 1),
                   *((_DWORD *)a2 + 4),
                   *((_DWORD *)a2 + 5),
                   v10);
      }
      break;
    case 9LL:
      result = sub_194BFB0();
      break;
    case 10LL:
      result = sub_195F190();
      break;
    case 11LL:
      result = sub_1948120();
      break;
    case 12LL:
      result = sub_1959C20();
      break;
    case 13LL:
      result = sub_195A000();
      break;
    case 14LL:
      result = sub_195A120();
      break;
    case 15LL:
      result = sub_18C7190(a1, (__int64)a2);
      break;
    case 16LL:
      result = sub_195F610();
      break;
    case 17LL:
      result = sub_195A190();
      break;
    case 18LL:
      result = sub_19603D0();
      break;
    case 19LL:
      result = sub_195A1E0();
      break;
    case 20LL:
      result = sub_195A230();
      break;
    case 21LL:
      result = sub_194D2E0();
      break;
    case 22LL:
      result = sub_18C71C0((__int64)a1, (__int64)a2);
      break;
    case 23LL:
      result = sub_18BB9B0((__int64)a2);
      break;
    case 24LL:
      result = sub_195A650();
      break;
    case 25LL:
      result = sub_195A870();
      break;
    case 26LL:
      result = sub_18BB7F0(*a1, a2);
      break;
    case 27LL:
      result = sub_18BB9C0((__int64)a2);
      break;
    case 28LL:
      result = sub_18BB9D0((__int64)a2);
      break;
    case 29LL:
      result = sub_195A8E0();
      break;
    case 30LL:
      result = sub_19605E0();
      break;
    case 31LL:
      result = sub_195AA90();
      break;
    case 32LL:
      result = sub_195AB90();
      break;
    case 33LL:
      result = sub_195AC90();
      break;
    case 34LL:
      result = sub_1948180();
      break;
    case 35LL:
      result = sub_195ACA0();
      break;
    case 36LL:
      result = sub_195B0A0();
      break;
    case 37LL:
      result = sub_18BB9E0((__int64)a2);
      break;
    case 38LL:
      result = sub_18BB9F0((__int64)a2);
      break;
    case 39LL:
      result = sub_195F6B0();
      break;
    case 40LL:
      result = sub_195B0F0();
      break;
    case 41LL:
      result = sub_195B4B0();
      break;
    case 42LL:
      sub_2E9A94();
    case 43LL:
      result = sub_195B640();
      break;
    case 44LL:
      result = sub_195BE10();
      break;
    case 45LL:
      result = sub_195BEA0();
      break;
    case 46LL:
      result = sub_195BEC0();
      break;
    case 47LL:
      result = sub_195BF40();
      break;
    case 48LL:
    case 95LL:
    case 114LL:
      result = (__int64)a2;
      break;
    case 49LL:
      result = sub_18BBA00((__int64)a2);
      break;
    case 50LL:
      result = sub_195F750();
      break;
    case 51LL:
      result = sub_1947BF0();
      break;
    case 52LL:
      result = sub_18BBA10((__int64)a2);
      break;
    case 53LL:
      result = sub_195C1C0();
      break;
    case 54LL:
      result = sub_195C1D0();
      break;
    case 55LL:
      result = sub_18BBA20((__int64)a2);
      break;
    case 56LL:
      result = sub_18BBA30((__int64)a2);
      break;
    case 57LL:
      result = sub_195C500();
      break;
    case 58LL:
      result = sub_195C510();
      break;
    case 59LL:
      result = sub_18BBA40((__int64)a2);
      break;
    case 60LL:
      result = sub_18BBA50((__int64)a2);
      break;
    case 61LL:
      result = sub_195C520();
      break;
    case 62LL:
      result = sub_195C630();
      break;
    case 63LL:
      result = sub_18BBA60((__int64)a2);
      break;
    case 64LL:
      sub_2E9A94();
    case 65LL:
      result = sub_195C6C0();
      break;
    case 66LL:
      result = sub_194CDA0();
      break;
    case 67LL:
      result = sub_195F000();
      break;
    case 68LL:
      result = sub_194D2F0();
      break;
    case 69LL:
      result = sub_195F060();
      break;
    case 70LL:
      result = sub_195F0B0();
      break;
    case 71LL:
      result = sub_195CE10();
      break;
    case 72LL:
      result = sub_194BCE0();
      break;
    case 73LL:
      result = sub_195CE70();
      break;
    case 74LL:
      result = sub_195CEF0();
      break;
    case 75LL:
      result = sub_18BBA70((__int64)a2);
      break;
    case 76LL:
      result = sub_195CF80();
      break;
    case 77LL:
      result = sub_195CFA0();
      break;
    case 78LL:
      result = sub_195D140();
      break;
    case 79LL:
      result = sub_195D150();
      break;
    case 80LL:
      result = sub_195D160();
      break;
    case 81LL:
      result = sub_195D170();
      break;
    case 82LL:
      result = sub_195D180();
      break;
    case 83LL:
      result = sub_195D190();
      break;
    case 84LL:
      result = sub_195D260();
      break;
    case 85LL:
      result = sub_195D2C0();
      break;
    case 86LL:
      result = sub_1960A00();
      break;
    case 87LL:
      result = sub_1960B80();
      break;
    case 88LL:
      result = sub_1960BA0();
      break;
    case 89LL:
      result = sub_1960B90();
      break;
    case 90LL:
      result = sub_19610A0();
      break;
    case 91LL:
      result = sub_195D320();
      break;
    case 92LL:
      result = sub_195F840();
      break;
    case 93LL:
      result = sub_195D3E0();
      break;
    case 94LL:
      result = sub_195D550();
      break;
    case 96LL:
      result = sub_195D5B0();
      break;
    case 97LL:
      result = sub_19481D0();
      break;
    case 98LL:
      result = sub_195D5C0();
      break;
    case 99LL:
      result = sub_195D7A0();
      break;
    case 100LL:
      result = sub_195F990();
      break;
    case 101LL:
      result = sub_18BBA80((__int64)a2);
      break;
    case 102LL:
      result = sub_195DB50();
      break;
    case 103LL:
      result = sub_19611B0();
      break;
    case 104LL:
      result = sub_1947CB0();
      break;
    case 105LL:
      result = sub_195DBD0();
      break;
    case 106LL:
      result = sub_195DDD0();
      break;
    case 107LL:
      result = sub_195E280();
      break;
    case 108LL:
      result = sub_1910C00((__int64)a1, (unsigned __int64)a2);
      break;
    case 109LL:
      result = sub_195E2F0();
      break;
    case 110LL:
      result = sub_195FD80();
      break;
    case 111LL:
      result = sub_195FA60();
      break;
    case 112LL:
      result = sub_18BBA90((__int64)a2);
      break;
    case 113LL:
      result = sub_195E480();
      break;
    case 115LL:
      result = sub_19600A0();
      break;
    case 116LL:
      result = sub_1960230();
      break;
    case 117LL:
      result = sub_195FCB0();
      break;
    case 118LL:
      result = sub_195E4E0();
      break;
    case 119LL:
      result = sub_195E540();
      break;
    case 120LL:
      result = sub_195E5E0();
      break;
    case 121LL:
      result = sub_195E680();
      break;
    case 122LL:
      sub_2E9A94();
    case 123LL:
      sub_2E9A94();
    case 124LL:
      result = sub_18CCAA0((__int64)a1, (__int64)a2);
      break;
    case 125LL:
      result = sub_195E840();
      break;
    case 126LL:
      result = sub_195E8D0();
      break;
    default:
      result = (__int64)a2;
      break;
  }
  return result;
}
