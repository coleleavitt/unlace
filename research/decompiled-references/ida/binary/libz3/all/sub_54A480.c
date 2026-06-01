__int64 __fastcall sub_54A480(_BYTE *a1)
{
  unsigned __int8 (*v1)(void); // rax

  v1 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 24LL);
  if ( (char *)v1 == (char *)sub_54A3A0 )
    return a1[28] ^ 1u;
  else
    return v1() ^ 1u;
}

