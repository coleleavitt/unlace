/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100000D28
// Address: 0x0000000100000D28

//----- (0000000100000D28) ----------------------------------------------------
__int64 __fastcall sub_100000D28(__int64 a1, __int64 a2)
{
  pid_t v2; // w19
  unsigned int v3; // w20
  unsigned __int64 v4; // x22
  unsigned __int64 v5; // x8
  char *v6; // x1
  size_t v7; // x28
  __int64 v8; // x22
  const char *v9; // x21
  __int64 v10; // x24
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  __int64 v17; // x26
  _QWORD *v18; // x20
  _QWORD *v19; // x23
  size_t v20; // x0
  size_t v21; // x25
  unsigned __int64 v22; // x27
  void *v23; // x0
  int v24; // w0
  const char *v25; // x8
  const char *v26; // x25
  size_t v27; // x0
  size_t v28; // x24
  unsigned __int64 v29; // x20
  _QWORD *v30; // x1
  __int64 v31; // x8
  bool v32; // cf
  __int64 v33; // x8
  __int64 v34; // x20
  _QWORD *v35; // x1
  unsigned __int64 v36; // x8
  size_t v37; // x24
  _QWORD *v38; // x1
  __int64 v39; // x8
  __int64 v40; // x8
  __int64 v41; // x20
  unsigned __int64 v42; // x25
  __int64 v43; // x19
  void *v44; // x0
  mach_port_name_t v48; // [xsp+24h] [xbp-8Ch] BYREF
  size_t v49; // [xsp+28h] [xbp-88h] BYREF
  void *__ptr; // [xsp+30h] [xbp-80h] BYREF
  unsigned __int64 v51; // [xsp+38h] [xbp-78h]
  unsigned __int64 v52; // [xsp+40h] [xbp-70h]
  int v53[2]; // [xsp+48h] [xbp-68h] BYREF
  int v54; // [xsp+50h] [xbp-60h]

  sub_1000011A8((char **)a2);
  v2 = getpid();
  *(_QWORD *)v53 = 0xE00000001LL;
  v54 = 0;
  __ptr = nullptr;
  v51 = 0;
  v52 = 0;
  v3 = -1;
  do
  {
    v49 = 0;
    sysctl(v53, 3u, nullptr, &v49, nullptr, 0);
    v4 = (unsigned int)(v49 / 0x288) + 100;
    if ( (int)v4 < 1 )
    {
LABEL_47:
      v43 = 0;
      v44 = __ptr;
      if ( !__ptr )
        return v43;
      goto LABEL_50;
    }
    v5 = v51;
    if ( v51 >= v4 )
    {
      v4 = v51;
    }
    else
    {
      v6 = (char *)__ptr;
      if ( v52 < v4 )
      {
        v6 = (char *)qvector_reserve(&__ptr, __ptr, v4, 0x288u);
        __ptr = v6;
        v5 = v51;
      }
      bzero(&v6[648 * v5], 648 * (v4 - v5));
      v51 = v4;
    }
    v49 = 648 * v4;
    if ( !sysctl(v53, 3u, __ptr, &v49, nullptr, 0) )
      break;
    if ( *__error() != 12 )
      goto LABEL_47;
    ++v3;
  }
  while ( v3 < 4 );
  if ( (int)(v49 / 0x288) >= 1 )
  {
    v7 = (v49 / 0x288) & 0x7FFFFFFF;
    v8 = 243;
    do
    {
      v9 = (const char *)__ptr;
      v10 = *(unsigned int *)((char *)__ptr + v8 - 203);
      if ( (_DWORD)v10 != v2 )
      {
        if ( task_for_pid(mach_task_self_, *(_DWORD *)((char *)__ptr + v8 - 203), &v48) )
        {
          sub_1000593FC(a1, "%d: %s is unavailable for debugging\n", v11, v12, v13, v14, v15, v16, v10);
        }
        else
        {
          sub_100001638((_QWORD *)a2, *(_QWORD *)(a2 + 8) + 1LL);
          v17 = *(_QWORD *)a2 + (*(_QWORD *)(a2 + 8) << 6);
          *(_QWORD *)(v17 + 8) = 0;
          v18 = (_QWORD *)(v17 + 8);
          *(_QWORD *)(v17 + 40) = 0;
          v19 = (_QWORD *)(v17 + 40);
          *(_QWORD *)(v17 + 16) = 0;
          *(_QWORD *)(v17 + 24) = 0;
          *(_QWORD *)(v17 + 48) = 0;
          *(_QWORD *)(v17 + 56) = 0;
          ++*(_QWORD *)(a2 + 8);
          v20 = strlen(&v9[v8]);
          if ( v20 )
          {
            v21 = v20;
            v22 = v20 + 1;
            v23 = *(void **)(v17 + 8);
            if ( *(_QWORD *)(v17 + 24) < v22 )
            {
              v23 = qvector_reserve(v18, *(_QWORD **)(v17 + 8), v22, 1u);
              *v18 = v23;
            }
            *(_QWORD *)(v17 + 16) = v22;
            memmove(v23, &v9[v8], v21);
            *(_BYTE *)(*(_QWORD *)(v17 + 8) + v21) = 0;
          }
          else
          {
            *(_QWORD *)(v17 + 16) = 0;
          }
          *(_DWORD *)v17 = v10;
          v24 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 664LL))(a1, v10);
          *(_DWORD *)(v17 + 32) = v24;
          v25 = "[?]";
          if ( v24 == 4 )
            v25 = "[32]";
          if ( v24 == 8 )
            v26 = "[64]";
          else
            v26 = v25;
          v27 = strlen(v26);
          if ( v27 )
          {
            v28 = v27;
            v29 = v27 + 1;
            v30 = *(_QWORD **)(v17 + 40);
            if ( *(_QWORD *)(v17 + 56) < v27 + 1 )
            {
              v30 = qvector_reserve((_QWORD *)(v17 + 40), v30, v29, 1u);
              *v19 = v30;
            }
            *(_QWORD *)(v17 + 48) = v29;
            memcpy(v30, v26, v28);
            *(_BYTE *)(*(_QWORD *)(v17 + 40) + v28) = 0;
            v31 = *(_QWORD *)(v17 + 48);
          }
          else
          {
            v31 = 0;
            *(_QWORD *)(v17 + 48) = 0;
          }
          v32 = v31 != 0;
          v33 = v31 - 1;
          if ( v32 )
            v34 = v33;
          else
            v34 = 0;
          v35 = *(_QWORD **)(v17 + 40);
          if ( *(_QWORD *)(v17 + 56) < (unsigned __int64)(v34 + 2) )
          {
            v35 = qvector_reserve((_QWORD *)(v17 + 40), v35, v34 + 2, 1u);
            *v19 = v35;
          }
          *(_QWORD *)(v17 + 48) = v34 + 2;
          *((_BYTE *)v35 + v34) = 32;
          *(_BYTE *)(*(_QWORD *)(v17 + 40) + v34 + 1) = 0;
          v36 = *(_QWORD *)(v17 + 16);
          if ( v36 )
            v37 = v36 - 1;
          else
            v37 = 0;
          if ( v36 >= 2 )
          {
            v38 = *(_QWORD **)(v17 + 40);
            v39 = *(_QWORD *)(v17 + 48);
            v32 = v39 != 0;
            v40 = v39 - 1;
            if ( v32 )
              v41 = v40;
            else
              v41 = 0;
            v42 = v41 + v37 + 1;
            if ( *(_QWORD *)(v17 + 56) < v42 )
            {
              v38 = qvector_reserve((_QWORD *)(v17 + 40), v38, v41 + v37 + 1, 1u);
              *v19 = v38;
            }
            *(_QWORD *)(v17 + 48) = v42;
            *((_BYTE *)v38 + v41 + v37) = 0;
            memcpy((void *)(*(_QWORD *)(v17 + 40) + v41), *(const void **)(v17 + 8), v37);
          }
        }
      }
      v8 += 648;
      --v7;
    }
    while ( v7 );
  }
  v43 = *(unsigned int *)(a2 + 8);
  v44 = __ptr;
  if ( __ptr )
  {
LABEL_50:
    v51 = 0;
    qfree(v44);
  }
  return v43;
}
// 100000EB4: variable 'v11' is possibly undefined
// 100000EB4: variable 'v12' is possibly undefined
// 100000EB4: variable 'v13' is possibly undefined
// 100000EB4: variable 'v14' is possibly undefined
// 100000EB4: variable 'v15' is possibly undefined
// 100000EB4: variable 'v16' is possibly undefined
