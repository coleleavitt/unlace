__int64 __fastcall sub_2F7D40(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int v3; // ebp
  void (__fastcall ***v4)(_QWORD); // r12
  __int64 v6; // rax
  void *v7; // rdi

  v1 = *(_QWORD *)(a1 + 248);
  if ( !v1 )
  {
    v1 = sub_186B270(0x38u);
    v6 = *(_QWORD *)(a1 + 232);
    *(_QWORD *)(v1 + 8) = *(_QWORD *)(a1 + 8);
    *(_QWORD *)v1 = qword_1C64010;
    *(_QWORD *)(v1 + 16) = a1 + 72;
    *(_QWORD *)(v1 + 24) = v6;
    if ( v6 )
      ++*(_DWORD *)(v6 + 48);
    sub_1858590(v1 + 32, a1 + 288);
    v7 = *(void **)(a1 + 248);
    *(_OWORD *)(v1 + 40) = 0;
    *(_QWORD *)v1 = &off_1C4D588;
    if ( v7 != (void *)v1 )
    {
      sub_2FE040(v7);
      *(_QWORD *)(a1 + 248) = v1;
    }
    *(_BYTE *)(a1 + 256) = 1;
  }
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 48LL))(v1);
  if ( v3 == 1 )
  {
    sub_2ED7D0(a1);
    return 1;
  }
  else
  {
    v4 = *(void (__fastcall ****)(_QWORD))(a1 + 248);
    if ( v4 )
    {
      (**v4)(*(_QWORD *)(a1 + 248));
      sub_186B220(v4);
      *(_QWORD *)(a1 + 248) = 0;
    }
    *(_BYTE *)(a1 + 256) = 0;
    return v3;
  }
}

