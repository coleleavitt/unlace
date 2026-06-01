void __fastcall idt_format_error(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r12d
  _BYTE *v4; // rax

  if ( a1 )
  {
    v3 = a3;
    *(_QWORD *)(a1 + 8) = 0;
    v4 = (_BYTE *)strarray(&unk_2B08980, 6, a3);
    if ( v4 )
    {
      if ( *v4 )
      {
        sub_3573A0((char **)a1);
        if ( v3 == 2 )
          sub_357520((__int64 *)a1);
      }
    }
  }
}

