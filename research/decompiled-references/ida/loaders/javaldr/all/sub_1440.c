__int64 __fastcall sub_1440(__int64 *a1, __int64 *a2, __int64 a3)
{
  int v6; // edx
  const char *v7; // rcx
  _DWORD *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  if ( (unsigned int)lreadbytes(a3, (char *)&v10 + 4, 4, 1)
    || HIDWORD(v10) != -889275714
    || (unsigned int)lreadbytes(a3, &v10, 2, 1)
    || (unsigned int)lreadbytes(a3, (char *)&v10 + 2, 2, 1) )
  {
    return 0;
  }
  if ( WORD1(v10) > 0x2Du )
  {
    if ( WORD1(v10) <= 0x37u )
    {
      v6 = 3;
      v7 = "/CLDC";
      if ( BYTE2(v10) != 47 )
      {
        v6 = (char)(BYTE2(v10) - 44);
        v7 = "";
      }
      goto LABEL_8;
    }
    return 0;
  }
  v6 = 1;
  v7 = "";
  if ( WORD1(v10) != 45 )
    return 0;
LABEL_8:
  sub_1380(a1, (__int64)"JavaVM Class File (JDK 1.%u%s)", v6, v7);
  v8 = (_DWORD *)*a2;
  if ( (unsigned __int64)a2[2] <= 4 )
  {
    v9 = qvector_reserve(a2, v8, 5, 1);
    *a2 = v9;
    v8 = (_DWORD *)v9;
  }
  a2[1] = 5;
  *v8 = 1635148138;
  *(_BYTE *)(*a2 + 4) = 0;
  return 17;
}

