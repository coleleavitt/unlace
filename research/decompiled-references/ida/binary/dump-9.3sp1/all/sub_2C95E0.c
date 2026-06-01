unsigned __int64 __fastcall sub_2C95E0(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r13
  __int64 v5; // rsi
  __int64 (__fastcall ***v6)(); // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r15
  unsigned __int64 v10; // r12
  _QWORD *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // r13
  __int64 v16; // r15
  __int64 v17; // [rsp+0h] [rbp-C8h]
  int v18; // [rsp+Ch] [rbp-BCh]
  __int64 (__fastcall **v19)(); // [rsp+20h] [rbp-A8h] BYREF
  int v20; // [rsp+28h] [rbp-A0h]
  __int64 v21; // [rsp+30h] [rbp-98h] BYREF
  __int128 v22; // [rsp+38h] [rbp-90h]
  unsigned __int64 v23; // [rsp+48h] [rbp-80h]
  __int64 (__fastcall **v24)(); // [rsp+50h] [rbp-78h]
  int v25; // [rsp+58h] [rbp-70h]
  __int64 v26; // [rsp+60h] [rbp-68h] BYREF
  __int128 v27; // [rsp+68h] [rbp-60h]
  unsigned __int64 v28; // [rsp+78h] [rbp-50h]
  unsigned __int64 v29; // [rsp+88h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 != a2 )
  {
    v20 = -1;
    v21 = 0;
    v23 = 0xFFFFFFFEFFFFFFFFLL;
    v19 = off_4E1398;
    v22 = 0;
    if ( a2 < v2 )
    {
      v10 = a2;
      do
      {
        v11 = (_QWORD *)(*a1 + 48 * v10);
        v12 = v11[2];
        *v11 = off_4E1370;
        if ( v12 )
        {
          v11[3] = 0;
          qfree(v12);
        }
        ++v10;
      }
      while ( v2 != v10 );
      a1[1] = a2;
    }
    else
    {
      v5 = *a1;
      v6 = &v19;
      v7 = a1[2];
      if ( (unsigned __int64)&v19 < *a1 || (unsigned __int64)&v19 >= v5 + 48 * v7 )
      {
        if ( v7 < a2 )
        {
          *a1 = qvector_reserve((__int64)a1, v5, a2, 48);
          v2 = a1[1];
        }
        for ( ; v2 < a2; *(_QWORD *)(v8 + 40) = 0xFFFFFFFEFFFFFFFFLL )
        {
          v8 = *a1 + 48 * v2;
          *(_QWORD *)v8 = off_4E1370;
          *(_DWORD *)(v8 + 8) = -1;
          *(_QWORD *)(v8 + 16) = 0;
          *(_OWORD *)(v8 + 24) = 0;
          sub_2AE320((_QWORD *)(v8 + 16), (__int64)&v21, (__int64)v6, v7);
          ++v2;
          *(_QWORD *)v8 = off_4E1398;
        }
        a1[1] = a2;
      }
      else
      {
        v25 = -1;
        v24 = off_4E1370;
        v26 = 0;
        v27 = 0;
        sub_2AE320(&v26, (__int64)&v21, (__int64)&v19, v7);
        v24 = off_4E1398;
        v18 = v25;
        v17 = v26;
        v28 = 0xFFFFFFFEFFFFFFFFLL;
        if ( a1[2] < a2 )
          *a1 = qvector_reserve((__int64)a1, *a1, a2, 48);
        v15 = a1[1];
        if ( v15 < a2 )
        {
          do
          {
            v16 = *a1 + 48 * v15;
            *(_QWORD *)v16 = off_4E1370;
            *(_QWORD *)(v16 + 16) = 0;
            *(_DWORD *)(v16 + 8) = v18;
            v25 = v18;
            *(_OWORD *)(v16 + 24) = 0;
            v26 = v17;
            sub_2AE320((_QWORD *)(v16 + 16), (__int64)&v26, v13, v14);
            ++v15;
            *(_QWORD *)v16 = off_4E1398;
            *(_QWORD *)(v16 + 40) = 0xFFFFFFFEFFFFFFFFLL;
          }
          while ( a2 != v15 );
        }
        a1[1] = a2;
        if ( v17 )
          qfree(v17);
      }
    }
  }
  return v29 - __readfsqword(0x28u);
}
