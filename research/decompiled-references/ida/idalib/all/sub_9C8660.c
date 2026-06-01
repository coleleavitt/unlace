void __fastcall sub_9C8660(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  void (*v3)(); // rdx

  if ( a2 )
  {
    v2 = sub_C00A40(a2);
    if ( v2 )
    {
      v3 = *(void (**)())(*(_QWORD *)a1 + 16LL);
      if ( v3 != nullsub_369 )
        ((void (__fastcall *)(__int64, _QWORD))v3)(a1, v2);
    }
  }
}
