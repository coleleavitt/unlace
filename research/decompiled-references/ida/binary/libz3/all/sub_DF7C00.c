void __fastcall sub_DF7C00(__int64 a1, unsigned __int8 a2)
{
  __int64 v3; // rdi
  void (*v4)(); // rax

  v3 = *(_QWORD *)(a1 + 864);
  if ( v3 && (v4 = *(void (**)())(*(_QWORD *)v3 + 136LL), v4 != nullsub_123) )
  {
    ((void (__fastcall *)(__int64, _QWORD))v4)(v3, a2);
    *(_BYTE *)(a1 + 189) = a2;
  }
  else
  {
    *(_BYTE *)(a1 + 189) = a2;
  }
}

