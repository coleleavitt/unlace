void __fastcall sub_54C100(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15

  v5 = ((((__int64)&a2[-a1] >> 7) + 1) / 2) << 7;
  if ( (((__int64)&a2[-a1] >> 7) + 1) / 2 <= a4 )
  {
    sub_54A390(a1, (char *)(a1 + v5), a2, a3);
  }
  else
  {
    sub_54C100(a1, a1 + v5, a3);
    sub_54C100(a1 + v5, a2, a3);
    sub_54B390(a1, (_QWORD *)(a1 + v5), (__int64)a2, v5 >> 7, (__int64)&a2[-a1 - v5] >> 7, a3, a4);
  }
}

