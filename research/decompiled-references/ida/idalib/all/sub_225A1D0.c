__int64 __fastcall sub_225A1D0(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  int i; // r15d
  _WORD *v7; // rdx
  __int64 result; // rax
  int v9; // r15d
  _WORD *v10; // rdx
  int v11; // r15d
  __int64 v12; // rax
  __int64 v13; // rax
  _WORD *v14; // rdx
  int v15; // r15d
  __int64 v16; // rax
  __int64 v17; // rax
  _WORD *v18; // rdx
  int v19; // r15d
  __int64 v20; // rax
  __int64 v21; // rax
  _WORD *v22; // rdx
  int v23; // r15d
  __int64 v24; // rax
  __int64 v25; // rax
  _WORD *v26; // rdx
  int v27; // r15d
  __int64 v28; // rax
  __int64 v29; // rax
  _WORD *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax

  if ( !a4 )
  {
    result = sub_995540(a2, "TracingFileSystem\n");
    if ( !a3 )
      return result;
    v33 = sub_995540(a2, "NumStatusCalls=");
    v34 = sub_227B910(v33, *(_QWORD *)(a1 + 24));
    sub_995540(v34, "\n");
    v35 = sub_995540(a2, "NumOpenFileForReadCalls=");
    v36 = sub_227B910(v35, *(_QWORD *)(a1 + 32));
    sub_995540(v36, "\n");
    v37 = sub_995540(a2, "NumDirBeginCalls=");
    v38 = sub_227B910(v37, *(_QWORD *)(a1 + 40));
    sub_995540(v38, "\n");
    v39 = sub_995540(a2, "NumGetRealPathCalls=");
    v40 = sub_227B910(v39, *(_QWORD *)(a1 + 48));
    sub_995540(v40, "\n");
    v41 = sub_995540(a2, "NumExistsCalls=");
    v42 = sub_227B910(v41, *(_QWORD *)(a1 + 56));
    sub_995540(v42, "\n");
    goto LABEL_24;
  }
  for ( i = 0; i != a4; ++i )
  {
    while ( 1 )
    {
      v7 = *(_WORD **)(a2 + 32);
      if ( *(_QWORD *)(a2 + 24) - (_QWORD)v7 > 1u )
        break;
      ++i;
      sub_227BF10(a2, "  ", 2);
      if ( a4 == i )
        goto LABEL_5;
    }
    *v7 = 8224;
    *(_QWORD *)(a2 + 32) += 2LL;
  }
LABEL_5:
  result = sub_995540(a2, "TracingFileSystem\n");
  if ( a3 )
  {
    v9 = 0;
    do
    {
      while ( 1 )
      {
        v10 = *(_WORD **)(a2 + 32);
        if ( *(_QWORD *)(a2 + 24) - (_QWORD)v10 > 1u )
          break;
        ++v9;
        sub_227BF10(a2, "  ", 2);
        if ( a4 == v9 )
          goto LABEL_9;
      }
      ++v9;
      *v10 = 8224;
      *(_QWORD *)(a2 + 32) += 2LL;
    }
    while ( a4 != v9 );
LABEL_9:
    v11 = 0;
    v12 = sub_995540(a2, "NumStatusCalls=");
    v13 = sub_227B910(v12, *(_QWORD *)(a1 + 24));
    sub_995540(v13, "\n");
    do
    {
      while ( 1 )
      {
        v14 = *(_WORD **)(a2 + 32);
        if ( *(_QWORD *)(a2 + 24) - (_QWORD)v14 > 1u )
          break;
        ++v11;
        sub_227BF10(a2, "  ", 2);
        if ( a4 == v11 )
          goto LABEL_12;
      }
      ++v11;
      *v14 = 8224;
      *(_QWORD *)(a2 + 32) += 2LL;
    }
    while ( a4 != v11 );
LABEL_12:
    v15 = 0;
    v16 = sub_995540(a2, "NumOpenFileForReadCalls=");
    v17 = sub_227B910(v16, *(_QWORD *)(a1 + 32));
    sub_995540(v17, "\n");
    do
    {
      while ( 1 )
      {
        v18 = *(_WORD **)(a2 + 32);
        if ( *(_QWORD *)(a2 + 24) - (_QWORD)v18 > 1u )
          break;
        ++v15;
        sub_227BF10(a2, "  ", 2);
        if ( a4 == v15 )
          goto LABEL_15;
      }
      ++v15;
      *v18 = 8224;
      *(_QWORD *)(a2 + 32) += 2LL;
    }
    while ( a4 != v15 );
LABEL_15:
    v19 = 0;
    v20 = sub_995540(a2, "NumDirBeginCalls=");
    v21 = sub_227B910(v20, *(_QWORD *)(a1 + 40));
    sub_995540(v21, "\n");
    do
    {
      while ( 1 )
      {
        v22 = *(_WORD **)(a2 + 32);
        if ( *(_QWORD *)(a2 + 24) - (_QWORD)v22 > 1u )
          break;
        ++v19;
        sub_227BF10(a2, "  ", 2);
        if ( a4 == v19 )
          goto LABEL_18;
      }
      ++v19;
      *v22 = 8224;
      *(_QWORD *)(a2 + 32) += 2LL;
    }
    while ( a4 != v19 );
LABEL_18:
    v23 = 0;
    v24 = sub_995540(a2, "NumGetRealPathCalls=");
    v25 = sub_227B910(v24, *(_QWORD *)(a1 + 48));
    sub_995540(v25, "\n");
    do
    {
      while ( 1 )
      {
        v26 = *(_WORD **)(a2 + 32);
        if ( *(_QWORD *)(a2 + 24) - (_QWORD)v26 > 1u )
          break;
        ++v23;
        sub_227BF10(a2, "  ", 2);
        if ( a4 == v23 )
          goto LABEL_21;
      }
      ++v23;
      *v26 = 8224;
      *(_QWORD *)(a2 + 32) += 2LL;
    }
    while ( a4 != v23 );
LABEL_21:
    v27 = 0;
    v28 = sub_995540(a2, "NumExistsCalls=");
    v29 = sub_227B910(v28, *(_QWORD *)(a1 + 56));
    sub_995540(v29, "\n");
    do
    {
      while ( 1 )
      {
        v30 = *(_WORD **)(a2 + 32);
        if ( *(_QWORD *)(a2 + 24) - (_QWORD)v30 > 1u )
          break;
        ++v27;
        sub_227BF10(a2, "  ", 2);
        if ( a4 == v27 )
          goto LABEL_24;
      }
      ++v27;
      *v30 = 8224;
      *(_QWORD *)(a2 + 32) += 2LL;
    }
    while ( a4 != v27 );
LABEL_24:
    v31 = sub_995540(a2, "NumIsLocalCalls=");
    v32 = sub_227B910(v31, *(_QWORD *)(a1 + 64));
    sub_995540(v32, "\n");
    if ( a3 == 1 )
      a3 = 0;
    return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 128LL))(
             *(_QWORD *)(a1 + 16),
             a2,
             a3,
             (unsigned int)(a4 + 1));
  }
  return result;
}
