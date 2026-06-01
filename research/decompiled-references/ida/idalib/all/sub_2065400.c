_QWORD *__fastcall sub_2065400(_QWORD *a1, __int64 a2, __int64 a3, _BYTE *a4, __int64 a5, __int64 a6, char a7)
{
  unsigned int v9; // r13d
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 v12; // rdx
  const char *v15; // rax
  unsigned int v16; // r14d
  __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  void *v20[2]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v21; // [rsp+10h] [rbp-78h] BYREF
  __int64 v22; // [rsp+20h] [rbp-68h] BYREF
  __int64 v23; // [rsp+28h] [rbp-60h]
  const char *v24; // [rsp+30h] [rbp-58h]
  __int16 v25; // [rsp+40h] [rbp-48h]

  if ( a3 )
  {
    if ( !(unsigned __int8)sub_2247970(a2, a3, 10, &v22)
      && v22 == (unsigned int)v22
      && (unsigned __int16)v22 == (_DWORD)v22 )
    {
      if ( (_WORD)v22 )
      {
        if ( (v22 & 7) == 0 && (unsigned __int16)v22 > 7u )
        {
          v18 = (unsigned __int16)v22 >> 3;
          if ( ((unsigned int)v18 & ((_DWORD)v18 - 1)) == 0 )
          {
            _BitScanReverse64(&v19, v18);
            *a4 = 63 - (v19 ^ 0x3F);
            *a1 = 0;
            return a1;
          }
        }
        v22 = a5;
        v25 = 773;
        v15 = " alignment must be a power of two times the byte width";
        v23 = a6;
      }
      else
      {
        if ( a7 )
        {
          *a4 = 0;
          *a1 = 0;
          return a1;
        }
        v22 = a5;
        v15 = " alignment must be non-zero";
        v25 = 773;
        v23 = a6;
      }
    }
    else
    {
      v22 = a5;
      v15 = " alignment must be a 16-bit integer";
      v25 = 773;
      v23 = a6;
    }
    v24 = v15;
    v16 = sub_2220490(a2);
    v11 = v17;
    sub_2253560(v20, &v22);
    v12 = v16;
  }
  else
  {
    v22 = a5;
    v25 = 773;
    v23 = a6;
    v24 = " alignment component cannot be empty";
    v9 = sub_2220490(a1);
    v11 = v10;
    sub_2253560(v20, &v22);
    v12 = v9;
  }
  sub_22205D0(a1, v20, v12, v11);
  if ( v20[0] != &v21 )
    operator delete(v20[0]);
  return a1;
}
