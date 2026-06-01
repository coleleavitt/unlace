__int64 __fastcall sub_6ABAB0(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rdx
  _QWORD v7[3]; // [rsp+0h] [rbp-88h] BYREF
  unsigned int v8; // [rsp+18h] [rbp-70h]
  __int64 v9; // [rsp+20h] [rbp-68h] BYREF
  void *v10; // [rsp+28h] [rbp-60h]
  __int128 v11; // [rsp+30h] [rbp-58h]
  void *ptr; // [rsp+40h] [rbp-48h]
  __int128 v13; // [rsp+48h] [rbp-40h]
  int v14; // [rsp+58h] [rbp-30h]
  unsigned __int64 v15; // [rsp+68h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  v7[2] = a2;
  v7[0] = off_2B37A78;
  v7[1] = 4;
  v8 = 0;
  v9 = 0;
  v10 = nullptr;
  v14 = 0;
  ptr = nullptr;
  v11 = 0;
  v13 = 0;
  if ( (unsigned int)visit_subtypes((int)v7, (int)&v9, (int)a3, 0, 0) )
  {
    v4 = -1;
  }
  else
  {
    if ( (v14 & 1) != 0 )
    {
      v6 = v9;
      v9 = *a3;
      *a3 = v6;
    }
    v4 = v8;
  }
  if ( ptr )
  {
    *(_QWORD *)&v13 = 0;
    qfree(ptr);
  }
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10);
  }
  clear_tinfo_t(&v9);
  return v4;
}
