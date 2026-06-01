void __fastcall sub_7A6880(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  void (*v5)(); // r8

  if ( a2 )
  {
    v3 = *(_QWORD *)(a1 + 112);
    if ( !*(_QWORD *)(v3 + 168) )
    {
      *(_QWORD *)(v3 + 168) = a2;
      *(_QWORD *)(v3 + 176) = a3;
      v4 = sub_798D90(a1);
      if ( v4 )
      {
        v5 = *(void (**)())(*(_QWORD *)v4 + 80LL);
        if ( v5 != nullsub_71 )
          ((void (__fastcall *)(__int64, __int64, __int64, __int64))v5)(v4, v3, a2, a3);
      }
    }
  }
}

