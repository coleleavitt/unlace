void __fastcall set_merge_state(int a1)
{
  if ( dword_2CCB838 != a1 )
  {
    if ( (a1 & 0xFFFFFFFB) == 0 )
      sub_457890((__int64)&xmmword_2CCB660);
    dword_2CCB838 = a1;
  }
}
