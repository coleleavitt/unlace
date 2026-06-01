__int64 __fastcall sub_193B40(__int64 a1, __int64 a2)
{
  void (*v2)(void); // rax
  __int64 v3; // r13
  __int64 v4; // rbx
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 i; // rsi
  __int64 v10; // rax

  while ( 1 )
  {
    v2 = *(void (**)(void))(*(_QWORD *)a1 + 392LL);
    if ( v2 != nullsub_121 )
      v2();
    if ( a2 == -2 )
      break;
    if ( under_debugger )
      BUG();
    interr();
    a1 = 40659;
  }
  v3 = (int)sub_193920(a1);
  v4 = operator new(0x20u);
  *(_QWORD *)v4 = &off_23C2A8;
  *(_QWORD *)(v4 + 8) = 0;
  *(_OWORD *)(v4 + 16) = 0;
  if ( v3 )
  {
    v6 = 0;
    v7 = qvector_reserve();
    v8 = *(_QWORD *)(v4 + 16);
    *(_QWORD *)(v4 + 8) = v7;
    for ( i = v7; ; i = *(_QWORD *)(v4 + 8) )
    {
      if ( *(_QWORD *)(v4 + 24) < (unsigned __int64)(v8 + 1) )
      {
        v10 = qvector_reserve();
        v8 = *(_QWORD *)(v4 + 16);
        *(_QWORD *)(v4 + 8) = v10;
        i = v10;
      }
      *(_QWORD *)(i + 8 * v8) = v6++;
      v8 = *(_QWORD *)(v4 + 16) + 1LL;
      *(_QWORD *)(v4 + 16) = v8;
      if ( v6 == v3 )
        break;
    }
  }
  return v4;
}

