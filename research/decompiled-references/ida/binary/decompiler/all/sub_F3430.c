unsigned __int64 __fastcall sub_F3430(__int64 *a1, __int64 *a2, __int64 a3, _QWORD *a4, _QWORD *a5, char a6)
{
  __int64 i; // rbp
  __int64 j; // r14
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rax
  int v17; // [rsp+1Ch] [rbp-8Ch]
  int v18; // [rsp+20h] [rbp-88h]
  int v22; // [rsp+3Ch] [rbp-6Ch]
  char v23[8]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v24; // [rsp+50h] [rbp-58h] BYREF
  __int64 v25; // [rsp+58h] [rbp-50h]
  unsigned __int64 v26; // [rsp+68h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  if ( a6 )
  {
    v17 = 8;
    v22 = 4;
  }
  else
  {
    v22 = 1;
    v17 = *(_DWORD *)(a3 + 80);
  }
  for ( i = a4[1]; i; --i )
  {
    if ( sub_64030(a5, *(_DWORD *)(*a4 + 4 * (i - 1))) )
    {
      for ( j = 0; j != i; ++j )
      {
        v18 = *(_DWORD *)(*a4 + 4 * j);
        v14 = sub_642A0(a5, v18);
        v15 = v22;
        v24 = 0;
        v25 = 0;
        if ( v22 < v14 )
          v15 = v14;
        if ( !v14 )
          v15 = v17;
        cleanup_argloc();
        LODWORD(v24) = 3;
        LODWORD(v25) = v18;
        if ( v17 <= (int)v15 )
          v15 = v17;
        if ( a6 )
          sub_328D00(v23, a3, v15);
        else
          sub_328E20(v23, a3, v15);
        if ( !v23[0] )
        {
          if ( !under_debugger )
            sub_37EA20(52855);
          BUG();
        }
        v11 = a1[1];
        v12 = *a1;
        if ( a1[2] < (unsigned __int64)(v11 + 1) )
        {
          v16 = qvector_reserve();
          *a1 = v16;
          v12 = v16;
          v11 = a1[1];
        }
        v13 = v12 + 144 * v11;
        *(_QWORD *)(v13 + 16) = 0;
        *(_QWORD *)(v13 + 112) = 1;
        *(_QWORD *)(v13 + 40) = 0;
        *(_DWORD *)(v13 + 120) = -1;
        *(_QWORD *)(v13 + 128) = 0;
        *(_BYTE *)(v13 + 136) = 0;
        *(_OWORD *)v13 = 0;
        *(_OWORD *)(v13 + 24) = 0;
        *(_OWORD *)(v13 + 48) = 0;
        *(_OWORD *)(v13 + 64) = 0;
        ++a1[1];
        sub_6AEF0((__int64 *)(v13 + 16));
        copy_tinfo_t();
        if ( a2 )
          sub_D5500(a2, (__int64)&v24, v15);
        clear_tinfo_t();
        cleanup_argloc();
      }
      return v26 - __readfsqword(0x28u);
    }
  }
  return v26 - __readfsqword(0x28u);
}
