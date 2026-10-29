__int64 __fastcall sub_12FE870(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // [rsp+8h] [rbp-10h]

  v2 = *a1;
  if ( *(_BYTE *)(a2 + 33) == 1 && *(_BYTE *)(a2 + 32) == 6 )
    result = *(_QWORD *)a2;
  else
    result = (*(__int64 (__fastcall **)(_QWORD))a1[1])(*(_QWORD *)(a1[1] + 8));
  v4 = *(unsigned int *)(v2 + 8);
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(v2 + 12) )
  {
    v5 = result;
    sub_2237220(v2, v2 + 16, v4 + 1, 8);
    v4 = *(unsigned int *)(v2 + 8);
    result = v5;
  }
  *(_QWORD *)(*(_QWORD *)v2 + 8 * v4) = result;
  ++*(_DWORD *)(v2 + 8);
  return result;
}
