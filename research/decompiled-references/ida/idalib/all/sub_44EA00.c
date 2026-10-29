unsigned __int64 __fastcall sub_44EA00(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v5; // eax
  int v6; // ecx
  __int64 v7; // r13
  int v8; // ebx
  int v9; // edx
  int v10; // r15d
  int v11; // r14d
  unsigned __int64 v12; // rdx
  int v13; // [rsp+Ch] [rbp-6Ch]
  _QWORD v14[3]; // [rsp+10h] [rbp-68h] BYREF
  int v15; // [rsp+28h] [rbp-50h]
  unsigned __int64 v16; // [rsp+38h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a3 + 32) == -1 )
  {
    if ( !under_debugger )
      interr(95);
    BUG();
  }
  if ( (*(_BYTE *)(a3 + 1) & 0x40) != 0 )
  {
    if ( sub_3792E0(0x2Au) != 1 )
      sub_378C70((__int64)"bad response from processor_t::create_switch_xrefs");
  }
  else
  {
    v14[1] = -1;
    v14[0] = &off_2B289C8;
    v14[2] = a1;
    v15 = 19;
    sub_44E140(a1, a2, a3, (__int64)v14, 1);
    v5 = *(_DWORD *)a3;
    if ( (*(_DWORD *)a3 & 0x20) != 0 )
    {
      sub_3E2180(a1, a2, *(_QWORD *)(a3 + 24), 0x13u);
      v5 = *(_DWORD *)a3;
    }
    if ( ((v5 & 0x4000) == 0 || (v5 & 0x80000) != 0) && (v5 & 0x400000) != 0 && (v5 & 0x180) == 0 )
    {
      v6 = *(unsigned __int16 *)(a3 + 4);
      v7 = *(_QWORD *)(a3 + 8);
      v8 = 2;
      v13 = v6;
      v9 = v5 & 0x404;
      if ( (v5 & 0x404) != 0 )
      {
        if ( v9 == 4 )
        {
          v8 = 4;
        }
        else
        {
          v8 = 1;
          if ( v9 != 1024 )
            v8 = 8;
        }
      }
      v10 = -((v5 >> 5) & 1);
      if ( v6 > v10 )
      {
        v11 = v8 * v10;
        do
        {
          v12 = v7 + v11;
          ++v10;
          v11 += v8;
          sub_3E2180(a1, a2, v12, 0x13u);
        }
        while ( v13 != v10 );
      }
    }
  }
  return v16 - __readfsqword(0x28u);
}
