__int64 __fastcall sub_13A320(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  __int64 v3; // rbx
  unsigned int v4; // ebx
  unsigned __int64 *hidden_range; // rax
  __int64 v7; // rdi
  unsigned __int64 *v8; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 *next_hidden_range; // rax
  int v11; // r9d
  int v12; // [rsp+Ch] [rbp-4Ch] BYREF
  unsigned __int64 v13; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-40h] BYREF
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  __int128 v16; // [rsp+28h] [rbp-30h]
  unsigned __int64 v17; // [rsp+38h] [rbp-20h]

  v1 = *a1;
  v17 = __readfsqword(0x28u);
  v2 = sub_F6B10(v1);
  if ( !v2 )
    return 0;
  v3 = v2;
  v13 = -1;
  v14 = -1;
  v15 = 0;
  v16 = 0;
  if ( (unsigned __int8)sub_161C80(v2, &v13, &v14) )
  {
    if ( v13 != -1 && v14 != -1 )
    {
      hidden_range = (unsigned __int64 *)get_hidden_range();
      if ( hidden_range && *hidden_range < v13 )
        goto LABEL_25;
      v7 = v14;
      v8 = (unsigned __int64 *)get_hidden_range();
      if ( v8 )
      {
        if ( *v8 < v14 )
          goto LABEL_25;
      }
      v12 = -1;
      if ( (unsigned __int64)v16 > 1 )
        goto LABEL_15;
      if ( get_ea_name() <= 0 )
        sub_138FC0((__int64)&v15);
      v7 = 1098;
      if ( !(unsigned int)sub_18C660(
                            1098,
                            (unsigned int)&v13,
                            (unsigned int)&v14,
                            (unsigned int)&v15,
                            (unsigned int)&v12,
                            v11) )
      {
LABEL_25:
        v4 = 0;
      }
      else
      {
LABEL_15:
        sub_15E150(v7, &v13);
        v9 = v14;
        if ( v13 < v14 )
        {
          del_hidden_range();
          do
            next_hidden_range = (unsigned __int64 *)get_next_hidden_range();
          while ( next_hidden_range && *next_hidden_range < v9 && (unsigned __int8)del_hidden_range() );
        }
        v4 = (unsigned __int8)add_hidden_range();
      }
      goto LABEL_5;
    }
  }
  else
  {
    v14 = -1;
    v13 = -1;
  }
  v4 = sub_138E10(v3, 1);
LABEL_5:
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree();
  }
  return v4;
}

