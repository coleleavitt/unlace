unsigned __int64 __fastcall sub_7F59C0(unsigned int *src, unsigned int *a2)
{
  unsigned int *i; // rbp
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned int *v7; // rax
  unsigned int *v8; // r9
  _BYTE v10[2192]; // [rsp+0h] [rbp-8C8h] BYREF
  unsigned __int64 v11; // [rsp+898h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( src != a2 )
  {
    for ( i = src + 548; a2 != i; i += 548 )
    {
      while ( 1 )
      {
        v3 = *i;
        v4 = i[1];
        v5 = src[1];
        qmemcpy(v10, i, sizeof(v10));
        v6 = v4 + (v3 << 32);
        if ( v6 < v5 + ((unsigned __int64)*src << 32) )
          break;
        v7 = i - 548;
        if ( v6 >= *(i - 547) + ((unsigned __int64)*(i - 548) << 32) )
        {
          qmemcpy(i, v10, 0x890u);
        }
        else
        {
          do
          {
            v8 = v7;
            qmemcpy(v7 + 548, v7, 0x890u);
            v7 -= 548;
          }
          while ( v6 < v7[1] + ((unsigned __int64)*v7 << 32) );
          qmemcpy(v8, v10, 0x890u);
        }
        i += 548;
        if ( a2 == i )
          return v11 - __readfsqword(0x28u);
      }
      if ( (char *)i - (char *)src <= 2192 )
      {
        if ( (char *)i - (char *)src == 2192 )
          qmemcpy(i, src, 0x890u);
      }
      else
      {
        memmove(src + 548, src, (char *)i - (char *)src);
      }
      qmemcpy(src, v10, 0x890u);
    }
  }
  return v11 - __readfsqword(0x28u);
}
