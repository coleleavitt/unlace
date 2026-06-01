__int64 __fastcall sub_17622A0(__int64 *a1, unsigned __int16 **a2)
{
  __int64 v2; // rax

  v2 = sub_175B800(a1, a2[2]);
  if ( v2 == 1 )
    return 0;
  else
    return sub_1B00B90(
             *(_QWORD *)(*a1 + 760),
             v2 & 0xFFFFFFFFFFFFFFFELL,
             *(unsigned int *)a2,
             *((unsigned int *)a2 + 3),
             *((unsigned int *)a2 + 1));
}
