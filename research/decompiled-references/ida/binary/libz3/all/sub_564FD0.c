void __fastcall sub_564FD0(_QWORD *a1)
{
  void *v1; // rbp
  __int64 (__fastcall *v3)(void (__fastcall ***)(_QWORD)); // rdx
  void *v4; // rdi
  __int64 (__fastcall *v5)(void (__fastcall ***)(_QWORD)); // rdx
  __int64 v6; // rdi

  v1 = (void *)a1[6];
  *a1 = &off_1C67810;
  v3 = *(__int64 (__fastcall **)(void (__fastcall ***)(_QWORD)))(*(_QWORD *)v1 + 16LL);
  if ( v3 == sub_4C9C30 )
  {
    (**(void (__fastcall ***)(void *))v1)(v1);
    sub_186B220(v1);
  }
  else
  {
    v3((void (__fastcall ***)(_QWORD))v1);
  }
  v4 = (void *)a1[5];
  v5 = *(__int64 (__fastcall **)(void (__fastcall ***)(_QWORD)))(*(_QWORD *)v4 + 16LL);
  if ( v5 == sub_4C9C30 )
  {
    (**(void (__fastcall ***)(void *))v4)(v4);
    sub_186B220(v4);
  }
  else
  {
    v5((void (__fastcall ***)(_QWORD))v4);
  }
  v6 = a1[2];
  *a1 = qword_1C67518;
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  operator delete(a1, 0x38u);
}

