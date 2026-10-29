unsigned __int64 __fastcall sub_A99E0(__int64 a1)
{
  __int64 func; // rax
  int *v3; // rbp
  __int64 v5; // rax
  unsigned int *v6; // r13
  unsigned int v7; // edx
  int *v8; // rax
  int *v9; // rdi
  int v10; // ebx
  unsigned int v11; // [rsp+10h] [rbp-38h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  func = get_func();
  if ( func )
  {
    v3 = (int *)func;
    if ( (unsigned __int8)xrefblk_t_first_from() )
    {
      v5 = get_func();
      v6 = (unsigned int *)v5;
      if ( v5 )
      {
        v7 = *(_DWORD *)v5;
        if ( *v3 != *(_DWORD *)v5 && ((*(_BYTE *)(v5 + 8) & 4) == 0 || (dword_2440D8 & 2) == 0) )
        {
          if ( (dword_2440D8 & 1) != 0 )
          {
            if ( !getseg() )
              return v12 - __readfsqword(0x28u);
            v7 = *v6;
          }
          v8 = (int *)qword_250A30;
          if ( !qword_250A30 )
            goto LABEL_23;
          v9 = &dword_250A28;
          do
          {
            if ( v8[8] < v7 )
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
          if ( v9 == &dword_250A28 || v7 < v9[8] )
          {
LABEL_23:
            if ( sub_A23A0(a1, v11) )
            {
              v10 = *v3;
              *(_DWORD *)sub_A9800(&qword_250A20, v6) = v10;
            }
          }
        }
      }
    }
  }
  return v12 - __readfsqword(0x28u);
}

