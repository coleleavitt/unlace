/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_462FA0
// Address: 0x00462FA0

//----- (00462FA0) --------------------------------------------------------
int __usercall sub_462FA0@<eax>(char a1@<bl>, int a2@<edi>, int a3@<esi>, __m128i a4@<xmm0>)
{
  int *v5; // eax
  int *v6; // esi
  int *v7; // eax
  int *v8; // esi
  const char **v9; // esi
  int *v10; // eax
  char v11; // [esp+10h] [ebp-24h]
  UINT v12; // [esp+14h] [ebp-20h]

  if ( !sub_462882(1) || (a1 = 0, v11 = sub_462850(), dword_4B74FC == 1) )
  {
    sub_4639C5(a1, a2, a3, 7u);
    goto LABEL_20;
  }
  if ( dword_4B74FC )
  {
    a1 = 1;
  }
  else
  {
    dword_4B74FC = 1;
    if ( sub_477C25(&dword_489334, dword_489354) )
      return 255;
    sub_477BE0(&dword_4892E0, (unsigned int)&dword_489330);
    dword_4B74FC = 2;
  }
  sub_4629D9(v11);
  v5 = sub_463CC9();
  v6 = v5;
  if ( *v5 && sub_462942((int)v5) )
    ((void (__thiscall *)(int, _DWORD, int, _DWORD))*v6)(*v6, 0, 2, 0);
  v7 = sub_463CCF();
  v8 = v7;
  if ( *v7 && sub_462942((int)v7) )
    sub_46BC6F(a1, nullptr, *v8);
  sub_476F9E(a1, nullptr, v8);
  v9 = (const char **)*sub_477DAB();
  v10 = sub_477DA5();
  a3 = sub_439ED0(a1, a4, *v10, v9);
  if ( !sub_463ADF() )
  {
LABEL_20:
    sub_46BC95(a3);
    sub_46BC59(v12);
    __debugbreak();
  }
  if ( !a1 )
    sub_46BC4A();
  sub_4629F6(1, 0);
  return a3;
}
// 46311F: variable 'v12' is possibly undefined
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);
// 4892E0: using guessed type int dword_4892E0;
// 489330: using guessed type int dword_489330;
// 489334: using guessed type int dword_489334;
// 489354: using guessed type int dword_489354[2];
// 4B74FC: using guessed type int dword_4B74FC;
