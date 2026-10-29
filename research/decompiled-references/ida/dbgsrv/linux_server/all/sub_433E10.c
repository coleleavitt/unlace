/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_433E10
// Address: 0x0000000000433E10

//----- (0000000000433E10) ----------------------------------------------------
__int64 __fastcall sub_433E10(__int64 a1, const char *a2)
{
  unsigned __int64 v2; // rax
  char v4; // r12
  __int64 v5; // rbp
  __int64 v6; // rax
  void *v7; // rsi
  void *v8; // rax
  int v9; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v2 = sub_432EE0((_QWORD *)a1, a2, &v9);
  switch ( v9 )
  {
    case 0:
      sub_479EB0(0x35u);
      goto LABEL_3;
    case 1:
      v4 = -7;
      goto LABEL_7;
    case 2:
      v4 = -8;
      goto LABEL_7;
    case 3:
      v4 = -6;
LABEL_7:
      sub_432650(a1, v2);
      v5 = *(_QWORD *)(a1 + 200);
      v6 = *(_QWORD *)(v5 + 8);
      v7 = *(void **)v5;
      if ( *(_QWORD *)(v5 + 16) < (unsigned __int64)(v6 + 1) )
      {
        v8 = sub_481540(*(_QWORD *)(a1 + 200), v7, v6 + 1, 1u);
        *(_QWORD *)v5 = v8;
        v7 = v8;
        v6 = *(_QWORD *)(v5 + 8);
      }
      *((_BYTE *)v7 + v6) = v4;
      ++*(_QWORD *)(v5 + 8);
      ++*(_DWORD *)(a1 + 208);
      return 0;
    case 6:
      sub_479EB0(0x61Du);
      goto LABEL_3;
    default:
      sub_479EB0(0x61Cu);
LABEL_3:
      sub_479F30(0, a2);
      return sub_479EB0(0x35u);
  }
}
