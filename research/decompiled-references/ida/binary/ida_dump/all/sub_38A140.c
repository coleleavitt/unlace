__int64 __fastcall sub_38A140(const char *a1, int a2)
{
  char *v2; // rdi
  unsigned int v3; // ebx
  const char *v4; // rsi
  char v5; // al
  const char *v7; // [rsp+8h] [rbp-40h] BYREF
  int v8; // [rsp+1Ch] [rbp-2Ch] BYREF
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+28h] [rbp-20h]
  unsigned __int64 v11; // [rsp+38h] [rbp-10h]

  v7 = a1;
  v11 = __readfsqword(0x28u);
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v2 = (char *)sub_387C00((__int64)&v9, &v7, &v8);
  if ( v2 )
  {
    v3 = -1;
    v4 = &v7[a2 - (__int64)v8];
    while ( v4 >= v2 )
    {
      v5 = *v2;
      if ( *v2 != 41 )
      {
        ++v3;
        if ( v5 == 32 )
          v5 = *++v2;
        if ( v5 != 46 || v2[1] != 46 || v2[2] != 46 )
        {
          v2 = sub_385BF0(v2);
          if ( *v2 )
            continue;
        }
      }
      goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    v3 = -1;
  }
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree();
  }
  return v3;
}
