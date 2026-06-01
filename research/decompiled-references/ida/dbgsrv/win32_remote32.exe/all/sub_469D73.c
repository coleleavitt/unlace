/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_469D73
// Address: 0x00469D73

//----- (00469D73) --------------------------------------------------------
LPVOID *__thiscall sub_469D73(LPVOID *this, LPVOID *a2)
{
  sub_479216(*this);
  *this = nullptr;
  *this = *a2;
  *a2 = nullptr;
  return this;
}
