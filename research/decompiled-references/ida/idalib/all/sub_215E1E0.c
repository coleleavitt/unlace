__int64 __fastcall sub_215E1E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 64);
  result = a1;
  *(_BYTE *)(a1 + 8) &= ~1u;
  if ( v2 )
    *(_QWORD *)a1 = *(unsigned int *)(v2 + 16);
  else
    *(_QWORD *)a1 = 0;
  return result;
}
