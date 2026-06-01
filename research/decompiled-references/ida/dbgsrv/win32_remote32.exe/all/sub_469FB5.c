/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_469FB5
// Address: 0x00469FB5

//----- (00469FB5) --------------------------------------------------------
char __thiscall sub_469FB5(int **this, unsigned int *a2)
{
  int *v3; // esi
  int v4; // ebx
  int v5; // eax
  int *v6; // eax
  char result; // al
  unsigned __int8 *v8; // [esp+Ch] [ebp-4h] BYREF

  v3 = *(this + 3);
  if ( !v3 )
  {
    v3 = sub_46B984();
    *(this + 3) = v3;
  }
  v4 = *v3;
  *v3 = 0;
  v5 = (int)*(this + 4);
  v8 = nullptr;
  *a2 = sub_46BDFC(&v8, v4, (int)this, v5 - 1, &v8, 10);
  v6 = *(this + 3);
  if ( !v6 )
  {
    v6 = sub_46B984();
    *(this + 3) = v6;
  }
  if ( *v6 == 34 || v8 < (unsigned __int8 *)*(this + 4) )
  {
    result = 0;
  }
  else
  {
    *(this + 4) = (int *)v8;
    result = 1;
  }
  if ( !*v3 )
  {
    if ( v4 )
      *v3 = v4;
  }
  return result;
}
