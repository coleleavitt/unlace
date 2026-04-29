__int64 __fastcall sub_385240(const char *a1, int a2, _QWORD *a3)
{
  char *v3; // rdi
  unsigned int v4; // ebx
  const char *v5; // rsi
  char v6; // al
  const char *v8; // [rsp+8h] [rbp-40h] BYREF
  int v9; // [rsp+1Ch] [rbp-2Ch] BYREF
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  __int128 v11; // [rsp+28h] [rbp-20h]
  unsigned __int64 v12; // [rsp+38h] [rbp-10h]

  v8 = a1;
  v12 = __readfsqword(0x28u);
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v3 = (char *)sub_382D00(&v10, &v8, &v9, a3);
  if ( v3 )
  {
    v4 = -1;
    v5 = &v8[a2 - (__int64)v9];
    while ( v5 >= v3 )
    {
      v6 = *v3;
      if ( *v3 != 41 )
      {
        ++v4;
        if ( v6 == 32 )
          v6 = *++v3;
        if ( v6 != 46 || v3[1] != 46 || v3[2] != 46 )
        {
          v3 = sub_380CF0(v3);
          if ( *v3 )
            continue;
        }
      }
      goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    v4 = -1;
  }
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10);
  }
  return v4;
}
