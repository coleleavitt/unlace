__int64 __fastcall sub_16B740(__int64 a1)
{
  unsigned __int64 v1; // rbp
  const char *v2; // rbx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  char v5; // dl
  int v6; // ebx
  unsigned int v7; // ebx
  int utf8_char; // edx
  struct _Unwind_Exception *v10; // rbx
  const char *v11; // [rsp+0h] [rbp-60h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-58h]
  const char *v13; // [rsp+10h] [rbp-50h]
  const char *v14; // [rsp+18h] [rbp-48h] BYREF
  __int128 v15; // [rsp+20h] [rbp-40h]
  unsigned __int64 v16; // [rsp+30h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v15 = 0;
  v14 = nullptr;
  if ( sub_15E4F0(a1, (__int64)&v14, 0) <= 0 )
  {
    v7 = 0;
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 480) )
    {
      v10 = (struct _Unwind_Exception *)sub_158B30(a1);
      if ( v14 )
      {
        *(_QWORD *)&v15 = 0;
        qfree();
      }
      _Unwind_Resume(v10);
    }
    v1 = *(__int16 *)(a1 + 468);
    v2 = s1;
    if ( (_QWORD)v15 )
      v2 = v14;
    v3 = qustrlen();
    v11 = v2;
    if ( v1 > v3 )
      v1 = v3;
    skip_utf8();
    v4 = (unsigned __int64)v11;
    if ( v1 > 1 )
    {
      v13 = v11;
      utf8_char = get_utf8_char();
      v4 = (unsigned __int64)v11;
      if ( utf8_char != 32 )
      {
        v13 = v11;
        if ( (unsigned __int8)prev_utf8_char() && (_DWORD)v12 == 32 )
        {
          v4 = (unsigned __int64)v13;
          v11 = v13;
        }
        else
        {
          v4 = (unsigned __int64)v11;
        }
      }
    }
    while ( 1 )
    {
      if ( (unsigned __int64)v2 >= v4 )
        goto LABEL_12;
      v12 = v4;
      if ( (unsigned int)get_utf8_char() != 32 )
        break;
      v5 = prev_utf8_char();
      v4 = (unsigned __int64)v11;
      if ( !v5 )
        goto LABEL_18;
    }
    v4 = (unsigned __int64)v11;
LABEL_18:
    if ( (unsigned __int64)v2 >= v4 )
      goto LABEL_12;
    while ( 1 )
    {
      v13 = (const char *)v4;
      if ( !(unsigned __int8)prev_utf8_char() || (_DWORD)v12 == 32 )
        break;
      v4 = (unsigned __int64)v13;
      v11 = v13;
      if ( v2 >= v13 )
        goto LABEL_12;
    }
    v13 = v2;
    if ( v2 >= v11 )
    {
LABEL_12:
      v6 = 0;
      goto LABEL_13;
    }
    v6 = 0;
    do
    {
      if ( skip_utf8() )
        break;
      if ( v11 < v13 )
        break;
      ++v6;
    }
    while ( v13 < v11 );
LABEL_13:
    LODWORD(v11) = v6;
    sub_16B660(a1, (unsigned __int64)&v11, 0);
    v7 = 1;
  }
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree();
  }
  return v7;
}

