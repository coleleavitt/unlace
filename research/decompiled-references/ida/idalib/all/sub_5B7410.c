__int64 __fastcall sub_5B7410(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  unsigned int v5; // ebx
  __int128 v7; // [rsp+0h] [rbp-B8h] BYREF
  void *v8; // [rsp+10h] [rbp-A8h]
  __int128 v9; // [rsp+18h] [rbp-A0h]
  void *ptr; // [rsp+28h] [rbp-90h]
  __int128 v11; // [rsp+30h] [rbp-88h]
  _OWORD v12[3]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v13; // [rsp+70h] [rbp-48h]
  int v14; // [rsp+78h] [rbp-40h]
  __int64 v15; // [rsp+80h] [rbp-38h]
  char v16; // [rsp+88h] [rbp-30h]
  unsigned __int64 v17; // [rsp+98h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  v5 = 0;
  if ( a4 )
  {
    v8 = nullptr;
    ptr = nullptr;
    v13 = 1;
    v14 = -1;
    v15 = 0;
    v16 = 0;
    v7 = 0;
    v9 = 0;
    v11 = 0;
    v12[0] = 0;
    if ( (unsigned int)sub_5B70E0(a1, (__int64)&v7, a3, a4, a5) )
      v5 = -4;
    else
      v5 = set_tinfo_property4(a2, 9, &v7, 1, -1, 0);
    clear_tinfo_t(v12);
    if ( ptr )
    {
      *(_QWORD *)&v11 = 0;
      qfree(ptr);
    }
    if ( v8 )
    {
      *(_QWORD *)&v9 = 0;
      qfree(v8);
    }
  }
  return v5;
}
