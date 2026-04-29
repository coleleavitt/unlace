unsigned __int64 __fastcall sub_1EC4A0(__int64 a1)
{
  char v1; // al
  char v3; // al
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // rax
  const char *v7; // rcx
  __int64 v8; // rax
  _QWORD v9[5]; // [rsp+0h] [rbp-68h] BYREF
  char v10; // [rsp+28h] [rbp-40h]
  __int64 v11; // [rsp+30h] [rbp-38h]
  __int128 v12; // [rsp+38h] [rbp-30h]
  unsigned __int64 v13; // [rsp+48h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v1 = *(_BYTE *)(a1 + 753);
  if ( (v1 & 8) == 0 && (*(_BYTE *)(a1 + 754) & 0x10) == 0 && (v1 & 4) == 0 && (*(_BYTE *)(a1 + 754) & 0x20) == 0 )
  {
    v3 = *(_BYTE *)(a1 + 755);
    if ( (v3 & 2) == 0
      && (v3 & 4) == 0
      && (v3 & 8) == 0
      && (*(_BYTE *)(a1 + 756) & 4) == 0
      && (*(_BYTE *)(a1 + 758) & 1) == 0
      && (*(_BYTE *)(a1 + 759) & 2) == 0
      && (*(_BYTE *)(*(_QWORD *)(a1 + 1496) + 613LL) & 4) != 0 )
    {
      v10 = 0;
      v12 = 0;
      memset(&v9[1], 0, 32);
      v9[0] = off_4B26E8;
      v11 = 0;
      sub_11AFF0(a1, (__int64)v9);
      v6 = *(int *)(a1 + 480);
      if ( (_DWORD)v6 != -1 && (*(_BYTE *)(a1 + 5) & 2) != 0 )
      {
        v7 = s1;
        v8 = *(_QWORD *)(a1 + 432) + 104 * v6;
        if ( *(_QWORD *)(v8 + 40) )
          v7 = *(const char **)(v8 + 32);
        sub_32B650(a1, *(_QWORD *)(a1 + 40), 42, (_DWORD)v7, v4, v5);
      }
      v9[0] = off_4B26E8;
      if ( v11 )
      {
        *(_QWORD *)&v12 = 0;
        qfree(v11);
      }
    }
  }
  return v13 - __readfsqword(0x28u);
}
