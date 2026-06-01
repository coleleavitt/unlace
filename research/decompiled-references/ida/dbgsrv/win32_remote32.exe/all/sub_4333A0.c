/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4333A0
// Address: 0x004333A0

//----- (004333A0) --------------------------------------------------------
_DWORD *__thiscall sub_4333A0(int this)
{
  unsigned int v2; // ecx
  int **v3; // edi
  _DWORD *result; // eax
  int *v5; // [esp+4h] [ebp-4h] BYREF

  v2 = *(_DWORD *)(this + 8);
  if ( v2 )
  {
    v3 = (int **)(this + 4);
    if ( *(_DWORD *)(this + 28) >> 3 <= v2 )
    {
      sub_430300((int)v3, this + 4, *v3);
      **v3 = (int)*v3;
      (*v3)[1] = (int)*v3;
      *(_DWORD *)(this + 8) = 0;
      v5 = *v3;
      return (_DWORD *)sub_408F20(*(int **)(this + 12), *(int **)(this + 16), (int *)&v5);
    }
    else
    {
      return sub_431A00((_DWORD *)this, (_DWORD *)**v3, *v3);
    }
  }
  return result;
}
