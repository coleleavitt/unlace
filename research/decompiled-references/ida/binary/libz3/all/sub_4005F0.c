__int64 __fastcall sub_4005F0(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rbp
  __int64 v4; // r12
  _QWORD *v5; // rax
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 result; // rax

  sub_E31CB0(*(_QWORD *)(a1 + 232));
  sub_E31CB0(*(_QWORD *)(a1 + 240));
  sub_E31CB0(*(_QWORD *)(a1 + 248));
  v2 = *(_QWORD **)(a1 + 264);
  v3 = &v2[2 * *(unsigned int *)(a1 + 272)];
  if ( v2 != v3 )
  {
    while ( *v2 <= 1u )
    {
      v2 += 2;
      if ( v3 == v2 )
        goto LABEL_9;
    }
    while ( v3 != v2 )
    {
      v4 = v2[1];
      nullsub_213(*(_QWORD *)(v4 + 120));
      v5 = v2 + 2;
      *(_QWORD *)(v4 + 344) = 0;
      *(_QWORD *)(v4 + 360) = 0;
      *(_QWORD *)(v4 + 384) = 0;
      *(_QWORD *)(v4 + 408) = 0;
      *(_QWORD *)(v4 + 432) = 0;
      *(_OWORD *)(v4 + 328) = 0;
      if ( v3 == v2 + 2 )
        break;
      while ( 1 )
      {
        v2 = v5;
        if ( *v5 > 1u )
          break;
        v5 += 2;
        if ( v3 == v5 )
          goto LABEL_9;
      }
    }
  }
LABEL_9:
  v6 = *(_DWORD *)(a1 + 384);
  *(_OWORD *)(a1 + 592) = 0;
  *(_OWORD *)(a1 + 544) = 0;
  *(_OWORD *)(a1 + 560) = 0;
  *(_OWORD *)(a1 + 576) = 0;
  *(_OWORD *)(a1 + 604) = 0;
  if ( v6 )
  {
    v7 = 0;
    do
    {
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8 * v7++);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
    }
    while ( (unsigned int)v7 < *(_DWORD *)(a1 + 384) );
  }
  result = *(_QWORD *)(a1 + 536);
  *(_DWORD *)result = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  return result;
}

