__int64 __fastcall sub_2B43B0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rdx
  bool (__fastcall *v4)(__int64); // rax

  if ( a3 < *(_QWORD *)(a2 + 48) )
  {
    v3 = *(_QWORD *)(a2 + 40) + (a3 << 6);
    v4 = **(bool (__fastcall ***)(__int64))v3;
    if ( v4 == sub_2A5E40 )
    {
      if ( *(_QWORD *)(v3 + 8) == *(_QWORD *)(v3 + 48) )
        goto LABEL_4;
    }
    else if ( !v4(v3) )
    {
      goto LABEL_4;
    }
    switch_dbctx(*(int *)(a2 + 8));
  }
LABEL_4:
  sub_7B2C0(a1, (const char *)&unk_3EF793);
  return a1;
}
