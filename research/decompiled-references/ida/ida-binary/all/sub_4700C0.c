__int64 __fastcall sub_4700C0(__int64 a1, int a2, __int64 a3, __int64 **a4)
{
  __int64 result; // rax
  __int64 *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int128 v14; // [rsp+46h] [rbp-32h]
  __int128 v15; // [rsp+56h] [rbp-22h]
  __int128 v16; // [rsp+56h] [rbp-22h]
  unsigned __int64 v17; // [rsp+68h] [rbp-10h]

  v17 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v5 = *a4;
      v6 = a1 + 40;
      switch ( a3 )
      {
        case 0LL:
          v11 = 2165563908LL;
          goto LABEL_16;
        case 1LL:
          v11 = 2165563909LL;
          goto LABEL_16;
        case 2LL:
          v11 = 2165563910LL;
          goto LABEL_16;
        case 3LL:
          v11 = 2165563911LL;
LABEL_16:
          v12 = sub_524FA0(v6, v11, 0);
          *v5 = v12;
          LOWORD(v16) = HIWORD(v12);
          *(_QWORD *)((char *)&v16 + 2) = v13;
          *(__int64 *)((char *)v5 + 6) = v16;
          break;
        case 4LL:
          v7 = sub_524FA0(v6, 2165563912LL, 0);
          *v5 = v7;
          LOWORD(v15) = HIWORD(v7);
          *(_QWORD *)((char *)&v15 + 2) = v8;
          *(__int64 *)((char *)v5 + 6) = v15;
          break;
        case 5LL:
          v9 = sub_524FA0(v6, 2165563913LL, 0);
          *v5 = v9;
          LOWORD(v14) = HIWORD(v9);
          *(_QWORD *)((char *)&v14 + 2) = v10;
          *(__int64 *)((char *)v5 + 6) = v14;
          break;
        default:
          return v17 - __readfsqword(0x28u);
      }
      return v17 - __readfsqword(0x28u);
    }
    if ( a2 != 2 )
      return v17 - __readfsqword(0x28u);
    switch ( a3 )
    {
      case 0LL:
        result = sub_524FF0(a1 + 40, 2165563908LL, *a4, 0);
        break;
      case 1LL:
        result = sub_524FF0(a1 + 40, 2165563909LL, *a4, 0);
        break;
      case 2LL:
        result = sub_524FF0(a1 + 40, 2165563910LL, *a4, 0);
        break;
      case 3LL:
        result = sub_524FF0(a1 + 40, 2165563911LL, *a4, 0);
        break;
      case 4LL:
        result = sub_524FF0(a1 + 40, 2165563912LL, *a4, 0);
        break;
      case 5LL:
        result = sub_524FF0(a1 + 40, 2165563913LL, *a4, 0);
        break;
      default:
        return v17 - __readfsqword(0x28u);
    }
  }
  else if ( (_DWORD)a3 == 1 )
  {
    return sub_3A1CC0(a1);
  }
  else if ( (_DWORD)a3 == 2 )
  {
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 776LL))(a1);
  }
  else
  {
    if ( (_DWORD)a3 )
      return v17 - __readfsqword(0x28u);
    return sub_3A1CA0(a1, (_QWORD *)*a4[1], (_QWORD *)*a4[2]);
  }
  return result;
}
