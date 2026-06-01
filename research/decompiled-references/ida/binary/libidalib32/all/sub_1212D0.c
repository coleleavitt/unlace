__int64 __fastcall sub_1212D0(int a1, __int64 a2)
{
  int *first_seg; // rdx
  int v4; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  switch ( a1 )
  {
    case 2:
      v4 = 0;
      goto LABEL_7;
    case 3:
      v4 = getinf();
LABEL_7:
      first_seg = &v4;
LABEL_8:
      (*(void (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)a2 + 8LL))(a2, 5, first_seg);
      return 1;
    case 1:
      first_seg = (int *)get_first_seg();
      if ( first_seg )
        goto LABEL_8;
      break;
  }
  return 1;
}

