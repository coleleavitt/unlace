unsigned __int64 __fastcall sub_13AC690(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v4; // rdx
  unsigned __int64 result; // rax
  void *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  _QWORD *v9; // rdx

  if ( a3 )
  {
    switch ( a2 )
    {
      case 1LL:
        (*(void (__fastcall **)(_QWORD *, __int64, __int64, _QWORD))(*a1 + 24LL))(a1, 6, 1, 0);
        goto LABEL_4;
      case 2LL:
        (*(void (__fastcall **)(_QWORD *, __int64, __int64, _QWORD))(*a1 + 24LL))(a1, 4, 1, 0);
        goto LABEL_21;
      case 3LL:
        (*(void (__fastcall **)(_QWORD *, __int64, __int64, _QWORD))(*a1 + 24LL))(a1, 5, 1, 0);
        goto LABEL_18;
      case 4LL:
        (*(void (__fastcall **)(_QWORD *, __int64, __int64, _QWORD))(*a1 + 24LL))(a1, 1, 1, 0);
        goto LABEL_15;
      case 5LL:
        (*(void (__fastcall **)(_QWORD *, __int64, __int64, _QWORD))(*a1 + 24LL))(a1, 1, 1, 0);
        goto LABEL_12;
      default:
        break;
    }
LABEL_6:
    if ( a3 )
      return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1);
  }
  else
  {
    switch ( a2 )
    {
      case 1LL:
LABEL_4:
        v4 = a1[4];
        result = a1[3] - v4;
        if ( result > 5 )
        {
          *(_DWORD *)v4 = 1702129518;
          *(_WORD *)(v4 + 4) = 8250;
          a1[4] += 6LL;
        }
        else
        {
          result = sub_227BF10(a1, "note: ", 6);
        }
        goto LABEL_6;
      case 2LL:
LABEL_21:
        v9 = (_QWORD *)a1[4];
        if ( a1[3] - (_QWORD)v9 > 7u )
        {
          result = 0x203A6B72616D6572LL;
          *v9 = 0x203A6B72616D6572LL;
          a1[4] += 8LL;
        }
        else
        {
          result = sub_227BF10(a1, "remark: ", 8);
        }
        goto LABEL_6;
      case 3LL:
LABEL_18:
        v8 = a1[4];
        if ( (unsigned __int64)(a1[3] - v8) > 8 )
        {
          result = 0x3A676E696E726177LL;
          *(_BYTE *)(v8 + 8) = 32;
          *(_QWORD *)v8 = 0x3A676E696E726177LL;
          a1[4] += 9LL;
        }
        else
        {
          result = sub_227BF10(a1, "warning: ", 9);
        }
        goto LABEL_6;
      case 4LL:
LABEL_15:
        v7 = a1[4];
        if ( (unsigned __int64)(a1[3] - v7) > 6 )
        {
          result = 14962;
          *(_DWORD *)v7 = 1869771365;
          *(_WORD *)(v7 + 4) = 14962;
          *(_BYTE *)(v7 + 6) = 32;
          a1[4] += 7LL;
        }
        else
        {
          result = sub_227BF10(a1, "error: ", 7);
        }
        goto LABEL_6;
      case 5LL:
LABEL_12:
        v6 = (void *)a1[4];
        if ( a1[3] - (_QWORD)v6 > 0xCu )
        {
          result = 0x7265206C61746166LL;
          qmemcpy(v6, "fatal error: ", 13);
          a1[4] += 13LL;
        }
        else
        {
          result = sub_227BF10(a1, "fatal error: ", 13);
        }
        goto LABEL_6;
      default:
        return result;
    }
  }
  return result;
}
