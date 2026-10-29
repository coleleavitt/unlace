unsigned __int64 __fastcall sub_14B3A0(__int64 *a1, _DWORD *a2)
{
  _DWORD *v3; // rsi
  __int64 v4; // rax
  __int64 v5; // [rsp+0h] [rbp-58h] BYREF
  __int128 v6; // [rsp+8h] [rbp-50h]
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+28h] [rbp-30h]
  unsigned __int64 v9; // [rsp+38h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( *a2 == -1 )
  {
    v3 = (_DWORD *)*a1;
    if ( (unsigned __int64)a1[2] <= 7 )
    {
      v4 = qvector_reserve();
      *a1 = v4;
      v3 = (_DWORD *)v4;
    }
    a1[1] = 8;
    *v3 = 1769108563;
    *(_DWORD *)((char *)v3 + 3) = 1936158313;
    *(_BYTE *)(*a1 + 7) = 0;
  }
  else
  {
    v5 = 0;
    v6 = 0;
    sub_14B160((__int64)&v5);
    v7 = 0;
    v8 = 0;
    sub_14B160((__int64)&v7);
    sub_94360(a1);
    if ( v7 )
    {
      *(_QWORD *)&v8 = 0;
      qfree();
    }
    if ( v5 )
    {
      *(_QWORD *)&v6 = 0;
      qfree();
    }
  }
  return v9 - __readfsqword(0x28u);
}

