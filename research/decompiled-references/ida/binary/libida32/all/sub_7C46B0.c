unsigned __int64 __fastcall sub_7C46B0(_QWORD *a1, __int64 *a2, unsigned int a3)
{
  __int64 v3; // r12
  __int64 v4; // rbp
  size_t v5; // rax
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // r8
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // r8
  size_t v13; // rax
  size_t v14; // rax
  size_t v15; // rax
  __int64 v16; // rbp
  __int64 v17; // rbx
  size_t v18; // rdx
  const char *v19; // r14
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rbx
  size_t v23; // rdx
  const char *v24; // r14
  __int64 v25; // rax
  __int64 v27; // [rsp+0h] [rbp-88h]
  __int64 v29; // [rsp+20h] [rbp-68h]
  _BYTE v30[5]; // [rsp+3Eh] [rbp-4Ah] BYREF
  _BYTE v31[5]; // [rsp+43h] [rbp-45h] BYREF
  unsigned __int64 v32[8]; // [rsp+48h] [rbp-40h] BYREF

  v3 = 0;
  v32[0] = __readfsqword(0x28u);
  v4 = a1[3];
  sub_407AD0(a2, v4);
  if ( v4 )
  {
    do
    {
      v5 = pack_dd(v30, v31, (unsigned int)(*(_DWORD *)(a1[2] + 4 * v3) + 1)) - (_QWORD)v30;
      if ( v5 )
        sub_7BB300(a2, v30, v5);
      ++v3;
    }
    while ( v4 != v3 );
  }
  v6 = a1[6];
  sub_407AD0(a2, v6);
  v29 = 0;
  if ( v6 )
  {
    do
    {
      v7 = 0;
      v8 = *(_QWORD *)(a1[5] + 24 * v29 + 8);
      v27 = v8;
      sub_407AD0(a2, v8);
      if ( v8 )
      {
        do
        {
          v10 = *(_QWORD *)(a1[5] + 24 * v29) + 80 * v7;
          sub_7C4620((__int64 *)v10, a2, a3, 24 * v29, v9);
          v13 = pack_dq(v30, v32, *(_QWORD *)(v10 + 64), v11, v12) - (_QWORD)v30;
          if ( v13 )
            sub_7BB300(a2, v30, v13);
          v14 = pack_dd(v30, v31, (unsigned int)(*(_DWORD *)(v10 + 72) + 1)) - (_QWORD)v30;
          if ( v14 )
            sub_7BB300(a2, v30, v14);
          v15 = pack_dd(v30, v31, (unsigned int)(*(_DWORD *)(v10 + 76) + 1)) - (_QWORD)v30;
          if ( v15 )
            sub_7BB300(a2, v30, v15);
          ++v7;
        }
        while ( v27 != v7 );
      }
      ++v29;
    }
    while ( v29 != v6 );
  }
  v16 = a1[9];
  v17 = 0;
  sub_407AD0(a2, v16);
  if ( v16 )
  {
    do
    {
      v19 = haystack;
      v20 = a1[8] + 24 * v17;
      if ( *(_QWORD *)(v20 + 8) )
        v19 = *(const char **)v20;
      if ( v19 )
      {
        v18 = strlen(v19) + 1;
      }
      else
      {
        v18 = 1;
        v19 = &byte_22CD811;
      }
      ++v17;
      sub_7BB300(a2, v19, v18);
    }
    while ( v17 != v16 );
  }
  v21 = a1[12];
  v22 = 0;
  sub_407AD0(a2, v21);
  if ( v21 )
  {
    do
    {
      v24 = haystack;
      v25 = a1[11] + 24 * v22;
      if ( *(_QWORD *)(v25 + 8) )
        v24 = *(const char **)v25;
      if ( v24 )
      {
        v23 = strlen(v24) + 1;
      }
      else
      {
        v23 = 1;
        v24 = &byte_22CD811;
      }
      ++v22;
      sub_7BB300(a2, v24, v23);
    }
    while ( v22 != v21 );
  }
  return v32[0] - __readfsqword(0x28u);
}

