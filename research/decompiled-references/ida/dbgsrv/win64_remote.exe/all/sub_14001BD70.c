/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001BD70
// Address: 0x000000014001BD70

//----- (000000014001BD70) ----------------------------------------------------
_QWORD *__fastcall sub_14001BD70(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rsi
  _QWORD *result; // rax
  _QWORD *v4; // rbx
  __int128 v5; // xmm6
  __int64 v6; // xmm7_8
  size_t v7; // rdi
  size_t v8; // r12
  void *v9; // r13
  DWORD v10; // r14d
  int v11; // r14d
  _QWORD *v12; // r15
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rdi
  char *v15; // rax
  _QWORD *v16; // rdi
  __int64 v17; // r15
  char *v18; // rsi
  void *v19; // rcx
  _QWORD *v20; // rdi
  __int64 v21; // rcx
  char *v22; // rax
  __int64 **v23; // rcx
  __int64 i; // rax
  __int64 *j; // rcx
  __int64 v26; // [rsp+28h] [rbp-E0h]
  __int64 v27; // [rsp+30h] [rbp-D8h]
  char *v28; // [rsp+40h] [rbp-C8h]
  __int64 v29; // [rsp+48h] [rbp-C0h]
  __int64 v30; // [rsp+50h] [rbp-B8h]
  void *v31; // [rsp+F8h] [rbp-10h]
  size_t v32; // [rsp+108h] [rbp+0h]
  int v35; // [rsp+198h] [rbp+90h]
  int v36; // [rsp+1A0h] [rbp+98h]

  v2 = a2;
  result = (_QWORD *)a1[136];
  v4 = (_QWORD *)*result;
  if ( (_QWORD *)*result != result )
  {
    do
    {
      v5 = *(_OWORD *)(v4 + 5);
      v6 = v4[7];
      v30 = v4[8];
      v35 = *((_DWORD *)v4 + 18);
      v26 = v4[10];
      v36 = *((_DWORD *)v4 + 22);
      v27 = v4[12];
      v7 = v4[14];
      v8 = 0;
      if ( v7 )
      {
        v9 = sub_14005AAA0(v4[14]);
        memcpy(v9, (const void *)v4[13], v7);
        v8 = v7;
      }
      else
      {
        v9 = nullptr;
      }
      v10 = SuspendThread((HANDLE)v5);
      ResumeThread((HANDLE)v5);
      if ( !v10 )
      {
        v11 = SuspendThread((HANDLE)v5) != -1;
        if ( SuspendThread((HANDLE)v5) != -1 )
          ++v11;
        v31 = nullptr;
        v32 = 0;
        if ( v8 )
        {
          v31 = sub_14005AAA0(v8);
          v32 = v8;
          memcpy(v31, v9, v8);
        }
        else
        {
          v8 = 0;
        }
        v12 = (_QWORD *)(v2 + 8);
        v13 = *(_QWORD *)(v2 + 8) + 1LL;
        v14 = *(_QWORD *)(v2 + 16);
        if ( v13 <= v14 )
        {
          v20 = (_QWORD *)(v2 + 8);
        }
        else
        {
          v15 = (char *)sub_14005ABE0(v2, nullptr, v13, 0x58u);
          v28 = v15;
          v29 = *(_QWORD *)(v2 + 16);
          *(_QWORD *)(v2 + 16) = v14;
          v16 = *(_QWORD **)v2;
          v17 = *v12 - 1LL;
          if ( v17 >= 0 )
          {
            v18 = v15 + 32;
            do
            {
              *((_OWORD *)v18 - 2) = *(_OWORD *)v16;
              *((_QWORD *)v18 - 2) = v16[2];
              *((_QWORD *)v18 - 1) = v16[3];
              *(_DWORD *)v18 = *((_DWORD *)v16 + 8);
              *((_DWORD *)v18 + 1) = *((_DWORD *)v16 + 9);
              *((_QWORD *)v18 + 1) = v16[5];
              *((_DWORD *)v18 + 4) = *((_DWORD *)v16 + 12);
              *((_QWORD *)v18 + 3) = v16[7];
              *((_QWORD *)v18 + 4) = v16[8];
              v16[8] = 0;
              *((_QWORD *)v18 + 5) = v16[9];
              v16[9] = 0;
              *((_QWORD *)v18 + 6) = v16[10];
              v16[10] = 0;
              v19 = (void *)v16[8];
              if ( v19 )
              {
                v16[9] = 0;
                j_free(v19);
                v16[8] = 0;
                v16[10] = 0;
              }
              v16 += 11;
              v18 += 88;
              --v17;
            }
            while ( v17 >= 0 );
            v2 = a2;
          }
          v20 = (_QWORD *)(v2 + 8);
          j_free(*(void **)v2);
          *(_QWORD *)v2 = v28;
          *(_QWORD *)(v2 + 16) = v29;
          v12 = (_QWORD *)(v2 + 8);
        }
        v21 = 88LL * *v12;
        v22 = *(char **)v2;
        *(_OWORD *)&v22[v21] = v5;
        *(_QWORD *)&v22[v21 + 16] = v6;
        *(_QWORD *)&v22[v21 + 24] = v30;
        *(_DWORD *)&v22[v21 + 32] = v35;
        *(_DWORD *)&v22[v21 + 36] = v11;
        *(_QWORD *)&v22[v21 + 40] = v26;
        *(_DWORD *)&v22[v21 + 48] = v36;
        *(_QWORD *)&v22[v21 + 56] = v27;
        *(_QWORD *)&v22[v21 + 64] = v31;
        *(_QWORD *)&v22[v21 + 72] = v8;
        *(_QWORD *)&v22[v21 + 80] = v32;
        ++*v20;
      }
      if ( v9 )
        j_free(v9);
      v23 = (__int64 **)v4[2];
      if ( *((_BYTE *)v23 + 25) )
      {
        for ( i = v4[1]; !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 8) )
        {
          if ( v4 != *(_QWORD **)(i + 16) )
            break;
          v4 = (_QWORD *)i;
        }
        v4 = (_QWORD *)i;
      }
      else
      {
        v4 = (_QWORD *)v4[2];
        for ( j = *v23; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v4 = j;
      }
      result = a1;
    }
    while ( v4 != (_QWORD *)a1[136] );
  }
  return result;
}
