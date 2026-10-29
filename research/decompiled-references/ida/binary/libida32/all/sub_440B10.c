void __fastcall sub_440B10(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 (*v5)(void); // rax
  unsigned __int64 *v6; // rax
  __int64 v7; // rdi
  void (*v8)(); // rax

  if ( *(_QWORD *)(a1 + 80) )
  {
    v5 = *(__int64 (**)(void))(*(_QWORD *)a1 + 32LL);
    if ( (char *)v5 == (char *)sub_3D58E0 )
      v6 = (unsigned __int64 *)(a1 + 16);
    else
      v6 = (unsigned __int64 *)v5();
    if ( a3 >= *v6
      && a3 < v6[1]
      && a3 == (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, a3, 0) )
    {
      v7 = *(_QWORD *)(a1 + 80);
      v8 = *(void (**)())(*(_QWORD *)v7 + 24LL);
      if ( v8 != nullsub_43 )
        ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD))v8)(
          v7,
          a2,
          *(unsigned __int8 *)(a1 + 92),
          (unsigned int)a3,
          *(_QWORD *)(a1 + 64));
    }
  }
}

