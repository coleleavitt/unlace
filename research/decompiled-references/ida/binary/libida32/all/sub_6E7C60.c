unsigned __int64 __fastcall sub_6E7C60(_QWORD *a1, _QWORD *a2, const char *a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v8; // r12
  __int64 *v9; // rax
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  _QWORD *tinfo_property; // r12
  unsigned __int64 v14; // rbp
  const char *v15; // rdi
  __int64 v16; // r8
  size_t v17; // rax
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // [rsp+10h] [rbp-48h]
  __int64 v24; // [rsp+18h] [rbp-40h]
  __int64 v25; // [rsp+18h] [rbp-40h]

  v8 = sub_6E4310(a1, (__int64)a2, (__int64)a3, a4, a5, a6);
  v9 = sub_6D3920(a1, a3);
  if ( v9 )
  {
    v23 = sub_6D3C30((__int64)a1, v9);
  }
  else
  {
    v11 = sub_B8B410(a1[6], 0);
    sub_B68340(v11, v8);
    v12 = sub_6D3CC0((__int64)a1, a3);
    *(_BYTE *)(v11 + 29) &= ~2u;
    *(_QWORD *)(v11 + 40) = v12;
    sub_B70D90(v8, v11);
    v23 = sub_A5E330(a1[6], v11, 0);
    sub_6D3180((__int64)a1, a3, v11, 2);
    tinfo_property = (_QWORD *)get_tinfo_property(*a2, 309);
    if ( tinfo_property )
    {
      sub_B87600(v11);
      *(_WORD *)(v11 + 56) &= 0xFE7Fu;
      if ( tinfo_property[1] )
      {
        v14 = 0;
        do
        {
          v20 = *tinfo_property + (v14 << 7);
          if ( (*(_WORD *)(v20 + 116) & 0x680) == 0 )
          {
            v25 = *tinfo_property + (v14 << 7);
            v21 = sub_6E7240(a1, (__int64 *)(v20 + 64), 2u);
            if ( (v21 & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
            {
              if ( (*(_BYTE *)(v25 + 116) & 0x20) != 0 )
              {
                if ( !v14 )
                {
                  v22 = sub_A5DBD0(a1[6], v21, 0);
                  if ( v22 )
                    *(_QWORD *)((*(_QWORD *)(v11 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 8) = v22;
                }
              }
              else
              {
                v15 = haystack;
                v16 = *(_QWORD *)(a1[6] + 17504LL);
                if ( *(_QWORD *)(v25 + 24) )
                  v15 = *(const char **)(v25 + 16);
                v17 = 0;
                if ( v15 )
                {
                  v24 = *(_QWORD *)(a1[6] + 17504LL);
                  v17 = strlen(v15);
                  v16 = v24;
                }
                v18 = sub_6D2E30(v16, v15, v17);
                v19 = sub_B85C60(a1[6], v11, 0, 0, v18, v21, 0, 3, 0, 0);
                if ( v19 )
                  sub_B70D90(v11 + 48, v19);
              }
            }
          }
          ++v14;
        }
        while ( v14 < tinfo_property[1] );
      }
    }
  }
  return sub_6D3D30((__int64)a1, a2, v23);
}

