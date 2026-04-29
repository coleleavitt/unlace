__int64 __fastcall sub_1AF10(__int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 i; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // [rsp+8h] [rbp-80h] BYREF
  __int64 v8; // [rsp+10h] [rbp-78h] BYREF
  __int128 v9; // [rsp+18h] [rbp-70h]
  __int64 v10; // [rsp+30h] [rbp-58h] BYREF
  __int128 v11; // [rsp+38h] [rbp-50h]
  unsigned __int64 v12; // [rsp+48h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  for ( i = *a2; i < a2[1]; i += v3 )
  {
    op_offset();
    v4 = *a1;
    v7 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *, unsigned __int64))(v4 + 136))(a1, &v7, i) )
    {
      v5 = *a1;
      v8 = 0;
      v9 = 0;
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *, __int64))(v5 + 408))(a1, &v8, v7) )
      {
        v10 = 0;
        v11 = 0;
        sub_D6A0(&v10);
        set_name();
        if ( v10 )
        {
          *(_QWORD *)&v11 = 0;
          qfree();
        }
        if ( !v8 )
          goto LABEL_7;
      }
      else if ( !v8 )
      {
        goto LABEL_7;
      }
      *(_QWORD *)&v9 = 0;
      qfree();
    }
LABEL_7:
    v3 = *((unsigned int *)a1 + 186);
  }
  return 1;
}
