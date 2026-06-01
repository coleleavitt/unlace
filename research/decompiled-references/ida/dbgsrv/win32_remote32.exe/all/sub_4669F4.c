/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4669F4
// Address: 0x004669F4

//----- (004669F4) --------------------------------------------------------
int __cdecl sub_4669F4(int a1, int *a2, int *a3, int a4)
{
  int v4; // edi
  int v5; // eax
  int result; // eax
  int v7; // eax
  int v8; // eax

  if ( *a3 >= 0 )
    v4 = (int)a2 + a3[2] + 12;
  else
    v4 = (int)a2;
  v5 = sub_4668B6(a1, a2, a3, (int *)a4) - 1;
  if ( v5 )
  {
    result = v5 - 1;
    if ( !result )
    {
      v7 = sub_463E90(*(_DWORD *)(a1 + 24), (_DWORD *)(a4 + 8));
      return sub_4675E6(v4, *(int (__thiscall **)(int, int, int))(a4 + 24), v7, 1);
    }
  }
  else
  {
    v8 = sub_463E90(*(_DWORD *)(a1 + 24), (_DWORD *)(a4 + 8));
    return sub_4675D6(v4, *(int (__thiscall **)(int, int))(a4 + 24), v8);
  }
  return result;
}
