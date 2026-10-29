__int64 __fastcall sub_8E65A0(__int64 a1, _QWORD *a2, __int64 a3, int a4, int a5)
{
  __int64 result; // rax
  int v6; // r15d
  int v7; // ebx
  unsigned int v8; // r8d
  unsigned int v9; // r11d
  int v10; // r9d
  unsigned int v11; // r9d
  unsigned int v12; // r8d
  int v13; // ecx
  int v14; // eax
  __int64 v15; // r14
  int v16; // r10d
  int v17; // ebp
  int v18; // eax
  int v19; // r10d
  int v20; // r13d
  int v21; // ebp
  int v22; // r12d
  unsigned int *v23; // r9
  unsigned int v24; // ecx
  int v25; // r10d
  __int64 v26; // rbx
  int v27; // eax
  int v28; // r12d
  int v29; // eax
  int v30; // r10d
  int v31; // edx
  int *v32; // r11
  int v33; // ecx
  int v34; // ecx
  __int64 v35; // r12
  int v36; // ebp
  int v37; // ebp
  int v38; // eax
  int v39; // ecx
  int v40; // r11d
  int *v41; // r10
  int v42; // edx
  unsigned __int64 v43; // rax
  unsigned int v44; // edx
  unsigned int v45; // r9d
  int v46; // r11d
  int v47; // r10d
  int v48; // edx
  unsigned int *v49; // rcx
  unsigned int v50; // eax
  bool v51; // cf
  int v52; // [rsp+0h] [rbp-3Ch]
  unsigned int v53; // [rsp+4h] [rbp-38h]
  unsigned int v54; // [rsp+8h] [rbp-34h]

  result = *(_QWORD *)(a1 + 8);
  if ( (unsigned int)(a5 - result) > 0xE0000000 )
  {
    v6 = a4 - result;
    v52 = a4 - result;
    v7 = 0;
    v8 = 1 << (*(_BYTE *)(a3 + 8) - (*(_DWORD *)(a3 + 28) > 5u));
    v9 = (a4 - result) & (v8 - 1);
    if ( v9 <= 1 )
    {
      v7 = 2;
      if ( v8 >= 2 )
        v7 = 1 << (*(_BYTE *)(a3 + 8) - (*(_DWORD *)(a3 + 28) > 5u));
    }
    v10 = 1 << (*(_BYTE *)(a3 + 8) - (*(_DWORD *)(a3 + 28) > 5u));
    if ( 1 << *(_DWORD *)(a3 + 4) >= v8 )
      v10 = 1 << *(_DWORD *)(a3 + 4);
    v11 = v7 + v9 + v10;
    *(_QWORD *)(a1 + 16) += v6 - v11;
    v12 = v6 - v11 + 2;
    v53 = v6 - v11;
    *(_QWORD *)(a1 + 8) = v6 - v11 + result;
    v13 = v11 + *(_DWORD *)(a1 + 28) - v6;
    if ( *(_DWORD *)(a1 + 28) < v12 )
      v13 = 2;
    *(_DWORD *)(a1 + 28) = v13;
    v14 = v11 + *(_DWORD *)(a1 + 24) - v6;
    if ( v12 > *(_DWORD *)(a1 + 24) )
      v14 = 2;
    ++*(_DWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 24) = v14;
    a2[4] = a2[2];
    v15 = *(_QWORD *)(a1 + 112);
    v16 = 1 << *(_DWORD *)(a3 + 12);
    v17 = v16 + 15;
    if ( v16 >= 0 )
      v17 = 1 << *(_DWORD *)(a3 + 12);
    v18 = 0;
    v19 = 0;
    v20 = v11 - v52;
    v21 = v17 >> 4;
    if ( 1 << *(_DWORD *)(a3 + 12) > 15 )
    {
      v54 = v11;
      do
      {
        v22 = v18 + 16;
        do
        {
          v23 = (unsigned int *)(v15 + 4LL * v18);
          v24 = v20 + *v23;
          if ( *v23 < v12 )
            v24 = 0;
          ++v18;
          *v23 = v24;
        }
        while ( v18 != v22 );
        ++v19;
      }
      while ( v21 > v19 );
      v11 = v54;
    }
    v25 = *(_DWORD *)(a3 + 28);
    if ( *(_DWORD *)(a1 + 140) || v25 != 1 && (*(_DWORD *)(a3 + 144) != 1 || (unsigned int)(v25 - 3) > 2) )
    {
      v26 = *(_QWORD *)(a1 + 128);
      v27 = 1 << *(_DWORD *)(a3 + 8);
      v28 = v27 / 16;
      if ( v25 == 6 )
      {
        if ( v27 > 15 )
        {
          v46 = 16;
          v47 = 0;
          do
          {
            v48 = 16 * v47;
            do
            {
              v49 = (unsigned int *)(v26 + 4LL * v48);
              v50 = *v49;
              if ( *v49 != 1 )
              {
                v51 = v50 < v12;
                v50 += v11 - v52;
                if ( v51 )
                  v50 = 0;
              }
              ++v48;
              *v49 = v50;
            }
            while ( v48 != v46 );
            ++v47;
            v46 += 16;
          }
          while ( v47 < v28 );
        }
      }
      else if ( v27 > 15 )
      {
        v29 = 0;
        v30 = 0;
        do
        {
          v31 = v29 + 16;
          do
          {
            v32 = (int *)(v26 + 4LL * v29);
            v33 = v11 - v52 + *v32;
            if ( *v32 < v12 )
              v33 = 0;
            ++v29;
            *v32 = v33;
          }
          while ( v31 != v29 );
          ++v30;
          v29 = v31;
        }
        while ( v30 < v28 );
      }
    }
    v34 = *(_DWORD *)(a1 + 48);
    if ( v34 )
    {
      v35 = *(_QWORD *)(a1 + 120);
      v36 = (1 << v34) + 15;
      if ( 1 << v34 >= 0 )
        v36 = 1 << v34;
      v37 = v36 >> 4;
      if ( 1 << v34 > 15 )
      {
        v38 = 0;
        v39 = 0;
        do
        {
          v40 = v38 + 16;
          do
          {
            v41 = (int *)(v35 + 4LL * v38);
            v42 = v11 - v52 + *v41;
            if ( *v41 < v12 )
              v42 = 0;
            ++v38;
            *v41 = v42;
          }
          while ( v38 != v40 );
          ++v39;
        }
        while ( v37 > v39 );
      }
    }
    v43 = a2[3];
    if ( v43 > a2[4] )
      a2[4] = v43;
    v44 = *(_DWORD *)(a1 + 44);
    *(_DWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 248) = 0;
    v45 = v44 - v6 + v11;
    result = 0;
    if ( v44 < v53 )
      v45 = 0;
    *(_DWORD *)(a1 + 44) = v45;
  }
  return result;
}

