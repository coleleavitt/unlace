__int64 __fastcall sub_1507260(__int64 a1, __int64 a2, __m128i a3)
{
  __int16 v4; // ax
  __int64 result; // rax
  int v6; // eax
  __int64 *v7; // rdi
  __int64 v8; // rax
  char v9; // al
  __m128i v10; // xmm0
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // r13d
  __int64 v19; // rax
  __int64 v20; // [rsp+8h] [rbp-110h] BYREF
  _QWORD v21[2]; // [rsp+10h] [rbp-108h] BYREF
  __m128i v22; // [rsp+20h] [rbp-F8h] BYREF
  int v23; // [rsp+30h] [rbp-E8h]
  void **p_ptr; // [rsp+38h] [rbp-E0h]
  _BYTE *v25; // [rsp+40h] [rbp-D8h] BYREF
  char v26; // [rsp+48h] [rbp-D0h]
  __int64 v27; // [rsp+50h] [rbp-C8h]
  int v28; // [rsp+58h] [rbp-C0h]
  __int16 v29; // [rsp+5Ch] [rbp-BCh]
  __int64 (__fastcall *v30)(__int64); // [rsp+60h] [rbp-B8h]
  __int64 v31; // [rsp+68h] [rbp-B0h]
  __int64 v32; // [rsp+70h] [rbp-A8h]
  void *ptr; // [rsp+80h] [rbp-98h] BYREF
  __int64 v34; // [rsp+88h] [rbp-90h]
  _BYTE v35[136]; // [rsp+90h] [rbp-88h] BYREF

  if ( (unsigned __int8)sub_156F700(a1) )
  {
    v6 = *(_DWORD *)(a1 + 16);
    v7 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = v6;
    sub_14634E0(v7, (int *)(a1 + 16));
    if ( *(_WORD *)(a1 + 32) == 3 )
    {
      v15 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(v15 + 760) )
      {
        *(_BYTE *)(v15 + 968) = 1;
        *(_BYTE *)(*(_QWORD *)(v15 + 48) + 6LL) = 1;
      }
      v16 = *(_QWORD *)(a1 + 96);
      *(_WORD *)(a1 + 32) = 1;
      sub_172BDF0(*(_QWORD *)(v16 + 656), *(_QWORD *)(v16 + 608), a2);
      return sub_17BF6B0(*(_QWORD *)(a1 + 96), a2);
    }
    else
    {
      sub_1703A10(a1 + 48, *(unsigned int *)(a1 + 16), a2);
      if ( *(_WORD *)(a1 + 32) == 24 )
        v8 = sub_14EE310(a1, a3);
      else
        v8 = sub_14BDAD0(a1, 0, a3);
      if ( v8 == 1 )
      {
        LODWORD(ptr) = 29425687;
        sub_15680D0(a1, &ptr, 2, 2);
        return sub_17A5050(*(_QWORD *)(a1 + 96), a2);
      }
      else
      {
        return sub_17ED4C0(*(_QWORD *)(a1 + 96), a2, v8 & 0xFFFFFFFFFFFFFFFELL, 0);
      }
    }
  }
  else
  {
    v4 = *(_WORD *)(a1 + 32);
    if ( v4 == 22 )
    {
      v27 = a1;
      v25 = (_BYTE *)(a1 + 1952);
      v9 = *(_BYTE *)(a1 + 1952);
      *(_BYTE *)(a1 + 1952) = 1;
      v26 = v9;
      v29 = 63;
      v28 = 1507350;
      v30 = sub_146A990;
      v31 = 0;
      v32 = 0;
      sub_1503860((__int64)&v25);
      ptr = v35;
      v20 = a2;
      v34 = 0xC00000000LL;
      p_ptr = &ptr;
      v10 = (__m128i)_mm_loadh_ps((const double *)&v20);
      v23 = v32;
      v22 = v10;
      v21[0] = a1;
      v21[1] = &v22;
      if ( (unsigned __int8)sub_14BDD40(
                              a1,
                              (__int64)&ptr,
                              (void (__fastcall *)(__int64))sub_15037A0,
                              (__int64)v21,
                              0,
                              v10) )
      {
        if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 968LL) && !*(_BYTE *)(a1 + 368) )
        {
          sub_173F990(
            *(_QWORD *)(*(_QWORD *)(v22.m128i_i64[0] + 96) + 656LL),
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22.m128i_i64[1] + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL),
            *(_DWORD *)(v22.m128i_i64[1] + 24),
            (unsigned int)*p_ptr,
            *((_DWORD *)p_ptr + 2),
            v23,
            0);
          *(_BYTE *)(v22.m128i_i64[0] + 368) = 1;
        }
        sub_17A5050(*(_QWORD *)(a1 + 96), a2);
        LODWORD(v21[0]) = 29425687;
        sub_15680D0(a1, v21, 2, 2);
      }
      else
      {
        v18 = *(_DWORD *)(a1 + 16);
        if ( !(unsigned __int8)sub_14808E0((__int64)&v25, (__int64 *)&ptr, v11, v12, v13, v14) )
          v18 = HIDWORD(v32);
        v19 = sub_18C2A90(*(_QWORD *)(a1 + 96), (unsigned int)v32, v18, ptr, (unsigned int)v34);
        sub_17ED4C0(*(_QWORD *)(a1 + 96), a2, v19 & 0xFFFFFFFFFFFFFFFELL, 1);
      }
      if ( ptr != v35 )
        free(ptr);
      result = (__int64)v25;
      *v25 = v26;
    }
    else if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 0x10) != 0 && v4 == 24 )
    {
      sub_1564840(&ptr, a1, a1 + 16, 2118);
      sub_AEA040((__int64)&ptr);
      v17 = sub_14EE310(a1, a3);
      if ( v17 == 1 )
        return sub_17A5050(*(_QWORD *)(a1 + 96), a2);
      else
        return sub_17ED4C0(*(_QWORD *)(a1 + 96), a2, v17 & 0xFFFFFFFFFFFFFFFELL, 1);
    }
    else
    {
      return sub_17D5BF0(*(_QWORD *)(a1 + 96), a2);
    }
  }
  return result;
}
