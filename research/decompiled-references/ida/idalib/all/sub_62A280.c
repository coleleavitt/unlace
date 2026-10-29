void __fastcall sub_62A280(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 (__fastcall *v5)(__int64); // rax
  unsigned __int64 *v6; // rax
  unsigned __int64 (__fastcall *v7)(__int64, unsigned __int64, int); // rax
  __int64 v8; // rdi
  void (*v9)(); // rax

  if ( *(_QWORD *)(a1 + 64) )
  {
    v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL);
    v6 = (unsigned __int64 *)(v5 == sub_3DB7B0 ? a1 + 16 : ((__int64 (*)(void))v5)());
    if ( a3 >= *v6 && a3 < v6[1] )
    {
      v7 = *(unsigned __int64 (__fastcall **)(__int64, unsigned __int64, int))(*(_QWORD *)a1 + 40LL);
      if ( v7 == sub_6297D0 )
      {
        if ( a3 >= *(_QWORD *)(a1 + 120) )
          return;
      }
      else if ( a3 != v7(a1, a3, 0) )
      {
        return;
      }
      switch_dbctx(*(int *)(a1 + 8));
      v8 = *(_QWORD *)(a1 + 64);
      v9 = *(void (**)())(*(_QWORD *)v8 + 40LL);
      if ( v9 != nullsub_78 )
        ((void (__fastcall *)(__int64, __int64, unsigned __int64))v9)(v8, a2, *(_QWORD *)(a1 + 112) + (a3 << 6));
    }
  }
}
