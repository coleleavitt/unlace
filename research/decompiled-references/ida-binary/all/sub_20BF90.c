__int64 __fastcall tr_chooser_t__::vfunc_14(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *v4; // rax

  if ( a2 >= 0 )
  {
    v2 = *(_QWORD **)(a1 + 232);
    if ( *(_BYTE *)(a1 + 224) )
    {
      v4 = *(_QWORD **)(a1 + 184);
      a2 = ((__int64)(v4[10] - v4[8]) >> 5)
         + ((__int64)(v4[12] - v4[13]) >> 5)
         + 16 * ((v4[15] == 0) + ((__int64)(v4[15] - v4[11]) >> 3) - 1)
         - 1;
    }
    else
    {
      a2 -= *v2;
      if ( a2 < 0 )
      {
        sub_20B290(dword_8CC428, (_BYTE *)&dword_0 + 1);
        sub_1F9CB0();
        nullsub_70();
        v2 = *(_QWORD **)(a1 + 232);
        a2 = 0;
      }
    }
    *v2 = 0;
  }
  return a2;
}
