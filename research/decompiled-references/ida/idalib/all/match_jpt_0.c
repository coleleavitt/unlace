__int64 __fastcall match_jpt_0(__int64 a1)
{
  bool v2; // zf
  __int64 v3; // rdx
  unsigned __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // r10
  unsigned __int64 v7; // r8
  unsigned __int64 *v8; // rsi
  unsigned __int64 *v9; // r9
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rdx
  _QWORD *v12; // rdi

  *(_QWORD *)(a1 + 536) = 41;
  *(_QWORD *)(a1 + 544) = 0;
  *(_QWORD *)(a1 + 552) = 49;
  *(_QWORD *)(a1 + 560) = 0;
  *(_QWORD *)(a1 + 568) = 57;
  *(_QWORD *)(a1 + 576) = 0;
  *(_QWORD *)(a1 + 584) = 65;
  *(_QWORD *)(a1 + 592) = 0;
  *(_QWORD *)(a1 + 600) = 73;
  *(_QWORD *)(a1 + 608) = 0;
  *(_QWORD *)(a1 + 616) = 81;
  *(_QWORD *)(a1 + 624) = 0;
  *(_QWORD *)(a1 + 632) = 89;
  *(_QWORD *)(a1 + 640) = 0;
  *(_QWORD *)(a1 + 648) = 97;
  *(_QWORD *)(a1 + 656) = 0;
  *(_QWORD *)(a1 + 664) = 105;
  *(_QWORD *)(a1 + 672) = 0;
  *(_QWORD *)(a1 + 680) = 113;
  *(_QWORD *)(a1 + 688) = 0;
  *(_QWORD *)(a1 + 696) = 121;
  *(_QWORD *)(a1 + 704) = 0;
  *(_QWORD *)(a1 + 712) = 129;
  *(_QWORD *)(a1 + 720) = 0;
  *(_QWORD *)(a1 + 728) = 137;
  *(_QWORD *)(a1 + 736) = 0;
  *(_QWORD *)(a1 + 744) = 145;
  *(_QWORD *)(a1 + 752) = 0;
  *(_QWORD *)(a1 + 760) = 153;
  *(_QWORD *)(a1 + 768) = 0;
  *(_QWORD *)(a1 + 776) = 161;
  v2 = *(_QWORD *)(a1 + 872) == 0;
  *(_OWORD *)(a1 + 384) = -1;
  *(_OWORD *)(a1 + 400) = -1;
  *(_OWORD *)(a1 + 416) = -1;
  *(_OWORD *)(a1 + 432) = -1;
  *(_OWORD *)(a1 + 448) = -1;
  *(_OWORD *)(a1 + 464) = -1;
  *(_OWORD *)(a1 + 480) = -1;
  *(_OWORD *)(a1 + 496) = -1;
  *(_QWORD *)(a1 + 784) = 0;
  *(_OWORD *)(a1 + 512) = 0;
  if ( !v2 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      ++v4;
      *(_BYTE *)(*(_QWORD *)(a1 + 864) + v3 + 1) = 0;
      v3 += 40;
    }
    while ( v4 < *(_QWORD *)(a1 + 872) );
  }
  result = sub_4525E0(a1, *(_QWORD *)(a1 + 32), 0);
  if ( (_BYTE)result )
  {
    v6 = *(_QWORD *)(a1 + 376);
    if ( v6 )
    {
      v7 = *(_QWORD *)(a1 + 384);
      v8 = (unsigned __int64 *)(a1 + 392);
      v9 = (unsigned __int64 *)(a1 + 512);
      do
      {
        while ( 1 )
        {
          v10 = *v8;
          if ( *v8 < v7 )
          {
            v11 = *(_QWORD **)(a1 + 816);
            v12 = &v11[*(_QWORD *)(a1 + 824)];
            if ( v11 == v12 )
              break;
            while ( v10 != *v11 )
            {
              if ( v12 == ++v11 )
                goto LABEL_14;
            }
            if ( v12 == v11 )
              break;
          }
          if ( v9 == ++v8 )
            goto LABEL_15;
        }
LABEL_14:
        ++v8;
        v7 = v10;
      }
      while ( v9 != v8 );
LABEL_15:
      *(_QWORD *)(v6 + 32) = v7;
    }
  }
  return result;
}
