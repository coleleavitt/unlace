__int64 __fastcall sub_121860(int a1, __int64 a2)
{
  _QWORD *first_seg; // rdx
  _QWORD v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v4[1] = __readfsqword(0x28u);
  switch ( a1 )
  {
    case 2:
      v4[0] = 0;
      goto LABEL_7;
    case 3:
      v4[0] = getinf();
LABEL_7:
      first_seg = v4;
LABEL_8:
      (*(void (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)a2 + 8LL))(a2, 5, first_seg);
      return 1;
    case 1:
      first_seg = (_QWORD *)get_first_seg();
      if ( first_seg )
        goto LABEL_8;
      break;
  }
  return 1;
}

