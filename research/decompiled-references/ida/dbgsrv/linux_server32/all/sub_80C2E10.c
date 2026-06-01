/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C2E10
// Address: 0x080C2E10

//----- (080C2E10) --------------------------------------------------------
// bad sp value at call has been detected, the output may be wrong!
int __stdcall sub_80C2E10(int a1)
{
  int v1; // eax
  int v2; // eax
  void *v3; // edx
  _BYTE *v4; // eax
  unsigned int v5; // ecx
  char *v6; // edx
  char *v7; // eax
  char *v9; // eax
  size_t n; // [esp+0h] [ebp-38h]
  size_t na; // [esp+0h] [ebp-38h]
  void *src; // [esp+4h] [ebp-34h]
  void *srca; // [esp+4h] [ebp-34h]
  char *srcb; // [esp+4h] [ebp-34h]
  int v15; // [esp+8h] [ebp-30h]
  int v16; // [esp+8h] [ebp-30h]
  char *v17; // [esp+8h] [ebp-30h]
  int v18; // [esp+Ch] [ebp-2Ch]
  int v19; // [esp+Ch] [ebp-2Ch]
  int v20; // [esp+10h] [ebp-28h]
  int v21; // [esp+10h] [ebp-28h]
  int v22; // [esp+14h] [ebp-24h]
  int v23; // [esp+14h] [ebp-24h]
  void *v24; // [esp+18h] [ebp-20h] BYREF
  unsigned int v25; // [esp+1Ch] [ebp-1Ch]

  v25 = __readgsdword(0x14u);
  v1 = (*(int (__stdcall **)(size_t, void *, int, int, int, int, void *))(dword_811E820 + 24))(
         n,
         src,
         v15,
         v18,
         v20,
         v22,
         v24);
  v19 = (*(int (__stdcall **)(int, int, int, void *))(dword_811E820 + 12))(v1, v21, v23, v24);
  (*(void (__cdecl **)(int))(dword_811E820 + 36))(v19);
  v24 = nullptr;
  v2 = (*(int (__cdecl **)(int, int, _DWORD, void **))(dword_811E820 + 4))(v19, 3, 0, &v24);
  *(_DWORD *)a1 = 0;
  v3 = v24;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( v2 > 0 )
  {
    srca = v3;
    if ( v3 )
    {
      na = v2;
      v16 = v2 + 1;
      v4 = sub_80CF920(a1, nullptr, v2 + 1, 1u);
      *(_DWORD *)a1 = v4;
      *(_DWORD *)(a1 + 4) = v16;
      v4[na] = 0;
      memmove(*(void **)a1, srca, na);
      v5 = *(_DWORD *)(a1 + 4);
      if ( v5 > 1 )
      {
        v6 = *(char **)a1;
        v7 = (char *)(*(_DWORD *)a1 + v5 - 1);
        if ( *(_DWORD *)a1 < (unsigned int)v7 )
        {
          while ( *(v7 - 1) == 10 )
          {
            if ( v6 == --v7 )
              goto LABEL_15;
          }
        }
        srcb = (char *)(v7 - v6);
        if ( v7 == v6 )
        {
LABEL_15:
          if ( v6 )
          {
            *(_DWORD *)(a1 + 4) = 0;
            sub_80CF780(v6);
            *(_DWORD *)a1 = 0;
            *(_DWORD *)(a1 + 8) = 0;
          }
        }
        else
        {
          v17 = srcb + 1;
          if ( v5 < (unsigned int)(srcb + 1) )
          {
            if ( *(_DWORD *)(a1 + 8) < (unsigned int)(srcb + 1) )
            {
              v9 = (char *)sub_80CF920(a1, v6, (unsigned int)(srcb + 1), 1u);
              v5 = *(_DWORD *)(a1 + 4);
              *(_DWORD *)a1 = v9;
              v6 = v9;
            }
            memset(&v6[v5], 0, (size_t)&v17[-v5]);
            *(_DWORD *)(a1 + 4) = v17;
            v7 = &srcb[*(_DWORD *)a1];
          }
          else if ( (char *)v5 != srcb + 1 )
          {
            *(_DWORD *)(a1 + 4) = v17;
          }
          *v7 = 0;
        }
      }
    }
  }
  v25 = v19;
  (*(void (**)(void))(dword_811E820 + 8))();
  if ( v25 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return a1;
}
// 80C2E71: bad sp value at call
// 80C2E37: variable 'n' is possibly undefined
// 80C2E37: variable 'src' is possibly undefined
// 80C2E37: variable 'v15' is possibly undefined
// 80C2E37: variable 'v18' is possibly undefined
// 80C2E37: variable 'v20' is possibly undefined
// 80C2E37: variable 'v22' is possibly undefined
// 80C2E44: variable 'v21' is possibly undefined
// 80C2E44: variable 'v23' is possibly undefined
// 811E820: using guessed type int dword_811E820;
