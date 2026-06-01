__int64 __fastcall sub_139D80(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  __int64 v3; // rbx
  unsigned int v4; // ebx
  unsigned int *hidden_range; // rax
  __int64 v7; // rdi
  unsigned int *v8; // rax
  unsigned int v9; // ebp
  unsigned int *next_hidden_range; // rax
  int v11; // r9d
  unsigned int v12; // [rsp+4h] [rbp-44h] BYREF
  unsigned int v13; // [rsp+8h] [rbp-40h] BYREF
  int v14; // [rsp+Ch] [rbp-3Ch] BYREF
  __int64 v15; // [rsp+10h] [rbp-38h] BYREF
  __int128 v16; // [rsp+18h] [rbp-30h]
  unsigned __int64 v17; // [rsp+28h] [rbp-20h]

  v1 = *a1;
  v17 = __readfsqword(0x28u);
  v2 = sub_F5C30(v1);
  if ( !v2 )
    return 0;
  v3 = v2;
  v12 = -1;
  v13 = -1;
  v15 = 0;
  v16 = 0;
  if ( (unsigned __int8)sub_161360(v2, &v12, &v13) )
  {
    if ( v12 != -1 && v13 != -1 )
    {
      hidden_range = (unsigned int *)get_hidden_range();
      if ( hidden_range && *hidden_range < v12 )
        goto LABEL_25;
      v7 = v13;
      v8 = (unsigned int *)get_hidden_range();
      if ( v8 )
      {
        if ( *v8 < v13 )
          goto LABEL_25;
      }
      v14 = -1;
      if ( (unsigned __int64)v16 > 1 )
        goto LABEL_15;
      if ( get_ea_name() <= 0 )
        sub_138A40((__int64)&v15);
      v7 = 1098;
      if ( !(unsigned int)sub_18BA90(
                            1098,
                            (unsigned int)&v12,
                            (unsigned int)&v13,
                            (unsigned int)&v15,
                            (unsigned int)&v14,
                            v11) )
      {
LABEL_25:
        v4 = 0;
      }
      else
      {
LABEL_15:
        sub_15D870(v7);
        v9 = v13;
        if ( v12 < v13 )
        {
          del_hidden_range();
          do
            next_hidden_range = (unsigned int *)get_next_hidden_range();
          while ( next_hidden_range && *next_hidden_range < v9 && (unsigned __int8)del_hidden_range() );
        }
        v4 = (unsigned __int8)add_hidden_range();
      }
      goto LABEL_5;
    }
  }
  else
  {
    v13 = -1;
    v12 = -1;
  }
  v4 = sub_138890(v3, 1);
LABEL_5:
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree();
  }
  return v4;
}

