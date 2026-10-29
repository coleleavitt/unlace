unsigned __int64 __fastcall sub_718A60(_QWORD *a1, void *a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v6; // r8
  void *v8; // rax

  if ( (a3 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
  {
    v8 = sub_717B10(a1, a2, 0);
    v6 = sub_6CA3C0((__int64)a1, (unsigned __int64)v8, 0, a4, 0);
  }
  else
  {
    v6 = *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] | a3 & 7;
  }
  return sub_6CA3C0((__int64)a1, (unsigned __int64)a2, a3, a4, v6);
}

