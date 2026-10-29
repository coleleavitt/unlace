__int64 __fastcall sub_6A66A0(_QWORD *a1, int a2, unsigned int a3, int a4)
{
  unsigned int v4; // eax
  unsigned int v5; // r13d
  unsigned int v6; // edx
  unsigned int v8; // ebx
  __int64 reg_name; // rdx
  __int64 result; // rax
  __int64 v11; // rdx

  v4 = -1;
  v5 = (unsigned __int16)a3;
  v6 = HIWORD(a3);
  if ( a2 == 4 )
    v4 = v6;
  v8 = v4;
  reg_name = get_reg_name(0, v5, a4, v4);
  result = 0;
  if ( reg_name <= 0 )
  {
    v11 = (int)sub_565920(a1);
    if ( a4 != 1 )
    {
      result = 1;
      if ( a4 != (_DWORD)v11 )
        return result;
      v11 = 1;
    }
    return 2 * (unsigned int)(get_reg_name(0, v5, v11, v8) <= 0);
  }
  return result;
}
