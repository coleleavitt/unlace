__int64 __fastcall sub_3C2400(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  unsigned int v6; // ebx
  _DWORD v8[2]; // [rsp+0h] [rbp-48h] BYREF
  void *ptr; // [rsp+8h] [rbp-40h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  if ( !a4 )
    return 0;
  v4 = a3;
  if ( (unsigned int)a2 >= (unsigned int)a3 )
    return 0;
  sub_4EF6E0(a1 + 1288, a2, a3, 1);
  v8[1] = v4;
  v8[0] = a2;
  ptr = (void *)qstrdup(a4);
  v6 = sub_4EE3F0(a1 + 1288, v8);
  if ( !(_BYTE)v6 )
  {
    qfree(ptr);
    return 0;
  }
  sub_4ED600(a1 + 1288);
  return v6;
}

