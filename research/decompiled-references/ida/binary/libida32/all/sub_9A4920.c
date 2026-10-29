void __fastcall sub_9A4920(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  void (*v3)(); // rdx

  if ( a2 )
  {
    v2 = sub_BDCD00(a2);
    if ( v2 )
    {
      v3 = *(void (**)())(*(_QWORD *)a1 + 16LL);
      if ( v3 != nullsub_348 )
        ((void (__fastcall *)(__int64, _QWORD))v3)(a1, v2);
    }
  }
}

