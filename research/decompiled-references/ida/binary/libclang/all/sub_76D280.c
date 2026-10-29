__int64 __fastcall sub_76D280(__int64 a1)
{
  _DWORD *v1; // rcx
  _DWORD *v2; // rdx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 40);
  v2 = *(_DWORD **)(a1 + 48);
  result = 14;
  if ( v1 )
    result = (*v1 >> 14) & 0x10 | 0xEu;
  if ( v2 )
    return (*v2 >> 14) & 0x1E | (unsigned int)result;
  return result;
}

