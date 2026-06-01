unsigned __int64 __fastcall sub_622250(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r13
  int v5; // r14d
  unsigned int v6; // eax
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10[2]; // [rsp+0h] [rbp-68h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  int v12[4]; // [rsp+18h] [rbp-50h]
  int v13[2]; // [rsp+28h] [rbp-40h]
  int v14; // [rsp+30h] [rbp-38h]
  int v15; // [rsp+38h] [rbp-30h]
  int v16; // [rsp+40h] [rbp-28h]
  int v17; // [rsp+48h] [rbp-20h]
  __int64 v18; // [rsp+50h] [rbp-18h]

  *(_QWORD *)v13 = __readfsqword(0x28u);
  if ( a2 )
  {
    v2 = *(_QWORD *)(a2 + 8) & 0x8000LL;
    if ( (*(_QWORD *)(a2 + 8) & 0x8000) == 0 )
    {
      v3 = *(int *)(a2 + 72);
      if ( *(_DWORD *)(a2 + 72) )
      {
        if ( !*(_QWORD *)(a2 + 80) )
        {
          v5 = *(_DWORD *)a2;
          ptr = nullptr;
          *(_OWORD *)v12 = 0;
          v6 = sub_3B90A0(a1, v5);
          if ( netnode_qgetblob(v6, &ptr, 1, 20480, 83) <= 0 )
          {
            *(_DWORD *)(a2 + 72) = 0;
            sub_365330();
          }
          *(__m128i *)v10 = _mm_unpacklo_epi64(
                              (__m128i)(unsigned __int64)ptr,
                              (__m128i)((unsigned __int64)ptr + *(_QWORD *)v12));
          v7 = qcalloc(v3, 16);
          v8 = v7;
          if ( !v7 )
            sub_3B74D0((int)"read_llabels");
          *(_QWORD *)(a2 + 80) = v7;
          while ( 1 )
          {
            *(_DWORD *)v8 = v5 + unpack_dd(v10);
            v9 = unpack_ds(v10, v10[1], 0);
            *(_QWORD *)(v8 + 8) = v9;
            v5 = *(_DWORD *)v8;
            if ( !v9 )
              break;
            ++v2;
            v8 += 16;
            if ( v3 == v2 )
              goto LABEL_11;
          }
          sub_82BC50("empty label at %a\n", v10[0], v10[1], (int)ptr, v12[0], v12[2], v13[0], v14, v15, v16, v17, v18);
          *(_DWORD *)(a2 + 72) = v2;
LABEL_11:
          if ( ptr )
          {
            *(_QWORD *)v12 = 0;
            qfree(ptr);
          }
        }
      }
    }
  }
  return *(_QWORD *)v13 - __readfsqword(0x28u);
}

