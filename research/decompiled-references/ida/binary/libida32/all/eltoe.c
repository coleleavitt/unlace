unsigned __int64 __fastcall eltoe(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r11
  unsigned int v5; // eax
  _WORD v7[12]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v4 = a2;
  memset(v7, 0, 22);
  if ( a1 < 0 )
  {
    a1 = -a1;
    v7[0] = -1;
    goto LABEL_3;
  }
  if ( a1 )
  {
LABEL_3:
    v7[2] = HIWORD(a1);
    v7[3] = a1;
    v5 = sub_80CD40((__int64)v7);
    a3 = v5;
    v7[1] = 16398 - v5;
  }
  emovo(v7, v4, a3, a4);
  return v8 - __readfsqword(0x28u);
}

