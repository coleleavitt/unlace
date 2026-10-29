/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71C60
// Address: 0x00071C60

//----- (00071C60) --------------------------------------------------------
int __cdecl sub_71C60(int a1, int a2)
{
  char v2; // cl
  int v3; // edx
  int v4; // edi
  int v5; // ebx
  int v6; // esi
  int result; // eax
  bool v8; // zf
  int v9; // ecx

  v2 = *(_BYTE *)(a2 + 4);
  v3 = *(int *)(a1 + 8) >> v2;
  v4 = *(_DWORD *)(a1 + 8) >> v2;
  v5 = *(_QWORD *)(a1 + 4) >> v2;
  v6 = *(int *)(a1 + 8) >> 31;
  result = 0;
  v8 = (v2 & 0x20) == 0;
  v9 = v5;
  if ( v8 )
    v6 = v3;
  else
    v9 = v3;
  if ( v8 )
    result = v4;
  else
    v5 = v4;
  if ( !*(_BYTE *)a1 )
  {
    v5 = v9;
    result = v6;
  }
  *(_DWORD *)(a1 + 8) = result;
  *(_DWORD *)(a1 + 4) = v5;
  return result;
}
