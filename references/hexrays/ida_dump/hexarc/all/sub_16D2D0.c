bool __fastcall sub_16D2D0(_BYTE *a1, _BYTE *a2, int a3, int a4)
{
  int v5; // eax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  bool result; // al
  __int64 (__fastcall **v10)(); // [rsp+0h] [rbp-58h] BYREF
  __int64 v11; // [rsp+8h] [rbp-50h]
  __int64 v12; // [rsp+10h] [rbp-48h]
  __int64 v13; // [rsp+18h] [rbp-40h]
  __int64 v14; // [rsp+20h] [rbp-38h]
  int v15; // [rsp+28h] [rbp-30h]
  unsigned __int64 v16; // [rsp+38h] [rbp-20h]

  v5 = *(_DWORD *)a1;
  v16 = __readfsqword(0x28u);
  v7 = (unsigned int)(v5 - 4);
  if ( (unsigned int)v7 <= 0x3F )
  {
    v8 = 0x8000000000000031LL;
    if ( _bittest64((const __int64 *)&v8, v7) )
    {
      if ( a1[32] != 4 )
      {
        result = 1;
        if ( a3 <= 1 )
          return result;
LABEL_8:
        v11 = 0;
        v12 = 0;
        v13 = 0;
        v14 = 0;
        v10 = &off_4AA630;
        v15 = 0;
        sub_1190A0(a1, &v10);
        return v15 <= 4;
      }
    }
  }
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v10 = &off_4AA630;
  v15 = 0;
  sub_1190A0(a2, &v10);
  result = 0;
  if ( a3 * v15 <= a4 )
  {
    result = 1;
    if ( a3 > 1 )
      goto LABEL_8;
  }
  return result;
}
