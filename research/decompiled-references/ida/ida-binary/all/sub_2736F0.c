__int64 __fastcall sub_2736F0(__int64 a1, const char *a2)
{
  size_t v2; // rax
  size_t v3; // r14
  size_t v4; // rbp
  size_t v5; // r15
  size_t v6; // r13
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // rbx
  __int64 *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // rbx
  __int64 *v17; // rax
  __int64 v18; // rdi
  _BYTE v20[16]; // [rsp+0h] [rbp-108h] BYREF
  void *dest; // [rsp+10h] [rbp-F8h] BYREF
  size_t v22; // [rsp+18h] [rbp-F0h]
  unsigned __int64 v23; // [rsp+20h] [rbp-E8h]
  __int64 v24; // [rsp+28h] [rbp-E0h]
  __int64 v25; // [rsp+30h] [rbp-D8h]
  __int64 v26; // [rsp+48h] [rbp-C0h]
  __int64 v27; // [rsp+50h] [rbp-B8h]
  __int64 v28; // [rsp+60h] [rbp-A8h]
  __int64 v29; // [rsp+68h] [rbp-A0h]
  __int64 v30; // [rsp+78h] [rbp-90h]
  __int64 v31; // [rsp+80h] [rbp-88h]
  __int64 v32; // [rsp+90h] [rbp-78h]
  __int64 v33; // [rsp+98h] [rbp-70h]
  __int64 v34; // [rsp+A8h] [rbp-60h]
  __int64 v35; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v36; // [rsp+C8h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  sub_4A3550(v20, a1, 0, 0);
  if ( a2 )
  {
    v2 = strlen(a2);
    v3 = v22;
    v4 = v2;
    if ( v22 )
    {
      v3 = v22 - 1;
      v5 = v2 + v22 - 1;
      v6 = v2 + v22;
      if ( v23 >= v2 + v22 )
      {
        v22 += v2;
        *((_BYTE *)dest + v5) = 0;
        if ( !v3 )
        {
LABEL_5:
          memmove(dest, a2, v4);
          goto LABEL_6;
        }
        goto LABEL_33;
      }
    }
    else
    {
      v6 = v2 + 1;
      if ( v23 >= v2 + 1 )
      {
        v22 = v2 + 1;
        *((_BYTE *)dest + v2) = 0;
        memmove(dest, a2, v2);
        goto LABEL_6;
      }
      v5 = v2;
    }
    dest = (void *)qvector_reserve(&dest, dest, v6, 1);
    v22 = v6;
    *((_BYTE *)dest + v5) = 0;
    if ( !v3 )
      goto LABEL_5;
LABEL_33:
    memmove((char *)dest + v4, dest, v3);
    memmove(dest, a2, v4);
  }
LABEL_6:
  v7 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 88LL))(QT::QCoreApplication::self + 2);
  v8 = sub_4A37D0(v7, v20);
  sub_4B8B20(v8, 256);
  sub_4ADE20(v8, 0);
  if ( v34 )
  {
    v35 = 0;
    qfree(v34, nullptr);
  }
  if ( v32 )
  {
    v33 = 0;
    qfree(v32, nullptr);
  }
  v9 = v30;
  if ( v30 )
  {
    v10 = v31;
    if ( v31 )
    {
      v11 = 0;
      do
      {
        v12 = (__int64 *)(v9 + 24 * v11);
        v13 = *v12;
        if ( *v12 )
        {
          v12[1] = 0;
          qfree(v13, nullptr);
          v9 = v30;
        }
        ++v11;
      }
      while ( v10 != v11 );
    }
    v31 = 0;
    qfree(v9, nullptr);
  }
  v14 = v28;
  if ( v28 )
  {
    v15 = v29;
    if ( v29 )
    {
      v16 = 0;
      do
      {
        v17 = (__int64 *)(v14 + 24 * v16);
        v18 = *v17;
        if ( *v17 )
        {
          v17[1] = 0;
          qfree(v18, nullptr);
          v14 = v28;
        }
        ++v16;
      }
      while ( v15 != v16 );
    }
    v29 = 0;
    qfree(v14, nullptr);
  }
  if ( v26 )
  {
    v27 = 0;
    qfree(v26, nullptr);
  }
  if ( v24 )
  {
    v25 = 0;
    qfree(v24, nullptr);
  }
  if ( dest )
  {
    v22 = 0;
    qfree(dest, nullptr);
  }
  return v8;
}
