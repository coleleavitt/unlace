/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47C4E9
// Address: 0x0047C4E9

//----- (0047C4E9) --------------------------------------------------------
int *__cdecl sub_47C4E9(int *a1)
{
  int *v1; // edi
  int *v2; // ebx
  int v3; // esi
  int *v5; // [esp+Ch] [ebp-4h]

  v1 = (int *)((char *)lpMem + 12);
  v2 = (int *)((char *)lpMem + 4 * dword_4B78C8);
  v5 = v2;
  while ( 1 )
  {
    if ( v1 == v2 )
      goto LABEL_8;
    v3 = *v1;
    if ( !*v1 )
      break;
    if ( (*(_DWORD *)(v3 + 12) & 0x2000) == 0 )
    {
      sub_469596(*v1);
      v2 = v5;
      if ( (_InterlockedOr((volatile signed __int32 *)(v3 + 12), 0x2000u) & 0x2000) == 0 )
        goto LABEL_9;
      sub_4695AA(v3);
    }
    ++v1;
  }
  *v1 = (int)sub_4791B9(1u, 0x38u);
  sub_479216(nullptr);
  if ( !*v1 )
  {
LABEL_8:
    *a1 = 0;
    return a1;
  }
  *(_DWORD *)(*v1 + 16) = -1;
  sub_47901F((LPCRITICAL_SECTION)(*v1 + 32), 0xFA0u, 0);
  v3 = *v1;
  _InterlockedOr((volatile signed __int32 *)(*v1 + 12), 0x2000u);
  sub_469596(v3);
LABEL_9:
  *a1 = v3;
  return a1;
}
// 4B78C8: using guessed type int dword_4B78C8;
