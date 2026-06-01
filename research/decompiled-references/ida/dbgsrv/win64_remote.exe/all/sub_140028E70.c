/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140028E70
// Address: 0x0000000140028E70

//----- (0000000140028E70) ----------------------------------------------------
__int64 __fastcall sub_140028E70(char *a1, char *a2)
{
  char *v3; // rbx
  int v5; // eax
  __int64 v6; // rax

  v3 = a1;
  if ( a1 == a2 )
    return 0;
  if ( *a1 != 10 || (v3 = sub_1400291D0(a1, 1)) != nullptr )
  {
    sub_140029390((__int64)v3);
    v5 = *a2;
    *v3 = v5;
    switch ( v5 )
    {
      case 2:
      case 8:
      case 9:
        *((_QWORD *)v3 + 1) = *((_QWORD *)a2 + 1);
        return 0;
      case 3:
      case 10:
        *(_OWORD *)(v3 + 8) = *(_OWORD *)(a2 + 8);
        return 0;
      case 5:
        v6 = *((_QWORD *)a2 + 1);
        *((_QWORD *)v3 + 1) = v6;
        ++*(_DWORD *)(v6 + 16);
        return 0;
      case 6:
        *((_DWORD *)v3 + 2) = *((_DWORD *)a2 + 2);
        return 0;
      case 7:
        sub_140003130((_QWORD *)v3 + 1, (__int64)(a2 + 8));
        return 0;
      default:
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(283);
    }
  }
  return sub_140063DE0();
}
// 1400CB61C: using guessed type char byte_1400CB61C;
