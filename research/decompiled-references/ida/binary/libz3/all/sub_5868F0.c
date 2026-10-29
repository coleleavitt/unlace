void __fastcall sub_5868F0(_QWORD *a1)
{
  void *v2; // rbp
  __int64 (__fastcall *v3)(void (__fastcall ***)(_QWORD)); // rdx
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v7; // rdi

  v2 = (void *)a1[5];
  *a1 = &off_1C51738;
  v3 = *(__int64 (__fastcall **)(void (__fastcall ***)(_QWORD)))(*(_QWORD *)v2 + 16LL);
  if ( v3 == sub_4C9C10 )
  {
    (**(void (__fastcall ***)(void *))v2)(v2);
    sub_186B220(v2);
  }
  else
  {
    v3((void (__fastcall ***)(_QWORD))v2);
  }
  v4 = a1[6];
  if ( v4 )
  {
    v5 = a1[7];
    if ( (*(_DWORD *)(v4 + 8))-- == 1 )
      sub_15D7BC0(v5, v4);
  }
  v7 = a1[2];
  *a1 = qword_1C665B0;
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  operator delete(a1, 0x40u);
}

