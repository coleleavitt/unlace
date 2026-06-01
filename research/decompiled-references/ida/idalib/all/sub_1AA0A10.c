__int64 __fastcall sub_1AA0A10(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 result; // rax
  int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax

  if ( !a1 )
    return 0;
  v2 = sub_BFBAE0(a1);
  if ( (*(_WORD *)v2 & 0x1FF) != 0x47 )
    return 0;
  result = *(_QWORD *)(v2 + 16);
  v6 = *(_BYTE *)(result + 28) & 0x7F;
  v7 = (unsigned int)(v6 - 34);
  if ( (unsigned int)v7 > 5 )
  {
    v8 = (unsigned int)(v6 - 40);
    if ( (unsigned int)v8 <= 6 )
    {
      v9 = (__int64 *)(*(_QWORD *)(result + 48) & 0xFFFFFFFFFFFFFFF0LL);
      if ( v9 )
      {
        v10 = sub_F63270(*v9, a2, v8, v7, v3, v4);
        v11 = (__int64)v10;
        if ( v10 )
        {
          if ( !sub_B96EF0((__int64)v10) )
          {
            v12 = *(_QWORD *)(v11 + 128);
            if ( v12 )
            {
              if ( (*(_BYTE *)(v12 + 10) & 0x20) != 0 )
                return sub_B96F60(v11);
            }
          }
        }
      }
    }
    return 0;
  }
  return result;
}
