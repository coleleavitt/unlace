unsigned __int64 __fastcall sub_246200(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r15
  __int64 v4; // rsi
  unsigned __int64 v5; // rax
  __int64 v6; // rbx
  char v7; // al
  unsigned __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rbx
  unsigned __int64 v12; // r15
  __int64 v13; // rbx
  char v14; // al
  _QWORD v15[3]; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v16; // [rsp+38h] [rbp-C0h]
  __int64 v17; // [rsp+48h] [rbp-B0h]
  __int64 v18; // [rsp+50h] [rbp-A8h]
  __int64 v19; // [rsp+58h] [rbp-A0h]
  __int64 v20; // [rsp+60h] [rbp-98h]
  __int64 v21; // [rsp+70h] [rbp-88h] BYREF
  int v22; // [rsp+78h] [rbp-80h]
  __int64 v23; // [rsp+7Ch] [rbp-7Ch]
  __int64 v24; // [rsp+A0h] [rbp-58h]
  int v25; // [rsp+A8h] [rbp-50h]
  char v26; // [rsp+ACh] [rbp-4Ch]
  __int64 v27; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v28; // [rsp+B8h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 != a2 )
  {
    v15[0] = -1;
    v15[1] = 0xFFFFFFFF00000000LL;
    v15[2] = 0xFFFFFFFFLL;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v16 = 0;
    if ( a2 < v2 )
    {
      v8 = a2;
      do
      {
        v9 = 9 * v8++;
        v10 = *a1 + 8 * v9;
        clear_tinfo_t();
        sub_255630(v10);
        clear_tinfo_t();
      }
      while ( v2 != v8 );
    }
    else
    {
      v4 = *a1;
      v5 = a1[2];
      if ( (unsigned __int64)v15 >= *a1 && (unsigned __int64)v15 < v4 + 72 * v5 )
      {
        v21 = -1;
        v22 = 0;
        v23 = -1;
        v24 = 0;
        v25 = 0;
        sub_25AFF0(&v21, v15);
        v27 = 0;
        v26 = BYTE4(v19);
        copy_tinfo_t();
        if ( a1[2] < a2 )
          *a1 = qvector_reserve((__int64)a1, *a1, a2, 72);
        v12 = a1[1];
        if ( v12 < a2 )
        {
          do
          {
            v13 = *a1 + 72 * v12;
            *(_QWORD *)v13 = -1;
            *(_DWORD *)(v13 + 8) = 0;
            *(_QWORD *)(v13 + 12) = -1;
            *(_QWORD *)(v13 + 48) = 0;
            *(_DWORD *)(v13 + 56) = 0;
            sub_25AFF0(v13, &v21);
            v14 = v26;
            *(_QWORD *)(v13 + 64) = 0;
            *(_BYTE *)(v13 + 60) = v14;
            copy_tinfo_t();
            ++v12;
          }
          while ( a2 != v12 );
        }
        a1[1] = a2;
        clear_tinfo_t();
        sub_255630(&v21);
        clear_tinfo_t();
        goto LABEL_12;
      }
      if ( v5 < a2 )
      {
        *a1 = qvector_reserve((__int64)a1, v4, a2, 72);
        v2 = a1[1];
      }
      for ( ; v2 < a2; ++v2 )
      {
        v6 = *a1 + 72 * v2;
        *(_QWORD *)v6 = -1;
        *(_DWORD *)(v6 + 8) = 0;
        *(_QWORD *)(v6 + 12) = -1;
        *(_QWORD *)(v6 + 48) = 0;
        *(_DWORD *)(v6 + 56) = 0;
        sub_25AFF0(v6, v15);
        v7 = BYTE4(v19);
        *(_QWORD *)(v6 + 64) = 0;
        *(_BYTE *)(v6 + 60) = v7;
        copy_tinfo_t();
      }
    }
    a1[1] = a2;
LABEL_12:
    clear_tinfo_t();
    sub_255630(v15);
    clear_tinfo_t();
  }
  return v28 - __readfsqword(0x28u);
}
