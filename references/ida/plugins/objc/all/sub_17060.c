__int64 __fastcall sub_17060(_DWORD *a1, __int64 *a2, __int64 *a3)
{
  unsigned int v4; // eax
  __int64 v5; // r12
  unsigned int v6; // ebx
  const char *v7; // rdi
  _QWORD v9[2]; // [rsp+0h] [rbp-48h] BYREF
  const char *v10; // [rsp+10h] [rbp-38h] BYREF
  __int128 v11; // [rsp+18h] [rbp-30h]
  unsigned __int64 v12; // [rsp+28h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v9[0] = &off_3C6E0;
  v9[1] = 0;
  v10 = 0;
  v11 = 0;
  v4 = sub_16C40((__int64 *)&v10, a2, (__int64)v9, a3);
  v5 = (__int64)v10;
  v6 = v4;
  if ( (_BYTE)v4 && a1 )
  {
    v7 = v10;
    if ( !(_QWORD)v11 )
      v7 = src;
    *a1 = strtol(v7, 0, 10);
  }
  if ( v5 )
    qfree();
  return v6;
}
