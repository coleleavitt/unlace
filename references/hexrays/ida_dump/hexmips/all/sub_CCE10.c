void __fastcall sub_CCE10(__int64 a1, unsigned int a2)
{
  __int64 custom_callcnv; // rax
  __int64 v4; // rdi
  __int64 (*v5)(); // rax

  sub_CCD50(a1, 0, 0);
  if ( a2 > 0x1FF || a2 <= 0xFF && (a2 & 0xFFFFFF0F) != 0 )
  {
    custom_callcnv = get_custom_callcnv(a2);
    v4 = custom_callcnv;
    if ( custom_callcnv )
    {
      v5 = *(__int64 (**)())(*(_QWORD *)custom_callcnv + 40LL);
      if ( v5 != sub_CAEA0 )
        ((void (__fastcall *)(__int64, __int64))v5)(v4, a1);
    }
  }
  else
  {
    sub_CBD70(0x7D4u, a1, a2);
  }
  *(_DWORD *)(a1 + 72) = a2;
  sub_CCBA0(a1, (__int64 *)(a1 + 88), (_QWORD *)(a1 + 8));
  sub_CCBA0(a1, (__int64 *)(a1 + 112), (_QWORD *)(a1 + 32));
}
