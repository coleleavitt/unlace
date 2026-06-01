__int64 __fastcall b2a64(void *s, unsigned __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  int v7; // ebp
  unsigned int v9; // r15d
  __int64 v10; // rax
  _BYTE *v11; // rsi
  int v12; // r12d
  int v13; // r12d
  _BYTE v14[72]; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v7 = sub_816BB0(a4, 8);
  if ( v7 <= 4 )
    return b2a32(s);
  v9 = sub_816B50(a5);
  if ( a2 > 0x40 && v7 == 8 )
  {
    v10 = num2str_uint64(s);
  }
  else
  {
    num2str_uint64(v14);
    if ( v7 == 8 || (v12 = b2a_width(8, v9), (v13 = v12 - b2a_width((unsigned int)v7, v9)) == 0) )
    {
      v11 = v14;
    }
    else
    {
      v11 = v14;
      do
      {
        if ( *v11 != 48 )
          break;
        ++v11;
      }
      while ( &v14[v13] != v11 );
    }
    v10 = qstpncpy(s, v11, a2);
  }
  return v10 - (_QWORD)s;
}

