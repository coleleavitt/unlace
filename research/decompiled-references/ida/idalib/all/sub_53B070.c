unsigned __int64 __fastcall sub_53B070(__int64 a1, int a2)
{
  _QWORD *v3; // r13
  __int64 v4; // rax
  char *v5; // rcx
  __int64 v6; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 8LL * a2 + 224) && a2 != 19 )
  {
    v3 = (_QWORD *)(a1 + 8 * (a2 + 28LL));
    sub_53B780(a1, v3, *(&off_2B2E180 + a2), 0);
    if ( (unsigned int)verify_tinfo(*v3) )
    {
      if ( (unsigned int)(a2 - 20) <= 1 )
      {
        if ( a2 == 20 )
        {
          if ( (unsigned __int8)getinf_flag(3, 4) )
            v6 = 37;
          else
            v6 = 36;
          copy_tinfo_t(v3);
          clear_tinfo_t(&v6);
          v5 = "size_t";
        }
        else
        {
          if ( (unsigned __int8)getinf_flag(3, 4) )
            v6 = 21;
          else
            v6 = 20;
          copy_tinfo_t(v3);
          clear_tinfo_t(&v6);
          v5 = "ssize_t";
        }
      }
      else
      {
        if ( (unsigned int)(a2 - 28) > 1 )
          goto LABEL_7;
        clear_tinfo_t(v3);
        if ( a2 == 28 )
        {
          sub_53B780(a1, v3, &unk_23AF0DF, &unk_22D5CBF);
          v5 = "complex64_t";
        }
        else
        {
          sub_53B780(a1, v3, &unk_23AF0C7, &unk_22D5CBF);
          v5 = "complex128_t";
        }
      }
      save_tinfo(v3, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 1672LL) + 8LL), 0, v5, 1);
    }
LABEL_7:
    v4 = sub_5340D0(a1, *(_QWORD *)(a1 + 8LL * a2 + 224));
    *(_WORD *)(v4 + 68) |= 0x1000u;
  }
  return v7 - __readfsqword(0x28u);
}
