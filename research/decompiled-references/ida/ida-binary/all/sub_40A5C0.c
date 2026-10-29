unsigned __int64 __fastcall feat_flags_dialog_t__::vfunc_4(__int64 a1, __int64 a2)
{
  int v2; // eax
  __m128i v4; // xmm0
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // [rsp+10h] [rbp-58h] BYREF
  __int128 v12; // [rsp+18h] [rbp-50h]
  __int64 v13; // [rsp+30h] [rbp-38h] BYREF
  __m128i v14; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  v2 = *(_DWORD *)(a2 + 12);
  if ( v2 )
  {
    if ( v2 == 1 )
      return reg_int_op("JumpAnywherePreviewPane", 1, (unsigned __int8)byte_8BA840, 0);
    else
      return v15 - __readfsqword(0x28u);
  }
  else
  {
    if ( *(_BYTE *)(a1 + 256) )
    {
      v11 = 0;
      v12 = 0;
      sub_4B5050("JumpAsk");
      sub_5360B0(&v13, "G", 1);
      v11 = qvector_reserve(&v11, v11, v12 + 1, 24);
      v4 = _mm_loadu_si128(&v14);
      v5 = v11 + 24 * v12;
      *(_QWORD *)v5 = v13;
      *(__m128i *)(v5 + 8) = v4;
      *(_QWORD *)&v12 = v12 + 1;
      sub_4B5050("JumpAnywhere");
      v6 = v11;
      if ( v11 )
      {
        v7 = v12;
        if ( (_QWORD)v12 )
        {
          v8 = 0;
          do
          {
            v9 = (__int64 *)(v6 + 24 * v8);
            v10 = *v9;
            if ( *v9 )
            {
              v9[1] = 0;
              qfree(v10, (const char *)&v11);
              v6 = v11;
            }
            ++v8;
          }
          while ( v7 != v8 );
        }
        *(_QWORD *)&v12 = 0;
        qfree(v6, (const char *)&v11);
      }
    }
    else
    {
      sub_4B19C0("JumpAsk");
      sub_4B19C0("JumpAnywhere");
    }
    return sub_3D5AE0();
  }
}
