unsigned __int16 *__fastcall sub_1FD05C0(__int64 a1)
{
  int v1; // r8d
  unsigned __int16 *v2; // rcx
  int v3; // esi
  unsigned __int16 *result; // rax
  unsigned __int16 *v5; // r10
  int v6; // r9d
  int v7; // ecx

  v1 = *(_DWORD *)(a1 + 20);
  if ( v1 == *(_DWORD *)(a1 + 44) )
    return nullptr;
  v2 = *(unsigned __int16 **)(a1 + 8);
  v3 = *(_DWORD *)(a1 + 16);
  if ( v3 )
  {
    v5 = v2 + 3;
    result = v2 + 4;
  }
  else
  {
    v3 = *v2;
    result = v2 + 5;
    v5 = v2 + 4;
    ++v2;
    *(_DWORD *)(a1 + 16) = v3;
  }
  *(_QWORD *)(a1 + 8) = v2 + 2;
  v6 = v2[2];
  *(_QWORD *)(a1 + 8) = v5;
  v7 = *v5;
  *(_DWORD *)(a1 + 16) = v3 - 1;
  *(_DWORD *)(a1 + 20) = v1 - 1;
  *(_QWORD *)(a1 + 8) = (char *)result + (unsigned int)(v6 + v7);
  return result;
}
