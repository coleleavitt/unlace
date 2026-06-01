unsigned __int64 __fastcall sub_1AF2490(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rax
  __int64 v4; // rdx
  char *v5; // rdi
  char *v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  char *v9; // rdi
  char *v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  char *v13; // rdi
  char *v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  char *v17; // rdi
  char *v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  char *v21; // rdi
  char *v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  char *v25; // rdi
  char *v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  char *v29; // rdi
  char *v30; // rax
  unsigned __int64 result; // rax
  __int64 v32; // rdx
  void *v33; // rdi

  v2 = *(unsigned int *)(a1 + 160);
  *(_OWORD *)a1 = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 112) = 0;
  *(_OWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  if ( a2 != v2 )
  {
    if ( a2 >= v2 )
    {
      if ( a2 > (unsigned __int64)*(unsigned int *)(a1 + 164) )
      {
        sub_2237220(a1 + 152, a1 + 168, a2, 8);
        v2 = *(unsigned int *)(a1 + 160);
      }
      v4 = *(_QWORD *)(a1 + 152);
      v5 = (char *)(v4 + 8 * v2);
      v6 = (char *)(v4 + 8LL * a2);
      if ( v5 != v6 )
        memset(v5, 0, 8 * ((unsigned __int64)(v6 - 8 - v5) >> 3) + 8);
    }
    *(_DWORD *)(a1 + 160) = a2;
  }
  v7 = *(unsigned int *)(a1 + 208);
  if ( a2 != v7 )
  {
    if ( a2 >= v7 )
    {
      if ( a2 > (unsigned __int64)*(unsigned int *)(a1 + 212) )
      {
        sub_2237220(a1 + 200, a1 + 216, a2, 8);
        v7 = *(unsigned int *)(a1 + 208);
      }
      v8 = *(_QWORD *)(a1 + 200);
      v9 = (char *)(v8 + 8 * v7);
      v10 = (char *)(v8 + 8LL * a2);
      if ( v9 != v10 )
        memset(v9, 0, 8 * ((unsigned __int64)(v10 - 8 - v9) >> 3) + 8);
    }
    *(_DWORD *)(a1 + 208) = a2;
  }
  v11 = *(unsigned int *)(a1 + 256);
  if ( a2 != v11 )
  {
    if ( a2 >= v11 )
    {
      if ( a2 > (unsigned __int64)*(unsigned int *)(a1 + 260) )
      {
        sub_2237220(a1 + 248, a1 + 264, a2, 8);
        v11 = *(unsigned int *)(a1 + 256);
      }
      v12 = *(_QWORD *)(a1 + 248);
      v13 = (char *)(v12 + 8 * v11);
      v14 = (char *)(v12 + 8LL * a2);
      if ( v13 != v14 )
        memset(v13, 0, 8 * ((unsigned __int64)(v14 - 8 - v13) >> 3) + 8);
    }
    *(_DWORD *)(a1 + 256) = a2;
  }
  v15 = *(unsigned int *)(a1 + 304);
  if ( a2 != v15 )
  {
    if ( a2 >= v15 )
    {
      if ( a2 > (unsigned __int64)*(unsigned int *)(a1 + 308) )
      {
        sub_2237220(a1 + 296, a1 + 312, a2, 8);
        v15 = *(unsigned int *)(a1 + 304);
      }
      v16 = *(_QWORD *)(a1 + 296);
      v17 = (char *)(v16 + 8 * v15);
      v18 = (char *)(v16 + 8LL * a2);
      if ( v17 != v18 )
        memset(v17, 0, 8 * ((unsigned __int64)(v18 - 8 - v17) >> 3) + 8);
    }
    *(_DWORD *)(a1 + 304) = a2;
  }
  v19 = *(unsigned int *)(a1 + 352);
  if ( a2 != v19 )
  {
    if ( a2 >= v19 )
    {
      if ( a2 > (unsigned __int64)*(unsigned int *)(a1 + 356) )
      {
        sub_2237220(a1 + 344, a1 + 360, a2, 8);
        v19 = *(unsigned int *)(a1 + 352);
      }
      v20 = *(_QWORD *)(a1 + 344);
      v21 = (char *)(v20 + 8 * v19);
      v22 = (char *)(v20 + 8LL * a2);
      if ( v21 != v22 )
        memset(v21, 0, 8 * ((unsigned __int64)(v22 - 8 - v21) >> 3) + 8);
    }
    *(_DWORD *)(a1 + 352) = a2;
  }
  v23 = *(unsigned int *)(a1 + 400);
  if ( a2 != v23 )
  {
    if ( a2 >= v23 )
    {
      if ( a2 > (unsigned __int64)*(unsigned int *)(a1 + 404) )
      {
        sub_2237220(a1 + 392, a1 + 408, a2, 8);
        v23 = *(unsigned int *)(a1 + 400);
      }
      v24 = *(_QWORD *)(a1 + 392);
      v25 = (char *)(v24 + 8 * v23);
      v26 = (char *)(v24 + 8LL * a2);
      if ( v25 != v26 )
        memset(v25, 0, 8 * ((unsigned __int64)(v26 - 8 - v25) >> 3) + 8);
    }
    *(_DWORD *)(a1 + 400) = a2;
  }
  v27 = *(unsigned int *)(a1 + 448);
  if ( a2 != v27 )
  {
    if ( a2 >= v27 )
    {
      if ( a2 > (unsigned __int64)*(unsigned int *)(a1 + 452) )
      {
        sub_2237220(a1 + 440, a1 + 456, a2, 8);
        v27 = *(unsigned int *)(a1 + 448);
      }
      v28 = *(_QWORD *)(a1 + 440);
      v29 = (char *)(v28 + 8 * v27);
      v30 = (char *)(v28 + 8LL * a2);
      if ( v29 != v30 )
        memset(v29, 0, 8 * ((unsigned __int64)(v30 - 8 - v29) >> 3) + 8);
    }
    *(_DWORD *)(a1 + 448) = a2;
  }
  result = *(unsigned int *)(a1 + 496);
  if ( a2 != result )
  {
    if ( a2 >= result )
    {
      if ( a2 > (unsigned __int64)*(unsigned int *)(a1 + 500) )
      {
        sub_2237220(a1 + 488, a1 + 504, a2, 8);
        result = *(unsigned int *)(a1 + 496);
      }
      v32 = *(_QWORD *)(a1 + 488);
      v33 = (void *)(v32 + 8 * result);
      result = v32 + 8LL * a2;
      if ( v33 != (void *)result )
        result = (unsigned __int64)memset(v33, 0, 8 * ((result - 8 - (unsigned __int64)v33) >> 3) + 8);
    }
    *(_DWORD *)(a1 + 496) = a2;
  }
  if ( a2 )
  {
    result = 0;
    do
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 152) + result) = 0;
      *(_QWORD *)(*(_QWORD *)(a1 + 200) + result) = 0;
      *(_QWORD *)(*(_QWORD *)(a1 + 248) + result) = 0;
      *(_QWORD *)(*(_QWORD *)(a1 + 296) + result) = 0;
      *(_QWORD *)(*(_QWORD *)(a1 + 344) + result) = 0;
      *(_QWORD *)(*(_QWORD *)(a1 + 392) + result) = 0;
      *(_QWORD *)(*(_QWORD *)(a1 + 440) + result) = 0;
      *(_QWORD *)(*(_QWORD *)(a1 + 488) + result) = 0;
      result += 8LL;
    }
    while ( 8LL * (a2 - 1) + 8 != result );
  }
  *(_OWORD *)(a1 + 536) = 0;
  *(_OWORD *)(a1 + 552) = 0;
  *(_OWORD *)(a1 + 568) = 0;
  *(_OWORD *)(a1 + 584) = 0;
  *(_OWORD *)(a1 + 600) = 0;
  return result;
}
