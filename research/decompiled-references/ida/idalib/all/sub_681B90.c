__int64 __fastcall sub_681B90(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 1672);
  if ( *(_QWORD *)(result + 1624) != -1 )
  {
    sub_39ADA0(1u);
    sub_50F9A0(*(__int64 **)(a1 + 1672));
    sub_3A1A90(a1);
    sub_453C40(a1);
    sub_3C79E0(*(_QWORD *)(a1 + 1672));
    sub_540F60(a1);
    sub_5C9E40(a1, (unsigned __int64 *)((char *)&dword_0 + 1));
    sub_51AFA0(a1);
    sub_50ECB0(a1);
    sub_504B40(*(_QWORD *)(a1 + 1672) + 1624LL);
    sub_608E60(a1);
    sub_52D120(a1);
    return sub_691230(a1);
  }
  return result;
}
