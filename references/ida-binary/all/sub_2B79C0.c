unsigned __int64 __fastcall sub_2B79C0(__int64 a1)
{
  __int64 v1; // rax
  int v3; // r12d
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned __int64 v7; // rdx
  __int64 v8; // r9
  char *v9; // rdi
  int v10; // r8d
  int v11; // esi
  const char *v12; // rsi
  __int64 v13; // rdi
  _DWORD *v15; // r9
  _DWORD *v16; // r10
  unsigned __int64 v17; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 v18; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 200) == 1 )
  {
    v1 = *(_QWORD *)(a1 + 192);
    if ( !*(_BYTE *)v1 )
    {
      v3 = *(_DWORD *)(v1 + 8);
      if ( v3 >= 0 )
      {
        v17 = 0;
        v4 = *(_QWORD *)(a1 + 440);
        v18 = 0;
        if ( v4 )
          v4 = *(_QWORD *)(v4 + 8);
        v5 = sub_298C80(v4, *(_QWORD *)(v1 + 12), &v17, &v18);
        v6 = v5;
        if ( v5 )
        {
          v7 = *(_QWORD *)(v5 + 24);
          if ( v3 < v7 )
          {
            if ( (v8 = *(_QWORD *)(v5 + 16),
                  v9 = (char *)(v8 + 8LL * v3),
                  v10 = *(_DWORD *)v9,
                  v11 = *((_DWORD *)v9 + 1),
                  sqrt(
                    (double)((int)v17 - v10) * (double)((int)v17 - v10)
                  + (double)(HIDWORD(v17) - v11) * (double)(HIDWORD(v17) - v11)) <= 4.0)
              || sqrt(
                   (double)((int)v18 - v10) * (double)((int)v18 - v10)
                 + (double)(HIDWORD(v18) - v11) * (double)(HIDWORD(v18) - v11)) <= 4.0
              || v3 < v7 - 1
              && (v16 = (_DWORD *)(v8 + 8LL * (v3 + 1)),
                  sqrt((double)(*v16 - v10) * (double)(*v16 - v10) + (double)(v16[1] - v11) * (double)(v16[1] - v11)) <= 4.0)
              || v3
              && (v15 = (_DWORD *)(v8 + 8LL * (v3 - 1)),
                  sqrt((double)(*v15 - v10) * (double)(*v15 - v10) + (double)(v15[1] - v11) * (double)(v15[1] - v11)) <= 4.0) )
            {
              v12 = v9 + 8;
              memmove(v9, v9 + 8, 8 * (v7 - v3) - 8);
              --*(_QWORD *)(v6 + 24);
              v13 = *(_QWORD *)(a1 + 192);
              if ( v13 )
              {
                *(_QWORD *)(a1 + 200) = 0;
                qfree(v13, v12);
                *(_QWORD *)(a1 + 192) = 0;
                *(_QWORD *)(a1 + 208) = 0;
              }
              sub_2B38C0(a1 + 192);
              *(_DWORD *)(a1 + 88) = 0;
            }
          }
        }
      }
    }
  }
  return v19 - __readfsqword(0x28u);
}
