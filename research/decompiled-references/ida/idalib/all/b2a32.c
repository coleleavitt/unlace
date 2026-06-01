__int64 __fastcall b2a32(void *s, unsigned __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned int v7; // r14d
  unsigned int v8; // eax
  unsigned int v9; // r13d
  __int64 v10; // rax
  _BYTE *v12; // rsi
  int v13; // r15d
  int v14; // r15d
  _BYTE v15[40]; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  v7 = sub_839F10(a5);
  v8 = sub_839F70(a4, 4);
  v9 = v8;
  if ( a2 > 0x20 && v8 == 4 )
  {
    v10 = num2str_uint32(s);
  }
  else
  {
    num2str_uint32(v15);
    if ( v9 == 4 || (v13 = b2a_width(4, v7), (v14 = v13 - b2a_width(v9, v7)) == 0) )
    {
      v12 = v15;
    }
    else
    {
      v12 = v15;
      do
      {
        if ( *v12 != 48 )
          break;
        ++v12;
      }
      while ( &v15[v14] != v12 );
    }
    v10 = qstpncpy(s, v12, a2);
  }
  return v10 - (_QWORD)s;
}
