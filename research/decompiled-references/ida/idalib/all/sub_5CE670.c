unsigned __int64 __fastcall sub_5CE670(__m128i *a1, __int64 a2, double a3, double a4, double a5)
{
  int v5; // eax
  char v6; // r15
  int v7; // r14d
  unsigned __int64 *v8; // rbx
  char v10; // [rsp+Fh] [rbp-59h]
  unsigned __int64 v11[2]; // [rsp+10h] [rbp-58h] BYREF
  char v12; // [rsp+21h] [rbp-47h]
  unsigned __int64 v13; // [rsp+28h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  v10 = sub_5C7820(a1, a2, 1);
  if ( v10 )
  {
    v5 = *(_DWORD *)(a2 + 128);
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
          v8 = (unsigned __int64 *)(*(_QWORD *)(a2 + 136) + 16LL * v7);
          if ( (unsigned __int8)xrefblk_t_first_to(v11, *v8, 5) )
          {
            while ( (unsigned __int8)(v12 - 16) <= 1u
                 || v11[0] >= *v8 && v11[0] < v8[1]
                 || (int)sub_5C9B30(a1, (unsigned __int64 *)a2, v11[0]) < 0 )
            {
              if ( !(unsigned __int8)xrefblk_t_next_to(v11) )
                goto LABEL_11;
            }
          }
          else
          {
LABEL_11:
            if ( (unsigned __int8)sub_5CE320(a1, a2, v8, 1, a3, a4, a5) )
            {
              v6 = 0;
              goto LABEL_13;
            }
          }
          ++v7;
LABEL_13:
          v5 = *(_DWORD *)(a2 + 128);
        }
        while ( v5 > v7 );
      }
      while ( !v6 );
    }
  }
  return v13 - __readfsqword(0x28u);
}
