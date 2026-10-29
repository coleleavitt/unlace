__int64 __fastcall sub_1A0220(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  __int64 v3; // rax
  _QWORD v5[7]; // [rsp+0h] [rbp-38h] BYREF

  v5[5] = __readfsqword(0x28u);
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 240LL);
  if ( v2 )
  {
    v5[1] = 0;
    v5[2] = 0;
    v5[0] = off_236658;
    v5[3] = v2;
    v3 = sub_175F50((__int64)v5, 0, 0);
    v5[0] = &off_236C80;
    LOBYTE(v1) = v3 != 0;
    qsem_free();
  }
  else
  {
    return 0;
  }
  return v1;
}

