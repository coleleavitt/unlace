/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_24DC8
// Address: 0x00024DC8

//----- (00024DC8) --------------------------------------------------------
int __fastcall sub_24DC8(_DWORD *a1, _DWORD *a2)
{
  int v4; // r0

  (*(void (__fastcall **)(_DWORD *))(*a1 + 56))(a1);
  if ( a2 )
  {
    *a2 = 0;
    a2[1] = 5;
  }
  sub_1B866(a1);
  (*(void (__fastcall **)(_DWORD *))(*a1 + 296))(a1);
  if ( a1[84] == -1 || a1[85] == -1 )
    goto LABEL_9;
  v4 = a1[71];
  if ( !v4 )
    v4 = a1[83];
  if ( v4 <= 0 )
  {
LABEL_9:
    if ( !under_debugger )
      interr(30016);
    __debugbreak();
  }
  nullsub_2(1);
  return 1;
}
// 67518: using guessed type int __fastcall nullsub_2(_DWORD);
// E0550: using guessed type char under_debugger;
