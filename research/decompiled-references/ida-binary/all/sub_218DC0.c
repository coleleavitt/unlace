unsigned __int64 __fastcall sub_218DC0(__int64 a1, __int64 a2)
{
  __int64 func; // rax
  __int64 *v4; // rbp
  __int64 v6; // rax
  unsigned __int64 *v7; // r13
  unsigned __int64 v8; // rdx
  int *v9; // rax
  int *v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // [rsp+0h] [rbp-48h] BYREF
  int *v13; // [rsp+8h] [rbp-40h]
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  func = get_func(a2);
  if ( func )
  {
    v4 = (__int64 *)func;
    if ( (unsigned __int8)xrefblk_t_first_from(&v12, a2, 2) )
    {
      v6 = get_func(v13);
      v7 = (unsigned __int64 *)v6;
      if ( v6 )
      {
        v8 = *(_QWORD *)v6;
        if ( *v4 != *(_QWORD *)v6 && ((*(_BYTE *)(v6 + 16) & 4) == 0 || (dword_8BA504 & 2) == 0) )
        {
          if ( (dword_8BA504 & 1) != 0 )
          {
            if ( !getseg(a2) )
              return v14 - __readfsqword(0x28u);
            v8 = *v7;
          }
          v9 = (int *)qword_8CB630;
          if ( !qword_8CB630 )
            goto LABEL_23;
          v10 = &dword_8CB628;
          do
          {
            if ( *((_QWORD *)v9 + 4) < v8 )
            {
              v9 = *((int **)v9 + 3);
            }
            else
            {
              v10 = v9;
              v9 = *((int **)v9 + 2);
            }
          }
          while ( v9 );
          if ( v10 == &dword_8CB628 || v8 < *((_QWORD *)v10 + 4) )
          {
LABEL_23:
            if ( sub_2110C0(a1, v13) )
            {
              v11 = *v4;
              *sub_218BE0(&qword_8CB620, v7) = v11;
            }
          }
        }
      }
    }
  }
  return v14 - __readfsqword(0x28u);
}
