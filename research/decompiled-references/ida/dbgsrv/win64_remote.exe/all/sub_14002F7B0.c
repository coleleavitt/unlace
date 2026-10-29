/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002F7B0
// Address: 0x000000014002F7B0

//----- (000000014002F7B0) ----------------------------------------------------
__int64 __fastcall sub_14002F7B0(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned int v4; // ecx
  unsigned int v5; // eax
  _QWORD *v6; // rcx
  char v7; // bl

  v2 = *(_QWORD *)(a1 + 224);
  v3 = *(unsigned int *)(*(_QWORD *)(a1 + 216) + 4 * v2 - 4);
  if ( v2 )
    *(_QWORD *)(a1 + 224) = v2 - 1;
  v4 = *(_DWORD *)(a1 + 200);
  if ( v4 - (_DWORD)v3 == 4 )
  {
    if ( v4 < 5 )
    {
      if ( byte_1400CB61C )
        __debugbreak();
      sub_14005A480(708);
    }
    v5 = v4 - 5;
    v6 = *(_QWORD **)(a1 + 192);
    *(_DWORD *)(a1 + 200) = v5;
    v7 = *(_BYTE *)(v5 + *v6);
    sub_140002EF0((__int64)v6, v5);
    *(_BYTE *)(a1 + 204) = -87;
    if ( v7 == -85 )
    {
      sub_1400347C0(a1, 171);
      sub_1400343E0(a1, 0);
      sub_1400343E0(a1, 0);
      return 0;
    }
    else
    {
      return sub_14002F420(a1);
    }
  }
  else
  {
    sub_14002E390(*(_QWORD **)(a1 + 192), v3, *(_DWORD *)(a1 + 200) - v3 - 4);
    *(_BYTE *)(a1 + 204) = -1;
    return 0;
  }
}
// 1400CB61C: using guessed type char byte_1400CB61C;
