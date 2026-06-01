__int64 __fastcall sub_A5F4F0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 2320);
  result = *(unsigned int *)(*(_QWORD *)(a1 + 17448) + 340LL);
  if ( *(_BYTE *)(v1 + 740) )
    return *(unsigned int *)(v1 + 736);
  return result;
}
