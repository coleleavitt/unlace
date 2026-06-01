__int64 __fastcall sub_67EC60(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // ebx
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v6; // [rsp+10h] [rbp-38h]
  __int64 v7; // [rsp+20h] [rbp-28h]
  int v8; // [rsp+28h] [rbp-20h]
  unsigned __int64 v9; // [rsp+38h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  *(_OWORD *)ptr = 0;
  v7 = 0;
  v8 = -1;
  v6 = 0;
  v3 = sub_67E800(a1, (__int64 *)ptr, a2, a3, 0);
  if ( ptr[1] )
  {
    *(_QWORD *)&v6 = 0;
    qfree(ptr[1]);
  }
  return v3;
}

