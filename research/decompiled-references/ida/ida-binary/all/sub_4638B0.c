__int64 __fastcall sub_4638B0(__int64 a1, int a2, __int64 a3, __int64 **a4)
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
  __int128 v14; // [rsp+A6h] [rbp-32h]
  __int128 v15; // [rsp+B6h] [rbp-22h]
  __int128 v16; // [rsp+B6h] [rbp-22h]
  unsigned __int64 v17; // [rsp+C8h] [rbp-10h]

  v17 = __readfsqword(0x28u);
  if ( a2 == 1 )
  {
    v5 = *a4;
    v6 = a1 + 40;
    switch ( a3 )
    {
      case 0LL:
        v11 = 2165563904LL;
        goto LABEL_9;
      case 1LL:
        v11 = 2165563905LL;
        goto LABEL_9;
      case 2LL:
        v11 = 2165563906LL;
        goto LABEL_9;
      case 3LL:
        v11 = 2165563907LL;
        goto LABEL_9;
      case 4LL:
        v11 = 2165563908LL;
        goto LABEL_9;
      case 5LL:
        v11 = 2165563909LL;
        goto LABEL_9;
      case 6LL:
        v11 = 2165563910LL;
        goto LABEL_9;
      case 7LL:
        v11 = 2165563911LL;
        goto LABEL_9;
      case 8LL:
        v11 = 2165563912LL;
        goto LABEL_9;
      case 9LL:
        v11 = 2165563913LL;
LABEL_9:
        v12 = sub_524FA0(v6, v11, 0);
        *v5 = v12;
        LOWORD(v16) = HIWORD(v12);
        *(_QWORD *)((char *)&v16 + 2) = v13;
        *(__int64 *)((char *)v5 + 6) = v16;
        break;
      case 10LL:
        v7 = sub_524FA0(v6, 2165563914LL, 0);
        *v5 = v7;
        LOWORD(v15) = HIWORD(v7);
        *(_QWORD *)((char *)&v15 + 2) = v8;
        *(__int64 *)((char *)v5 + 6) = v15;
        break;
      case 11LL:
        v9 = sub_524FA0(v6, 2165563915LL, 0);
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
      result = sub_524FF0(a1 + 40, 2165563904LL, *a4, 0);
      break;
    case 1LL:
      result = sub_524FF0(a1 + 40, 2165563905LL, *a4, 0);
      break;
    case 2LL:
      result = sub_524FF0(a1 + 40, 2165563906LL, *a4, 0);
      break;
    case 3LL:
      result = sub_524FF0(a1 + 40, 2165563907LL, *a4, 0);
      break;
    case 4LL:
      result = sub_524FF0(a1 + 40, 2165563908LL, *a4, 0);
      break;
    case 5LL:
      result = sub_524FF0(a1 + 40, 2165563909LL, *a4, 0);
      break;
    case 6LL:
      result = sub_524FF0(a1 + 40, 2165563910LL, *a4, 0);
      break;
    case 7LL:
      result = sub_524FF0(a1 + 40, 2165563911LL, *a4, 0);
      break;
    case 8LL:
      result = sub_524FF0(a1 + 40, 2165563912LL, *a4, 0);
      break;
    case 9LL:
      result = sub_524FF0(a1 + 40, 2165563913LL, *a4, 0);
      break;
    case 10LL:
      result = sub_524FF0(a1 + 40, 2165563914LL, *a4, 0);
      break;
    case 11LL:
      result = sub_524FF0(a1 + 40, 2165563915LL, *a4, 0);
      break;
    default:
      return v17 - __readfsqword(0x28u);
  }
  return result;
}
