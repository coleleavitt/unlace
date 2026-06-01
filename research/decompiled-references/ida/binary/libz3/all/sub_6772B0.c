__int64 __fastcall sub_6772B0(__int64 *a1)
{
  _DWORD *v2; // rbp
  __int64 v4; // rdi

  v2 = (_DWORD *)a1[8];
  if ( v2 )
  {
    if ( v2[4]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *))v2)(v2);
      sub_186B220(v2);
    }
  }
  v4 = a1[7];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  sub_14B63F0(a1 + 5);
  return sub_2334C0(a1 + 2);
}

