void __fastcall sub_52D000(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // r12
  void (__fastcall *v3)(__int64, _QWORD *); // rax

  if ( a2 <= 6 )
  {
    v2 = *(_QWORD **)(*(_QWORD *)(a1 + 1584) + 8LL * (int)a2 + 8);
    if ( v2 )
    {
      reset_dirtree(*v2);
      v3 = (void (__fastcall *)(__int64, _QWORD *))*(&off_2B2E040 + 4 * (int)a2 + 2);
      if ( v3 )
      {
        v3(a1, v2);
        save_dirtree(*v2);
      }
      sub_77A930(*v2, 1);
    }
  }
}
