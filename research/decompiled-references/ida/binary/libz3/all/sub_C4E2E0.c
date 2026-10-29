__int64 __fastcall sub_C4E2E0(__int64 a1)
{
  _BYTE *v1; // rax

  v1 = *(_BYTE **)(*(_QWORD *)(sub_15D1F10(a1) + 24) + 8LL);
  if ( v1[8] )
    sub_A8ADA((__int64)"std::get: wrong index for variant");
  return *(unsigned int *)v1;
}

