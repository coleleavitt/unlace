__int64 __fastcall sub_5A48C0(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax
  __int64 v3; // rbx

  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 72LL);
  if ( (char *)v2 == (char *)sub_5A4890 )
  {
    v3 = sub_186B270(0xA0u);
    sub_5A4550(v3, a1);
  }
  else
  {
    v3 = v2();
  }
  sub_5A3420(v3, a2);
  return v3;
}

