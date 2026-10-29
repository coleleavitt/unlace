__int64 __fastcall sub_2E080(__int64 a1, __int64 *a2, _QWORD *a3, int a4)
{
  __int64 v4; // r9
  __int64 v5; // r12
  _QWORD *v6; // r14
  __int64 v7; // rax
  _QWORD *v8; // rbx
  int v9; // r8d
  int v10; // r9d
  unsigned int v11; // r14d
  __int64 v12; // rax
  __m128i v13; // xmm0
  __int64 v15; // r15
  __int64 v16; // rax
  _QWORD *v17; // r8
  __int128 v18; // xmm0
  __int64 i; // r14
  __int64 v20; // r14
  __int64 v21; // rbx
  size_t v22; // r13
  void *v23; // rax
  __int64 v25; // [rsp+8h] [rbp-88h]
  _QWORD *v27; // [rsp+10h] [rbp-80h]
  __int64 (__fastcall **v28)(); // [rsp+18h] [rbp-78h] BYREF
  char v29; // [rsp+20h] [rbp-70h]
  __int64 v30; // [rsp+28h] [rbp-68h]
  __int128 v31; // [rsp+30h] [rbp-60h]
  int v32; // [rsp+40h] [rbp-50h]
  bool v33; // [rsp+44h] [rbp-4Ch]
  unsigned __int64 v34; // [rsp+50h] [rbp-40h]

  v4 = a1;
  v5 = a3[1];
  v34 = __readfsqword(0x28u);
  v29 = 76;
  v31 = 0;
  v28 = &off_162048;
  v30 = 0;
  if ( v5 )
  {
    v15 = 0;
    v16 = sub_96030(24 * v5);
    *((_QWORD *)&v31 + 1) = v5;
    v17 = a3;
    v18 = 0;
    v30 = v16;
    v4 = a1;
    for ( i = v16; ; i = v30 )
    {
      v20 = 24 * v15 + i;
      v21 = 24 * v15 + *v17;
      *(_QWORD *)v20 = 0;
      *(_OWORD *)(v20 + 8) = v18;
      v22 = *(_QWORD *)(v21 + 8);
      if ( v22 )
      {
        v27 = v17;
        ++v15;
        v25 = v4;
        v23 = (void *)sub_96030(*(_QWORD *)(v21 + 8));
        *(_QWORD *)(v20 + 16) = v22;
        *(_QWORD *)v20 = v23;
        memcpy(v23, *(const void **)v21, v22);
        *(_QWORD *)(v20 + 8) = v22;
        v17 = v27;
        v18 = 0;
        v4 = v25;
        if ( v5 == v15 )
        {
LABEL_13:
          *(_QWORD *)&v31 = v5;
          break;
        }
      }
      else if ( v5 == ++v15 )
      {
        goto LABEL_13;
      }
    }
  }
  v6 = (_QWORD *)(v4 + 40);
  v32 = a4;
  v7 = *(_QWORD *)(v4 + 40);
  v33 = a2 != nullptr;
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(v7 + 80))(v4 + 40, &v28);
  v11 = sub_2A6A0(v6, (__int64)v8, 77, nullptr, v9, v10);
  if ( !v11 && a2 )
  {
    v12 = *a2;
    v13 = _mm_loadu_si128((const __m128i *)(a2 + 1));
    *a2 = v8[2];
    a2[1] = v8[3];
    a2[2] = v8[4];
    v8[2] = v12;
    *(__m128i *)(v8 + 3) = v13;
  }
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v8 + 8LL))(v8);
  sub_3EBC0(&v28);
  return v11;
}

