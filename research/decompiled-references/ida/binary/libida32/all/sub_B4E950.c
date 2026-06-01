unsigned __int64 __fastcall sub_B4E950(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(sub_B68470(a1) + 16);
  if ( (v1 & 4) != 0 )
    return *(_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF8LL);
  else
    return v1 & 0xFFFFFFFFFFFFFFF8LL;
}

