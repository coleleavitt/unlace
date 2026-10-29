unsigned __int64 __fastcall sub_40E8D0(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v3; // eax
  __int64 v4; // rbx
  _QWORD v5[2]; // [rsp+0h] [rbp-438h] BYREF
  _BYTE v6[1032]; // [rsp+10h] [rbp-428h] BYREF
  unsigned __int64 v7; // [rsp+418h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 72) = 0;
  v1 = sub_6141A0(*(_QWORD *)a1, 70, v6, 1024);
  if ( v1 > 0 )
  {
    v5[0] = v6;
    v5[1] = &v6[v1];
    v3 = unpack_dd(v5);
    if ( v3 > 8 )
      v3 = 8;
    *(_DWORD *)(a1 + 72) = v3;
    if ( 2 * v3 )
    {
      v4 = 0;
      do
        *(_DWORD *)(a1 + 4 * v4++ + 8) = unpack_dd(v5);
      while ( (unsigned int)v4 < 2 * *(_DWORD *)(a1 + 72) );
    }
  }
  return v7 - __readfsqword(0x28u);
}

