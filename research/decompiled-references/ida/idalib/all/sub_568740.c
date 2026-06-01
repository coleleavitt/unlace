_BYTE *__fastcall sub_568740(_BYTE *a1, __int64 a2, unsigned int a3)
{
  char v4; // bl
  _BYTE *v6; // r12
  __int64 v7; // rax
  _BYTE *v8; // rdi
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v10; // [rsp+8h] [rbp-30h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  if ( a3 - 1 > 0xFE || (unsigned int)a2 > 0x7FFE )
    return nullptr;
  v4 = a3;
  if ( a3 > 8 || (unsigned int)a2 > 0xE )
  {
    if ( (unsigned int)a2 > 0x7E )
    {
      *a1 = -1;
      ptr = nullptr;
      v10 = 0;
      sub_6B2CF0(&ptr, a2);
      v7 = v10;
      v8 = ptr;
      v6 = a1 + 2;
      if ( (_QWORD)v10 )
      {
        a1[1] = *(_BYTE *)ptr;
        if ( v7 != 1 )
        {
          v6 = a1 + 3;
          a1[2] = v8[1];
        }
      }
      else
      {
        a1[1] = byte_2CCBFD8;
      }
      if ( v8 )
      {
        *(_QWORD *)&v10 = 0;
        qfree(v8);
      }
    }
    else
    {
      v6 = a1 + 1;
      *a1 = a2 | 0x80;
    }
    *v6 = v4;
    return v6 + 1;
  }
  else
  {
    *a1 = (a2 + 1) | (16 * (a3 - 1));
    return a1 + 1;
  }
}
