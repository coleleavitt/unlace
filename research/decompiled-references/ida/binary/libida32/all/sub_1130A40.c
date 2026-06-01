__int64 __fastcall sub_1130A40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _WORD *a5, __int64 a6, int a7)
{
  unsigned int v7; // r12d
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // r15
  _QWORD *v11; // rbx
  __int64 v12; // r13
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rbx
  _QWORD *v16; // rbp
  __int64 v18; // r13
  __int64 v19; // rax
  _QWORD *v20; // r15
  __int64 v21; // r13
  __int64 v22; // rax
  _QWORD *v23; // [rsp+8h] [rbp-70h] BYREF
  __int64 v24; // [rsp+10h] [rbp-68h]
  __int64 v25; // [rsp+18h] [rbp-60h]
  __m128 v26; // [rsp+20h] [rbp-58h] BYREF
  __int64 v27; // [rsp+30h] [rbp-48h]

  v7 = 0;
  v25 = a3;
  v24 = a4;
  if ( a6 == 2 && *a5 == 12851 && a7 != 1 )
  {
    if ( a4 == 5 )
    {
      if ( *(_DWORD *)a3 == 1936746861 && *(_BYTE *)(a3 + 4) == 50
        || *(_DWORD *)v25 == 1936746861 && *(_BYTE *)(v25 + 4) == 51
        || *(_DWORD *)v25 == 1936746861 && *(_BYTE *)(v25 + 4) == 52
        || *(_DWORD *)v25 == 1936746861 && *(_BYTE *)(v25 + 4) == 53 )
      {
        goto LABEL_54;
      }
    }
    else if ( v24 == 6 )
    {
      if ( *(_DWORD *)a3 == 1936746861 && *(_WORD *)(a3 + 4) == 12851
        || *(_DWORD *)v25 == 1936746861 && *(_WORD *)(v25 + 4) == 13366 )
      {
        goto LABEL_54;
      }
    }
    else if ( v24 == 8
           && (*(_QWORD *)a3 == 0x327232337370696DLL
            || *(_QWORD *)a3 == 0x337232337370696DLL
            || *(_QWORD *)a3 == 0x357232337370696DLL
            || *(_QWORD *)v25 == 0x327234367370696DLL
            || *(_QWORD *)v25 == 0x337234367370696DLL
            || *(_QWORD *)v25 == 0x357234367370696DLL) )
    {
LABEL_54:
      v7 = 1;
      goto LABEL_10;
    }
    v7 = 0;
  }
LABEL_10:
  v26.m128_u64[0] = 0x92200000B33LL;
  v8 = sub_2193060(a1, &v26, 2);
  v9 = *(_QWORD *)(a1 + 8);
  v27 = 0x92200000B33LL;
  v10 = (_QWORD *)(v9 + 8LL * (unsigned int)v8);
  v11 = (_QWORD *)(v9 + 8 * HIDWORD(v8));
  v23 = v11;
  v26 = _mm_loadh_ps((const double *)&v23);
  if ( v10 != v11 )
  {
    while ( 1 )
    {
      v12 = *v10;
      if ( *v10 )
      {
        if ( (unsigned __int8)sub_2195AD0(*v10, 2867) || (unsigned __int8)sub_2195AD0(v12, 2338) )
          break;
      }
      v26.m128_u64[0] = (unsigned __int64)++v10;
      if ( v11 == v10 )
        goto LABEL_15;
    }
    v23 = v11;
    v27 = 0x92200000B33LL;
    v26 = _mm_loadh_ps((const double *)&v23);
    if ( v10 != v11 )
    {
      do
      {
        v18 = *v10;
        v19 = *(_QWORD *)(*v10 + 16LL);
        if ( !v19 )
          v19 = *v10;
        v20 = v10 + 1;
        *(_BYTE *)(v19 + 44) |= 1u;
        v26.m128_u64[0] = (unsigned __int64)v20;
        if ( v20 == v11 )
          break;
        while ( 1 )
        {
          if ( *v20 )
          {
            v23 = (_QWORD *)*v20;
            if ( (unsigned __int8)sub_2195AD0(v23, 2867) || (unsigned __int8)sub_2195AD0(v23, 2338) )
              break;
          }
          v26.m128_u64[0] = (unsigned __int64)++v20;
          if ( v11 == v20 )
            goto LABEL_28;
        }
        v10 = (_QWORD *)v26.m128_u64[0];
      }
      while ( (_QWORD *)v26.m128_u64[0] != v11 );
LABEL_28:
      if ( (unsigned __int8)sub_2195AD0(v18, 2867) )
        v7 = 0;
    }
  }
LABEL_15:
  v26.m128_i32[0] = 2498;
  v13 = sub_2193060(a1, &v26, 1);
  v14 = *(_QWORD *)(a1 + 8);
  v15 = (_QWORD *)(v14 + 8LL * (unsigned int)v13);
  v16 = (_QWORD *)(v14 + 8 * HIDWORD(v13));
  if ( v15 != v16 )
  {
    while ( !*v15 || !(unsigned __int8)sub_2195AD0(*v15, 2498) )
    {
      if ( v16 == ++v15 )
        return v7;
    }
    if ( v15 != v16 )
    {
      do
      {
        v21 = *v15;
        v22 = *(_QWORD *)(*v15 + 16LL);
        if ( !v22 )
          v22 = *v15;
        ++v15;
        *(_BYTE *)(v22 + 44) |= 1u;
        if ( v15 == v16 )
          break;
        while ( !*v15 || !(unsigned __int8)sub_2195AD0(*v15, 2498) )
        {
          if ( v16 == ++v15 )
            goto LABEL_40;
        }
      }
      while ( v16 != v15 );
LABEL_40:
      if ( (unsigned __int8)sub_2195AD0(v21, 2498)
        && v24 == 8
        && (*(_QWORD *)v25 == 0x327232337370696DLL
         || *(_QWORD *)v25 == 0x337232337370696DLL
         || *(_QWORD *)v25 == 0x357232337370696DLL
         || *(_QWORD *)v25 == 0x327234367370696DLL
         || *(_QWORD *)v25 == 0x337234367370696DLL
         || *(_QWORD *)v25 == 0x357234367370696DLL) )
      {
        return 0;
      }
    }
  }
  return v7;
}

