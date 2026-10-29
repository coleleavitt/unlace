__int64 __fastcall sub_6CE3E0(__int64 a1, unsigned __int8 a2, char a3, char a4)
{
  __int64 result; // rax
  __int64 v6; // rax
  __int64 (*v7)(void); // rax
  __int64 *v8; // rdi
  __int64 (*v9)(); // rcx

  if ( a3 )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 17272) + 24LL))(*(_QWORD *)(a1 + 17272), a2);
  if ( a4 )
  {
LABEL_5:
    v6 = **(_QWORD **)(a1 + 17288);
LABEL_6:
    v7 = *(__int64 (**)(void))(v6 + 752);
    if ( v7 == sub_5F7BD0 )
      return 0;
    else
      return v7();
  }
  else
  {
    switch ( (*(_BYTE *)(*(_QWORD *)(a1 + 2160) + 194LL) >> 3) & 7 )
    {
      case 1:
        return 0;
      case 2:
        v8 = *(__int64 **)(a1 + 17288);
        v6 = *v8;
        v9 = *(__int64 (**)())(*v8 + 584);
        if ( v9 == sub_6A6820 )
          goto LABEL_6;
        if ( ((unsigned __int8 (__fastcall *)(__int64 *, char *, __int64))v9)(v8, "sse2", 4) != 1 || a2 )
          goto LABEL_5;
        result = 2;
        break;
      case 3:
        if ( a2 )
          goto LABEL_5;
        return 1;
      case 4:
        if ( a2 )
          goto LABEL_5;
        return 4;
      case 5:
        if ( a2 )
          goto LABEL_5;
        return 8;
      case 6:
        if ( a2 )
          goto LABEL_5;
        return 21;
      default:
        goto LABEL_5;
    }
  }
  return result;
}

