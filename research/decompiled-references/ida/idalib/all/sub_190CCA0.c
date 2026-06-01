unsigned __int64 __fastcall sub_190CCA0(__int64 *a1, unsigned __int16 *a2, double a3, __m128 a4)
{
  unsigned __int16 *v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int16 **v16; // rax
  unsigned __int16 **v17; // rdx

  if ( !a2 )
    return 0;
  v5 = a2;
  while ( 2 )
  {
    v6 = *v5;
    v7 = (unsigned int)(v6 + 509);
    LOWORD(v7) = (v6 + 509) & 0x1FF;
    switch ( v7 )
    {
      case 0LL:
        return sub_1988550(a1, v5);
      case 1LL:
        return sub_1997CA0(a1, v5);
      case 2LL:
        return sub_190CAD0(a1, (unsigned __int64)v5, a3, a4);
      case 3LL:
        return sub_1994D80(a1, v5);
      case 4LL:
        return sub_18BB980((__int64)v5);
      case 5LL:
        return sub_18BB990((__int64)v5);
      case 6LL:
        return sub_18BB9A0((__int64)v5);
      case 7LL:
        return sub_19992B0(a1, v5);
      case 8LL:
        return sub_18BDA70(a1, (__int64)v5);
      case 9LL:
        return sub_198DF60(a1, v5);
      case 10LL:
        return sub_197BCC0(a1, v5);
      case 11LL:
        return sub_198A800(a1, v5);
      case 12LL:
        return sub_1995BF0(a1, v5);
      case 13LL:
        return sub_1982C30(a1, v5);
      case 14LL:
        return sub_1982D80(a1, v5);
      case 15LL:
        return sub_18C6F40(a1, (__int64)v5);
      case 16LL:
        return sub_197BD90(a1, v5);
      case 17LL:
        return sub_1982DF0(a1, v5);
      case 18LL:
        return sub_1982E40(a1, v5);
      case 19LL:
        return sub_1983050(a1, v5);
      case 20LL:
        return sub_19919F0(a1, v5);
      case 21LL:
        return sub_1991470(a1, v5);
      case 22LL:
        return sub_18BBBA0((__int64)v5);
      case 23LL:
        return sub_18BB9B0((__int64)v5);
      case 24LL:
        return sub_198A950(a1, v5);
      case 25LL:
        return sub_19830A0(a1, v5);
      case 26LL:
        return sub_18BB7F0(*a1, v5);
      case 27LL:
        return sub_18BB9C0((__int64)v5);
      case 28LL:
        return sub_18BB9D0((__int64)v5);
      case 29LL:
        return sub_1983120(a1, v5);
      case 30LL:
        return sub_198ABD0(a1, v5);
      case 31LL:
        return sub_19832D0(a1, v5);
      case 32LL:
        return sub_19833D0(a1, v5);
      case 33LL:
        return sub_19834E0(a1, v5);
      case 34LL:
        return sub_198A870(a1, v5);
      case 35LL:
        return sub_19834F0(a1, v5);
      case 36LL:
        return sub_1983980(a1, v5);
      case 37LL:
        return sub_18BB9E0((__int64)v5);
      case 38LL:
        return sub_18BB9F0((__int64)v5);
      case 39LL:
        return sub_197BE30(a1, v5);
      case 40LL:
        return sub_198B050(a1, v5);
      case 41LL:
        return sub_19839E0(a1, v5);
      case 42LL:
        sub_2E9A94();
      case 43LL:
        return sub_1991E10(a1, v5);
      case 44LL:
        return sub_1983B70(a1, v5);
      case 45LL:
        return sub_1983C20(a1, v5);
      case 46LL:
        return sub_1983C40(a1, v5);
      case 47LL:
        return sub_19926C0(a1, v5);
      case 49LL:
        return sub_18BBA00((__int64)v5);
      case 50LL:
        return sub_197BEE0(a1, v5);
      case 51LL:
        return sub_1988A00(a1, v5);
      case 52LL:
        return sub_18BBA10((__int64)v5);
      case 53LL:
        return sub_1983CE0(a1, v5);
      case 54LL:
        return sub_198B510(a1, v5);
      case 55LL:
        return sub_18BBA20((__int64)v5);
      case 56LL:
        return sub_18BBA30((__int64)v5);
      case 57LL:
        return sub_1983CF0(a1, v5);
      case 58LL:
        if ( (*((_BYTE *)v5 + 5) & 1) == 0 )
          return sub_1983D00(a1, v5);
        v10 = a1[6];
        v11 = *(_QWORD *)a1[5];
        v12 = (v10 - v11) >> 5;
        if ( v12 > 0 )
        {
          if ( v5 != (unsigned __int16 *)(*(_QWORD *)(v10 - 8) & 0xFFFFFFFFFFFFFFF8LL) )
          {
            if ( v5 == (unsigned __int16 *)(*(_QWORD *)(v10 - 16) & 0xFFFFFFFFFFFFFFF8LL) )
            {
              v10 -= 8;
            }
            else if ( v5 == (unsigned __int16 *)(*(_QWORD *)(v10 - 24) & 0xFFFFFFFFFFFFFFF8LL) )
            {
              v10 -= 16;
            }
            else
            {
              v13 = v10 - 32 * v12;
              if ( v5 == (unsigned __int16 *)(*(_QWORD *)(v10 - 32) & 0xFFFFFFFFFFFFFFF8LL) )
              {
                v10 -= 24;
              }
              else
              {
                while ( 1 )
                {
                  if ( v10 - 32 == v13 )
                  {
                    v10 = v13;
                    goto LABEL_142;
                  }
                  if ( v5 == (unsigned __int16 *)(*(_QWORD *)(v10 - 40) & 0xFFFFFFFFFFFFFFF8LL) )
                    break;
                  if ( v5 == (unsigned __int16 *)(*(_QWORD *)(v10 - 48) & 0xFFFFFFFFFFFFFFF8LL) )
                  {
                    v10 -= 40;
                    goto LABEL_154;
                  }
                  if ( v5 == (unsigned __int16 *)(*(_QWORD *)(v10 - 56) & 0xFFFFFFFFFFFFFFF8LL) )
                  {
                    v10 -= 48;
                    goto LABEL_154;
                  }
                  if ( (unsigned __int16 *)(*(_QWORD *)(v10 - 64) & 0xFFFFFFFFFFFFFFF8LL) == v5 )
                  {
                    v10 -= 56;
                    goto LABEL_154;
                  }
                  v10 -= 32;
                }
                v10 -= 32;
              }
            }
          }
          goto LABEL_154;
        }
LABEL_142:
        v14 = (v10 - v11) >> 3;
        switch ( v14 )
        {
          case 2LL:
            goto LABEL_162;
          case 3LL:
            if ( v5 == (unsigned __int16 *)(*(_QWORD *)(v10 - 8) & 0xFFFFFFFFFFFFFFF8LL) )
              goto LABEL_154;
            v10 -= 8;
LABEL_162:
            if ( v5 == (unsigned __int16 *)(*(_QWORD *)(v10 - 8) & 0xFFFFFFFFFFFFFFF8LL) )
              goto LABEL_154;
            v10 -= 8;
            break;
          case 1LL:
            break;
          default:
            goto LABEL_145;
        }
        if ( v5 != (unsigned __int16 *)(*(_QWORD *)(v10 - 8) & 0xFFFFFFFFFFFFFFF8LL) )
          goto LABEL_145;
LABEL_154:
        if ( v11 != v10 )
        {
          *(_QWORD *)(v10 - 8) |= 4uLL;
          goto LABEL_151;
        }
LABEL_145:
        v15 = *a1;
        if ( !*(_BYTE *)(*a1 + 9772) )
        {
          if ( !sub_2236570(v15 + 9752, v5) )
            goto LABEL_151;
LABEL_167:
          *(_QWORD *)(a1[6] - 8) |= 4uLL;
          goto LABEL_151;
        }
        v16 = *(unsigned __int16 ***)(v15 + 9752);
        v17 = &v16[*(unsigned int *)(v15 + 9764)];
        if ( v16 == v17 )
          goto LABEL_151;
        if ( v5 == *v16 )
          goto LABEL_167;
        while ( v17 != ++v16 )
        {
          if ( *v16 == v5 )
            goto LABEL_167;
        }
LABEL_151:
        v5 = *((unsigned __int16 **)v5 + 2);
        if ( v5 )
          continue;
        return 0;
      case 59LL:
        return sub_18BBA40((__int64)v5);
      case 60LL:
        return sub_18BBA50((__int64)v5);
      case 61LL:
        return sub_1983D10(a1, v5);
      case 62LL:
        return sub_1983E20(a1, v5);
      case 63LL:
        return sub_18BBA60((__int64)v5);
      case 64LL:
        sub_2E9A94();
      case 65LL:
        return sub_1983EB0(a1, v5);
      case 66LL:
        return sub_1990F30(a1, v5);
      case 67LL:
        return sub_1991480(a1, v5);
      case 68LL:
        sub_18C0A20(a1[4], (__int64)v5);
        return (unsigned __int64)v5;
      case 69LL:
        return sub_197BBA0(a1, v5);
      case 70LL:
        return sub_197BC00(a1, v5);
      case 71LL:
        return sub_198B840(a1, v5);
      case 72LL:
        return sub_198F080(a1, v5);
      case 73LL:
        return sub_198B8B0(a1, v5);
      case 74LL:
        return sub_1984650(a1, v5);
      case 75LL:
        return sub_18BBA70((__int64)v5);
      case 76LL:
        return sub_1984700(a1, v5);
      case 77LL:
        return sub_198B950(a1, v5);
      case 78LL:
        return sub_198BB20(a1, v5);
      case 79LL:
        return sub_198BB30(a1, v5);
      case 80LL:
        return sub_198BB40(a1, v5);
      case 81LL:
        return sub_198BB50(a1, v5);
      case 82LL:
        return sub_198BB60(a1, v5);
      case 83LL:
        return sub_1990250(a1, v5);
      case 84LL:
        return sub_198BB70(a1, v5);
      case 85LL:
        return sub_198BBF0(a1, v5);
      case 86LL:
        return sub_1984720(a1, v5);
      case 88LL:
        v9 = sub_BFB900(*((_QWORD *)v5 + 4));
        sub_18C0A20(a1[4], v9);
        return sub_19914F0(a1, v5);
      case 89LL:
        return sub_19848D0(a1, v5);
      case 90LL:
        return sub_19848E0(a1, v5);
      case 91LL:
        return sub_198BC50(a1, v5);
      case 92LL:
        return sub_1990350(a1, v5);
      case 93LL:
        return sub_198BD30(a1, v5);
      case 94LL:
        return sub_1984A20(a1, v5);
      case 95LL:
        return sub_1988AC0(a1, v5);
      case 96LL:
        return sub_1984A90(a1, v5);
      case 97LL:
        return sub_198A8D0(a1, v5);
      case 98LL:
        return sub_1984AA0(a1, v5);
      case 99LL:
        return sub_1992E90(a1, v5);
      case 100LL:
        return sub_1988CA0(a1, v5);
      case 101LL:
        return sub_18BBA80((__int64)v5);
      case 102LL:
        return sub_1984DB0(a1, v5);
      case 103LL:
        return sub_198FD10(a1, v5);
      case 104LL:
        return sub_1988B80(a1, v5);
      case 105LL:
        return sub_1984E30(a1, v5);
      case 106LL:
        return sub_1992940(a1, v5);
      case 107LL:
        return sub_1985070(a1, v5);
      case 108LL:
        return sub_1910960(a1, v5);
      case 109LL:
        return sub_1985190(a1, v5);
      case 110LL:
        return sub_1988D70(a1, v5);
      case 111LL:
        return sub_19904F0(a1, v5);
      case 112LL:
        return sub_18BBA90((__int64)v5);
      case 113LL:
        return sub_1985350(a1, v5);
      case 114LL:
        return sub_199E8A0(a1, v5);
      case 115LL:
        return sub_19853B0(a1, v5);
      case 116LL:
        return sub_1985580(a1, v5);
      case 117LL:
        return sub_197BFD0(a1, v5);
      case 118LL:
        return sub_19890F0(a1, v5);
      case 119LL:
        return sub_198BEE0(a1, v5);
      case 120LL:
        return sub_1985720(a1, v5);
      case 121LL:
        return sub_19857D0(a1, v5);
      case 122LL:
        sub_2E9A94();
      case 123LL:
        sub_2E9A94();
      case 124LL:
        return sub_18CC970((__int64)a1, (__int64)v5);
      case 125LL:
        return sub_19859F0(a1, v5);
      case 126LL:
        return sub_1985AA0(a1, v5);
      default:
        return (unsigned __int64)v5;
    }
  }
}
