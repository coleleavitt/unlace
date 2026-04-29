unsigned __int64 __fastcall sub_D3E00(__int64 *a1, __int64 *a2, __int64 a3, _QWORD *a4, _QWORD *a5, char a6)
{
  unsigned int v9; // r15d
  __int64 i; // rbx
  __int64 j; // r13
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rdi
  unsigned int v19; // eax
  __int64 v20; // rax
  unsigned int v21; // [rsp+1Ch] [rbp-8Ch]
  __int64 v22; // [rsp+20h] [rbp-88h]
  int v23; // [rsp+20h] [rbp-88h]
  int v27; // [rsp+3Ch] [rbp-6Ch]
  char v28[8]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v29; // [rsp+50h] [rbp-58h] BYREF
  __int64 v30; // [rsp+58h] [rbp-50h]
  unsigned __int64 v31; // [rsp+68h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  if ( a6 )
  {
    v27 = 4;
    v9 = 8;
  }
  else
  {
    v27 = 1;
    v9 = *(_DWORD *)(a3 + 80);
  }
  for ( i = a4[1]; i; --i )
  {
    if ( sub_60EF0(a5, *(_DWORD *)(*a4 + 4 * (i - 1))) )
    {
      for ( j = 0; j != i; ++j )
      {
        v23 = *(_DWORD *)(*a4 + 4 * j);
        v17 = sub_61160(a5, v23);
        v18 = (unsigned int)v27;
        if ( v27 < v17 )
          v18 = (unsigned int)v17;
        if ( (int)v18 > (int)v9 )
          v18 = v9;
        if ( !v17 )
          v18 = v9;
        v19 = sub_119050(v18);
        v29 = 0;
        v21 = v19;
        v30 = 0;
        cleanup_argloc(&v29);
        LODWORD(v29) = 3;
        LODWORD(v30) = v23;
        if ( a6 )
          sub_327E20(v28, a3, v21);
        else
          sub_327F40(v28, a3, v21);
        if ( !v28[0] )
        {
          if ( !under_debugger )
            sub_37EEE0(52855);
          BUG();
        }
        v13 = a1[1];
        v14 = *a1;
        if ( a1[2] < (unsigned __int64)(v13 + 1) )
        {
          v20 = qvector_reserve(a1, v14, v13 + 1, 144);
          *a1 = v20;
          v14 = v20;
          v13 = a1[1];
        }
        v15 = v14 + 144 * v13;
        *(_QWORD *)(v15 + 16) = 0;
        *(_QWORD *)(v15 + 112) = 1;
        *(_QWORD *)(v15 + 40) = 0;
        *(_DWORD *)(v15 + 120) = -1;
        *(_QWORD *)(v15 + 128) = 0;
        *(_BYTE *)(v15 + 136) = 0;
        *(_OWORD *)v15 = 0;
        *(_OWORD *)(v15 + 24) = 0;
        *(_OWORD *)(v15 + 48) = 0;
        *(_OWORD *)(v15 + 64) = 0;
        v16 = a1[1];
        v22 = v15;
        a1[1] = v16 + 1;
        sub_67E30((__int64 *)(v15 + 16), (__int64)"_r%zu", v16);
        copy_tinfo_t(v22 + 64, v28);
        if ( a2 )
          sub_CC750(a2, (__int64)&v29, v21);
        clear_tinfo_t(v28);
        cleanup_argloc(&v29);
      }
      return v31 - __readfsqword(0x28u);
    }
  }
  return v31 - __readfsqword(0x28u);
}
