__int64 __fastcall ediv(__int64 a1, __int64 a2, _OWORD *a3)
{
  int v4; // r14d
  __int64 result; // rax
  int v6; // ebp
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10[8]; // [rsp+0h] [rbp-68h] BYREF
  _WORD v11[12]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  emovi(a1, v10);
  emovi(a2, v11);
  v4 = v11[1];
  result = 4;
  *a3 = 0;
  if ( v4 )
  {
    v6 = HIWORD(v10[0]);
    if ( HIWORD(v10[0]) )
    {
      v7 = sub_80D0C0((__int64)v11, v10);
      v8 = (unsigned int)emdnorm(v10, v7, 0, (unsigned int)(v6 + 0x3FFF - v4), 112);
      result = 2;
      if ( (_BYTE)v8 )
      {
        LOWORD(v10[0]) = -(LOWORD(v10[0]) != v11[0]);
        emovo(v10, a3, v8, v9);
        return 1;
      }
    }
    else
    {
      return 1;
    }
  }
  return result;
}

