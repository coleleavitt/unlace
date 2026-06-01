/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140062880
// Address: 0x0000000140062880

//----- (0000000140062880) ----------------------------------------------------
void __fastcall sub_140062880(__int64 a1)
{
  unsigned int v2; // edx
  int v3; // eax
  void *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdi
  void *v7; // rcx

  v2 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
  switch ( v2 )
  {
    case 1u:
    case 8u:
    case 0xBu:
      if ( v2 > 0xB || (v3 = 2306, !_bittest(&v3, v2)) )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(3295);
      }
      goto LABEL_7;
    case 3u:
    case 9u:
    case 0xAu:
      if ( v2 != 3 && v2 - 9 > 1 )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(3297);
      }
LABEL_7:
      v4 = *(void **)(a1 + 24);
      if ( v4 )
      {
        *(_QWORD *)(a1 + 32) = 0;
        j_free(v4);
        *(_QWORD *)(a1 + 24) = 0;
        *(_QWORD *)(a1 + 40) = 0;
      }
      goto LABEL_12;
    case 5u:
      sub_14000E220(a1);
      *(_DWORD *)(a1 + 20) = 0;
      return;
    case 7u:
      v5 = sub_140012670(a1);
      v6 = v5;
      v7 = *(void **)(v5 + 16);
      if ( v7 )
      {
        *(_QWORD *)(v5 + 24) = 0;
        j_free(v7);
        *(_QWORD *)(v6 + 16) = 0;
        *(_QWORD *)(v6 + 32) = 0;
      }
      goto LABEL_12;
    default:
LABEL_12:
      *(_DWORD *)(a1 + 20) = 0;
      return;
  }
}
// 1400CB61C: using guessed type char byte_1400CB61C;
