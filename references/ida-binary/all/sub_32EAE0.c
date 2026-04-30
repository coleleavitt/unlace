__int64 __fastcall setup_data_dialog_t__::vfunc_5(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v7; // rax

  switch ( *(_DWORD *)(a2 + 12) )
  {
    case 0:
      v7 = 1024;
      goto LABEL_5;
    case 1:
      v7 = 268436480;
      goto LABEL_5;
    case 2:
      v7 = 536871936;
      goto LABEL_5;
    case 3:
      v7 = 2147484672LL;
      goto LABEL_5;
    case 4:
      v7 = 805307392;
      goto LABEL_5;
    case 5:
      v7 = 2415920128LL;
      goto LABEL_5;
    case 6:
      v7 = 1073742848;
      goto LABEL_5;
    case 7:
      v7 = 2684355584LL;
      goto LABEL_5;
    case 8:
      v7 = 1879049216;
      goto LABEL_5;
    case 9:
      v7 = 3758097408LL;
      goto LABEL_5;
    case 0xA:
      v7 = 4026532864LL;
LABEL_5:
      *(_QWORD *)(a1 + 256) = v7;
      goto LABEL_6;
    default:
      if ( *(_QWORD *)(a1 + 256) == -1 )
        return 0;
LABEL_6:
      callui(203, 1, a1, 1, (unsigned int)&callui, a6);
      return 1;
  }
}
