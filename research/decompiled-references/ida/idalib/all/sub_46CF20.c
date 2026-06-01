unsigned __int64 __fastcall sub_46CF20(_QWORD *a1, unsigned __int64 a2, char a3)
{
  __int64 v3; // rax

  if ( a3 && (sub_3BE900(a1, a2, 4) & 0x400) == 0 )
  {
    v3 = sub_46CB10(a1, a2, 1u, 0xFFFFFFFFFFFFFFFFLL);
    if ( v3 == -1 )
      v3 = sub_3BD420((__int64)a1, -1) + 1;
  }
  else
  {
    v3 = sub_3C1F00(a1, a2);
  }
  return v3 - a2;
}
