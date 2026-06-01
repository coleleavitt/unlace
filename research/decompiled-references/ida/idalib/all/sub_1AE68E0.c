char __fastcall sub_1AE68E0(int **a1, int a2)
{
  char result; // al

  result = sub_FFE8A0(a2);
  if ( result )
    **a1 = a2;
  return result;
}
