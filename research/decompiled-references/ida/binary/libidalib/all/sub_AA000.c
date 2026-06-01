unsigned __int64 __fastcall sub_AA000(__int64 a1)
{
  __int64 func; // rax
  __int64 *v3; // rbp
  __int64 v5; // rax
  unsigned __int64 *v6; // r13
  unsigned __int64 v7; // rdx
  int *v8; // rax
  int *v9; // rdi
  __int64 v10; // rbx
  unsigned __int64 v11; // [rsp+8h] [rbp-40h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  func = get_func();
  if ( func )
  {
    v3 = (__int64 *)func;
    if ( (unsigned __int8)xrefblk_t_first_from() )
    {
      v5 = get_func();
      v6 = (unsigned __int64 *)v5;
      if ( v5 )
      {
        v7 = *(_QWORD *)v5;
        if ( *v3 != *(_QWORD *)v5 && ((*(_BYTE *)(v5 + 16) & 4) == 0 || (dword_245124 & 2) == 0) )
        {
          if ( (dword_245124 & 1) != 0 )
          {
            if ( !getseg() )
              return v12 - __readfsqword(0x28u);
            v7 = *v6;
          }
          v8 = (int *)qword_251AB0;
          if ( !qword_251AB0 )
            goto LABEL_23;
          v9 = &dword_251AA8;
          do
          {
            if ( *((_QWORD *)v8 + 4) < v7 )
            {
              v8 = *((int **)v8 + 3);
            }
            else
            {
              v9 = v8;
              v8 = *((int **)v8 + 2);
            }
          }
          while ( v8 );
          if ( v9 == &dword_251AA8 || v7 < *((_QWORD *)v9 + 4) )
          {
LABEL_23:
            if ( sub_A2700(a1, v11) )
            {
              v10 = *v3;
              *sub_A9E20(&qword_251AA0, v6) = v10;
            }
          }
        }
      }
    }
  }
  return v12 - __readfsqword(0x28u);
}

