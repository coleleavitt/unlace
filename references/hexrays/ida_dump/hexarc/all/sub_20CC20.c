__int64 __fastcall sub_20CC20(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // rsi
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  char v8; // dl
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  int v15; // ecx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // [rsp+8h] [rbp-50h] BYREF
  const char *v19; // [rsp+10h] [rbp-48h] BYREF
  __int128 v20; // [rsp+18h] [rbp-40h]
  unsigned __int64 v21; // [rsp+28h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  v1 = a1[4];
  if ( *(_DWORD *)v1 == 4 && *(_BYTE *)(v1 + 32) == 4 )
  {
    v3 = *(_QWORD *)(v1 + 40);
    if ( *(_DWORD *)v3 == 56 && *(_BYTE *)(v3 + 32) == 6 )
    {
      v4 = a1[5];
      v5 = *(_QWORD *)(v3 + 40);
      v6 = *(_QWORD **)v4;
      v7 = *(_QWORD *)v4 + 8LL * *(_QWORD *)(v4 + 8);
      if ( v6 != (_QWORD *)v7 )
      {
        while ( v5 != *v6 )
        {
          if ( (_QWORD *)v7 == ++v6 )
            return 0;
        }
        if ( v6 != (_QWORD *)v7 )
        {
          v8 = *(_BYTE *)(v1 + 64);
          if ( v8 != 9 )
          {
            if ( v8 != 6 )
              return 0;
            v9 = *(_QWORD *)(v1 + 72);
            if ( (get_flags_ex(v9, 4) & 0xC000) == 0x4000 || (get_aflags(v9) & 0x2000000) != 0 )
              return 0;
            v10 = 0;
            goto LABEL_16;
          }
          v12 = *(__int64 **)(v1 + 72);
          v13 = *v12;
          v14 = *((int *)v12 + 4);
          v15 = v14;
          if ( *(_QWORD *)(v13 + 440) < v14 )
            sub_20B190(a1, v5, v13, v14);
          v10 = *(_QWORD *)(v13 + 432) + 104 * v14;
          v16 = *(_DWORD *)(v10 + 24);
          if ( (v16 & 0x44) == 0 )
          {
            v17 = a1[1];
            if ( *(_DWORD *)(v10 + 88) == *(_DWORD *)(*(_QWORD *)(v17 + 1504) + 80LL)
              && (v16 & 0x100) == 0
              && *(_DWORD *)(v17 + 480) != v15 )
            {
              v9 = -1;
LABEL_16:
              v11 = *a1;
              v20 = 0;
              v18 = 0;
              v19 = nullptr;
              if ( (*(unsigned __int8 (__fastcall **)(__int64 *, const char **, __int64 *, __int64))(v11 + 24))(
                     a1,
                     &v19,
                     &v18,
                     v3) )
              {
                if ( v10 )
                {
                  sub_20C9D0((_QWORD *)a1[1], v10, v19, 4);
                  if ( (_BYTE)v18 )
                  {
                    sub_1E8570(v10, *(_QWORD *)(a1[1] + 1504), &v18, 0);
                    *(_DWORD *)(v10 + 24) = *(_DWORD *)(v10 + 24) & 0xFFFBFFFD | 2;
                  }
                }
                else
                {
                  set_name(v9, v19, 6144);
                  if ( (_BYTE)v18 )
                    apply_tinfo(v9, &v18, 0);
                }
              }
              if ( v19 )
              {
                *(_QWORD *)&v20 = 0;
                qfree(v19);
              }
              clear_tinfo_t(&v18);
            }
          }
        }
      }
    }
  }
  return 0;
}
