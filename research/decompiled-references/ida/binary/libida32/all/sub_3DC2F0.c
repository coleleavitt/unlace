__int64 __fastcall sub_3DC2F0(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // zf
  _QWORD *v4; // rdi
  int v6; // [rsp+0h] [rbp-18h] BYREF
  char v7; // [rsp+4h] [rbp-14h]
  unsigned __int64 v8; // [rsp+8h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v3 = *(_BYTE *)(a1 + 72) == 100;
  v6 = -1;
  v7 = 0;
  v4 = *(_QWORD **)(a2 + 1480);
  if ( v3 )
    return sub_3FC530(v4, &v6);
  else
    return sub_3DC190(v4, (__int64)&v6, a3);
}

