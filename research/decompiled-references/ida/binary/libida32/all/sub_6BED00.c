__int64 __fastcall sub_6BED00(__int64 a1, _QWORD *a2, int a3, const char *a4, _BYTE *a5, __int64 a6, int a7)
{
  unsigned int v10; // eax
  unsigned int v11; // ebp
  const char *v12; // r15
  int v13; // r8d
  __int64 v14; // rdi
  unsigned int tinfo_property; // eax
  __int64 v16; // rcx
  char v17; // al
  char *v18; // rdi
  __m128i v19; // xmm0
  char *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  const char *v24; // rax
  unsigned int v25; // eax
  int name_ea; // eax
  char v27; // al
  int v29; // [rsp+Ch] [rbp-7Ch]
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  __m128i v31; // [rsp+18h] [rbp-70h]
  char *v32; // [rsp+30h] [rbp-58h] BYREF
  __m128i v33; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v34; // [rsp+48h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  v31 = 0;
  ptr = nullptr;
  v10 = sub_6BE860((_QWORD *)a1, &ptr, (__int64)a2, a3, a4, a6);
  if ( !(_BYTE)v10 )
    goto LABEL_27;
  v11 = v10;
  v12 = haystack;
  if ( v31.m128i_i64[0] )
    v12 = (const char *)ptr;
  if ( (get_tinfo_property(*a2, 2) & 0xF) == 0xC && *a2 > 0xFFu )
  {
    v13 = *(_DWORD *)(a1 + 120) | a7;
    if ( (v13 & 0x10000) != 0 )
    {
      v29 = *(_DWORD *)(a1 + 120) | a7;
      lower_type(*(_QWORD *)(a1 + 16), a2, v12, 0);
      LOWORD(v13) = v29;
    }
    if ( (v13 & 0x800) == 0 )
    {
      v14 = *a2;
      v32 = nullptr;
      v33 = 0;
      tinfo_property = get_tinfo_property(v14, 20);
      v16 = tinfo_property;
      if ( (tinfo_property & 0xFFFFFFEF) == 0 )
        v16 = (unsigned int)getinf(99);
      if ( (_DWORD)v16 == 48 )
      {
        v27 = sub_5ED360(*(_QWORD **)(*(_QWORD *)a1 + 1480LL));
        v16 = 48;
        if ( !v27 )
          v16 = (unsigned int)sub_5EE1D0(*(_QWORD **)(*(_QWORD *)a1 + 1480LL), 0x30u);
      }
      v17 = decorate_name(&v32, v12, 1, v16, 0);
      v18 = v32;
      if ( v17 )
      {
        v19 = _mm_loadu_si128(&v33);
        v20 = (char *)ptr;
        ptr = v32;
        v33.m128i_i64[1] = v31.m128i_i64[1];
        v32 = v20;
        v31 = v19;
        if ( v19.m128i_i64[0] )
        {
          v12 = v18;
          v18 = v20;
        }
        else
        {
          v18 = v20;
          v12 = haystack;
        }
      }
      if ( v18 )
      {
        v33.m128i_i64[0] = 0;
        qfree(v18);
      }
    }
  }
  v21 = a3 | 0x404u;
  v22 = **(_QWORD **)(a1 + 8);
  if ( (a3 & 1) != 0 )
  {
    if ( (v22 & 0x100) != 0 )
      v11 = sub_6BB7E0((_QWORD *)a1, (__int64)a2, v12, a5, v21, 0);
    else
      sub_6B54B0((__int64 *)(a1 + 384), (__int64)a2, v12, a5, 0);
    goto LABEL_21;
  }
  if ( (v22 & 0x100) == 0 )
  {
    sub_6B54B0((__int64 *)(a1 + 384), (__int64)a2, v12, a5, 1);
    goto LABEL_21;
  }
  if ( (v22 & 0x200) != 0 )
  {
    v25 = save_tinfo(a2, *(_QWORD *)(a1 + 16), 0, v12, v21);
    if ( !v25 )
    {
      v22 = **(_QWORD **)(a1 + 8);
      goto LABEL_20;
    }
    v24 = (const char *)tinfo_errstr(v25);
    sub_6BB730((_QWORD *)a1, a6, (__int64)"Could not store symbol %s: %s", v12, v24);
LABEL_27:
    v11 = 0;
    goto LABEL_21;
  }
LABEL_20:
  if ( (v22 & 0x400) != 0 )
  {
    name_ea = get_name_ea(0xFFFFFFFFLL, v12);
    if ( name_ea != -1 )
      apply_tinfo(name_ea);
  }
LABEL_21:
  if ( ptr )
  {
    v31.m128i_i64[0] = 0;
    qfree(ptr);
  }
  return v11;
}

