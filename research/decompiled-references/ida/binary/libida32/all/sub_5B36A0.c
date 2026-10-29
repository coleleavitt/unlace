unsigned __int64 __fastcall sub_5B36A0(__int64 *a1, __int64 a2, double a3, double a4, double a5)
{
  int v5; // eax
  char v6; // r15
  int v7; // r14d
  unsigned int *v8; // rbx
  char v10; // [rsp+Fh] [rbp-59h]
  unsigned int v11[2]; // [rsp+1Ch] [rbp-4Ch] BYREF
  char v12; // [rsp+25h] [rbp-43h]
  unsigned __int64 v13; // [rsp+28h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  v10 = sub_5ACDD0(a1, a2, 1);
  if ( v10 )
  {
    v5 = *(_DWORD *)(a2 + 104);
    if ( v5 )
    {
      do
      {
        if ( v5 <= 0 )
          return v13 - __readfsqword(0x28u);
        v6 = v10;
        v7 = 0;
        do
        {
          v8 = (unsigned int *)(*(_QWORD *)(a2 + 112) + 8LL * v7);
          if ( (unsigned __int8)xrefblk_t_first_to(v11, *v8, 5) )
          {
            while ( (unsigned __int8)(v12 - 16) <= 1u
                 || v11[0] >= *v8 && v11[0] < v8[1]
                 || (int)sub_5AEEA0(a1, a2, v11[0]) < 0 )
            {
              if ( !(unsigned __int8)xrefblk_t_next_to(v11) )
                goto LABEL_11;
            }
          }
          else
          {
LABEL_11:
            if ( (unsigned __int8)sub_5B3360(a1, a2, v8, 1, a3, a4, a5) )
            {
              v6 = 0;
              goto LABEL_13;
            }
          }
          ++v7;
LABEL_13:
          v5 = *(_DWORD *)(a2 + 104);
        }
        while ( v5 > v7 );
      }
      while ( !v6 );
    }
  }
  return v13 - __readfsqword(0x28u);
}

