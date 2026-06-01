__int64 __fastcall sub_758270(unsigned int *a1, const char *a2)
{
  unsigned __int64 v2; // rax
  unsigned int v3; // edx
  void (*v4)(); // rax
  unsigned int v6; // [rsp+Bh] [rbp-1Dh]

  v2 = sub_757CF0((__int64)a1, a2);
  v6 = v2;
  v3 = 3;
  if ( BYTE4(v2) )
  {
    if ( (_DWORD)v2 == -1 )
    {
      return 2;
    }
    else
    {
      v4 = *(void (**)())(*(_QWORD *)a1 + 104LL);
      if ( v4 != nullsub_215 )
        ((void (__fastcall *)(unsigned int *, _QWORD, _QWORD))v4)(a1, a1[24], v6);
      a1[24] = v6;
      return 0;
    }
  }
  return v3;
}

