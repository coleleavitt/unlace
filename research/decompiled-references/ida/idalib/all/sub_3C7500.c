__int64 __fastcall sub_3C7500(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  _QWORD v8[2]; // [rsp+0h] [rbp-48h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  if ( !a4 || a2 >= a3 )
    return 0;
  sub_506C90(a1 + 1320, a2, a3, 1);
  v8[1] = a3;
  v8[0] = a2;
  ptr = (void *)qstrdup(a4);
  v6 = sub_505940(a1 + 1320, v8);
  if ( !(_BYTE)v6 )
  {
    qfree(ptr);
    return 0;
  }
  sub_504B40(a1 + 1320);
  return v6;
}
