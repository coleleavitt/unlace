__int64 __fastcall is_ea_tryblks(unsigned __int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v5; // [rsp+10h] [rbp-38h]
  __int64 v6; // [rsp+20h] [rbp-28h]
  int v7; // [rsp+28h] [rbp-20h]
  unsigned __int64 v8; // [rsp+38h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v7 = -1;
  *(_OWORD *)ptr = 0;
  v6 = 0;
  v5 = 0;
  v2 = sub_69EF00(qword_2CCB598, (__int64 *)ptr, a1, a2, 0);
  if ( ptr[1] )
  {
    *(_QWORD *)&v5 = 0;
    qfree(ptr[1]);
  }
  return v2;
}
