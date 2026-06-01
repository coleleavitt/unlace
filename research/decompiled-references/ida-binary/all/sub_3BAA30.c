__int64 __fastcall sub_3BAA30(__int64 a1, __int64 a2, const char **a3)
{
  __int64 v4; // rax
  const char *v5; // rdx
  _QWORD v7[2]; // [rsp+0h] [rbp-38h] BYREF
  __int16 v8; // [rsp+10h] [rbp-28h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v4 = sub_3B5510(a2, (__int64)a3);
  if ( v4 )
  {
    v5 = &s1;
    if ( a3[1] )
    {
      v5 = *a3;
      if ( *a3 )
        goto LABEL_4;
    }
    else if ( &s1 )
    {
LABEL_4:
      v7[1] = v5;
      v8 = 256;
      v7[0] = v4;
      return create_tinfo(a1, 61, 61, v7);
    }
  }
  return 0;
}
