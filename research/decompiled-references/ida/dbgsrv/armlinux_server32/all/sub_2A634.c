/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2A634
// Address: 0x0002A634

//----- (0002A634) --------------------------------------------------------
bool __fastcall sub_2A634(signed int *a1, int a2)
{
  return sub_2A420((int)a1, (void *)a2, 4, 1) >= 0
      && sub_2A420((int)a1, (void *)(a2 + 4), 4, 1) >= 0
      && sub_2A420((int)a1, (void *)(a2 + 8), a1[86], 1) >= 0
      && sub_2A420((int)a1, (void *)(a2 + 16), a1[84], 1) >= 0
      && sub_2A420((int)a1, (void *)(a2 + 24), a1[85], 1) >= 0
      && sub_2A420((int)a1, (void *)(a2 + 32), a1[86], 1) >= 0
      && sub_2A420((int)a1, (void *)(a2 + 40), 4, 1) >= 0
      && sub_2A420((int)a1, (void *)(a2 + 44), 4, 1) >= 0
      && sub_2A420((int)a1, (void *)(a2 + 48), a1[86], 1) >= 0
      && sub_2A420((int)a1, (void *)(a2 + 56), a1[86], 1) >= 0;
}
