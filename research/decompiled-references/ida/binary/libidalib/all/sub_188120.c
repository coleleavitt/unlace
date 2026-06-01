__int64 __fastcall sub_188120(__int64 a1, int a2, unsigned __int16 *a3)
{
  unsigned int *v4; // rax
  char v6; // [rsp+Fh] [rbp-29h] BYREF
  __int64 v7[5]; // [rsp+10h] [rbp-28h] BYREF

  v7[1] = __readfsqword(0x28u);
  v4 = (unsigned int *)sub_184EF0(a1, a2, &v6, v7);
  if ( v4 )
    return sub_187DD0(*(__int64 **)(a1 + 8), v4, v6, a3, v7[0]);
  else
    return 0;
}

