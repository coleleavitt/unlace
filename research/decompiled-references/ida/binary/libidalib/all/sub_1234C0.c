__int64 __fastcall sub_1234C0(double a1)
{
  _QWORD *first_seg; // rax
  _QWORD *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rbp
  int v5; // r9d
  __int64 v6; // rax
  __int64 v7; // rbx
  const char *v8; // rax
  __int16 v10; // [rsp+Ch] [rbp-2Ch] BYREF
  __int16 v11; // [rsp+Eh] [rbp-2Ah] BYREF
  _QWORD v12[5]; // [rsp+10h] [rbp-28h] BYREF

  v12[1] = __readfsqword(0x28u);
  first_seg = (_QWORD *)get_first_seg();
  if ( first_seg )
  {
    v2 = first_seg;
    v3 = *first_seg;
    v10 = 0;
    v11 = 3;
    v12[0] = v3;
    v4 = getinf();
    if ( v4 || !v12[0] )
    {
      v12[0] = v4;
      v10 = 2;
    }
    if ( (unsigned int)sub_18C660(
                         1028,
                         (unsigned int)sub_121860,
                         (unsigned int)&v10,
                         (unsigned int)v12,
                         (unsigned int)&v11,
                         v5) )
    {
      v6 = v12[0];
      if ( v10 )
      {
        if ( v10 != 1 )
          v6 = v12[0] - v4;
        v7 = v6;
      }
      else
      {
        v7 = v12[0] - *v2;
      }
      if ( v7 && sub_122240(0, -1, v7, a1) && (unsigned int)rebase_program() )
      {
        v8 = (const char *)move_segm_strerror();
        sub_92200((__int64)"%s", v8);
      }
    }
  }
  return 1;
}

