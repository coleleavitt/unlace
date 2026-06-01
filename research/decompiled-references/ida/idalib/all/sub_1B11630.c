unsigned __int64 __fastcall sub_1B11630(__int64 *a1, unsigned __int64 a2, int a3, int a4, int a5, __m128 a6, __m128 a7)
{
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // r9

  v10 = a2;
  if ( !a2 )
    goto LABEL_4;
  v11 = sub_1B11600(a1, a2, 0x4Fu, 1, 0, a6, a7);
  if ( v11 != 1 )
  {
    v10 = v11 & 0xFFFFFFFFFFFFFFFELL;
LABEL_4:
    v12 = (_QWORD *)sub_168B6C0((__int64)a1);
    return sub_EBFCB0(v12, a3, a4, a5, v10, v13);
  }
  return 0;
}
