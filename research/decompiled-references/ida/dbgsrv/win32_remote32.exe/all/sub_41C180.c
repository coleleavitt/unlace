/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41C180
// Address: 0x0041C180

//----- (0041C180) --------------------------------------------------------
_DWORD *__thiscall sub_41C180(_DWORD *this, int a2, int a3)
{
  _DWORD *result; // eax
  _DWORD *v5; // edi
  _DWORD *v6; // [esp+1Ch] [ebp-10h]

  result = (_DWORD *)*this;
  v6 = (_DWORD *)*this;
  if ( !*(_BYTE *)(a2 + 13) )
  {
    v5 = sub_4627C2(0x38u);
    sub_41C6D0((int)this, (int)(v5 + 4), (unsigned int *)(a2 + 16));
    *v5 = v6;
    v5[2] = v6;
    *((_WORD *)v5 + 6) = 0;
    v5[1] = a3;
    *((_BYTE *)v5 + 12) = *(_BYTE *)(a2 + 12);
    *v5 = sub_41C180(*(_DWORD *)a2, v5);
    v5[2] = sub_41C180(*(_DWORD *)(a2 + 8), v5);
    return v5;
  }
  return result;
}
