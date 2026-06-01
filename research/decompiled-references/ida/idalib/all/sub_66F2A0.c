unsigned __int64 __fastcall sub_66F2A0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 *v3; // rbx
  __int64 v4; // r13
  unsigned __int64 v5; // rbp
  __int64 v7; // [rsp+0h] [rbp-48h] BYREF
  char v8; // [rsp+8h] [rbp-40h]
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 8);
  v9 = __readfsqword(0x28u);
  v3 = *(unsigned __int64 **)a2;
  v4 = *(_QWORD *)a2 + 8 * v2;
  if ( v4 != *(_QWORD *)a2 )
  {
    do
    {
      while ( 1 )
      {
        v5 = *v3;
        v8 = 0;
        v7 = -1;
        if ( !(unsigned __int8)sub_3E2000(a1, (__int64)&v7, v5) && !(unsigned __int8)sub_4108F0(a1, (__int64)&v7, v5) )
          break;
        if ( (unsigned __int64 *)v4 == ++v3 )
          return v9 - __readfsqword(0x28u);
      }
      ++v3;
      sub_3D0150((_DWORD)a1, v5);
    }
    while ( (unsigned __int64 *)v4 != v3 );
  }
  return v9 - __readfsqword(0x28u);
}
