/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A494
// Address: 0x0008A494

//----- (0008A494) --------------------------------------------------------
int __fastcall sub_8A494(_DWORD *a1)
{
  int result; // r0
  void (__fastcall *v3)(_DWORD, _DWORD *); // r3
  _DWORD *v4; // r1

  result = -2;
  if ( a1 )
  {
    if ( a1[8] )
    {
      v3 = (void (__fastcall *)(_DWORD, _DWORD *))a1[9];
      if ( v3 )
      {
        v4 = (_DWORD *)a1[7];
        if ( v4 )
        {
          if ( (_DWORD *)*v4 == a1 && (unsigned int)(v4[1] - 16180) <= 0x1F )
          {
            if ( v4[14] )
            {
              v3(a1[10], (_DWORD *)v4[14]);
              v4 = (_DWORD *)a1[7];
              v3 = (void (__fastcall *)(_DWORD, _DWORD *))a1[9];
            }
            v3(a1[10], v4);
            a1[7] = 0;
            return 0;
          }
        }
      }
    }
  }
  return result;
}
