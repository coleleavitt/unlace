__int64 __fastcall sub_410B20(__int64 *a1, unsigned int a2)
{
  __int64 v4; // rbx
  unsigned int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned int v8; // r12d
  unsigned int v9; // r13d
  unsigned int i; // ebp
  __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rbx
  unsigned int v14; // eax
  int v15; // r8d
  int v16; // r9d
  int v17; // edx
  __int64 v18; // rsi
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // rsi
  __int64 v22; // rbx
  __int64 v23; // rcx
  unsigned __int64 v24; // r8
  _QWORD *v25; // rdi
  unsigned int v26; // r9d
  __int64 v27; // rdx
  __int64 v28; // rax
  _QWORD *v29; // rdx
  __int64 v30; // rdx
  int v31; // r8d
  int v32; // r9d
  __int64 v34; // [rsp+8h] [rbp-80h]
  unsigned int v35; // [rsp+14h] [rbp-74h]
  _DWORD *v36; // [rsp+20h] [rbp-68h]
  __int64 v37; // [rsp+28h] [rbp-60h]
  __int64 v38; // [rsp+30h] [rbp-58h]
  unsigned __int64 v39; // [rsp+38h] [rbp-50h]
  _DWORD v40[15]; // [rsp+4Ch] [rbp-3Ch] BYREF

  v35 = a2;
  if ( a2 <= 0xFFFE )
  {
    v35 = a2 + 1;
    if ( a2 != 65534 )
    {
      v4 = *a1;
      v5 = *(_DWORD *)(*a1 + 208);
      if ( a2 + 1 >= v5 )
      {
        do
        {
          v6 = *(_QWORD *)(v4 + 120);
          *(_DWORD *)(v4 + 208) = v5 + 1;
          sub_428A80(v6);
          v5 = *(_DWORD *)(v4 + 208);
        }
        while ( v35 >= v5 );
      }
    }
  }
  v7 = a1[2];
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 - 4);
    v9 = 1;
    if ( v8 )
    {
      for ( i = 0; ; i = v13 )
      {
        v11 = *(_QWORD *)(v7 + 8LL * i);
        v12 = *(_DWORD *)(v11 + 96);
        if ( a2 < v12 )
          break;
        v13 = i + 1;
        if ( v12 >= a2 )
        {
          v14 = sub_40B430(*a1, v35, v11, v40, 0);
          if ( (_BYTE)v14 )
          {
            v17 = v40[0];
            v18 = *(_QWORD *)(a1[2] + 8LL * i);
            v19 = *(_QWORD *)(v18 + 80);
            if ( v19 )
            {
              v20 = *(_DWORD *)(v19 + 112);
              if ( v20 < v40[0] )
                v20 = v40[0];
              *(_DWORD *)(v19 + 112) = v20;
            }
            *(_DWORD *)(v18 + 96) = v17;
            sub_40F630(*a1, v18, 0, v19, v15, v16);
            if ( (unsigned int)v13 < v8 )
            {
              v21 = a1[2];
              v22 = 8 * v13;
              v23 = *(_QWORD *)(v21 + 8LL * i);
              v24 = 8 * (i + (unsigned __int64)(v8 - 2 - i) + 2);
              do
              {
                v25 = (_QWORD *)(v21 + v22);
                v26 = *(_DWORD *)(v23 + 96);
                v27 = v22 - 8;
                v28 = *(_QWORD *)(v21 + v22);
                if ( *(_DWORD *)(v28 + 96) < v26 )
                {
                  v29 = (_QWORD *)(v21 + v27);
                }
                else
                {
                  if ( *(_DWORD *)(v28 + 96) != v26 )
                    break;
                  v39 = v24;
                  v37 = *(_QWORD *)(v21 + v22);
                  v38 = v22 - 8;
                  v34 = v23;
                  sub_407990((_QWORD *)v23, v21, v27, v23, v24, v26);
                  v36 = *(_DWORD **)(v34 + 16);
                  sub_407990((_QWORD *)v37, v21, v30, (int)v36, v31, v32);
                  if ( **(_DWORD **)(v37 + 16) >= *v36 )
                    break;
                  v21 = a1[2];
                  v24 = v39;
                  v25 = (_QWORD *)(v21 + v22);
                  v29 = (_QWORD *)(v21 + v38);
                  v23 = *(_QWORD *)(v21 + v38);
                  v28 = *(_QWORD *)(v21 + v22);
                }
                v22 += 8;
                *v29 = v28;
                *v25 = v23;
              }
              while ( v24 != v22 );
            }
            LODWORD(v13) = i;
            ++*(_DWORD *)(*a1 + 328);
            v14 = v9;
          }
          v9 = v14;
        }
        if ( (unsigned int)v13 >= v8 )
          break;
        v7 = a1[2];
      }
    }
  }
  else
  {
    return 1;
  }
  return v9;
}

