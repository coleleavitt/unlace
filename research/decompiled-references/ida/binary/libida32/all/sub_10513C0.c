__int64 __fastcall sub_10513C0(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 result; // rax
  int v4; // edx

  sub_9CAB60(a1 + 512, a2);
  if ( !sub_990D60(a2, "apcs-gnu") )
  {
    v2 = sub_990D60(a2, "aapcs16");
    goto LABEL_3;
  }
  v2 = sub_990D60(a2, "aapcs16");
  if ( !v2 )
  {
LABEL_3:
    sub_104CE50(a1, v2 == 0);
    return 1;
  }
  if ( !sub_990D60(a2, "aapcs") || !sub_990D60(a2, "aapcs-vfp") || (v4 = sub_990D60(a2, "aapcs-linux"), result = 0, !v4) )
  {
    sub_104CD10(a1);
    return 1;
  }
  return result;
}

