void __fastcall sub_4F2BB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r11
  __int64 v4; // rdi
  void (*v5)(); // rdx

  if ( a2 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a2 + 8) + 48LL) & 1) != 0 )
    {
      v2 = sub_4F23C0(a1, a2, 0, 0);
      if ( v2 )
      {
        v4 = *(_QWORD *)(v3 + 40);
        v5 = *(void (**)())(*(_QWORD *)v4 + 32LL);
        if ( v5 != nullsub_39 )
          ((void (__fastcall *)(__int64, __int64))v5)(v4, v2);
      }
    }
  }
}
