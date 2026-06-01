/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40EA80
// Address: 0x0040EA80

//----- (0040EA80) --------------------------------------------------------
int __userpurge sub_40EA80@<eax>(__m128i a1@<xmm0>, _DWORD *a2, int *a3, int a4)
{
  int *v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  bool v8; // cc

  if ( !a2[50] && (a2[84] & 0x80000) != 0 && !sub_455100() )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(30191);
  }
  sub_40CD70((int)a2, a1);
  v4 = sub_4017B0();
  if ( a3 )
  {
    v5 = *v4;
    v6 = v4[1];
    *a3 = v5;
    a3[1] = v6;
  }
  sub_415BB0(a2);
  (*(void (__thiscall **)(_DWORD *))(*a2 + 292))(a2);
  if ( a2[80] == -1 || a2[81] == -1 )
    goto LABEL_12;
  v7 = a2[67];
  v8 = v7 <= 0;
  if ( !v7 )
    v8 = a2[79] <= 0;
  if ( v8 )
  {
LABEL_12:
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(30016);
  }
  nullsub_1(1);
  return 1;
}
// 4015F0: using guessed type int __cdecl nullsub_1(_DWORD);
// 4B70F0: using guessed type char byte_4B70F0;
