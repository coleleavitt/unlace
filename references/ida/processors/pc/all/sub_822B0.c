unsigned __int64 __fastcall sub_822B0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // r13
  const char *v7; // rax
  __int64 v8; // r14
  unsigned __int8 v9; // al
  __int64 segm_para; // rsi
  __int64 (__fastcall *v11)(_QWORD *, char); // rax
  __int64 v12; // r14
  unsigned __int64 v13; // rdx
  __int64 v14; // rsi
  const char *segment_combination; // rax
  __int64 v16; // rdx
  __int64 v17; // rbp
  __int64 v18; // rdx
  char *v19; // rbp
  int v20; // r12d
  unsigned __int64 v21; // r15
  __int64 (__fastcall *v22)(_QWORD *, char); // rax
  __int64 v23; // r15
  unsigned __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 segment_alignment; // r14
  __int64 v27; // rdx
  unsigned __int8 v28; // al
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // [rsp+0h] [rbp-4A0h]
  unsigned __int64 v33; // [rsp+0h] [rbp-4A0h]
  __int64 v34; // [rsp+38h] [rbp-468h]
  char v35; // [rsp+58h] [rbp-448h] BYREF
  _BYTE v36[1031]; // [rsp+59h] [rbp-447h] BYREF
  unsigned __int64 v37; // [rsp+460h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  get_segm_name();
  v5 = a2[2];
  if ( *(_BYTE *)(a3 + 184) == 6 )
  {
    ea2node();
    v17 = netnode_supval();
    if ( v17 > 0 )
    {
      if ( (*(_BYTE *)(get_ash() + 328) & 8) != 0 )
      {
        v18 = (unsigned int)(unsigned __int8)getinf() - 5;
        if ( (int)v18 <= 0 )
          v18 = 1;
        sub_7DA30((__int64)a2, (__int64)&unk_919E3, v18, 32, s1);
      }
      else
      {
        v28 = getinf();
        sub_7DA30((__int64)a2, (__int64)&unk_919F1, (unsigned int)v28 - 1, s1);
      }
      v19 = &v36[v17 - 1];
      if ( &v35 < v19 && v35 == 1 )
      {
        v20 = 0;
        while ( v36 < v19 )
        {
          unpack_dq();
          get_segm_by_sel();
          if ( get_segm_name() > 0 )
          {
            v21 = (a2[4] == 0) + a2[4] - 1LL;
            if ( v21 >= (unsigned __int16)getinf() )
            {
              (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 32LL))(a2, 92);
              (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 72LL))(a2, 27);
              (*(void (__fastcall **)(_QWORD *, _QWORD))(*a2 + 128LL))(a2, 0);
              (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 64LL))(a2, 27);
            }
            if ( ++v20 > 1 )
            {
              v22 = *(__int64 (__fastcall **)(_QWORD *, char))(*a2 + 96LL);
              if ( v22 == sub_7D640 )
              {
                v23 = a2[4];
                v24 = 2;
                if ( v23 )
                  v24 = v23-- + 1;
                v25 = a2[3];
                if ( a2[5] < v24 )
                {
                  v33 = v24;
                  v31 = qvector_reserve();
                  a2[3] = v31;
                  v24 = v33;
                  v25 = v31;
                }
                a2[4] = v24;
                *(_BYTE *)(v25 + v23) = 44;
                *(_BYTE *)(a2[3] + v23 + 1) = 0;
              }
              else
              {
                v22(a2, 44);
              }
            }
            (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 56LL))(a2, 0, 0);
          }
        }
        (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 72LL))(a2, 27);
        if ( (*(_BYTE *)(get_ash() + 328) & 8) == 0 || v20 )
          (*(void (__fastcall **)(_QWORD *, _QWORD))(*a2 + 128LL))(a2, 0);
      }
    }
  }
  else if ( (unsigned __int8)is_spec_segm() )
  {
    sub_7DBA0((__int64)a2, (__int64)&unk_91B03, s1);
  }
  else
  {
    if ( *(_BYTE *)(a3 + 42) )
    {
      v7 = (const char *)strarray();
      sub_7DBA0((__int64)a2, (__int64)"Segment permissions: %s", v7);
    }
    if ( (*(_BYTE *)(get_ash() + 328) & 8) != 0 )
    {
      segment_alignment = get_segment_alignment();
      v27 = (unsigned int)(unsigned __int8)getinf() - 7;
      if ( (int)v27 <= 0 )
        v27 = 1;
      sub_7DA30((__int64)a2, (__int64)&unk_91A17, v27, 32, s1, segment_alignment);
    }
    else
    {
      v8 = get_segment_alignment();
      v9 = getinf();
      sub_7DA30((__int64)a2, (__int64)&unk_91A2A, (unsigned int)v9 - 1, s1, v8);
    }
    if ( !*(_BYTE *)(a3 + 40) )
    {
      ea2node();
      if ( netnode_supval() <= 0 || (segm_para = v34 - 1, !v34) )
        segm_para = get_segm_para();
      (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a2 + 104LL))(a2, segm_para, 0);
      v11 = *(__int64 (__fastcall **)(_QWORD *, char))(*a2 + 96LL);
      if ( v11 == sub_7D640 )
      {
        v12 = a2[4];
        v13 = 2;
        if ( v12 )
          v13 = v12-- + 1;
        v14 = a2[3];
        if ( a2[5] < v13 )
        {
          v32 = v13;
          v29 = qvector_reserve();
          a2[3] = v29;
          v13 = v32;
          v14 = v29;
        }
        a2[4] = v13;
        *(_BYTE *)(v14 + v12) = 32;
        *(_BYTE *)(a2[3] + v12 + 1) = 0;
      }
      else
      {
        v11(a2, 32);
      }
    }
    get_segm_class();
    segment_combination = (const char *)get_segment_combination();
    sub_7DA30((__int64)a2, (__int64)"%s '%s'", segment_combination, s1);
    if ( (*(_DWORD *)(a1 + 4436) & 0x7D78F) != 0 )
      sub_7DA30((__int64)a2, (__int64)" use%d", 1 << (*(_BYTE *)(a3 + 43) + 4));
    (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 72LL))(a2, 27);
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*a2 + 128LL))(a2, 0);
    if ( *(_BYTE *)(a3 + 184) != 7 )
    {
      if ( (getinf() & 0x200) != 0 )
        sub_7DAF0((__int64)a2, 0xFFFF, (__int64)&unk_91A4C, s1);
      if ( (getinf() & 0x100) != 0 )
      {
        if ( (*(_BYTE *)(a3 + 44) & 2) != 0 )
          v16 = v5 - *(_QWORD *)(a3 + 32);
        else
          v16 = v5 - get_segm_base();
        if ( v16 )
        {
          btoa64();
          v30 = *(_QWORD *)(a1 + 24);
          if ( (*(_BYTE *)(a3 + 44) & 1) != 0 )
            sub_7DAF0((__int64)a2, 0xFFFF, (__int64)&unk_91A69, *(_QWORD *)(v30 + 32), &v35);
          else
            sub_7DAF0((__int64)a2, 0xFFFF, (__int64)&unk_91A5D, *(_QWORD *)(v30 + 48), *(_QWORD *)(v30 + 32), &v35);
        }
      }
    }
  }
  return v37 - __readfsqword(0x28u);
}
