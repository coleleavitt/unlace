unsigned __int64 __fastcall sub_69F680(_QWORD *a1, unsigned int a2)
{
  unsigned int i; // ebx
  unsigned int v4; // [rsp+8h] [rbp-60h] BYREF
  char v5; // [rsp+Ch] [rbp-5Ch]
  __int128 v6; // [rsp+10h] [rbp-58h] BYREF
  void (__fastcall *v7)(__int128 *, __int128 *, __int64); // [rsp+20h] [rbp-48h]
  __int64 v8; // [rsp+28h] [rbp-40h]
  unsigned __int64 v9; // [rsp+38h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v4 = -1;
  v5 = 0;
  sub_3FD660(a1, (__int64)&v4, a2);
  for ( i = v4; v4 != -1; i = v4 )
  {
    if ( sub_3B8910((__int64)a1, i) )
    {
      if ( (sub_3B9AA0((__int64)a1, i, 4) & 0x600) == 0x400 )
      {
        v6 = 0;
        v7 = nullptr;
        v8 = 0;
        sub_3CC010((_DWORD)a1, i, 0);
        if ( v7 )
          v7(&v6, &v6, 3);
      }
    }
    sub_3FD7C0(a1, &v4, a2);
  }
  return v9 - __readfsqword(0x28u);
}

