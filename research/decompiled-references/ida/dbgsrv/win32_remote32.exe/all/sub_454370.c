/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_454370
// Address: 0x00454370

//----- (00454370) --------------------------------------------------------
_DWORD *__userpurge sub_454370@<eax>(int *a1@<ecx>, __m128i a2@<xmm0>, _DWORD *a3, unsigned __int16 **a4)
{
  int v4; // eax
  int *v5; // esi
  bool v6; // zf
  unsigned __int16 *v7; // ecx
  unsigned __int16 *v8; // eax
  int v9; // eax

  v4 = *a1;
  v5 = *(int **)(*a1 + 4);
  *a3 = v5;
  v6 = *((_BYTE *)v5 + 13) == 0;
  a3[1] = 0;
  a3[2] = v4;
  if ( v6 )
  {
    do
    {
      v6 = a4[1] == nullptr;
      v7 = (unsigned __int16 *)&dword_48A0F4;
      *a3 = v5;
      if ( !v6 )
        v7 = *a4;
      v8 = (unsigned __int16 *)&dword_48A0F4;
      if ( v5[5] )
        v8 = (unsigned __int16 *)v5[4];
      if ( sub_47213D((int)a4, (int)a3, a2, v8, v7) >= 0 )
      {
        a3[2] = v5;
        v9 = 1;
        v5 = (int *)*v5;
      }
      else
      {
        v5 = (int *)v5[2];
        v9 = 0;
      }
      a3[1] = v9;
    }
    while ( !*((_BYTE *)v5 + 13) );
  }
  return a3;
}
// 48A0F4: using guessed type int dword_48A0F4;
