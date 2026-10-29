unsigned __int64 __fastcall sub_43AB80(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // r14d
  int v8; // r13d
  int v9; // edx
  int v10; // ebx
  unsigned int v11; // r15d
  int *v12; // [rsp+0h] [rbp-68h] BYREF
  int v13; // [rsp+8h] [rbp-60h]
  _QWORD *v14; // [rsp+10h] [rbp-58h]
  int v15; // [rsp+18h] [rbp-50h]
  unsigned __int64 v16; // [rsp+28h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a3 + 20) == -1 )
  {
    if ( !under_debugger )
      interr(95);
    BUG();
  }
  if ( (*(_BYTE *)(a3 + 1) & 0x40) != 0 )
  {
    if ( sub_375980(0x2Au) != 1 )
      sub_375320((__int64)"bad response from processor_t::create_switch_xrefs");
  }
  else
  {
    v13 = -1;
    v12 = &off_2AFEA08;
    v14 = a1;
    v15 = 19;
    sub_43A340(a1, a2, a3, (__int64)&v12, 1);
    v5 = *(_DWORD *)a3;
    if ( (*(_DWORD *)a3 & 0x20) != 0 )
    {
      sub_3DC640(a1, a2, *(_DWORD *)(a3 + 16), 0x13u);
      v5 = *(_DWORD *)a3;
    }
    if ( ((v5 & 0x4000) == 0 || (v5 & 0x80000) != 0) && (v5 & 0x400000) != 0 && (v5 & 0x180) == 0 )
    {
      v6 = *(_DWORD *)(a3 + 8);
      v7 = *(unsigned __int16 *)(a3 + 4);
      v8 = 2;
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
      if ( v7 > v10 )
      {
        v11 = v6 + v8 * v10;
        do
        {
          sub_3DC640(a1, a2, v11, 0x13u);
          ++v10;
          v11 += v8;
        }
        while ( v7 != v10 );
      }
    }
  }
  return v16 - __readfsqword(0x28u);
}

