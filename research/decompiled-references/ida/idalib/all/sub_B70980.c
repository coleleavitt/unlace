__int64 __fastcall sub_B70980(__int64 a1)
{
  _QWORD *v1; // rcx
  __int64 result; // rax
  __int64 v3; // rdx

  v1 = *(_QWORD **)(a1 + 8);
  result = (unsigned int)(**(_DWORD **)a1 + 1);
  **(_DWORD **)a1 = result;
  v3 = **(_QWORD **)(a1 + 16);
  if ( (unsigned int)result >= *(unsigned __int16 *)(v3 + 22) )
  {
    *v1 = 0;
  }
  else
  {
    result = *(_QWORD *)(v3 + 8 * result + 48);
    *v1 = result;
  }
  return result;
}
