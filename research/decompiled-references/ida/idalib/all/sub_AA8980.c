unsigned __int64 __fastcall sub_AA8980(_QWORD *a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  unsigned __int64 result; // rax
  __int64 v8; // rax
  _BYTE *v9; // r9
  unsigned __int8 v10; // r8
  _QWORD *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int16 v15; // ax
  __int64 v16; // rdi
  const char *v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  const char *v20; // rax
  unsigned __int64 v21; // [rsp+0h] [rbp-138h]
  __int8 v22; // [rsp+8h] [rbp-130h]
  __int64 v23; // [rsp+10h] [rbp-128h]
  __int64 v24; // [rsp+18h] [rbp-120h]
  char v25; // [rsp+25h] [rbp-113h] BYREF
  __int16 v26; // [rsp+26h] [rbp-112h] BYREF
  char *v27; // [rsp+28h] [rbp-110h] BYREF
  void *ptr; // [rsp+30h] [rbp-108h] BYREF
  __int64 v29; // [rsp+38h] [rbp-100h]
  _BYTE v30[64]; // [rsp+40h] [rbp-F8h] BYREF
  __m128i v31; // [rsp+80h] [rbp-B8h] BYREF
  int v32; // [rsp+90h] [rbp-A8h]
  int v33; // [rsp+98h] [rbp-A0h]
  __int64 v34; // [rsp+A0h] [rbp-98h]
  __int64 v35; // [rsp+A8h] [rbp-90h]
  __int64 v36; // [rsp+B0h] [rbp-88h]
  __int64 v37; // [rsp+B8h] [rbp-80h]
  __int64 v38; // [rsp+C0h] [rbp-78h]
  __int64 v39; // [rsp+C8h] [rbp-70h]
  int v40; // [rsp+D0h] [rbp-68h]
  __int64 v41; // [rsp+D8h] [rbp-60h]
  __int64 v42; // [rsp+E0h] [rbp-58h]
  __int64 v43; // [rsp+E8h] [rbp-50h]
  __int64 v44; // [rsp+F0h] [rbp-48h]

  v27 = (char *)sub_FBD430(a1[2190]);
  if ( !*v27 )
  {
    *a3 = 1;
    return 0;
  }
  *a3 = 0;
  ptr = v30;
  v29 = 0x800000000LL;
  v25 = 0;
  v8 = sub_AA81E0(&v27, a1, a3, &v25, 1, (__int64)v30);
  v9 = v30;
  v23 = v8;
  if ( !*a3 )
  {
    v10 = *v27 == 46;
    if ( !*v27 || *v27 == 46 )
    {
LABEL_19:
      if ( a2 != 656 )
      {
        v22 = v10;
        v15 = sub_A64670((__int64)a1, v10, 0, 1);
        v16 = a1[2190];
        v26 = v15;
        v17 = (const char *)sub_FBD4B0(v16, a2);
        if ( strchr(v17, 114) )
          v26 |= 0x40u;
        v18 = (unsigned int)v29;
        v19 = a1[290];
        if ( (_DWORD)v29 || !v22 || (*(_WORD *)v19 & 0x808) != 0 || (*(_BYTE *)(v19 + 12) & 1) != 0 )
        {
          v31.m128i_i8[3] &= 0xF0u;
          v31.m128i_i64[1] = 0;
          v32 = 0;
          v33 = 0;
          v34 = 0;
          v35 = 0;
          v36 = 0;
          v37 = 0;
          v38 = 0;
          v39 = 0;
          v40 = 0;
          v41 = 0;
          v42 = 0;
          v43 = 0;
          v44 = 0;
          v31.m128i_i16[0] = v26;
          v31.m128i_i8[2] = v22;
          if ( (*(_BYTE *)(v19 + 1) & 8) != 0 )
          {
            v20 = (const char *)sub_FBD4B0(a1[2190], a2);
            if ( strchr(v20, 110) )
              v33 = (*(_BYTE *)(a1[290] + 1LL) & 0x10) == 0 ? 1 : 5;
            v18 = (unsigned int)v29;
          }
          result = sub_A73610((__int64)a1, v23, (__int64 *)ptr, v18, &v31, 0);
        }
        else
        {
          result = sub_A71610((__int64)a1, v23, (unsigned __int16 *)&v26);
        }
        goto LABEL_21;
      }
    }
    else
    {
      while ( 1 )
      {
        v12 = sub_AA81E0(&v27, a1, a3, &v25, 1, (__int64)v9);
        if ( *a3 )
          break;
        if ( v25 && a4 )
          *a4 |= 1 << v29;
        if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
                             - 2) <= 4u )
          v12 = sub_A72210(a1, v12);
        v13 = (unsigned int)v29;
        v14 = (unsigned int)v29 + 1LL;
        if ( v14 <= HIDWORD(v29) )
        {
          v11 = ptr;
        }
        else
        {
          v24 = v12;
          sub_2237220(&ptr, v30, v14, 8);
          v13 = (unsigned int)v29;
          v11 = ptr;
          v12 = v24;
        }
        v11[v13] = v12;
        LODWORD(v29) = v29 + 1;
        v10 = *v27 == 46;
        if ( !*v27 || *v27 == 46 )
          goto LABEL_19;
      }
    }
  }
  result = 0;
LABEL_21:
  if ( ptr != v30 )
  {
    v21 = result;
    free(ptr);
    return v21;
  }
  return result;
}
