__int64 __fastcall match_jpt_0(__int64 a1)
{
  bool v2; // zf
  __int64 v3; // rdx
  unsigned __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // r10
  unsigned int v7; // r8d
  unsigned int *v8; // rsi
  unsigned int *v9; // r9
  unsigned int v10; // ecx
  _DWORD *v11; // rdx
  _DWORD *v12; // rdi

  *(_QWORD *)(a1 + 328) = 41;
  *(_QWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 344) = 49;
  *(_QWORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 360) = 57;
  *(_QWORD *)(a1 + 368) = 0;
  *(_QWORD *)(a1 + 376) = 65;
  *(_QWORD *)(a1 + 384) = 0;
  *(_QWORD *)(a1 + 392) = 73;
  *(_QWORD *)(a1 + 400) = 0;
  *(_QWORD *)(a1 + 408) = 81;
  *(_QWORD *)(a1 + 416) = 0;
  *(_QWORD *)(a1 + 424) = 89;
  *(_QWORD *)(a1 + 432) = 0;
  *(_QWORD *)(a1 + 440) = 97;
  *(_QWORD *)(a1 + 448) = 0;
  *(_QWORD *)(a1 + 456) = 105;
  *(_QWORD *)(a1 + 464) = 0;
  *(_QWORD *)(a1 + 472) = 113;
  *(_QWORD *)(a1 + 480) = 0;
  *(_QWORD *)(a1 + 488) = 121;
  *(_QWORD *)(a1 + 496) = 0;
  *(_QWORD *)(a1 + 504) = 129;
  *(_QWORD *)(a1 + 512) = 0;
  *(_QWORD *)(a1 + 520) = 137;
  *(_QWORD *)(a1 + 528) = 0;
  *(_QWORD *)(a1 + 536) = 145;
  *(_QWORD *)(a1 + 544) = 0;
  *(_QWORD *)(a1 + 552) = 153;
  *(_QWORD *)(a1 + 560) = 0;
  *(_QWORD *)(a1 + 568) = 161;
  v2 = *(_QWORD *)(a1 + 656) == 0;
  *(_OWORD *)(a1 + 240) = -1;
  *(_OWORD *)(a1 + 256) = -1;
  *(_OWORD *)(a1 + 272) = -1;
  *(_OWORD *)(a1 + 288) = -1;
  *(_QWORD *)(a1 + 576) = 0;
  *(_OWORD *)(a1 + 304) = 0;
  if ( !v2 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      ++v4;
      *(_BYTE *)(*(_QWORD *)(a1 + 648) + v3 + 1) = 0;
      v3 += 24;
    }
    while ( v4 < *(_QWORD *)(a1 + 656) );
  }
  result = sub_43EA20((__m128i *)a1, *(unsigned int *)(a1 + 20), 0);
  if ( (_BYTE)result )
  {
    v6 = *(_QWORD *)(a1 + 232);
    if ( v6 )
    {
      v7 = *(_DWORD *)(a1 + 240);
      v8 = (unsigned int *)(a1 + 244);
      v9 = (unsigned int *)(a1 + 304);
      do
      {
        while ( 1 )
        {
          v10 = *v8;
          if ( *v8 < v7 )
          {
            v11 = *(_DWORD **)(a1 + 600);
            v12 = &v11[*(_QWORD *)(a1 + 608)];
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
      *(_DWORD *)(v6 + 20) = v7;
    }
  }
  return result;
}

